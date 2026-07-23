/*
 * XREFs of IoCheckQuerySetVolumeInformation @ 0x14054AEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckQuerySetVolumeInformation(
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        BOOLEAN SetOperation)
{
  __int64 *v3; // r9
  char v4; // cl

  v3 = IopSetFsOperationLength;
  if ( !SetOperation )
    v3 = IopQueryFsOperationLength;
  if ( (unsigned int)FsInformationClass < FileFsFullSizeInformationEx
    && (v4 = *((_BYTE *)v3 + (int)FsInformationClass)) != 0 )
  {
    return Length < v4 ? 0xC0000004 : 0;
  }
  else
  {
    return -1073741821;
  }
}
