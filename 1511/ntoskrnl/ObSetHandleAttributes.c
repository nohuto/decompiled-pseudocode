/*
 * XREFs of ObSetHandleAttributes @ 0x1404AA8BC
 * Callers:
 *     <none>
 * Callees:
 *     ObpIsKernelHandle @ 0x140038748 (ObpIsKernelHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ExSetHandleAttributes @ 0x1400E5654 (ExSetHandleAttributes.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExMapHandleToPointer @ 0x1403F7030 (ExMapHandleToPointer.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  __int64 v4; // rbx
  char v5; // bp
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  struct _KTHREAD *v9; // rsi
  signed __int64 *v10; // rax
  volatile signed __int64 *v11; // r10
  unsigned int v12; // edx
  unsigned int v13; // ebx
  $D4FCF91253F76F57393CBFE908971F67 v15; // [rsp+20h] [rbp-58h] BYREF

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
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)&v15);
      v5 = 1;
    }
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v10 = ExMapHandleToPointer(v8, v4);
  v11 = v10;
  if ( v10 )
  {
    if ( !*a2
      || (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                            + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v10) & 0xFFF0) >> 8)]
                    + 72) & 2) == 0 )
    {
      v12 = 0;
      if ( *a2 )
        v12 = 2;
      if ( a2[1] )
        v12 |= 1u;
      ExSetHandleAttributes((__int64)v10, v12, 3);
    }
    ExUnlockHandleTableEntry(v8, v11);
    v13 = 0;
  }
  else
  {
    v13 = -1073741790;
  }
  KiLeaveCriticalRegionUnsafe((__int64)v9);
  if ( v5 )
    KiUnstackDetachProcess(&v15, 0LL);
  return v13;
}
