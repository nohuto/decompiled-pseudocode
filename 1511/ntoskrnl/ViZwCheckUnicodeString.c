/*
 * XREFs of ViZwCheckUnicodeString @ 0x1406D4B9C
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x1406D0F98 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x1406D133C (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1406D1894 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x1406D1924 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x1406D1C9C (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1406D1DEC (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x1406D1EE8 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1406D1FA8 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x1406D2064 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x1406D217C (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x1406D2660 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x1406D2FA0 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x1406D3360 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1406D3AE8 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1406D3CFC (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x1406D3DDC (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x1406D474C (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x1406D48C8 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(unsigned __int16 *a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax

  if ( a1 )
  {
    ViZwCheckVirtualAddress((int)a1, a2);
    v4 = *((_QWORD *)a1 + 1);
    ViZwCheckVirtualAddress(v4, a2);
    v5 = *a1;
    if ( v4 + v5 < v4
      || (v6 = a1[1], v6 < (unsigned __int16)v5)
      || (((unsigned __int8)v5 | (unsigned __int8)v6) & 1) != 0 )
    {
      if ( ViZwBreakForIssues )
        VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, a2, (ULONG_PTR)a1, 0LL);
    }
  }
}
