/*
 * XREFs of ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180039594
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x180039264 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x180098FEC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::SetSolidFill(
        CRectangleInstruction *this,
        const struct _D3DCOLORVALUE *a2,
        double a3)
{
  __int64 v3; // r8
  _QWORD *v4; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v4 = (_QWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (v6 = CResource::Create(0x1Fu, *((_QWORD *)this + 5), v4), v7 = v6, v6 >= 0) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct _D3DCOLORVALUE *, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(*v4 + 16LL) + 1136LL))(
           *(_QWORD *)(*v4 + 16LL),
           *(unsigned int *)(*v4 + 24LL),
           v3,
           a2,
           0,
           0,
           0);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x58u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4Fu);
  }
  return v7;
}
