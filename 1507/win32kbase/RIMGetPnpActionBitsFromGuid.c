/*
 * XREFs of RIMGetPnpActionBitsFromGuid @ 0x1C00C975C
 * Callers:
 *     RIMDeviceNotify @ 0x1C00C96D0 (RIMDeviceNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00761AC (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_LLLD @ 0x1C00C9990 (WPP_RECORDER_SF_LLLD.c)
 */

__int64 __fastcall RIMGetPnpActionBitsFromGuid(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v5 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 )
    v5 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v5 )
  {
    v7 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 )
      v7 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
        v8 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( v8 )
      {
        return WPP_RECORDER_SF_LLLD(WPP_GLOBAL_Control->DeviceExtension, *(unsigned __int16 *)(a3 + 4), a3, a4);
      }
      else
      {
        result = WPP_RECORDER_SF_qq(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   4u,
                   0xCu,
                   (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
                   a1,
                   a2);
        *(_DWORD *)(a2 + 184) |= 8u;
      }
    }
    else
    {
      result = WPP_RECORDER_SF_qq(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 a2,
                 4u,
                 0xBu,
                 (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
                 a1,
                 a2);
      *(_DWORD *)(a2 + 184) |= 4u;
    }
  }
  else
  {
    result = WPP_RECORDER_SF_qq(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               a2,
               4u,
               0xAu,
               (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
               a1,
               a2);
    *(_DWORD *)(a2 + 184) |= 2u;
  }
  return result;
}
