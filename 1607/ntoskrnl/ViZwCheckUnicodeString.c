/*
 * XREFs of ViZwCheckUnicodeString @ 0x140720D68
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x14071D140 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x14071D4E4 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x14071DA3C (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x14071DACC (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x14071DE44 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x14071DF94 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x14071E090 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x14071E150 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x14071E230 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x14071E348 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x14071E82C (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x14071F16C (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x14071F52C (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x14071FCB4 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x14071FEC8 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x14071FFA8 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x140720918 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x140720A94 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x140720D1C (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
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
    if ( v4 + v5 < v4 || (v6 = a1[1], v6 < (unsigned __int16)v5) || (((unsigned __int16)v5 | v6) & 1) != 0 )
    {
      if ( ViZwBreakForIssues )
        VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, a2, (ULONG_PTR)a1, 0LL);
    }
  }
}
