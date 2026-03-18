/*
 * XREFs of EtwpSetPmcProfileSource @ 0x1406E51EC
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     KeInitializeProfileCallback @ 0x1406992BC (KeInitializeProfileCallback.c)
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
    if ( qword_1403274E8 )
    {
      ExFreePoolWithTag(qword_1403274E8, 0);
      qword_1403274E8 = 0LL;
      EtwpPmcProfile = 0;
    }
    v6 = v3;
    qword_1403274E8 = ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v3, 0x58777445u);
    v7 = qword_1403274E8;
    if ( qword_1403274E8 )
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
