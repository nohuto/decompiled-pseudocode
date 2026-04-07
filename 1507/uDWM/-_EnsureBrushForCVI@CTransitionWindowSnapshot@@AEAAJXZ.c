/*
 * XREFs of ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180011484
 * Callers:
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x1800112A8 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800116D0 (-Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012308 (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureBrushForCVI(CTransitionWindowSnapshot *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  CBaseObject *v7; // rcx
  CResource *v9; // [rsp+38h] [rbp-49h] BYREF
  int v10; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v11[4]; // [rsp+4Ch] [rbp-35h] BYREF
  double v12; // [rsp+50h] [rbp-31h]
  __int128 v13; // [rsp+58h] [rbp-29h]
  __int128 v14; // [rsp+68h] [rbp-19h]
  int v15; // [rsp+8Ch] [rbp+Bh]
  int v16; // [rsp+90h] [rbp+Fh]
  int v17; // [rsp+94h] [rbp+13h]
  int v18; // [rsp+98h] [rbp+17h]
  int v19; // [rsp+A4h] [rbp+23h]
  int v20; // [rsp+A8h] [rbp+27h]
  int v21; // [rsp+ACh] [rbp+2Bh]
  int v22; // [rsp+B0h] [rbp+2Fh]
  int v23; // [rsp+B8h] [rbp+37h]

  v1 = 0;
  v9 = 0LL;
  if ( *((_QWORD *)this + 35) )
    return v1;
  v3 = CCachedVisualImageBrushResource::Create(this, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), &v9);
  v1 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0xCCu);
    goto LABEL_8;
  }
  v10 = 250;
  memset_0(v11, 0, 0x70uLL);
  v4 = *((_QWORD *)this + 34);
  v15 = 0;
  v16 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v5 = (volatile signed __int32 *)v9;
  v12 = DOUBLE_1_0;
  v13 = _xmm;
  v14 = _xmm;
  v17 = 1;
  v18 = 1;
  v19 = 1;
  v23 = *(_DWORD *)(v4 + 24);
  v6 = CResource::Send(v9, &v10, 0x74u);
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xE2u);
LABEL_9:
    if ( v5 )
      CBaseObject::Release((CBaseObject *)v5);
    return v1;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v7 )
    CBaseObject::Release(v7);
  *((_QWORD *)this + 35) = v5;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
LABEL_8:
    v5 = (volatile signed __int32 *)v9;
    goto LABEL_9;
  }
  return v1;
}
