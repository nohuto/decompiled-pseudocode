/*
 * XREFs of RtlQueueWorkItem @ 0x18000BBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x18000165C (RtlpTpETWCallbackEnqueue.c)
 *     RtlpTpWorkUnposted @ 0x180008900 (RtlpTpWorkUnposted.c)
 *     RtlpTpDeleteData @ 0x1800089F8 (RtlpTpDeleteData.c)
 *     TpUnreserveTaskPost @ 0x180008A0C (TpUnreserveTaskPost.c)
 *     RtlpTpRevertCapture @ 0x180008A70 (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x180008AF0 (RtlpTpInitializeData.c)
 *     TpReserveTaskPost @ 0x180008B64 (TpReserveTaskPost.c)
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     RtlpTpResumeImpersonation @ 0x180008C60 (RtlpTpResumeImpersonation.c)
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x18000D770 (RtlQueryInformationActivationContext.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     TpPostTask @ 0x18002E55C (TpPostTask.c)
 *     RtlPcToFileHeader @ 0x180037810 (RtlPcToFileHeader.c)
 */

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  NTSTATUS v6; // esi
  HANDLE *Heap; // rax
  HANDLE *v8; // rdi
  NTSTATUS InformationActivationContext; // eax
  volatile signed __int32 **v10; // r14
  int v11; // eax
  HANDLE v12; // rdx
  _ACTIVATION_CONTEXT *v14; // rcx
  char v15; // [rsp+40h] [rbp-A8h]
  char v16; // [rsp+41h] [rbp-A7h]
  char v17; // [rsp+42h] [rbp-A6h]
  char v18; // [rsp+43h] [rbp-A5h]
  int v19; // [rsp+44h] [rbp-A4h]
  HANDLE *BaseAddress; // [rsp+48h] [rbp-A0h]
  PACTIVATION_CONTEXT ActivationContext[2]; // [rsp+50h] [rbp-98h] BYREF
  int v22; // [rsp+60h] [rbp-88h] BYREF
  __int64 v23; // [rsp+68h] [rbp-80h]
  __int64 v24; // [rsp+70h] [rbp-78h]
  __int64 v25; // [rsp+78h] [rbp-70h]
  __int128 v26; // [rsp+80h] [rbp-68h]
  __int64 v27; // [rsp+90h] [rbp-58h]
  int v28; // [rsp+98h] [rbp-50h]
  int v29; // [rsp+9Ch] [rbp-4Ch]
  int v30; // [rsp+A0h] [rbp-48h]
  struct _TEB *v31; // [rsp+B0h] [rbp-38h]
  HANDLE v32; // [rsp+108h] [rbp+20h] BYREF

  *(_OWORD *)ActivationContext = 0LL;
  v17 = 0;
  v16 = 0;
  v18 = 0;
  v15 = 0;
  v32 = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  v6 = RtlpTpRevertCapture(&v32, Flags & 0x100);
  v19 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
    v8 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v6 = RtlpTpInitializeData(Heap + 5, Flags, v32);
      v19 = v6;
      if ( v6 >= 0 )
      {
        v18 = 1;
        BaseAddress[12] = NtCurrentTeb()->SubProcessTag;
        v8 = BaseAddress;
        *(_GUID *)(BaseAddress + 13) = NtCurrentTeb()->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(
                                         1u,
                                         0LL,
                                         0LL,
                                         ActivationContextBasicInformation,
                                         ActivationContext,
                                         0x10uLL,
                                         0LL);
        v6 = InformationActivationContext;
        v19 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( ((__int64)ActivationContext[1] & 1) != 0 )
          {
            RtlReleaseActivationContext(ActivationContext[0]);
            ActivationContext[0] = (PACTIVATION_CONTEXT)-1LL;
          }
          BaseAddress[9] = ActivationContext[0];
          v17 = 1;
          *((_DWORD *)BaseAddress + 22) = 2;
          BaseAddress[7] = Function;
          BaseAddress[8] = Context;
          v10 = (volatile signed __int32 **)(BaseAddress + 4);
          BaseAddress[4] = 0LL;
          v22 = 3;
          v23 = 0LL;
          v24 = 0LL;
          v25 = 0LL;
          v26 = 0LL;
          v27 = 0LL;
          v28 = 0;
          v29 = 1;
          v30 = 72;
          v11 = 0;
          if ( (Flags & 0xC0) != 0 )
            v11 = 2;
          v28 = v11;
          *BaseAddress = &RtlpTpWorkTaskCallbacks;
          *((_DWORD *)BaseAddress + 2) = 0;
          v6 = TpReserveTaskPost(*v10, (__int64)BaseAddress, (__int64)&v22);
          v19 = v6;
          if ( v6 >= 0 )
          {
            v15 = 1;
            RtlPcToFileHeader(BaseAddress[7], BaseAddress + 10);
            v12 = BaseAddress[10];
            if ( v12 )
            {
              LdrAddRefDll(0, v12);
              v16 = 1;
              if ( MEMORY[0x7FFE0386] )
              {
                v31 = NtCurrentTeb();
                v8 = BaseAddress;
                RtlpTpETWCallbackEnqueue(
                  (__int64)*v10,
                  (__int64)BaseAddress,
                  (__int64)BaseAddress[7],
                  (__int64)BaseAddress[8],
                  (__int64)v31->SubProcessTag);
              }
              TpPostTask(v8, *v10, 1LL, &v22);
              if ( !_InterlockedDecrement((volatile signed __int32 *)BaseAddress + 22) )
                RtlpTpWorkUnposted((__int64)BaseAddress, (__int64)*v10);
              v8 = 0LL;
              BaseAddress = 0LL;
              v6 = 0;
              v19 = 0;
            }
          }
          goto LABEL_21;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          BaseAddress[9] = (HANDLE)-1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v19 = -1073741801;
    }
  }
LABEL_21:
  if ( v8 )
  {
    if ( v17 )
    {
      v14 = (_ACTIVATION_CONTEXT *)v8[9];
      if ( v14 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v14);
    }
    if ( v15 )
      TpUnreserveTaskPost((volatile signed __int32 *)v8[4], (__int64)&v22);
    if ( v16 )
      LdrUnloadDll(v8[10]);
    if ( v18 )
      RtlpTpDeleteData(v8 + 5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v6 = v19;
  }
  RtlpTpResumeImpersonation(v32);
  return v6;
}
