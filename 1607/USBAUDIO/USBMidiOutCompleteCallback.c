/*
 * XREFs of USBMidiOutCompleteCallback @ 0x1C0006610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall USBMidiOutCompleteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KSSTREAM_POINTER *v4; // rcx
  NTSTATUS v5; // edx
  struct _KSPIN *Pin; // rbp
  KSPIN_LOCK *Context; // rdi
  struct _KSSTREAM_POINTER *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  KIRQL v11; // si
  PKSGATE i; // rax

  v4 = *(struct _KSSTREAM_POINTER **)(a3 + 40);
  v5 = *(_DWORD *)(a2 + 48);
  Pin = v4->Pin;
  if ( *(int *)(*(_QWORD *)(a3 + 24) + 4LL) < 0 )
    v5 = -1073741668;
  Context = (KSPIN_LOCK *)Pin->Context;
  if ( v5 < 0 )
    KsStreamPointerSetStatusCode(v4, v5);
  v8 = *(struct _KSSTREAM_POINTER **)(a3 + 40);
  v9 = *((_QWORD *)v8->Pin->Context + 17);
  KsStreamPointerDelete(v8);
  v10 = *(_QWORD *)(v9 + 80);
  ++*(_DWORD *)(v10 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v10) < *(_WORD *)(v10 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v10, (PSLIST_ENTRY)a3);
  }
  else
  {
    ++*(_DWORD *)(v10 + 32);
    (*(void (__fastcall **)(__int64))(v10 + 56))(a3);
  }
  v11 = KeAcquireSpinLockRaiseToDpc(Context + 12);
  if ( *((_DWORD *)Context + 10) == 20 )
  {
    for ( i = KsPinGetAndGate(Pin); i && _InterlockedIncrement(&i->Count) == 1; i = i->NextGate )
      ;
    KsPinAttemptProcessing(Pin, 1u);
    *((_BYTE *)Context + 36) = 0;
  }
  --*((_DWORD *)Context + 10);
  KeReleaseSpinLock(Context + 12, v11);
  return 3221225494LL;
}
