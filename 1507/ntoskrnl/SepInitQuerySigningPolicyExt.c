/*
 * XREFs of SepInitQuerySigningPolicyExt @ 0x1405C29A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     RtlCheckRegistryKey @ 0x1404A9128 (RtlCheckRegistryKey.c)
 */

__int64 __fastcall SepInitQuerySigningPolicyExt(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v3; // ebx
  NTSTATUS v4; // eax
  __int64 v6; // rax
  _BYTE SystemInformation[24]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  SeQuerySigningPolicyExtAllowed = 0;
  SeFailIfExtensionNotSupported = 0;
  v4 = ZwQuerySystemInformation(SystemSecureBootPolicyInformation, SystemInformation, 0x18u, 0LL);
  if ( v4 >= 0 )
  {
    if ( (SystemInformation[20] & 0x40) != 0 )
    {
      SeFailIfExtensionNotSupported = 1;
    }
    else
    {
      SeQuerySigningPolicyExtAllowed = 0;
      if ( !qword_14036CCD8 )
        return 1;
      v6 = *(_QWORD *)((char *)qword_14036CCD8 + 4) - 0x4754D8390CDAD82ELL;
      if ( *(_QWORD *)((char *)qword_14036CCD8 + 4) == 0x4754D8390CDAD82ELL )
        v6 = *(_QWORD *)((char *)qword_14036CCD8 + 12) - 0x2B3182B24A84A189LL;
      if ( v6 || RtlCheckRegistryKey(2u, (PWSTR)L"SecureBoot\\AllowSigningPolicyExtension") < 0 )
        return 1;
    }
LABEL_3:
    SeQuerySigningPolicyExtAllowed = 1;
    return 1;
  }
  if ( v4 == -2143092730 )
    goto LABEL_3;
  return v3;
}
