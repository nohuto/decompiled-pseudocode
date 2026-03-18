/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x1404812A0
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1404234B0 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x140482478 (NtReplyPort.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140426D80 (AlpcpLookupMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047E410 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpValidateMessage @ 0x14047E4C0 (AlpcpValidateMessage.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140481BFC (AlpcpClearOwnerPortMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140481CB4 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpCaptureMessageData @ 0x1404A7424 (AlpcpCaptureMessageData.c)
 *     AlpcpValidateDataInformation @ 0x140620254 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r14
  int v5; // ebx
  ULONG_PTR v6; // rsi
  int v7; // ecx
  __int64 v8; // rdx
  bool v9; // bl
  ULONG_PTR v10; // rbx
  __int64 v11; // r14
  ULONG_PTR v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rbx
  signed __int32 v24[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v25; // [rsp+30h] [rbp-68h]
  __int64 v26; // [rsp+38h] [rbp-60h]
  __m128i v27; // [rsp+48h] [rbp-50h] BYREF
  __int128 v28; // [rsp+58h] [rbp-40h]
  int v29; // [rsp+68h] [rbp-30h]
  int v30; // [rsp+6Ch] [rbp-2Ch]
  ULONG_PTR v32; // [rsp+B8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a1;
  if ( a3 )
  {
    AlpcpProbeAndCaptureMessageHeader((__m128i *)a2, (__int64)&v27, 0);
    v5 = AlpcpValidateMessage((unsigned __int16 *)&v27, 1);
    v25 = v5;
    if ( v5 < 0 )
      return (unsigned int)v5;
    if ( v27.m128i_i16[3] )
    {
      v5 = AlpcpValidateDataInformation(a2, &v27);
      v25 = v5;
      if ( v5 < 0 )
        return (unsigned int)v5;
    }
  }
  else
  {
    v27 = *(__m128i *)a2;
    v28 = *(_OWORD *)(a2 + 16);
    v30 = HIDWORD(*(_QWORD *)(a2 + 32));
    v29 = 0;
    v5 = AlpcpValidateMessage((unsigned __int16 *)&v27, 1);
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  v5 = AlpcpLookupMessage(v4, DWORD2(v28), v29, &v32);
  v25 = v5;
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = v32;
  v7 = *(_DWORD *)(v32 + 40);
  if ( (v7 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v4, v32, 0x10000LL);
    return (unsigned int)-1073741769;
  }
  if ( (v7 & 0x200) != 0 || !*(_QWORD *)(v32 + 32) )
    goto LABEL_59;
  v8 = *(_QWORD *)(v32 + 16);
  if ( v8 == v4 )
  {
LABEL_12:
    if ( (v7 & 7) == 3 )
    {
      v9 = 1;
      goto LABEL_14;
    }
LABEL_59:
    AlpcpUnlockMessage(v6);
    return (unsigned int)-1073741790;
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(v4 + 416) & 6) != 6 )
      goto LABEL_59;
    v20 = *(_QWORD **)(v4 + 16);
    if ( !v20 || *v20 != v8 )
      goto LABEL_59;
    goto LABEL_12;
  }
  v21 = *(_QWORD *)(v32 + 24);
  v26 = v21;
  if ( !v21 )
    goto LABEL_59;
  v22 = *(_QWORD **)(v21 + 16);
  v23 = KeAbPreAcquire((ULONG_PTR)(v22 - 2), 0LL, 0LL);
  if ( _InterlockedCompareExchange64(v22 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v22 - 2, v23, (ULONG_PTR)(v22 - 2));
  if ( v23 )
    *(_BYTE *)(v23 + 26) |= 1u;
  if ( ((*(_DWORD *)(v26 + 416) >> 1) & 3) == 2 )
    v9 = *v22 == v4 || v22[1] == v4;
  else
    v9 = v22[2] == v4;
  if ( _InterlockedCompareExchange64(v22 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v22 - 2);
  KeAbPostRelease((ULONG_PTR)(v22 - 2));
  v6 = v32;
LABEL_14:
  if ( !v9 )
    goto LABEL_59;
  if ( (unsigned __int64)v27.m128i_i16[0] >= 0x200 )
  {
    v5 = AlpcpCaptureMessageData(v6, v27.m128i_i16[0], a2 + 40);
    v25 = v5;
  }
  else
  {
    memmove((void *)(v6 + 264), (const void *)(a2 + 40), v27.m128i_i16[0]);
    v5 = 0;
    v25 = 0;
  }
  if ( v5 < 0 )
  {
    AlpcpUnlockMessage(v6);
  }
  else
  {
    *(_DWORD *)(v6 + 40) |= 0x10000u;
    _InterlockedOr(v24, 0);
    v10 = v32;
    v11 = *(_QWORD *)(v32 + 24);
    AlpcpClearOwnerPortMessage(v32);
    AlpcpRemoveMessageFromPendingQueue(v10);
    *(_DWORD *)(v10 + 224) = v27.m128i_i32[0];
    *(_WORD *)(v10 + 228) = 2;
    v12 = v32;
    *(_OWORD *)(v32 + 232) = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(v6 + 40) |= 0x200u;
    v13 = *(_DWORD *)(v6 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v11 + 416) & 6));
    *(_DWORD *)(v6 + 40) = v13;
    if ( ((v13 >> 3) & 0xF) == 1 )
    {
      v17 = *(_QWORD *)(v11 + 16);
      v18 = KeAbPreAcquire(v17 - 16, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 - 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v17 - 16), v18, v17 - 16);
      if ( v18 )
        *(_BYTE *)(v18 + 26) |= 1u;
      v19 = *(_QWORD *)(v17 + 8);
      if ( v19 )
        *(_QWORD *)(v32 + 120) = *(_QWORD *)(v19 + 56);
      else
        *(_QWORD *)(v32 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v17 - 16));
      KeAbPostRelease(v17 - 16);
      v12 = v32;
    }
    else
    {
      *(_QWORD *)(v12 + 120) = *(_QWORD *)(v11 + 56);
    }
    v14 = *(_QWORD *)(v12 + 32);
    *(_QWORD *)(v12 + 32) = 0LL;
    --*(_WORD *)(v12 - 30);
    *(_DWORD *)(v6 + 40) = *(_DWORD *)(v6 + 40) & 0xFFFEFEFF | 0x100;
    AlpcpUnlockMessage(v12);
    if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
      *(_QWORD *)(a1 + 24) = v14;
    else
      KeReleaseSemaphoreEx(v14 + 1592, 1, 1LL, v15, 2);
    return v25;
  }
  return (unsigned int)v5;
}
