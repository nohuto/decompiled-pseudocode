/*
 * XREFs of ?RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IPEA_N@Z @ 0x1801526C8
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xxqqqqq @ 0x180152D70 (Template_xxqqqqq.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::RecordIndependentFlipInfo(
        CCompositionSurfaceInfo *this,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned int a6,
        bool *a7)
{
  char v7; // r15
  unsigned int v8; // ebx
  char v11; // r14
  int v12; // eax
  char v13; // al
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = a2;
  v7 = a6;
  v8 = 0;
  v16 = 0;
  v11 = a3;
  v12 = NtSetCompositionSurfaceIndependentFlipInfo(*((_QWORD *)this + 4), &v15, a3, a4 != 0, a5 != 0, a6, &v16);
  if ( v12 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xxqqqqq(a4 != 0, a5 != 0, *((_DWORD *)this + 10), v15, v11, a4 != 0, a5 != 0, v7, v16);
    if ( *((_QWORD *)this + 7) == v15 )
    {
      if ( !a4 || (v13 = 1, a5) )
        v13 = 0;
      *((_BYTE *)this + 68) = v13;
    }
    if ( a7 )
      *a7 = v16 != 0;
  }
  else
  {
    v8 = v12 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12 | 0x10000000, 0x11Au);
  }
  return v8;
}
