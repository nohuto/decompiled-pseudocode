/*
 * XREFs of ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x18012CDE8
 * Callers:
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180129BD4 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x18012C870 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x18012CCF0 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsureIndependentFlipState(CDirectFlipInfo *this, char a2, char a3)
{
  unsigned int v3; // edi
  COverlayContext *v7; // rcx
  int v8; // eax
  int v9; // eax
  _BYTE v11[24]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  _BYTE v14[32]; // [rsp+D0h] [rbp-30h] BYREF
  char v15; // [rsp+F0h] [rbp-10h]
  char v16; // [rsp+F1h] [rbp-Fh]
  int v17; // [rsp+F4h] [rbp-Ch]
  int v18; // [rsp+F8h] [rbp-8h]
  int v19; // [rsp+FCh] [rbp-4h]

  v3 = 0;
  if ( *((_BYTE *)this + 77) )
  {
    memset_0(v11, 0, 0x90uLL);
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
    v8 = COverlayContext::EnsureIndependentFlipState(v7, (struct COverlayContext::OverlayPlaneInfo *)v11, a2, a3);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x245u);
    }
    else
    {
      v9 = v19;
      *((_QWORD *)this + 4) = v12;
      *((_QWORD *)this + 8) = v13;
      *((_BYTE *)this + 78) = v15;
      *((_BYTE *)this + 79) = v16;
      *((_DWORD *)this + 20) = v17;
      *((_DWORD *)this + 21) = v18;
      *((_DWORD *)this + 22) = v9;
    }
  }
  return v3;
}
