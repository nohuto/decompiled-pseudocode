/*
 * XREFs of SiValidateSystemPartition @ 0x14012F318
 * Callers:
 *     SiGetFirmwareBootDeviceName @ 0x1405425BC (SiGetFirmwareBootDeviceName.c)
 * Callees:
 *     SiGetDiskPartitionInformation @ 0x140542728 (SiGetDiskPartitionInformation.c)
 */

__int64 __fastcall SiValidateSystemPartition(const WCHAR *a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  __int64 v3; // rax
  _DWORD OutputBuffer[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v5; // [rsp+40h] [rbp-78h]
  __int64 v6; // [rsp+48h] [rbp-70h]

  result = SiGetDiskPartitionInformation(a1, OutputBuffer);
  if ( (int)result >= 0 )
  {
    v2 = -1073741823;
    if ( OutputBuffer[0] == 1 )
    {
      v3 = v5 - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
      if ( v5 == *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1 )
        v3 = v6 - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
      if ( v3 )
        return v2;
    }
    else if ( OutputBuffer[0] || !BYTE1(v5) )
    {
      return v2;
    }
    return 0;
  }
  return result;
}
