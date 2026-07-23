/*
 * XREFs of ObSetHandleAttributes @ 0x14045D5B8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExSetHandleAttributes @ 0x140074F64 (ExSetHandleAttributes.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ObpIsKernelHandle @ 0x1400CDBC8 (ObpIsKernelHandle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x1404F0EA4 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  unsigned __int64 v4; // rbx
  char v5; // bp
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rdi
  struct _KTHREAD *v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r10
  unsigned int v15; // edx
  unsigned int v16; // ebx
  _BYTE v18[48]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1;
  v5 = 0;
  v6 = !ObpIsKernelHandle(a1, a3);
  CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    v8 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v4 ^= 0xFFFFFFFF80000000uLL;
    v8 = ObpKernelHandleTable;
    if ( CurrentThread->ApcState.Process != PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v18);
      v5 = 1;
    }
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v10 = (__int64 *)ExMapHandleToPointer(v8, v4);
  v14 = v10;
  if ( v10 )
  {
    if ( !*a2
      || (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                            + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v10) & 0xFFF0) >> 8)]
                    + 72) & 2) == 0 )
    {
      v15 = 0;
      if ( *a2 )
        v15 = 2;
      if ( a2[1] )
        v15 |= 1u;
      ExSetHandleAttributes((__int64)v10, v15, 3);
    }
    ExUnlockHandleTableEntry(v8, v14);
    v16 = 0;
  }
  else
  {
    v16 = -1073741790;
  }
  KiLeaveCriticalRegionUnsafe((__int64)v9, v11, v12, v13);
  if ( v5 )
    KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
  return v16;
}
