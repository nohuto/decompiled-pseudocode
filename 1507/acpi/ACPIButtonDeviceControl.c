/*
 * XREFs of ACPIButtonDeviceControl @ 0x1C0021E50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonEvent @ 0x1C0021F50 (ACPIButtonEvent.c)
 */

__int64 __fastcall ACPIButtonDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rdx
  KIRQL v6; // al
  KIRQL v7; // r8
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 **v10; // rax
  unsigned int v11; // edi

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(a2 + 64) )
  {
    v11 = -1073741822;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v5 + 24) == 2703680 )
  {
    if ( *(_DWORD *)(v5 + 8) != 4 )
      goto LABEL_17;
    v11 = 0;
    **(_DWORD **)(a2 + 24) = *(_DWORD *)(DeviceExtension + 192);
    *(_QWORD *)(a2 + 56) = 4LL;
LABEL_11:
    *(_DWORD *)(a2 + 48) = v11;
    IofCompleteRequest((PIRP)a2, 0);
    return v11;
  }
  if ( *(_DWORD *)(v5 + 24) != 2703684 )
  {
    v11 = -1073741637;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v5 + 8) != 4 )
  {
LABEL_17:
    *(_QWORD *)(a2 + 56) = 0LL;
    v11 = -1073741820;
    goto LABEL_11;
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiButtonLock);
  v7 = v6;
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIButtonCancelRequest);
  if ( *(_BYTE *)(a2 + 68) && _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
  {
    KeReleaseSpinLock(&AcpiButtonLock, v6);
    *(_QWORD *)(a2 + 56) = 0LL;
    v11 = -1073741536;
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(a2 + 184);
  v9 = (__int64 *)(a2 + 168);
  *(_BYTE *)(v8 + 3) |= 1u;
  v10 = (__int64 **)qword_1C0059DD8;
  *v9 = (__int64)&AcpiButtonList;
  v9[1] = (__int64)v10;
  if ( *v10 != &AcpiButtonList )
    __fastfail(3u);
  *v10 = v9;
  qword_1C0059DD8 = (__int64)v9;
  KeReleaseSpinLock(&AcpiButtonLock, v7);
  return (unsigned int)ACPIButtonEvent(a1, 0LL);
}
