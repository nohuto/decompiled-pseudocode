/*
 * XREFs of UsbhWaitForBootDevice @ 0x1C0044A00
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003D8C (UsbhFdoColdStartPdo.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 */

NTSTATUS __fastcall UsbhWaitForBootDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  int v6; // ebp
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // rdx

  v5 = a4;
  v6 = a3;
  v8 = PdoExt(a2, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3u,
      0x52u,
      (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
      a1);
  v9 = *((_QWORD *)v8 + 341);
  v8[681] = v6;
  v8[680] = v5;
  result = ExNotifyBootDeviceRemoval(v9);
  if ( (_BYTE)result )
    result = KeWaitForSingleObject(v8 + 684, Executive, 0, 0, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_q(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             v11,
             3u,
             0x53u,
             (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
             a1);
  return result;
}
