/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140758724
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x140754E34 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x140754F04 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x14075501C (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x1407555E0 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x140755644 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1407556C8 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x140755740 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x140755800 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x140755864 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x140755918 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1407559B4 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x140755A38 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x140755AB0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140755B70 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x140755BFC (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x140755DD4 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x140756258 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1407564A8 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x14075650C (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x14075658C (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x1407565F0 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x140756674 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x1407566D8 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x14075673C (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x140756868 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1407568CC (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x140756930 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x140756A80 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x140756AE4 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x140756B68 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x1407571B0 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x140757C24 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x1407584C0 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140758770 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1407587F0 (ViZwCheckVirtualAddress.c)
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
