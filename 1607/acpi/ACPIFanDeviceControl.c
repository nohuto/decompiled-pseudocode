/*
 * XREFs of ACPIFanDeviceControl @ 0x1C004DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     ACPIFanLoop @ 0x1C004E2AC (ACPIFanLoop.c)
 */

__int64 __fastcall ACPIFanDeviceControl(ULONG_PTR a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 DeviceExtension; // rsi
  char v5; // r8
  const char *v6; // rax
  const char *v7; // rdx
  __int64 v8; // rcx
  KIRQL v9; // dl
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx

  if ( *(_BYTE *)(a2 + 64) )
  {
    v3 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
LABEL_19:
    IofCompleteRequest((PIRP)a2, 0);
    return v3;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL) != 2703936 )
  {
    v3 = -1073741637;
LABEL_18:
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = v3;
    goto LABEL_19;
  }
  v5 = 0;
  v6 = (const char *)qword_1C002C340;
  v7 = (const char *)qword_1C002C340;
  if ( DeviceExtension )
  {
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v5 = DeviceExtension;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(DeviceExtension + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(DeviceExtension + 568);
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0x10u,
    0x16u,
    (__int64)&WPP_89e67fd0699430ed71704d47006f9e9f_Traceguids,
    a2,
    v5,
    v6,
    v7);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 184));
  if ( *(char *)(DeviceExtension + 8) < 0 || (*(_DWORD *)(DeviceExtension + 192) & 0x10000000) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v9);
    v3 = -1073741810;
    goto LABEL_18;
  }
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIFanCancelRequest);
  if ( *(_BYTE *)(a2 + 68) && _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v9);
    v3 = -1073741536;
    goto LABEL_18;
  }
  v10 = *(_QWORD *)(a2 + 184);
  v3 = 259;
  v11 = (_QWORD *)(a2 + 168);
  *(_BYTE *)(v10 + 3) |= 1u;
  v12 = *(_QWORD **)(DeviceExtension + 224);
  if ( *v12 != DeviceExtension + 216 )
    __fastfail(3u);
  v11[1] = v12;
  *v11 = DeviceExtension + 216;
  *v12 = v11;
  *(_QWORD *)(DeviceExtension + 224) = v11;
  KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v9);
  ACPIFanLoop(DeviceExtension, 0LL, 0LL);
  return v3;
}
