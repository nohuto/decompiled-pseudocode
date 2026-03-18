/*
 * XREFs of PspReaper @ 0x14002D9A4
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x14002BF20 (KeEnumerateKernelStackSegments.c)
 *     KeDeleteThread @ 0x14002DA44 (KeDeleteThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

signed __int64 PspReaper()
{
  _QWORD *v0; // rbx
  volatile signed __int32 *v1; // rdi
  void *v2; // rcx
  signed __int64 result; // rax

  do
  {
    v0 = (_QWORD *)_InterlockedExchange64(&PsReaperListHead, 1LL);
    do
    {
      v1 = (volatile signed __int32 *)(v0 - 193);
      KeDeleteThread(v0 - 193);
      v2 = (void *)v0[37];
      if ( v2 )
      {
        ExFreePoolWithTag(v2, 0);
        *((_QWORD *)v1 + 230) = 0LL;
      }
      if ( _InterlockedExchangeAdd(v1 + 470, 0xFFFFFFFF) == 1 )
      {
        KeEnumerateKernelStackSegments(
          (__int64)(v0 - 193),
          (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
          0LL);
        *((_QWORD *)v1 + 5) = 0LL;
      }
      v0 = (_QWORD *)*v0;
      ObfDereferenceObjectWithTag((PVOID)v1, 0x746C6644u);
    }
    while ( v0 && v0 != (_QWORD *)1 );
    result = _InterlockedCompareExchange64(&PsReaperListHead, 0LL, 1LL);
  }
  while ( result != 1 );
  return result;
}
