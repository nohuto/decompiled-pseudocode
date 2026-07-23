/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180072458
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 */

void __fastcall LdrpWriteBackProtectedDelayLoad(_RTL_SRWLOCK *a1, char *a2, __int64 a3, unsigned int a4)
{
  _RTL_SRWLOCK *v4; // rbp
  ULONG_PTR v5; // r14
  unsigned int v7; // ebx
  char *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+78h] [rbp+20h] BYREF

  v4 = a1 + 18;
  v5 = 8LL * a4;
  RegionSize = v5;
  v7 = a4;
  BaseAddress = a2;
  RtlAcquireSRWLockExclusive(a1 + 18);
  if ( ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect) >= 0 )
  {
    if ( v7 )
    {
      v9 = &a2[v5];
      v10 = a3 - (_QWORD)a2;
      do
      {
        v9 -= 8;
        --v7;
        v11 = *(_QWORD *)&v9[v10];
        if ( v11 )
          *(_QWORD *)v9 = v11;
      }
      while ( v7 );
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &OldProtect);
  }
  RtlReleaseSRWLockExclusive(v4);
}
