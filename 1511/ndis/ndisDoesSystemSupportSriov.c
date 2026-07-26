/*
 * XREFs of ndisDoesSystemSupportSriov @ 0x1C009A298
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1C005B938 (WPP_SF_S.c)
 */

void ndisDoesSystemSupportSriov()
{
  char v0; // r8
  char v6; // al
  const wchar_t *v22; // r8

  v0 = byte_1C0083721;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
  {
    WPP_SF_(0x7Fu, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids);
    v0 = byte_1C0083721;
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
      WPP_SF_(0x80u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids);
      v0 = byte_1C0083721;
    }
    v6 = 1;
    ndisSystemSupportsSriov = 1;
  }
  if ( (unsigned __int8)v0 >= 4u )
  {
    v22 = L"Yes";
    if ( v6 != 1 )
      v22 = L"No";
    WPP_SF_S(0x81u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v22);
  }
}
