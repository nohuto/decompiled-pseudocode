/*
 * XREFs of PfSnGetCompletedTrace @ 0x1404D8B44
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x1404D8920 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(void *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int v4; // r12d
  char v6; // r14
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edi

  v4 = Length;
  v6 = 1;
  ExAcquireFastMutex(&FastMutex);
  dword_140328724 = 2;
  v7 = (unsigned int *)qword_1403286D8;
  if ( qword_1403286D8 == &qword_1403286D8 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_1403286D8 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_1403286D8;
      if ( *((PVOID **)qword_1403286D8 + 1) != &qword_1403286D8 || *(PVOID *)(v9 + 8) != qword_1403286D8 )
        __fastfail(3u);
      qword_1403286D8 = *(PVOID *)qword_1403286D8;
      *(_QWORD *)(v9 + 8) = &qword_1403286D8;
      --dword_140328720;
      KeReleaseGuardedMutex(&FastMutex);
      v6 = 0;
      if ( KeGetCurrentThread()->PreviousMode )
        ProbeForWrite(a1, v4, 8u);
      memmove(a1, v7 + 4, v7[6]);
      *a3 = v7[6];
      ExFreePoolWithTag(v7, 0);
      v10 = 0;
    }
  }
  if ( v6 )
    KeReleaseGuardedMutex(&FastMutex);
  return v10;
}
