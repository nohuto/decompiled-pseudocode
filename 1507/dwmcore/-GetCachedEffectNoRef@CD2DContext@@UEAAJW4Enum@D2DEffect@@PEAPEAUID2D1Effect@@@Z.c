/*
 * XREFs of ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4Enum@D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180136610
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180084350 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?CleanupReferences@CHwBitmapBrush@@UEAAXXZ @ 0x1800845C0 (-CleanupReferences@CHwBitmapBrush@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned int v5; // esi
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2;
  v11 = 0LL;
  v5 = 0;
  v8 = *(_QWORD *)(a1 + 8LL * a2 + 56);
  if ( !v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)(a1 + 40) + 504LL))(
           *(_QWORD *)(a1 + 40),
           (char *)&unk_180190744 + 24 * a2,
           &v11);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x7F8u);
      v3 = v11;
      goto LABEL_6;
    }
    v8 = v11;
    v3 = 0LL;
    *(_QWORD *)(a1 + 8 * v4 + 56) = v11;
    v11 = 0LL;
  }
  *a3 = v8;
LABEL_6:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v5;
}
