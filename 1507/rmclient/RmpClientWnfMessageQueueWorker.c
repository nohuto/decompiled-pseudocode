/*
 * XREFs of RmpClientWnfMessageQueueWorker @ 0x18000E780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall RmpClientWnfMessageQueueWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 **v4; // r14
  __int64 *v5; // rsi
  __int64 v6; // rax
  int v7; // ecx
  int v8; // ecx

  v2 = a2 + 32;
  RtlAcquireSRWLockExclusive(a2 + 32);
  v4 = (__int64 **)(a2 + 16);
  while ( *v4 != (__int64 *)v4 )
  {
    v5 = *v4;
    v6 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v4;
    RtlReleaseSRWLockExclusive(v2);
    v7 = *((_DWORD *)v5 + 5);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          (*(void (__fastcall **)(__int64, _QWORD))(a2 + 56))((__int64)v5 + 36, *(_QWORD *)(a2 + 8));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(a2 + 48))(*((unsigned int *)v5 + 6), *(__int64 *)((char *)v5 + 28));
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(a2 + 40))(*((unsigned int *)v5 + 6), *(__int64 *)((char *)v5 + 28));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    RtlAcquireSRWLockExclusive(v2);
  }
  *(_BYTE *)(a2 + 80) = 0;
  return RtlReleaseSRWLockExclusive(v2);
}
