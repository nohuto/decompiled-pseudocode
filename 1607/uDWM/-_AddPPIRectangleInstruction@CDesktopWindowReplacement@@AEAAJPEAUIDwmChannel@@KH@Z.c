/*
 * XREFs of ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z @ 0x1800771A0
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x180039264 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800379AC (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037A3C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopWindowReplacement::_AddPPIRectangleInstruction(
        CDesktopWindowReplacement *this,
        struct IDwmChannel *a2)
{
  int SystemMetrics; // ebx
  signed int LastError; // eax
  signed int v6; // ebx
  int v7; // eax
  struct CSolidRectangleInstruction *v8; // rdi
  int v9; // eax
  struct CSolidRectangleInstruction *v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+48h] [rbp-18h] BYREF

  v11 = 0LL;
  *(float *)&v13 = (float)(GetSystemMetrics(76) + 10);
  *((float *)&v13 + 2) = *(float *)&v13 + 4.0;
  SetLastError(0);
  SystemMetrics = GetSystemMetrics(79);
  if ( SystemMetrics )
  {
    *(_QWORD *)&v12 = 0x3F8000003F800000LL;
    *((_QWORD *)&v12 + 1) = 0x3F8000003F800000LL;
    *((float *)&v13 + 1) = (float)(SystemMetrics + GetSystemMetrics(77) - 14);
    *((float *)&v13 + 3) = *((float *)&v13 + 1) + 4.0;
    v7 = CSolidRectangleInstruction::Create(a2, &v11);
    v8 = v11;
    v6 = v7;
    if ( v7 >= 0 )
    {
      CSolidRectangleInstruction::SetRect((__int64)v11, &v13);
      *((_OWORD *)v8 + 1) = v12;
      v9 = CVisual::AddInstruction(this, v8);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x62u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x5Fu);
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  else
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x54u);
  }
  return (unsigned int)v6;
}
