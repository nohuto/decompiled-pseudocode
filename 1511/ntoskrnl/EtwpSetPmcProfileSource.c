/*
 * XREFs of EtwpSetPmcProfileSource @ 0x140662118
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     KeInitializeProfileCallback @ 0x14061AAE8 (KeInitializeProfileCallback.c)
 */

__int64 __fastcall EtwpSetPmcProfileSource(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v6; // r14
  _DWORD *v7; // rsi

  v2 = 0;
  v3 = a2;
  if ( !a2 || a2 > 4 )
    return 3221225485LL;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  if ( (WORD2(PerfGlobalGroupMask) & 0x400) != 0 )
  {
    v2 = -1073741053;
  }
  else
  {
    if ( qword_1402D81B8 )
    {
      ExFreePoolWithTag(qword_1402D81B8, 0);
      qword_1402D81B8 = 0LL;
      EtwpPmcProfile = 0;
    }
    v6 = v3;
    qword_1402D81B8 = ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v3, 0x58777445u);
    v7 = qword_1402D81B8;
    if ( qword_1402D81B8 )
    {
      EtwpPmcProfile = v3;
      if ( (_DWORD)v3 )
      {
        do
        {
          KeInitializeProfileCallback(v7, (__int64)EtwpPmcInterrupt, (unsigned int)*a1, *a1);
          v7 += 62;
          ++a1;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return v2;
}
