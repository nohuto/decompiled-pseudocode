/*
 * XREFs of SET_PDO_SWPNPSTATE @ 0x1C000BD7C
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005A80 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C000CBE0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054480 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_StopDevice @ 0x1C0054660 (UsbhPdoPnp_StopDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054750 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 */

__int64 __fastcall SET_PDO_SWPNPSTATE(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // r9

  result = PdoExt(a1);
  v6 = ((unsigned __int8)*(_DWORD *)(result + 12) + 1) & 7;
  *(_DWORD *)(result + 12) = v6;
  v6 *= 32LL;
  *(_DWORD *)(v6 + result + 528) = a3;
  *(_DWORD *)(v6 + result + 532) = *(_DWORD *)(result + 1120);
  *(_DWORD *)(v6 + result + 536) = a2;
  *(_DWORD *)(result + 1120) = a2;
  return result;
}
