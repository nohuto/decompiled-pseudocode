/*
 * XREFs of ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJQEAUMIL_CHANNEL__@@KH@Z @ 0x180075288
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z @ 0x18003BF6C (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001615C (-Create@CSolidRectangleInstruction@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800162C4 (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopWindowReplacement::_AddPPIRectangleInstruction(
        CDesktopWindowReplacement *this,
        struct MIL_CHANNEL__ *const a2)
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x6Fu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x6Cu);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x61u);
  }
  return (unsigned int)v6;
}
