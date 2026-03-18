/*
 * XREFs of ACPIFanCompletePendingIrps @ 0x1C003AE00
 * Callers:
 *     ACPIFanLoop @ 0x1C003B218 (ACPIFanLoop.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIFanCompletePendingIrps(__int64 a1, char a2)
{
  KSPIN_LOCK *v3; // rbp
  char v4; // bl
  KIRQL v6; // r10
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  char v10; // al
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD **v14; // rcx
  _QWORD *v15; // rdi
  IRP *v16; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx
  _QWORD *v20; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-10h]

  v21 = &v20;
  v3 = (KSPIN_LOCK *)(a1 + 176);
  v4 = 0;
  v20 = &v20;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v7 = *(_QWORD **)(a1 + 208);
  while ( v7 != (_QWORD *)(a1 + 208) )
  {
    v8 = v7 - 21;
    v7 = (_QWORD *)*v7;
    v9 = v8[3];
    if ( (a2 || *(_DWORD *)v9 != *(_DWORD *)(a1 + 280)) && _InterlockedExchange64(v8 + 13, 0LL) )
    {
      *(_DWORD *)v9 = *(_DWORD *)(a1 + 280);
      if ( *(_DWORD *)(a1 + 328) == 1 || (v10 = 0, *(_BYTE *)(a1 + 276)) )
        v10 = 1;
      *(_BYTE *)(v9 + 4) = v10;
      v11 = v8 + 21;
      v8[7] = 8LL;
      *((_DWORD *)v8 + 12) = 0;
      v12 = v8[21];
      v13 = (_QWORD *)v8[22];
      if ( *(_QWORD **)(v12 + 8) != v11 || (_QWORD *)*v13 != v11 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v14 = (_QWORD **)v21;
      *v11 = &v20;
      v11[1] = v14;
      if ( *v14 != &v20 )
        __fastfail(3u);
      *v14 = v11;
      v21 = v11;
      break;
    }
  }
  KeReleaseSpinLock(v3, v6);
  v15 = v20;
  while ( v15 != &v20 )
  {
    v16 = (IRP *)(v15 - 21);
    v15 = (_QWORD *)*v15;
    Flink = v16->Tail.Overlay.ListEntry.Flink;
    Blink = v16->Tail.Overlay.ListEntry.Blink;
    if ( (void **)Flink->Blink != &v16->Tail.CompletionKey + 6 || (void **)Blink->Flink != &v16->Tail.CompletionKey + 6 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    IofCompleteRequest(v16, 0);
    v4 = 1;
  }
  return v4;
}
