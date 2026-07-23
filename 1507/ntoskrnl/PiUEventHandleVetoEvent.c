/*
 * XREFs of PiUEventHandleVetoEvent @ 0x14055E55C
 * Callers:
 *     PiUEventHandleIoctl @ 0x140416618 (PiUEventHandleIoctl.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PsGetProcessImageFileName @ 0x140120260 (PsGetProcessImageFileName.c)
 *     RtlStringCchCopyNW @ 0x140154884 (RtlStringCchCopyNW.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140443A34 (PsGetAllocatedFullProcessImageName.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14045DAB4 (PiUEventDequeuePendingEventWorker.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x1405114D8 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall PiUEventHandleVetoEvent(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  UNICODE_STRING *v6; // rax
  PEPROCESS v7; // rbx
  int AllocatedFullProcessImageName; // edi
  char v9; // r13
  __int64 v10; // rbx
  ULONG_PTR v11; // r14
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // r12
  __int64 **v16; // r14
  __int64 *v17; // r14
  ULONG_PTR v18; // rbx
  unsigned __int8 v19; // si
  signed __int32 v20; // eax
  ULONG_PTR v22; // rbx
  unsigned __int8 v23; // si
  signed __int32 v24; // eax
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int8 v27; // r12
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  const UNICODE_STRING *v30; // rbx
  const CHAR *ProcessImageFileName; // rax
  unsigned __int8 v32; // bl
  signed __int32 v33; // eax
  PEPROCESS Process; // [rsp+20h] [rbp-30h] BYREF
  __int64 v35; // [rsp+28h] [rbp-28h]
  UNICODE_STRING v36; // [rsp+30h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+80h] [rbp+30h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0LL;
  v36.Length = 0;
  *(_QWORD *)&v36.MaximumLength = 0LL;
  v7 = 0LL;
  Process = 0LL;
  AllocatedFullProcessImageName = 0;
  *(_DWORD *)((char *)&v36.Buffer + 2) = 0;
  v9 = 0;
  HIWORD(v36.Buffer) = 0;
  P = 0LL;
  if ( !v5 || !a2 || a3 != 8 )
  {
    AllocatedFullProcessImageName = -1073741811;
LABEL_13:
    if ( v9 )
    {
      RtlFreeAnsiString(v6);
    }
    else if ( v6 && v6 != &v36 )
    {
      ExFreePoolWithTag(v6, 0);
    }
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    goto LABEL_17;
  }
  v10 = *a2;
  v11 = *(_QWORD *)(v5 + 16);
  v35 = *a2;
  v12 = KeAbPreAcquire(v11, 0LL, 0LL, a4);
  v14 = v12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v11, 0) )
    ExpAcquireFastMutexContended(v11, v12);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 48) = CurrentIrql;
  v16 = (__int64 **)(v5 + 96);
  if ( *v16 != (__int64 *)v16 )
  {
    v17 = *v16;
    if ( *(_BYTE *)(v17[3] + 69) )
    {
      v25 = KeAbPreAcquire((ULONG_PTR)&PiUEventUsermodeEventQueueLock, 0LL, 0LL, v13);
      v26 = v25;
      v27 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventUsermodeEventQueueLock, v25);
      if ( v26 )
        *(_BYTE *)(v26 + 26) |= 1u;
      qword_14034AF28 = (__int64)KeGetCurrentThread();
      dword_14034AF50 = v27;
      v28 = v17[3];
      v29 = *(_DWORD **)(v28 + 32);
      if ( v29 && *(_QWORD *)(v28 + 40) && !*v29 )
      {
        if ( (_BYTE)v10 )
        {
          *v29 = HIDWORD(v35);
          if ( PsLookupProcessByProcessId(*(HANDLE *)(v5 + 48), &Process) < 0
            || (AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageName((__int64)Process, &P),
                AllocatedFullProcessImageName < 0) )
          {
            v30 = &v36;
            P = &v36;
            RtlInitUnicodeString(&v36, &word_1405C95F0);
            AllocatedFullProcessImageName = 0;
          }
          else
          {
            v30 = (const UNICODE_STRING *)P;
            if ( !*(_WORD *)P )
            {
              v9 = 1;
              ExFreePoolWithTag(P, 0);
              v30 = &v36;
              P = &v36;
              ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)Process);
              RtlInitAnsiString(&DestinationString, ProcessImageFileName);
              RtlAnsiStringToUnicodeString(&v36, &DestinationString, 1u);
            }
          }
          if ( v30->Length > 0x400u )
          {
            AllocatedFullProcessImageName = RtlStringCchCopyNW(
                                              *(NTSTRSAFE_PWSTR *)(*(_QWORD *)(v17[3] + 40) + 8LL),
                                              0x200uLL,
                                              v30->Buffer,
                                              0x1FFuLL);
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v17[3] + 40) + 8LL) + 1022LL) = 0;
            **(_WORD **)(v17[3] + 40) = 1024;
          }
          else
          {
            RtlCopyUnicodeString(*(PUNICODE_STRING *)(v17[3] + 40), v30);
          }
          KeSetEvent(*(PRKEVENT *)(v17[3] + 24), 0, 0);
        }
        else
        {
          **(_WORD **)(*(_QWORD *)(v28 + 40) + 8LL) = 0;
          **(_WORD **)(v28 + 40) = 0;
          **(_DWORD **)(v28 + 32) = 0;
        }
      }
      v32 = dword_14034AF50;
      qword_14034AF28 = 0LL;
      v33 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 1, 0);
      if ( v33 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, v33);
      __writecr8(v32);
      KeAbPostRelease((ULONG_PTR)&PiUEventUsermodeEventQueueLock);
    }
    PiUEventDequeuePendingEventWorker(v5, v17, 1);
    v18 = *(_QWORD *)(v5 + 16);
    v19 = *(_BYTE *)(v18 + 48);
    *(_QWORD *)(v18 + 8) = 0LL;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)v18, 1, 0);
    if ( v20 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v18, v20);
    __writecr8(v19);
    KeAbPostRelease(v18);
    v6 = (UNICODE_STRING *)P;
    v7 = Process;
    goto LABEL_13;
  }
  v22 = *(_QWORD *)(v5 + 16);
  AllocatedFullProcessImageName = -1073741811;
  v23 = *(_BYTE *)(v22 + 48);
  *(_QWORD *)(v22 + 8) = 0LL;
  v24 = _InterlockedCompareExchange((volatile signed __int32 *)v22, 1, 0);
  if ( v24 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v22, v24);
  __writecr8(v23);
  KeAbPostRelease(v22);
LABEL_17:
  *(_QWORD *)(a5 + 8) = 0LL;
  return (unsigned int)AllocatedFullProcessImageName;
}
