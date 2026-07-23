/*
 * XREFs of RtlCreateActivationContext @ 0x180056830
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180056998 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x180056A1C (RtlpValidateActivationContextData.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800C9D94 (RtlpPlaceActivationContextOnLiveList.c)
 */

NTSTATUS __cdecl RtlCreateActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT_DATA ActivationContextData,
        ULONG ExtraBytes,
        PACTIVATION_CONTEXT_NOTIFY_ROUTINE NotificationRoutine,
        PVOID NotificationContext,
        PACTIVATION_CONTEXT *ActivationContext)
{
  __int64 v6; // rdi
  void *v9; // rsi
  NTSTATUS v10; // ebx
  _QWORD *Heap; // rax
  _ACTIVATION_CONTEXT *v12; // rdi
  _QWORD *v13; // r8
  __int64 v14; // rdx

  v6 = ExtraBytes;
  v9 = 0LL;
  if ( ActivationContextData == (PACTIVATION_CONTEXT_DATA)"Actx " )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() passed the empty activation context data\n", "RtlCreateActivationContext");
    return -1073741811;
  }
  if ( ActivationContext )
    *ActivationContext = 0LL;
  if ( !Flags && ActivationContextData && ExtraBytes <= 0x10000 && ActivationContext )
  {
    v10 = RtlpValidateActivationContextData();
    if ( v10 < 0 )
      return v10;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6 + 528);
    v9 = Heap;
    if ( !Heap )
      return -1073741801;
    *Heap = 1733124929LL;
    v12 = (_ACTIVATION_CONTEXT *)(Heap + 1);
    v13 = 0LL;
    v14 = *(unsigned int *)((char *)&ActivationContextData->FormatVersion + ActivationContextData->AssemblyRosterOffset);
    if ( (unsigned int)v14 <= 0x20 )
      v13 = Heap + 17;
    v10 = RtlpInitializeAssemblyStorageMap(Heap + 15, v14, v13);
    if ( v10 >= 0 )
    {
      *(_QWORD *)&v12->SentNotifications[2] = NotificationContext;
      *(_QWORD *)&v12->RefCount = 1LL;
      v12->NotificationContext = ActivationContextData;
      *(_QWORD *)v12->SentNotifications = NotificationRoutine;
      *(_QWORD *)&v12->SentNotifications[4] = 0LL;
      *(_QWORD *)&v12->SentNotifications[6] = 0LL;
      *(_QWORD *)v12->DisabledNotifications = 0LL;
      *(_QWORD *)&v12->DisabledNotifications[2] = 0LL;
      *(_QWORD *)&v12->DisabledNotifications[4] = 0LL;
      *(_QWORD *)&v12->DisabledNotifications[6] = 0LL;
      *(_QWORD *)&v12->StorageMap.Flags = 0LL;
      v12->StorageMap.AssemblyArray = 0LL;
      memset(&v12[1].NotificationContext, 0, 0x80uLL);
      LODWORD(v12[1].NotificationRoutine) = 0;
      if ( g_SxsKeepActivationContextsAlive )
        RtlpPlaceActivationContextOnLiveList(v12);
      *ActivationContext = v12;
      return 0;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return v10;
}
