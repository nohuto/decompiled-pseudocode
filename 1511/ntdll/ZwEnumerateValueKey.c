/*
 * XREFs of ZwEnumerateValueKey @ 0x1800A5320
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x180004D08 (RtlpPopulateLanguageConfigList.c)
 *     RtlpQueryRegistryValues @ 0x1800466A4 (RtlpQueryRegistryValues.c)
 *     RtlpLookupSafeCurDirList @ 0x1800D1EFC (RtlpLookupSafeCurDirList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800ED160 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800ED74C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 19;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
