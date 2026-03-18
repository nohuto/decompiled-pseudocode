/*
 * XREFs of AcpiPccCallbackDpc @ 0x1C00521C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AcpiPccCallbackDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v4; // rbp
  unsigned int v5; // r14d
  KIRQL v7; // al
  int v8; // edx
  _QWORD **v9; // rbx
  void (__fastcall *v10)(_QWORD, KSPIN_LOCK); // rsi
  KSPIN_LOCK v11; // r15
  int v12; // ecx
  KIRQL v13; // r9
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  unsigned int v16; // edx

  v4 = DeferredContext + 65;
  v5 = (unsigned int)SystemArgument1;
  v7 = KeAcquireSpinLockRaiseToDpc(DeferredContext + 65);
  v8 = *(_DWORD *)DeferredContext;
  v9 = 0LL;
  v10 = (void (__fastcall *)(_QWORD, KSPIN_LOCK))DeferredContext[16];
  v11 = DeferredContext[17];
  v12 = *(_DWORD *)DeferredContext & 0x3C;
  DeferredContext[16] = 0LL;
  v13 = v7;
  DeferredContext[17] = 0LL;
  if ( (_BYTE)v12 != 24 )
  {
    v16 = v8 & 0xFFFFFFC3 | 0x14;
    goto LABEL_9;
  }
  v14 = (_QWORD **)(DeferredContext + 14);
  if ( *v14 == v14 )
  {
    v16 = v8 & 0xFFFFFFC3 | 0xC;
LABEL_9:
    *(_DWORD *)DeferredContext = v16;
    goto LABEL_10;
  }
  v9 = (_QWORD **)*v14;
  v15 = (_QWORD *)**v14;
  if ( (_QWORD **)(*v14)[1] != v14 || (_QWORD **)v15[1] != v9 )
    __fastfail(3u);
  *v14 = v15;
  v15[1] = v14;
  *(_DWORD *)DeferredContext = *(_DWORD *)DeferredContext & 0xFFFFFFC3 | 0x14;
LABEL_10:
  KeReleaseSpinLock(v4, v13);
  if ( v10 )
    v10(v5, v11);
  if ( v9 )
  {
    *((_DWORD *)v9 + 10) = 0;
    KeSetEvent((PRKEVENT)(v9 + 2), 0, 0);
  }
}
