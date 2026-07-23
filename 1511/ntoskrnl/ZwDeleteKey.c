/*
 * XREFs of ZwDeleteKey @ 0x140151EE0
 * Callers:
 *     BiZwDeleteKey @ 0x14011752C (BiZwDeleteKey.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     NtEnableLastKnownGood @ 0x140519AD0 (NtEnableLastKnownGood.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140531290 (_RegRtlDeleteKeyTransacted.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 *     CmDeleteKeyRecursive @ 0x1405E76E0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1405E84B0 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x1405ED194 (CmpDoReDoRecord.c)
 *     VerifierZwDeleteKey @ 0x1406C0D44 (VerifierZwDeleteKey.c)
 *     PiLastGoodCopyKeyContents @ 0x14076EC0C (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x1407720A4 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140783710 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
