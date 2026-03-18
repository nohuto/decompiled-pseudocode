/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x180154530
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18015384C (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180154604 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CPolygon::Create(int a1, __int64 a2, _QWORD *a3)
{
  int v3; // xmm0_4
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 224);
  v8 = 0LL;
  v5 = CPolygon::Create(
         a1,
         *(_QWORD *)(a2 + 216),
         *(_QWORD *)(a2 + 248),
         (int)a2 + 144,
         v3,
         *(_DWORD *)(a2 + 236),
         *(_DWORD *)(a2 + 228),
         *(_DWORD *)(a2 + 232),
         *(_BYTE *)(a2 + 240),
         *(_BYTE *)(a2 + 241),
         a2 + 128,
         (__int64)&v8);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x57u);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    *a3 = v8;
  }
  return v6;
}
