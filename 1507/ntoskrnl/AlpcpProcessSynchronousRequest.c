/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x14047AD50
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x14047B5F0 (NtAlpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x1405326A4 (LpcpRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x14069E284 (LpcSendWaitReceivePort.c)
 *     LpcpReplyWaitReplyPort @ 0x14069E35C (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AlpcpReadMessageData @ 0x14047A100 (AlpcpReadMessageData.c)
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpExposeAttributes @ 0x140480310 (AlpcpExposeAttributes.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14052F9E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405327A0 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14054F010 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x14069E9EC (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        unsigned __int64 *a6,
        _DWORD *Address,
        PLARGE_INTEGER p_QuadPart,
        unsigned __int8 a9,
        KPROCESSOR_MODE a10)
{
  unsigned __int8 v11; // r12
  PLARGE_INTEGER v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rsi
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  unsigned __int64 *v17; // rcx
  _QWORD *v18; // rcx
  _DWORD *v19; // r15
  int *v20; // rcx
  int v21; // edi
  ULONG v22; // r8d
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  _BYTE *v26; // rcx
  void **v27; // r12
  __int64 v28; // rdi
  __int64 v29; // r9
  void *v30; // r14
  int v32; // eax
  unsigned int v33; // r12d
  int v34; // eax
  ULONG_PTR v35; // rdi
  int v36; // edx
  unsigned __int64 v37; // rax
  int v38; // esi
  ULONG_PTR v39; // rdi
  char v40; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v42; // rbx
  int (__fastcall *v43)(ULONG_PTR); // rax
  __int16 v44; // ax
  __int16 v45; // ax
  char *v46; // rdx
  _DWORD *v47; // rsi
  signed __int64 v48; // rax
  void *v49; // rcx
  int v50; // esi
  ULONG_PTR v51; // rdi
  char v52; // cl
  signed __int64 v53; // rcx
  __int64 v54; // rbx
  int (__fastcall *v55)(ULONG_PTR); // rax
  _SLIST_HEADER *v56; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-B8h] BYREF
  char v58; // [rsp+38h] [rbp-B0h]
  int v59; // [rsp+40h] [rbp-A8h]
  void *v60; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v61; // [rsp+50h] [rbp-98h]
  int v62; // [rsp+58h] [rbp-90h]
  LONGLONG QuadPart; // [rsp+60h] [rbp-88h] BYREF
  int v64[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v65; // [rsp+78h] [rbp-70h]
  __int64 v66; // [rsp+80h] [rbp-68h]
  __int64 v67; // [rsp+88h] [rbp-60h]
  __int64 v68; // [rsp+90h] [rbp-58h]
  __int64 v69; // [rsp+98h] [rbp-50h]
  __int64 v70; // [rsp+A0h] [rbp-48h]
  __int64 v71; // [rsp+A8h] [rbp-40h]
  unsigned int v75; // [rsp+130h] [rbp+48h]

  *(_QWORD *)v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v59 = 0;
  v61 = -1LL;
  v11 = a9;
  if ( a9 )
  {
    v12 = p_QuadPart;
    if ( p_QuadPart )
    {
      if ( (unsigned __int64)p_QuadPart >= MmUserProbeAddress )
        v12 = (PLARGE_INTEGER)MmUserProbeAddress;
      QuadPart = v12->QuadPart;
      p_QuadPart = (PLARGE_INTEGER)&QuadPart;
    }
    v13 = a2 & 0xC0000000;
    v14 = a5;
    if ( v13 == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (_BYTE *)a5;
      if ( a5 >= MmUserProbeAddress )
        v15 = (_BYTE *)MmUserProbeAddress;
      *v15 = *v15;
      v15[23] = v15[23];
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (_BYTE *)a5;
      if ( a5 >= MmUserProbeAddress )
        v16 = (_BYTE *)MmUserProbeAddress;
      *v16 = *v16;
      v16[39] = v16[39];
    }
    if ( a6 )
    {
      v17 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v17 = (unsigned __int64 *)MmUserProbeAddress;
      v61 = *v17;
      v18 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v18 = (_QWORD *)MmUserProbeAddress;
      *v18 = *v18;
    }
    v19 = Address;
    if ( Address )
    {
      v58 = 1;
      v20 = Address;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v20 = (int *)MmUserProbeAddress;
      v21 = *v20;
      v22 = 8;
      v23 = *v20;
      if ( v13 == 0x80000000 )
      {
        if ( (v13 & v23) != 0 )
          v22 = 20;
        if ( (v21 & 0x40000000) != 0 )
          v22 += 16;
        if ( (v21 & 0x20000000) != 0 )
          v22 += 20;
        if ( (v21 & 0x10000000) != 0 )
          v22 += 16;
        if ( (v21 & 0x8000000) != 0 )
          v22 += 24;
        v24 = v22;
        v22 = 4;
      }
      else
      {
        v24 = 8;
        if ( v23 < 0 )
          v24 = 32;
        if ( (v21 & 0x40000000) != 0 )
          v24 += 32;
        if ( (v21 & 0x20000000) != 0 )
          v24 += 32;
        if ( (v21 & 0x10000000) != 0 )
          v24 += 24;
        if ( (v21 & 0x8000000) != 0 )
          v24 += 24;
        if ( (v21 & 0x4000000) != 0 )
          v24 += 8;
      }
      v25 = v24;
      if ( (unsigned __int64)v24 - 1 > 0xFFE )
      {
        ProbeForWrite(Address, v24, v22);
      }
      else
      {
        if ( ((v22 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        v26 = Address;
        if ( (unsigned __int64)Address >= MmUserProbeAddress )
          v26 = (_BYTE *)MmUserProbeAddress;
        *v26 = *v26;
        v26[v25 - 1] = v26[v25 - 1];
      }
      v59 = v21;
    }
  }
  else
  {
    if ( a6 )
      v61 = *a6;
    v19 = Address;
    v14 = a5;
    if ( Address )
      v59 = *Address;
  }
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v30 = (void *)a1;
    v60 = (void *)a1;
LABEL_77:
    *(_QWORD *)v64 = a1;
    LODWORD(v70) = a2;
    if ( (*(_DWORD *)(a1 + 416) & 0x1000) != 0 )
      v32 = AlpcpSendLegacySynchronousRequest((PVOID)a1);
    else
      v32 = AlpcpSendMessage(v64, a3, a4, v11);
    v33 = v32;
    if ( v32 >= 0 )
    {
      BugCheckParameter2 = 0LL;
      *(_QWORD *)v64 = v30;
      v33 = AlpcpReceiveSynchronousReply((__int64 *)v64, a10, (__int64 *)&BugCheckParameter2, v59, p_QuadPart);
      if ( !v33 )
      {
        v34 = 40;
        if ( (a2 & 0xC0000000) == 0x80000000 )
          v34 = 24;
        v35 = BugCheckParameter2;
        v36 = *(unsigned __int16 *)(BugCheckParameter2 + 224);
        v37 = (unsigned int)(v36 + v34);
        v75 = v37;
        if ( a6 && v37 > v61 )
        {
          v33 = AlpcpReturnMessageOnInsufficientBuffer(v30, BugCheckParameter2);
          if ( v33 == -1073741789 )
          {
            if ( AlpcpMessageLogEnabled )
              AlpcpEnterStateChangeEventMessageLog(v35);
            v38 = 0;
            v39 = v35 - 48;
            v40 = *(_BYTE *)(v39 + 16);
            if ( (v40 & 1) != 0 )
            {
              v38 = 0x10000 - *(__int16 *)(v39 + 18);
              *(_BYTE *)(v39 + 16) = v40 & 0xFE;
              *(_WORD *)(v39 + 18) = 0;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v39 + 32));
            KeAbPostRelease(v39 + 32);
            if ( v38 > 0 )
            {
              BugCheckParameter4 = -v38 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 24), -v38);
              if ( BugCheckParameter4 <= 0 )
              {
                if ( BugCheckParameter4 )
                  KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
                v42 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v39 + 17)];
                v43 = *(int (__fastcall **)(ULONG_PTR))(v42 + 32);
                if ( !v43 || v43(BugCheckParameter2) >= 0 )
                {
                  if ( (*(_BYTE *)(v39 + 16) & 2) != 0 )
                  {
                    ExFreeToNPagedLookasideList(
                      (PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v42 + 8),
                      (PVOID)v39);
                  }
                  else if ( *(_QWORD *)(v42 + 40) )
                  {
                    (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides
                     + 16 * (unsigned __int64)*(unsigned int *)(v42 + 8)
                     + 7))(v39);
                  }
                  else
                  {
                    ExFreePoolWithTag((PVOID)v39, *(_DWORD *)(v42 + 4));
                  }
                }
              }
            }
            *a6 = v75;
          }
          else
          {
            AlpcpCancelMessage(v30, v35, 0x10000LL);
          }
        }
        else
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)v14 = v36;
            v62 = *(unsigned __int16 *)(v35 + 224) + 24;
            *(_WORD *)(v14 + 2) = v62;
            v44 = *(_WORD *)(v35 + 230);
            if ( v44 )
              v45 = v44 - 16;
            else
              v45 = 0;
            *(_WORD *)(v14 + 6) = v45;
            *(_WORD *)(v14 + 4) = *(_WORD *)(v35 + 228) | 0x1000;
            *(_DWORD *)(v14 + 8) = *(_DWORD *)(v35 + 232);
            *(_DWORD *)(v14 + 12) = *(_DWORD *)(v35 + 240);
            *(_DWORD *)(v14 + 16) = *(_DWORD *)(v35 + 248);
            *(_DWORD *)(v14 + 20) = *(_DWORD *)(v35 + 256);
            *(_DWORD *)(v14 + 20) = *(_DWORD *)(v35 + 256);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(v14 + 4) &= 0xC00Fu;
            v46 = (char *)(v14 + 24);
          }
          else
          {
            *(_OWORD *)v14 = *(_OWORD *)(BugCheckParameter2 + 224);
            *(_OWORD *)(v14 + 16) = *(_OWORD *)(v35 + 240);
            *(_QWORD *)(v14 + 32) = *(_QWORD *)(v35 + 256);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(v14 + 4) &= 0xC00Fu;
            v62 = *(unsigned __int16 *)(v35 + 226);
            v46 = (char *)(v14 + 40);
          }
          if ( *(_QWORD *)(v35 + 168) )
            AlpcpGetDataFromUserVaSafe(v35, v46);
          else
            AlpcpReadMessageData(v35, v46);
          if ( a6 )
            *a6 = v75;
          if ( v19 )
            AlpcpExposeAttributes(a1, a2, v35, v19);
          v47 = (_DWORD *)(v35 + 40);
          if ( (*(_DWORD *)(v35 + 40) & 0x200) != 0 && !*(_QWORD *)(v35 + 96) && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
          {
            v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v35, 0LL);
            v35 = BugCheckParameter2;
            if ( !v48 )
            {
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterFreeEventMessageLog(BugCheckParameter2);
              ++*(_WORD *)(v35 - 30);
              *(_DWORD *)(v35 + 248) |= 0x80000000;
              v49 = *(void **)(v35 + 24);
              if ( v49 )
              {
                if ( (*v47 & 0x1000) != 0 )
                  ObfDereferenceObject(v49);
                *(_QWORD *)(v35 + 24) = 0LL;
              }
            }
          }
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v35);
          v50 = 0;
          v51 = v35 - 48;
          v52 = *(_BYTE *)(v51 + 16);
          if ( (v52 & 1) != 0 )
          {
            v50 = 0x10000 - *(__int16 *)(v51 + 18);
            *(_BYTE *)(v51 + 16) = v52 & 0xFE;
            *(_WORD *)(v51 + 18) = 0;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v51 + 32));
          KeAbPostRelease(v51 + 32);
          if ( v50 > 0 )
          {
            v53 = -v50 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 24), -v50);
            if ( v53 <= 0 )
            {
              if ( v53 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v53);
              v54 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v51 + 17)];
              v55 = *(int (__fastcall **)(ULONG_PTR))(v54 + 32);
              if ( !v55 || v55(BugCheckParameter2) >= 0 )
              {
                if ( (*(_BYTE *)(v51 + 16) & 2) != 0 )
                {
                  v56 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v54 + 8);
                  ++*((_DWORD *)&v56[1].HeaderX64 + 3);
                  if ( LOWORD(v56->Alignment) < LOWORD(v56[1].Alignment) )
                  {
                    RtlpInterlockedPushEntrySList(v56, (PSLIST_ENTRY)v51);
                  }
                  else
                  {
                    ++LODWORD(v56[2].Alignment);
                    ((void (__fastcall *)(ULONG_PTR))v56[3].Region)(v51);
                  }
                }
                else if ( *(_QWORD *)(v54 + 40) )
                {
                  (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides
                   + 16 * (unsigned __int64)*(unsigned int *)(v54 + 8)
                   + 7))(v51);
                }
                else
                {
                  ExFreePoolWithTag((PVOID)v51, *(_DWORD *)(v54 + 4));
                }
              }
            }
          }
        }
      }
    }
    if ( v30 != (void *)a1 )
      ObfDereferenceObject(v30);
    return v33;
  }
  v27 = *(void ***)(a1 + 16);
  v28 = KeAbPreAcquire((ULONG_PTR)(v27 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)v27 - 2, v28, (ULONG_PTR)(v27 - 2), v29);
  if ( v28 )
    *(_BYTE *)(v28 + 26) |= 1u;
  v30 = *v27;
  v60 = v30;
  if ( v30 && ObReferenceObjectSafe((__int64)v30) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v27 - 2);
    KeAbPostRelease((ULONG_PTR)(v27 - 2));
    v11 = a9;
    goto LABEL_77;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v27 - 2);
  KeAbPostRelease((ULONG_PTR)(v27 - 2));
  return 3221225527LL;
}
