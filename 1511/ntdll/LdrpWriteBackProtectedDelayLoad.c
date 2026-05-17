/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180072458
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 */

signed __int64 __fastcall LdrpWriteBackProtectedDelayLoad(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rbp
  __int64 v5; // r14
  int v7; // ebx
  char *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  char *v14; // [rsp+68h] [rbp+10h] BYREF
  char v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = (volatile signed __int64 *)(a1 + 144);
  v5 = 8LL * (unsigned int)a4;
  v13 = v5;
  v7 = a4;
  v14 = a2;
  RtlAcquireSRWLockExclusive(a1 + 144, a2, a3, a4);
  if ( (int)ZwProtectVirtualMemory(-1LL, &v14, &v13, 4LL, &v15) >= 0 )
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
    ZwProtectVirtualMemory(-1LL, &v14, &v13, 2LL, &v15);
  }
  return RtlReleaseSRWLockExclusive(v4);
}
