/*
 * XREFs of ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180018CB8
 * Callers:
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18002F948 (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 * Callees:
 *     ?Remove@CHwBrushPoolManager@@AEAAXPEAVCHwCacheablePoolBrush@@@Z @ 0x180018C74 (-Remove@CHwBrushPoolManager@@AEAAXPEAVCHwCacheablePoolBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x1800B6984 (-ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBrushPoolManager::AllocateHwBrush(
        CHwBrushPoolManager *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **const a4)
{
  int v8; // ebx
  __int64 v9; // rsi
  int v10; // eax
  int v12; // eax

  CHwBrushPoolManager::ConsolidateUnusedLists(this);
  v8 = -2147467259;
  do
  {
    v9 = *((_QWORD *)this + 7);
    if ( !v9 )
      break;
    CHwBrushPoolManager::Remove(this, *((struct CHwCacheablePoolBrush **)this + 7));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, struct CMILBrush *, const struct CHwBrushContext *))(*(_QWORD *)v9 + 40LL))(
              v9,
              a2,
              a3);
      v8 = v10;
      if ( v10 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1BBu);
    }
    if ( v8 < 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v9 + 8) + 16LL))(v9 + 8, 1LL);
      continue;
    }
LABEL_5:
    *a4 = (struct CHwBrush *)(v9 + 32);
    (**(void (__fastcall ***)(__int64))(v9 + 32))(v9 + 32);
  }
  while ( v8 < 0 );
  if ( v8 >= 0
    || (v12 = (*(__int64 (__fastcall **)(CHwBrushPoolManager *, struct CMILBrush *, const struct CHwBrushContext *, struct CHwBrush **const))(*(_QWORD *)this + 24LL))(
                this,
                a2,
                a3,
                a4),
        v8 = v12,
        v12 >= 0) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 18);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1D8u);
  }
  return (unsigned int)v8;
}
