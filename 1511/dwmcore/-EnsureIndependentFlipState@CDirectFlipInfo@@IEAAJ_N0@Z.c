/*
 * XREFs of ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180006CF8
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180007060 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x1800071E0 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180111B38 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007D60 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
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
  _BYTE v14[32]; // [rsp+C8h] [rbp-38h] BYREF
  char v15; // [rsp+E8h] [rbp-18h]
  char v16; // [rsp+E9h] [rbp-17h]
  int v17; // [rsp+ECh] [rbp-14h]
  int v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F4h] [rbp-Ch]

  v3 = 0;
  if ( *((_BYTE *)this + 77) )
  {
    v10 = 0LL;
    memset_0(v11, 0, 0x80uLL);
    memset_0(v14, 0, 0x48uLL);
    v7 = (COverlayContext *)*((_QWORD *)this + 1);
    v12 = *((_QWORD *)this + 4);
    v13 = *((_QWORD *)this + 8);
    v15 = *((_BYTE *)this + 78);
    v16 = *((_BYTE *)this + 79);
    v17 = *((_DWORD *)this + 20);
    v18 = *((_DWORD *)this + 21);
    v19 = *((_DWORD *)this + 22);
    v14[10] = 1;
    v8 = COverlayContext::EnsureIndependentFlipState(v7, (struct COverlayContext::OverlayPlaneInfo *)&v10, a2, a3);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x261u);
    }
    else
    {
      *((_QWORD *)this + 4) = v12;
      *((_QWORD *)this + 8) = v13;
      *((_BYTE *)this + 78) = v15;
      *((_BYTE *)this + 79) = v16;
      *((_DWORD *)this + 20) = v17;
      *((_DWORD *)this + 21) = v18;
      *((_DWORD *)this + 22) = v19;
    }
  }
  return v3;
}
