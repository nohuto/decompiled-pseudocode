/*
 * XREFs of IoWMIQueryAllDataMultiple @ 0x14069CC44
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     WmipQueryAllDataMultiple @ 0x14069E570 (WmipQueryAllDataMultiple.c)
 */

NTSTATUS __stdcall IoWMIQueryAllDataMultiple(
        PVOID *DataBlockObjectList,
        ULONG ObjectCount,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  _DWORD *v4; // rbx
  ULONG v6; // eax
  NTSTATUS AllDataMultiple; // edx
  __int64 v9; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v10[80]; // [rsp+50h] [rbp-78h] BYREF

  v4 = OutBuffer;
  if ( !DataBlockObjectList || !ObjectCount || !InOutBufferSize )
    return -1073741811;
  v6 = *InOutBufferSize;
  if ( !OutBuffer || v6 < 0x48 )
  {
    v4 = v10;
    v6 = 72;
  }
  AllDataMultiple = WmipQueryAllDataMultiple(ObjectCount, (int)DataBlockObjectList, 0, 0, v4, v6, 0LL, (__int64)&v9);
  if ( AllDataMultiple >= 0 )
  {
    if ( (v4[11] & 0x20) != 0 )
    {
      *InOutBufferSize = v4[12];
    }
    else
    {
      *InOutBufferSize = v9;
      if ( v4 != (_DWORD *)v10 )
        return AllDataMultiple;
    }
    return -1073741789;
  }
  return AllDataMultiple;
}
