/*
 * XREFs of ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180177350
 * Callers:
 *     ?CleanupReferences@CHwBitmapBrush@@UEAAXXZ @ 0x1800AB0E0 (-CleanupReferences@CHwBitmapBrush@@UEAAXXZ.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800AB1B0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = 0LL;
  v6 = 0;
  v11 = 0LL;
  v8 = *(_QWORD *)(a1 + 8LL * a2 + 64);
  if ( v8 )
    goto LABEL_4;
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)(a1 + 40) + 504LL))(
         *(_QWORD *)(a1 + 40),
         (char *)&unk_1801EAB54 + 24 * a2,
         &v11);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v8 = v11;
    v5 = 0LL;
    *(_QWORD *)(a1 + 8 * v4 + 64) = v11;
    v11 = 0LL;
LABEL_4:
    *a3 = v8;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x968u);
  v5 = v11;
LABEL_5:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
