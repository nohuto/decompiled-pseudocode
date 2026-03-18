/*
 * XREFs of IopAllocateBackpocketIrp @ 0x1401B6964
 * Callers:
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     IoSynchronousPageWriteEx @ 0x1400E0460 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400EF86C (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x1400DE470 (IoInitializeIrp.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     IopInitActivityIdIrp @ 0x1401B73A0 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  PIRP v8; // rbx
  bool v9; // cl
  bool v10; // zf
  bool v11; // cl
  __int64 v12; // rdx
  bool v13; // dl
  LARGE_INTEGER v14; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 > byte_1402FB520 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_1402FB4F8 != CurrentThread )
    {
      v14.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_1402FB4F0, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&word_1402FB500, Executive, 0, 0, &v14) == 258 )
        {
          LOBYTE(v12) = a2;
          result = pIoAllocateIrp(a1, v12, 0LL, retaddr);
          if ( result )
            return result;
        }
      }
      v8 = qword_1402FB4E8;
      IoInitializeIrp(qword_1402FB4E8, 72 * a2 + 280, a2 + 1);
      v8->AllocationFlags = 33;
      qword_1402FB4F8 = (__int64)KeGetCurrentThread();
      goto LABEL_10;
    }
    v8 = qword_1402FB518;
    if ( !qword_1402FB518 )
      return 0LL;
    qword_1402FB518 = *(PIRP *)&qword_1402FB518->Type;
    IoInitializeIrp(v8, 72 * a2 + 280, a2 + 1);
    --v8->Tail.Overlay.CurrentStackLocation;
    --v8->CurrentLocation;
    --v8->StackCount;
    v13 = (IopIrpExtensionStatus & 1) != 0;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
    v10 = !v13 || (IopFunctionPointerMask & 4) == 0;
LABEL_22:
    v8->AllocationFlags = 33;
    goto LABEL_23;
  }
  if ( (struct _KTHREAD *)qword_1402FB4C8 == CurrentThread )
  {
    v8 = qword_1402FB518;
    if ( !qword_1402FB518 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    qword_1402FB518 = *(PIRP *)&qword_1402FB518->Type;
    IoInitializeIrp(v8, 72 * a2 + 280, a2 + 1);
    --v8->Tail.Overlay.CurrentStackLocation;
    --v8->CurrentLocation;
    --v8->StackCount;
    v11 = (IopIrpExtensionStatus & 1) != 0;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
    v10 = !v11 || (IopFunctionPointerMask & 4) == 0;
    goto LABEL_22;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_1402FB4C0, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_1402FB4D0, Executive, 0, 0, &Timeout) == 258 )
    {
      LOBYTE(v7) = a2;
      result = pIoAllocateIrp(a1, v7, 0LL, retaddr);
      if ( result )
        return result;
    }
  }
  v8 = Irp;
  IoInitializeIrp(Irp, 72 * a2 + 280, a2 + 1);
  v8->AllocationFlags = 33;
  qword_1402FB4C8 = (__int64)KeGetCurrentThread();
LABEL_10:
  --v8->CurrentLocation;
  --v8->StackCount;
  --v8->Tail.Overlay.CurrentStackLocation;
  v9 = (IopIrpExtensionStatus & 1) != 0;
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
  v10 = !v9 || (IopFunctionPointerMask & 4) == 0;
LABEL_23:
  if ( !v10 )
    IopInitActivityIdIrp(v8);
  return (__int64)v8;
}
