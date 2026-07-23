/*
 * XREFs of RtlpCallSecureMemoryCallbacks @ 0x1800ED370
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x1800ED250 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(__int64 a1, __int64 a2)
{
  char v3; // r14
  PVOID *v5; // rsi
  _DWORD *v6; // rbx
  PVOID **v7; // rdi
  bool v8; // zf
  PVOID *v9; // rcx
  PVOID ***v10; // rax
  PVOID *v11; // rax
  PVOID v12; // r8
  PVOID *v13; // rax
  PVOID BaseAddress; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_BaseAddress; // [rsp+28h] [rbp-8h]

  p_BaseAddress = &BaseAddress;
  v3 = 0;
  BaseAddress = &BaseAddress;
  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  v5 = (PVOID *)RtlpSecMemListHead;
  while ( v5 != &RtlpSecMemListHead )
  {
    v6 = v5 + 2;
    ++*((_DWORD *)v5 + 4);
    v7 = (PVOID **)v5;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    if ( ((unsigned __int8 (__fastcall *)(__int64, __int64))v5[3])(a1, a2) )
      v3 = 1;
    RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
    v8 = (*v6)-- == 1;
    v5 = (PVOID *)*v5;
    if ( v8 )
    {
      v9 = *v7;
      v10 = (PVOID ***)v7[1];
      if ( (*v7)[1] != v7 || *v10 != v7 )
        __fastfail(3u);
      *v10 = (PVOID **)v9;
      v9[1] = v10;
      v11 = p_BaseAddress;
      if ( *p_BaseAddress != &BaseAddress )
        __fastfail(3u);
      v7[1] = p_BaseAddress;
      *v7 = &BaseAddress;
      *v11 = v7;
      p_BaseAddress = (PVOID *)v7;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( 1 )
  {
    v12 = BaseAddress;
    if ( BaseAddress == &BaseAddress )
      break;
    v13 = *(PVOID **)BaseAddress;
    if ( *((PVOID **)BaseAddress + 1) != &BaseAddress || v13[1] != BaseAddress )
      __fastfail(3u);
    BaseAddress = *(PVOID *)BaseAddress;
    v13[1] = &BaseAddress;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  }
  return v3;
}
