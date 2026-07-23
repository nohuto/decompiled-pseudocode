/*
 * XREFs of IoCheckQuerySetFileInformation @ 0x14054AEA4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckQuerySetFileInformation(
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        BOOLEAN SetOperation)
{
  __int64 v3; // rax
  __int64 *v5; // rcx
  char v6; // dl

  v3 = FileInformationClass;
  if ( (unsigned int)FileInformationClass >= FileDesiredStorageClassInformation )
    return -1073741821;
  v5 = IopSetOperationLength;
  if ( !SetOperation )
    v5 = IopQueryOperationLength;
  v6 = *((_BYTE *)v5 + v3);
  if ( v6 )
    return Length < v6 ? 0xC0000004 : 0;
  else
    return -1073741821;
}
