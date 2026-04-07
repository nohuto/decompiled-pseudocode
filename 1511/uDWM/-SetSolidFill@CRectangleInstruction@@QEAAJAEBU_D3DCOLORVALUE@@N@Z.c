/*
 * XREFs of ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x18003C484
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z @ 0x18003BF6C (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009C3AC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CRectangleInstruction::SetSolidFill(
        CRectangleInstruction *this,
        const struct _D3DCOLORVALUE *a2,
        double a3)
{
  CResource **v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v8; // xmm0
  CResource *v9; // rcx
  int v10; // eax
  int v12; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[4]; // [rsp+34h] [rbp-64h] BYREF
  double v14; // [rsp+38h] [rbp-60h]
  __int128 v15; // [rsp+40h] [rbp-58h]
  int v16; // [rsp+54h] [rbp-44h]
  int v17; // [rsp+58h] [rbp-40h]

  v12 = 255;
  memset_0(v13, 0, 0x28uLL);
  v5 = (CResource **)((char *)this + 16);
  if ( *((_QWORD *)this + 2)
    || (v6 = CResource::Create(0x47u, *((_QWORD *)this + 5), (CBaseObject **)this + 2), v7 = v6, v6 >= 0) )
  {
    v8 = *(_OWORD *)&a2->r;
    v9 = *v5;
    v16 = 0;
    v17 = 0;
    v15 = v8;
    v14 = a3;
    v10 = CResource::Send(v9, &v12, 0x2Cu);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x72u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x6Au);
  }
  return v7;
}
