/*
 * XREFs of SET_PDO_SWPNPSTATE @ 0x1C001B744
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005B90 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054AB0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_StopDevice @ 0x1C0054C90 (UsbhPdoPnp_StopDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054D80 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

_DWORD *__fastcall SET_PDO_SWPNPSTATE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  _DWORD *result; // rax
  __int64 v7; // r9

  v4 = a3;
  v5 = a2;
  result = PdoExt(a1, a2, a3, a4);
  v7 = ((unsigned __int8)result[3] + 1) & 7;
  result[3] = v7;
  v7 *= 32LL;
  *(_DWORD *)((char *)result + v7 + 528) = v4;
  *(_DWORD *)((char *)result + v7 + 532) = result[280];
  *(_DWORD *)((char *)result + v7 + 536) = v5;
  result[280] = v5;
  return result;
}
