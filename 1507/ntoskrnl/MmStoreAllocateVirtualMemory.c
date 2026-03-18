/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x140567F04
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14014325C (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiFreeVadRange @ 0x1400F1340 (MiFreeVadRange.c)
 *     MiLockPageTableRange @ 0x14014A398 (MiLockPageTableRange.c)
 *     MiAddSecureEntry @ 0x1404B5A90 (MiAddSecureEntry.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v2; // rsi
  NTSTATUS v3; // eax
  char *v4; // rbx
  unsigned __int64 v5; // rdi
  _QWORD v7[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v8; // [rsp+A0h] [rbp+30h] BYREF
  char v9; // [rsp+A8h] [rbp+38h] BYREF
  unsigned __int64 v10; // [rsp+B0h] [rbp+40h] BYREF
  PVOID P; // [rsp+B8h] [rbp+48h] BYREF

  v8 = a1;
  CurrentThread = KeGetCurrentThread();
  memset(v7, 0, sizeof(v7));
  v2 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v3 = MiAllocateVirtualMemory(-1LL, &v10, 0LL, &v8, 12288, 4u, 0, 1, &P);
  v4 = (char *)P;
  if ( v3 >= 0 )
  {
    v5 = ((*((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF;
    if ( MiAddSecureEntry((__int64)P, v10, v5, -2147483647, 1) )
    {
      MiDecommitPages(
        v10,
        ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        (__int64)CurrentThread->ApcState.Process,
        (__int64)v4,
        1,
        v7);
      if ( (int)MiLockPageTableRange(v10, v5) >= 0 )
      {
        MiUnlockAndDereferenceVad(v4);
        v2 = v10;
        v4 = 0LL;
        P = 0LL;
      }
    }
  }
  if ( v4 )
  {
    v9 = 0;
    MiFreeVadRange(
      P,
      (int)&v9,
      *((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
      *((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
      (__int64)KeGetCurrentThread()->ApcState.Process);
  }
  return v2;
}
