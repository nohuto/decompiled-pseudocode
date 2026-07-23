/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180030088
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

void __fastcall LdrpWriteBackProtectedDelayLoad(
        _RTL_SRWLOCK *a1,
        char *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  _RTL_SRWLOCK *v5; // rbp
  ULONG_PTR v6; // r14
  unsigned int v8; // ebx
  char *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1 + 18;
  v6 = 8LL * a4;
  RegionSize = v6;
  v8 = a4;
  BaseAddress = a2;
  RtlAcquireSRWLockExclusive(a1 + 18);
  if ( *(_QWORD *)&a2[8 * a5] != *(_QWORD *)(a3 + 8LL * a5)
    && ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect) >= 0 )
  {
    if ( v8 )
    {
      v10 = &a2[v6];
      v11 = a3 - (_QWORD)a2;
      do
      {
        v10 -= 8;
        --v8;
        v12 = *(_QWORD *)&v10[v11];
        if ( v12 )
          *(_QWORD *)v10 = v12;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &OldProtect);
  }
  RtlReleaseSRWLockExclusive(v5);
}
