/*
 * XREFs of PopBatteryDeviceState @ 0x1406B62F4
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PopBatteryDeviceState(wchar_t *a1, __int64 a2)
{
  wchar_t *v3; // r8
  unsigned __int16 v4; // di
  __int16 v5; // si
  wchar_t *v6; // r14
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rbx
  __int64 v12; // r9
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // rbx
  __int128 v20; // xmm0
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  __int64 v23; // rdx
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  signed __int64 v26; // rcx
  ULONG_PTR v27; // rtt
  struct _KTHREAD *v28; // rdx
  __int16 v29; // ax
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v32; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)&String2.Length = 0;
  v3 = a1;
  String2.Buffer = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( a1 )
  {
    v7 = 0x7FFFLL;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v7;
    }
    while ( v7 );
    if ( !v7 )
      return (unsigned int)-1073741811;
    String2.Buffer = v3;
    v6 = v3;
    v4 = 2 * (0x7FFF - v7);
    String2.Length = v4;
    v5 = v4 + 2;
    String2.MaximumLength = v4 + 2;
  }
  if ( v4 > 8u
    && (RtlPrefixUnicodeString(&PopDevicePrefixNt, &String2, 0)
     || RtlPrefixUnicodeString(&PopDevicePrefixWin32, &String2, 0)) )
  {
    String2.Buffer = v6 + 4;
    String2.Length = v4 - 8;
    CurrentThread = KeGetCurrentThread();
    String2.MaximumLength = v5 - 8;
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, v9);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopPolicyDeviceLock, v11, (ULONG_PTR)&PopPolicyDeviceLock, v12);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)&PopCB, 0LL, 0LL, v12);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopCB, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopCB, v15, (ULONG_PTR)&PopCB, v16);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v17 = qword_14032E9A0;
    if ( (__int64 *)qword_14032E9A0 == &qword_14032E9A0 )
      goto LABEL_27;
    do
    {
      v18 = *(__m128i *)(v17 + 32);
      v19 = v17;
      *(_QWORD *)&v32.Length = *(_QWORD *)(v17 + 32);
      v32.Length -= 8;
      v32.MaximumLength -= 8;
      v32.Buffer = (wchar_t *)(_mm_srli_si128(v18, 8).m128i_u64[0] + 8);
      if ( RtlEqualUnicodeString(&String2, &v32, 1u) )
        break;
      v17 = *(_QWORD *)v17;
      v19 = 0LL;
    }
    while ( (__int64 *)v17 != &qword_14032E9A0 );
    if ( !v19 )
    {
LABEL_27:
      v8 = -1073741772;
    }
    else if ( *(_DWORD *)(v19 + 104) == 3 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v19 + 112);
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v19 + 128);
      *(_DWORD *)(a2 + 32) = *(_DWORD *)(v19 + 144);
      v20 = *(_OWORD *)(v19 + 148);
      v8 = 0;
      *(_OWORD *)(a2 + 36) = v20;
    }
    else
    {
      v8 = -1073741661;
    }
    if ( qword_14032E988 )
      qword_14032E988 = 0LL;
    _m_prefetchw(&PopCB);
    v21 = PopCB - 16;
    if ( (PopCB & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v21 = 0LL;
    if ( (PopCB & 2) != 0
      || (v22 = PopCB, v22 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopCB, v21, PopCB)) )
    {
      ExfReleasePushLock(&PopCB, v14);
    }
    KeAbPostRelease((ULONG_PTR)&PopCB);
    v24 = KeGetCurrentThread();
    v25 = v24->KernelApcDisable + 1;
    v24->KernelApcDisable = v25;
    if ( !v25
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( qword_14032DF48 )
      qword_14032DF48 = 0LL;
    _m_prefetchw(&PopPolicyDeviceLock);
    v26 = PopPolicyDeviceLock - 16;
    if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v26 = 0LL;
    if ( (PopPolicyDeviceLock & 2) != 0
      || (v27 = PopPolicyDeviceLock,
          v27 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&PopPolicyDeviceLock,
                   v26,
                   PopPolicyDeviceLock)) )
    {
      ExfReleasePushLock(&PopPolicyDeviceLock, v23);
    }
    KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
      && !v28->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    return (unsigned int)-1073741773;
  }
  return v8;
}
