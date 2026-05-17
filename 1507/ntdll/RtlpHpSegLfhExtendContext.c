/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x18006C810
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18006C900 (RtlAcquireReleaseSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 */

signed __int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int64 v8; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int HeapProtection; // eax
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = (volatile signed __int64 *)(a1 + 144);
  RtlAcquireReleaseSRWLockExclusive(a1 + 144);
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 152);
      if ( (unsigned __int64)(v8 + a2) > *(_QWORD *)(a1 + 160) )
        break;
      if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 152), v8 + a2, v8) )
        return v8;
    }
    RtlAcquireSRWLockExclusive(v2, v5, v6, v7);
    v10 = *(_QWORD *)(a1 + 152);
    v11 = *(_QWORD *)(a1 + 160);
    if ( v10 + a2 > v11 )
      break;
LABEL_8:
    RtlReleaseSRWLockExclusive(v2);
  }
  v14 = *(_QWORD *)(a1 + 160);
  v13 = (v10 - v11 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 1);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &v13, 4096, HeapProtection) >= 0 )
  {
    *(_QWORD *)(a1 + 160) += v13;
    goto LABEL_8;
  }
  v8 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v8;
}
