/*
 * XREFs of ndisDoesSystemSupportSriov @ 0x1C009EF1C
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1C005BBC8 (WPP_SF_S.c)
 */

void ndisDoesSystemSupportSriov()
{
  char v0; // r8
  char v6; // al
  const wchar_t *v22; // r8

  v0 = byte_1C0085321;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
  {
    WPP_SF_(0x7Cu, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids);
    v0 = byte_1C0085321;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX >= 0 )
    goto LABEL_4;
  _RAX = 1073741825LL;
  __asm { cpuid }
  if ( (_DWORD)_RAX != 824407624 )
    goto LABEL_4;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX >= 0x40000006 )
  {
    _RAX = 1073741830LL;
    __asm { cpuid }
    v6 = (_RAX & 0x30) == 48;
    ndisSystemSupportsSriov = v6;
  }
  else
  {
LABEL_4:
    v6 = ndisSystemSupportsSriov;
  }
  if ( ndisSriovSupportTestOverride )
  {
    if ( (unsigned __int8)v0 >= 4u )
    {
      WPP_SF_(0x7Du, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids);
      v0 = byte_1C0085321;
    }
    v6 = 1;
    ndisSystemSupportsSriov = 1;
  }
  if ( (unsigned __int8)v0 >= 4u )
  {
    v22 = L"Yes";
    if ( v6 != 1 )
      v22 = L"No";
    WPP_SF_S(0x7Eu, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v22);
  }
}
