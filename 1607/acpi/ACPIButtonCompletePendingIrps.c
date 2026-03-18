/*
 * XREFs of ACPIButtonCompletePendingIrps @ 0x1C00476D0
 * Callers:
 *     ACPIButtonEvent @ 0x1C0029490 (ACPIButtonEvent.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIButtonCompletePendingIrps(__int64 a1, int a2)
{
  char v3; // di
  KIRQL v5; // al
  __int64 *v6; // r8
  KIRQL v7; // r9
  __int64 *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  IRP *v14; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx
  _QWORD *v18; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v19; // [rsp+28h] [rbp-10h]

  v19 = &v18;
  v3 = 0;
  v18 = &v18;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiButtonLock);
  v6 = (__int64 *)AcpiButtonList;
  v7 = v5;
  while ( v6 != &AcpiButtonList )
  {
    v8 = v6 - 21;
    v6 = (__int64 *)*v6;
    if ( *(_QWORD *)(v8[23] + 40) == a1 && _InterlockedExchange64(v8 + 13, 0LL) )
    {
      *(_DWORD *)v8[3] = a2;
      v9 = v8 + 21;
      *((_DWORD *)v8 + 12) = 0;
      v8[7] = 4LL;
      v10 = v8[21];
      v11 = (__int64 *)v8[22];
      if ( *(_QWORD **)(v10 + 8) != v9 || (_QWORD *)*v11 != v9 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      v12 = v19;
      if ( *v19 != &v18 )
        __fastfail(3u);
      v9[1] = v19;
      *v9 = &v18;
      *v12 = v9;
      v19 = (_QWORD **)v9;
    }
  }
  KeReleaseSpinLock(&AcpiButtonLock, v7);
  v13 = v18;
  while ( v13 != &v18 )
  {
    v14 = (IRP *)(v13 - 21);
    v13 = (_QWORD *)*v13;
    Flink = v14->Tail.Overlay.ListEntry.Flink;
    Blink = v14->Tail.Overlay.ListEntry.Blink;
    if ( (void **)Flink->Blink != &v14->Tail.CompletionKey + 6 || (void **)Blink->Flink != &v14->Tail.CompletionKey + 6 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    IofCompleteRequest(v14, 0);
    v3 = 1;
  }
  return v3;
}
