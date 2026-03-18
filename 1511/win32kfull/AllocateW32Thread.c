/*
 * XREFs of AllocateW32Thread @ 0x1C00DDCD4
 * Callers:
 *     W32pThreadCallout @ 0x1C00DDBB0 (W32pThreadCallout.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall AllocateW32Thread(__int64 a1)
{
  _QWORD *PoolWithTag; // rbx
  void *v3; // rax
  void *v4; // rdi

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x6E747355u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    v3 = (void *)Win32AllocPoolWithQuota(W32ThreadSize, 1769239381LL);
    v4 = v3;
    if ( v3 )
    {
      memset(v3, 0, W32ThreadSize);
      *(_QWORD *)v4 = a1;
      *PoolWithTag = v4;
      PsSetThreadWin32Thread(a1, PoolWithTag, 0LL);
      ObfReferenceObject(*(PVOID *)v4);
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 43);
      return 0LL;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 3221225495LL;
}
