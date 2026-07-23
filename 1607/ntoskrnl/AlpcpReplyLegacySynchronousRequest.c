/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x14049E040
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x14049D380 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x14049DF70 (NtReplyPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140408128 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1404081E0 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpSetOwnerPortMessage @ 0x14044A830 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpValidateMessage @ 0x14049FEF4 (AlpcpValidateMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14049FF34 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpCaptureMessageData @ 0x1404A01B8 (AlpcpCaptureMessageData.c)
 *     AlpcpLookupMessage @ 0x1404F1290 (AlpcpLookupMessage.c)
 *     AlpcpValidateDataInformation @ 0x1406555E4 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 *v3; // r15
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ebx
  ULONG_PTR v8; // rsi
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r13
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  bool v14; // bl
  _QWORD *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // rbx
  __int64 v19; // r15
  ULONG_PTR v20; // rbx
  unsigned int v21; // ecx
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r9
  signed __int32 v28[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+30h] [rbp-78h]
  unsigned __int64 v30; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  __int128 v32; // [rsp+50h] [rbp-58h] BYREF
  __int128 v33; // [rsp+60h] [rbp-48h]
  unsigned int v34; // [rsp+70h] [rbp-38h]
  int v35; // [rsp+74h] [rbp-34h]
  ULONG_PTR v37; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)a1;
  v31 = *(_QWORD *)a1;
  if ( (_BYTE)a3 )
  {
    AlpcpProbeAndCaptureMessageHeader(a2, &v32, 0LL);
    LOBYTE(v5) = 1;
    v7 = AlpcpValidateMessage(&v32, v5, v6);
    v29 = v7;
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( WORD3(v32) )
    {
      v7 = AlpcpValidateDataInformation(v3, &v32);
      v29 = v7;
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
  }
  else
  {
    v32 = *a2;
    v33 = a2[1];
    v35 = HIDWORD(*((_QWORD *)a2 + 4));
    v34 = 0;
    LOBYTE(a2) = 1;
    v7 = AlpcpValidateMessage(&v32, a2, a3);
    if ( v7 < 0 )
      return (unsigned int)v7;
  }
  v7 = AlpcpLookupMessage(v4, DWORD2(v33), v34, &v37);
  v29 = v7;
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = v37;
  v9 = *(_DWORD *)(v37 + 40);
  if ( (v9 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v4, v37, 0x10000);
    return (unsigned int)-1073741769;
  }
  if ( (v9 & 0x200) != 0 || !*(_QWORD *)(v37 + 32) )
    goto LABEL_59;
  v10 = *(_QWORD *)(v37 + 16);
  if ( v10 != v4 )
  {
    if ( (v9 & 7) == 0 )
    {
      v11 = *(_QWORD *)(v37 + 24);
      if ( v11 )
      {
        v12 = *(_QWORD **)(v11 + 16);
        v13 = KeAbPreAcquire((ULONG_PTR)(v12 - 2), 0LL, 0);
        if ( _InterlockedCompareExchange64(v12 - 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v12 - 2, v13, (ULONG_PTR)(v12 - 2));
        if ( v13 )
          *(_BYTE *)(v13 + 26) |= 1u;
        if ( ((*(_DWORD *)(v11 + 416) >> 1) & 3) == 2 )
          v14 = *v12 == v4 || v12[1] == v4;
        else
          v14 = v12[2] == v4;
        if ( _InterlockedCompareExchange64(v12 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v12 - 2);
        KeAbPostRelease((ULONG_PTR)(v12 - 2));
        v8 = v37;
        goto LABEL_34;
      }
LABEL_59:
      AlpcpUnlockMessage(v8);
      return (unsigned int)-1073741790;
    }
    if ( (*(_BYTE *)(v4 + 416) & 6) != 6 )
      goto LABEL_59;
    v15 = *(_QWORD **)(v4 + 16);
    if ( !v15 || *v15 != v10 )
      goto LABEL_59;
  }
  if ( (v9 & 7) != 3 || (v9 & 0x4000) != 0 )
    goto LABEL_59;
  v14 = 1;
LABEL_34:
  if ( !v14 )
    goto LABEL_59;
  v16 = *(_QWORD *)(v8 + 96);
  if ( v16 )
    v17 = *(_QWORD *)(v16 + 32) - 40LL;
  else
    v17 = 512LL;
  v30 = v17;
  if ( (__int16)v32 > v17 )
  {
    v7 = AlpcpCaptureMessageData(v8, (__int16)v32, (char *)v3 + 40);
    v29 = v7;
  }
  else
  {
    memmove((void *)(v8 + 272), (char *)v3 + 40, (__int16)v32);
    v7 = 0;
    v29 = 0;
  }
  if ( v7 >= 0 )
  {
    *(_DWORD *)(v8 + 40) |= 0x10000u;
    _InterlockedOr(v28, 0);
    v18 = v37;
    v19 = *(_QWORD *)(v37 + 24);
    AlpcpRemoveMessageFromPendingQueue(v37);
    *(_DWORD *)(v18 + 232) = v32;
    *(_WORD *)(v18 + 236) = 2;
    v20 = v37;
    *(_OWORD *)(v37 + 240) = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(v8 + 40) |= 0x200u;
    v21 = *(_DWORD *)(v8 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v19 + 416) & 6));
    *(_DWORD *)(v8 + 40) = v21;
    if ( ((v21 >> 3) & 0xF) == 1 )
    {
      v22 = *(_QWORD *)(v19 + 16);
      v23 = KeAbPreAcquire(v22 - 16, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 - 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v22 - 16), v23, v22 - 16);
      if ( v23 )
        *(_BYTE *)(v23 + 26) |= 1u;
      v24 = *(_QWORD *)(v22 + 8);
      if ( v24 )
        *(_QWORD *)(v37 + 120) = *(_QWORD *)(v24 + 56);
      else
        *(_QWORD *)(v37 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v22 - 16));
      KeAbPostRelease(v22 - 16);
      v20 = v37;
    }
    else
    {
      *(_QWORD *)(v20 + 120) = *(_QWORD *)(v19 + 56);
    }
    v25 = *(_QWORD *)(v20 + 32);
    *(_QWORD *)(v20 + 32) = 0LL;
    --*(_WORD *)(v20 - 30);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 40) & 0xFFFEFEF8 | 0x105;
    AlpcpClearOwnerPortMessage(v20);
    AlpcpSetOwnerPortMessage(v20, (void *)v4);
    AlpcpUnlockMessage(v20);
    if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
      *(_QWORD *)(a1 + 24) = v25;
    else
      KeReleaseSemaphoreEx(v25 + 1600, 1u, 1, v26, 2);
    return v29;
  }
  else
  {
    AlpcpUnlockMessage(v8);
  }
  return (unsigned int)v7;
}
