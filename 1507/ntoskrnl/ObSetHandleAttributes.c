/*
 * XREFs of ObSetHandleAttributes @ 0x140533E6C
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  __int16 v4; // bx
  char v5; // r14
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v8; // rax
  volatile signed __int64 *v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int16 v13; // ax
  signed __int32 v15[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v16[48]; // [rsp+20h] [rbp-68h] BYREF

  v4 = a1;
  v5 = 0;
  if ( a3 || (a1 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || a1 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v6 = ObpKernelHandleTable;
    if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v16);
      v5 = 1;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExMapHandleToPointer(v6, v4);
  v9 = v8;
  if ( v8 )
  {
    v10 = *v8;
    if ( !*a2
      || (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v8 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                            + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v8) & 0xFFF0) >> 8)]
                    + 72) & 2) == 0 )
    {
      v11 = 0;
      if ( *a2 )
        v11 = 2;
      if ( a2[1] )
        v11 |= 1u;
      *v9 = v10 ^ ((unsigned int)v10 ^ (v11 << 17)) & 0x60000;
    }
    _InterlockedExchangeAdd64(v9, 1uLL);
    _InterlockedOr(v15, 0);
    if ( *(_QWORD *)(v6 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v6 + 48), 0LL);
    v12 = 0;
  }
  else
  {
    v12 = -1073741790;
  }
  v13 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v5 )
    KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  return v12;
}
