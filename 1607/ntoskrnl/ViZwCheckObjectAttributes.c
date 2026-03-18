/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140720D1C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x14071D414 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x14071D4E4 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x14071D5FC (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x14071DBC0 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x14071DC24 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x14071DCA8 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x14071DD20 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x14071DDE0 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x14071DE44 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x14071DEF8 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x14071DF94 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x14071E018 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x14071E090 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x14071E150 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x14071E200 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x14071E3D8 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x14071E85C (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x14071EAAC (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x14071EB10 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x14071EB90 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x14071EBF4 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x14071EC78 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x14071ECDC (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x14071ED40 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x14071EE6C (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x14071EED0 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x14071EF34 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x14071F084 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x14071F0E8 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x14071F16C (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x14071F7B4 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x140720228 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x140720AC4 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 */

__int64 __fastcall ViZwCheckObjectAttributes(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    ViZwCheckVirtualAddress((int)a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    return ViZwCheckVirtualAddress(a1[5], a2);
  }
  return result;
}
