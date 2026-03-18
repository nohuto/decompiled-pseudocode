/*
 * XREFs of ACPIFanDeviceControl @ 0x1C003AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIFanLoop @ 0x1C003B218 (ACPIFanLoop.c)
 */

__int64 __fastcall ACPIFanDeviceControl(ULONG_PTR a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 DeviceExtension; // rsi
  KIRQL v5; // dl
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx

  if ( *(_BYTE *)(a2 + 64) )
  {
    v3 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
LABEL_15:
    IofCompleteRequest((PIRP)a2, 0);
    return v3;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL) != 2703936 )
  {
    v3 = -1073741637;
LABEL_14:
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = v3;
    goto LABEL_15;
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 176));
  if ( *(char *)DeviceExtension < 0 || (*(_DWORD *)(DeviceExtension + 184) & 0x10000000) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 176), v5);
    v3 = -1073741810;
    goto LABEL_14;
  }
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIFanCancelRequest);
  if ( *(_BYTE *)(a2 + 68) && _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 176), v5);
    v3 = -1073741536;
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(a2 + 184);
  v3 = 259;
  v7 = (_QWORD *)(a2 + 168);
  *(_BYTE *)(v6 + 3) |= 1u;
  v8 = *(_QWORD **)(DeviceExtension + 216);
  *v7 = DeviceExtension + 208;
  v7[1] = v8;
  if ( *v8 != DeviceExtension + 208 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(DeviceExtension + 216) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 176), v5);
  ACPIFanLoop(DeviceExtension, 0LL, 0LL);
  return v3;
}
