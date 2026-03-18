/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x18011B3C0
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18011A6F0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@W46MilBackfaceVisibility@@_NPEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18011B4A8 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CPolygon::Create(int a1, __int64 a2, _QWORD *a3)
{
  int v3; // xmm0_4
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 216);
  v9 = 0LL;
  v5 = CPolygon::Create(
         a1,
         *(_QWORD *)(a2 + 208),
         *(_QWORD *)(a2 + 240),
         (int)a2 + 144,
         v3,
         *(_DWORD *)(a2 + 228),
         *(_DWORD *)(a2 + 220),
         *(_DWORD *)(a2 + 224),
         *(_DWORD *)(a2 + 232),
         *(_BYTE *)(a2 + 236),
         a2 + 128,
         (__int64)&v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = 0LL;
    *a3 = v9;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x57u);
    v7 = v9;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return v6;
}
