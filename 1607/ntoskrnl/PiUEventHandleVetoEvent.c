/*
 * XREFs of PiUEventHandleVetoEvent @ 0x14052916C
 * Callers:
 *     PiUEventHandleIoctl @ 0x14048C4D4 (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14002DD60 (RtlCopyUnicodeString.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x140074CF4 (RtlInitAnsiString.c)
 *     RtlStringCchCopyNW @ 0x140084FB0 (RtlStringCchCopyNW.c)
 *     PsGetProcessImageFileName @ 0x1400A5364 (PsGetProcessImageFileName.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1403E6A2C (PsGetAllocatedFullProcessImageName.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1403EF44C (PiUEventDequeuePendingEventWorker.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x140420700 (PsLookupProcessByProcessId.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall PiUEventHandleVetoEvent(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  int AllocatedFullProcessImageName; // esi
  PEPROCESS v7; // r15
  UNICODE_STRING *v8; // rdi
  char v9; // r12
  __int64 v10; // rbx
  struct _FAST_MUTEX *v11; // rcx
  __int64 **v12; // r13
  __int64 *v13; // r13
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  NTSTATUS v17; // eax
  const char *ProcessImageFileName; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  STRING DestinationString; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING v21; // [rsp+38h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp+30h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v21.Length = 0;
  *(_QWORD *)&v21.MaximumLength = 0LL;
  AllocatedFullProcessImageName = 0;
  *(_DWORD *)((char *)&v21.Buffer + 2) = 0;
  v7 = 0LL;
  HIWORD(v21.Buffer) = 0;
  v8 = 0LL;
  Process = 0LL;
  v9 = 0;
  P = 0LL;
  if ( v5 && a2 && a3 == 8 )
  {
    v10 = *a2;
    v11 = *(struct _FAST_MUTEX **)(v5 + 16);
    *(_QWORD *)&DestinationString.Length = *a2;
    ExAcquireFastMutex(v11);
    v12 = (__int64 **)(v5 + 96);
    if ( *v12 == (__int64 *)v12 )
    {
      AllocatedFullProcessImageName = -1073741811;
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
      goto LABEL_11;
    }
    v13 = *v12;
    if ( *(_BYTE *)(v13[3] + 69) )
    {
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      v15 = v13[3];
      v16 = *(_DWORD **)(v15 + 32);
      if ( v16 && *(_QWORD *)(v15 + 40) && !*v16 )
      {
        if ( (_BYTE)v10 )
        {
          *v16 = *(_DWORD *)(&DestinationString.MaximumLength + 1);
          v17 = PsLookupProcessByProcessId(*(HANDLE *)(v5 + 48), &Process);
          v7 = Process;
          if ( v17 < 0
            || (AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageName((__int64)Process, &P),
                AllocatedFullProcessImageName < 0) )
          {
            v8 = &v21;
            RtlInitUnicodeString(&v21, &word_140583CF0);
            AllocatedFullProcessImageName = 0;
          }
          else
          {
            v8 = (UNICODE_STRING *)P;
            if ( !*(_WORD *)P )
            {
              v9 = 1;
              ExFreePoolWithTag(P, 0);
              v8 = &v21;
              ProcessImageFileName = (const char *)PsGetProcessImageFileName((__int64)v7);
              RtlInitAnsiString(&DestinationString, ProcessImageFileName);
              RtlAnsiStringToUnicodeString(&v21, &DestinationString, 1u);
            }
          }
          if ( v8->Length > 0x400u )
          {
            AllocatedFullProcessImageName = RtlStringCchCopyNW(
                                              *(NTSTRSAFE_PWSTR *)(*(_QWORD *)(v13[3] + 40) + 8LL),
                                              0x200uLL,
                                              v8->Buffer,
                                              0x1FFuLL);
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v13[3] + 40) + 8LL) + 1022LL) = 0;
            **(_WORD **)(v13[3] + 40) = 1024;
          }
          else
          {
            RtlCopyUnicodeString(*(PUNICODE_STRING *)(v13[3] + 40), v8);
          }
          KeSetEvent(*(PRKEVENT *)(v13[3] + 24), 0, 0);
        }
        else
        {
          **(_WORD **)(*(_QWORD *)(v15 + 40) + 8LL) = 0;
          **(_WORD **)(v15 + 40) = 0;
          **(_DWORD **)(v15 + 32) = 0;
        }
      }
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    }
    PiUEventDequeuePendingEventWorker(v5, v13, 1);
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
  }
  else
  {
    AllocatedFullProcessImageName = -1073741811;
  }
  if ( v9 )
  {
    RtlFreeAnsiString(v8);
  }
  else if ( v8 && v8 != &v21 )
  {
    ExFreePoolWithTag(v8, 0);
  }
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
LABEL_11:
  *(_QWORD *)(a5 + 8) = 0LL;
  return (unsigned int)AllocatedFullProcessImageName;
}
