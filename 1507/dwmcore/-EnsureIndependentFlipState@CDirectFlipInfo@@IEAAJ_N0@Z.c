/*
 * XREFs of ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x18000632C
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x1800066B0 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180006800 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x1800F7838 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsureIndependentFlipState(CDirectFlipInfo *this, bool a2, bool a3)
{
  unsigned int v3; // edi
  COverlayContext *v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h]
  __int64 v13; // [rsp+48h] [rbp-B8h]
  _BYTE v14[24]; // [rsp+C8h] [rbp-38h] BYREF
  char v15; // [rsp+E0h] [rbp-20h]
  char v16; // [rsp+E1h] [rbp-1Fh]
  __int64 v17; // [rsp+E8h] [rbp-18h]
  int v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F4h] [rbp-Ch]
  int v20; // [rsp+F8h] [rbp-8h]

  v3 = 0;
  if ( *((_BYTE *)this + 88) )
  {
    v10 = 0LL;
    memset_0(v11, 0, 0x80uLL);
    memset_0(v14, 0, 0x58uLL);
    v7 = (COverlayContext *)*((_QWORD *)this + 1);
    v12 = *((_QWORD *)this + 4);
    v13 = *((_QWORD *)this + 10);
    v15 = *((_BYTE *)this + 89);
    v16 = *((_BYTE *)this + 90);
    v17 = *((_QWORD *)this + 12);
    v18 = *((_DWORD *)this + 26);
    v19 = *((_DWORD *)this + 27);
    v20 = *((_DWORD *)this + 28);
    v14[2] = 1;
    v8 = COverlayContext::EnsureIndependentFlipState(v7, (struct COverlayContext::OverlayPlaneInfo *)&v10, a2, a3);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x22Fu);
    }
    else
    {
      *((_QWORD *)this + 4) = v12;
      *((_QWORD *)this + 10) = v13;
      *((_BYTE *)this + 89) = v15;
      *((_BYTE *)this + 90) = v16;
      *((_QWORD *)this + 12) = v17;
      *((_DWORD *)this + 26) = v18;
      *((_DWORD *)this + 27) = v19;
      *((_DWORD *)this + 28) = v20;
    }
  }
  return v3;
}
