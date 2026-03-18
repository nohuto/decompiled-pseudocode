/*
 * XREFs of ZwDeleteKey @ 0x14015B580
 * Callers:
 *     BiZwDeleteKey @ 0x140124DA0 (BiZwDeleteKey.c)
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140562208 (_RegRtlDeleteKeyTransacted.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     CmDeleteKeyRecursive @ 0x140606DF0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140607BC4 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140611924 (CmpDoReDoRecord.c)
 *     VrpDestroyNamespaceNode @ 0x140614978 (VrpDestroyNamespaceNode.c)
 *     NtEnableLastKnownGood @ 0x1406E572C (NtEnableLastKnownGood.c)
 *     PiLastGoodCopyKeyContents @ 0x1407B90B4 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x1407BD004 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407CEF34 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1, v2);
}
