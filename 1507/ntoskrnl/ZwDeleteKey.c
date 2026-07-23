/*
 * XREFs of ZwDeleteKey @ 0x140180890
 * Callers:
 *     BiZwDeleteKey @ 0x14014C564 (BiZwDeleteKey.c)
 *     ExpSetCurrentUserUILanguage @ 0x14056C694 (ExpSetCurrentUserUILanguage.c)
 *     NtEnableLastKnownGood @ 0x14058D138 (NtEnableLastKnownGood.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405A834C (_RegRtlDeleteKeyTransacted.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     CmDeleteKeyRecursive @ 0x14065EBF8 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x14065F9C8 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140665590 (CmpDoReDoRecord.c)
 *     VerifierZwDeleteKey @ 0x140742584 (VerifierZwDeleteKey.c)
 *     PiLastGoodCopyKeyContents @ 0x1407E43B4 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x1407E8BA0 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407F9E94 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
