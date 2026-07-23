/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x14053260C
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14011E8F4 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiFreeVadRange @ 0x140026E34 (MiFreeVadRange.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiLockPageTableRange @ 0x140123A7C (MiLockPageTableRange.c)
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v2; // rsi
  int v3; // eax
  char *v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 PteAddress; // rax
  _QWORD v8[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+A0h] [rbp+30h] BYREF
  char v10; // [rsp+A8h] [rbp+38h] BYREF
  unsigned __int64 v11; // [rsp+B0h] [rbp+40h] BYREF
  PVOID P; // [rsp+B8h] [rbp+48h] BYREF

  v9 = a1;
  CurrentThread = KeGetCurrentThread();
  memset(v8, 0, sizeof(v8));
  v2 = 0LL;
  P = 0LL;
  v11 = 0LL;
  v3 = MiAllocateVirtualMemory(-1LL, &v11, 0LL, &v9, 12288, 2u, 0, 1u, &P);
  v4 = (char *)P;
  if ( v3 >= 0 )
  {
    v5 = ((*((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF;
    if ( MiAddSecureEntry((__int64)P, v11, v5, -2147483647, 1) )
    {
      PteAddress = MiGetPteAddress(v5);
      MiDecommitPages(v11, PteAddress, (__int64)CurrentThread->ApcState.Process, (__int64)v4, 1, v8);
      if ( (int)MiLockPageTableRange(v11, v5) >= 0 )
      {
        MiUnlockAndDereferenceVad(v4);
        v2 = v11;
        v4 = 0LL;
        P = 0LL;
      }
    }
  }
  if ( v4 )
  {
    v10 = 0;
    MiFreeVadRange(
      (__int64)P,
      (int)&v10,
      *((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
      *((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
      (__int64)KeGetCurrentThread()->ApcState.Process);
  }
  return v2;
}
