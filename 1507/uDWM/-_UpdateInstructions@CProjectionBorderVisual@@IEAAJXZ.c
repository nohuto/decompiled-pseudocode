/*
 * XREFs of ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x180074878
 * Callers:
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800745B0 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x18007461C (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_UpdateInstructions(CProjectionBorderVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  struct tagRECT rc; // [rsp+30h] [rbp-28h] BYREF

  rc = *(struct tagRECT *)((char *)this + 264);
  v2 = CVisual::ClearInstructions(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CProjectionBorderVisual::_AddBorderInstructions(this, &rc, 2, &stru_1800AA9C0);
    v3 = v4;
    if ( v4 >= 0 )
    {
      InflateRect(&rc, -2, -2);
      v5 = CProjectionBorderVisual::_AddBorderInstructions(this, &rc, 1, &stru_1800AA9B0);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x6Au);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x66u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x63u);
  }
  return v3;
}
