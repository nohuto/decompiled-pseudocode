/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180030098
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180033840 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

signed __int64 __fastcall LdrpWriteBackProtectedDelayLoad(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  volatile signed __int64 *v5; // rbp
  __int64 v6; // r14
  int v8; // ebx
  char *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  char *v15; // [rsp+68h] [rbp+10h] BYREF
  char v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = (volatile signed __int64 *)(a1 + 144);
  v6 = 8LL * (unsigned int)a4;
  v14 = v6;
  v8 = a4;
  v15 = a2;
  RtlAcquireSRWLockExclusive(a1 + 144, a2, a3, a4);
  if ( *(_QWORD *)&a2[8 * a5] != *(_QWORD *)(a3 + 8LL * a5)
    && (int)ZwProtectVirtualMemory(-1LL, &v15, &v14, 4LL, &v16) >= 0 )
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
    ZwProtectVirtualMemory(-1LL, &v15, &v14, 2LL, &v16);
  }
  return RtlReleaseSRWLockExclusive(v5);
}
