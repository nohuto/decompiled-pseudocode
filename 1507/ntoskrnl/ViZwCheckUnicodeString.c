/*
 * XREFs of ViZwCheckUnicodeString @ 0x140758770
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x140754B60 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x140754F04 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x14075545C (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x1407554EC (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x140755864 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1407559B4 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x140755AB0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140755B70 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x140755C2C (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x140755D44 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x140756228 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x140756B68 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x140756F28 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1407576B0 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1407578C4 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x1407579A4 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x140758314 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x140758490 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
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
