/*
 * XREFs of ViZwCheckObjectAttributes @ 0x1406D4B50
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x1406D126C (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x1406D133C (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1406D1454 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x1406D1A18 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1406D1A7C (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1406D1B00 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x1406D1B78 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x1406D1C38 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x1406D1C9C (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x1406D1D50 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1406D1DEC (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1406D1E70 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x1406D1EE8 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1406D1FA8 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x1406D2034 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x1406D220C (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1406D2690 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1406D28E0 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x1406D2944 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1406D29C4 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x1406D2A28 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1406D2AAC (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x1406D2B10 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1406D2B74 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x1406D2CA0 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1406D2D04 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x1406D2D68 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x1406D2EB8 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1406D2F1C (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x1406D2FA0 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x1406D35E8 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x1406D405C (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x1406D48F8 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1406D4B9C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1406D4C1C (ViZwCheckVirtualAddress.c)
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
