/*
 * XREFs of ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180142290
 * Callers:
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18008331C (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x18008A814 (-ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Remove@CHwBrushPoolManager@@AEAAXPEAVCHwCacheablePoolBrush@@@Z @ 0x1801423E0 (-Remove@CHwBrushPoolManager@@AEAAXPEAVCHwCacheablePoolBrush@@@Z.c)
 */

__int64 __fastcall CHwBrushPoolManager::AllocateHwBrush(
        CHwBrushPoolManager *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **const a4)
{
  int v8; // esi
  _QWORD *v9; // rdi
  int v10; // eax
  struct CHwBrush *v11; // rdi
  int v12; // eax

  CHwBrushPoolManager::ConsolidateUnusedLists((union _SLIST_HEADER *)this);
  v8 = -2147467259;
  do
  {
    v9 = (_QWORD *)*((_QWORD *)this + 7);
    if ( !v9 )
      break;
    CHwBrushPoolManager::Remove(this, *((struct CHwCacheablePoolBrush **)this + 7));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v9 + 32LL))(v9) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD *, struct CMILBrush *, const struct CHwBrushContext *))(*v9 + 40LL))(
              v9,
              a2,
              a3);
      v8 = v10;
      if ( v10 >= 0 )
        goto LABEL_7;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1BBu);
    }
    if ( v8 < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(v9[1] + 16LL))(v9 + 1, 1LL);
      continue;
    }
LABEL_7:
    v11 = (struct CHwBrush *)(v9 + 4);
    *a4 = v11;
    (**(void (__fastcall ***)(struct CHwBrush *))v11)(v11);
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
