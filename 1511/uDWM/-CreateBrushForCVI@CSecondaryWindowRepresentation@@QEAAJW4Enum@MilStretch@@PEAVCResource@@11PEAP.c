/*
 * XREFs of ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x1800165D0
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18001673C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180019DC0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180013E8C (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::CreateBrushForCVI(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        CBaseObject **a6)
{
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  volatile signed __int32 *v13; // rbx
  int v14; // eax
  CResource *v16; // [rsp+30h] [rbp-89h] BYREF
  int v17; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v18[4]; // [rsp+44h] [rbp-75h] BYREF
  double v19; // [rsp+48h] [rbp-71h]
  __int128 v20; // [rsp+50h] [rbp-69h]
  __int128 v21; // [rsp+60h] [rbp-59h]
  int v22; // [rsp+80h] [rbp-39h]
  int v23; // [rsp+84h] [rbp-35h]
  int v24; // [rsp+88h] [rbp-31h]
  int v25; // [rsp+8Ch] [rbp-2Dh]
  int v26; // [rsp+90h] [rbp-29h]
  int v27; // [rsp+94h] [rbp-25h]
  int v28; // [rsp+9Ch] [rbp-1Dh]
  int v29; // [rsp+A0h] [rbp-19h]
  int v30; // [rsp+A4h] [rbp-15h]
  int v31; // [rsp+A8h] [rbp-11h]
  int v32; // [rsp+B0h] [rbp-9h]

  v16 = 0LL;
  v9 = CCachedVisualImageBrushResource::Create(a1, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x449u);
    goto LABEL_13;
  }
  v17 = 257;
  memset_0(v18, 0, 0x70uLL);
  if ( a5 )
    v11 = *(_DWORD *)(a5 + 24);
  else
    v11 = 0;
  v19 = DOUBLE_1_0;
  v22 = v11;
  if ( a4 )
  {
    v25 = 0;
    v20 = 0uLL;
    v27 = *(_DWORD *)(a4 + 24);
  }
  else
  {
    v20 = _xmm;
    v25 = 1;
  }
  v23 = 0;
  v24 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v26 = 1;
  v21 = _xmm;
  v28 = a2;
  if ( a3 )
    v12 = *(_DWORD *)(a3 + 24);
  else
    v12 = 0;
  v13 = (volatile signed __int32 *)v16;
  v32 = v12;
  v14 = CResource::Send(v16, &v17, 0x74u);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x477u);
LABEL_14:
    if ( v13 )
      CBaseObject::Release((CBaseObject *)v13);
    return v10;
  }
  if ( *a6 )
    CBaseObject::Release(*a6);
  *a6 = (CBaseObject *)v13;
  if ( v13 )
  {
    _InterlockedIncrement(v13 + 2);
LABEL_13:
    v13 = (volatile signed __int32 *)v16;
    goto LABEL_14;
  }
  return v10;
}
