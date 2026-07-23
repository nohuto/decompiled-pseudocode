/*
 * XREFs of MiWaitForAsynchronousFlushes @ 0x1401EAEFC
 * Callers:
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 */

__int64 __fastcall MiWaitForAsynchronousFlushes(unsigned int *a1)
{
  unsigned int *v1; // rbx
  PVOID *v2; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned int v4; // edi

  v1 = a1;
  v2 = (PVOID *)(a1 + 528);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v4 = 0;
  do
  {
    if ( !*((_QWORD *)a1 + 2) || a1[13] == 1 )
    {
      a1 += 66;
    }
    else
    {
      __writecr8(CurrentIrql);
      KeWaitForMultipleObjects(8u, v2, WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(v1 + 544));
      a1 = v1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
    }
  }
  while ( a1 < (unsigned int *)v2 );
  __writecr8(CurrentIrql);
  while ( (*v1 & 0x80000000) == 0 )
  {
    v1 += 66;
    if ( v1 >= (unsigned int *)v2 )
      return v4;
  }
  return *v1;
}
