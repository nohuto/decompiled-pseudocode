/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x14001F5EC
 * Callers:
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001D5D0 (KeQueryCurrentStackInformation.c)
 *     KeGetNextKernelStackSegment @ 0x140021688 (KeGetNextKernelStackSegment.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v8; // r8
  _KTHREAD *CurrentThread; // r10
  int v10; // r9d
  char *v11; // rcx
  char *v12; // rdx
  char v14; // al
  char v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-10h] BYREF
  int v20; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2 & 7) == 0 )
  {
    if ( a2 >= *a1 && a2 < *a3 )
      return 1;
    if ( *a1 >= (unsigned __int64)MmSystemRangeStart )
    {
      KeQueryCurrentStackInformation(&v20, &v19, &v18);
      if ( v20 != 5 )
      {
        if ( v20 )
        {
          CurrentThread = KeGetCurrentThread();
          v10 = v20;
          if ( v20 != 1 )
          {
            if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && CurrentThread != KeGetCurrentPrcb()->IdleThread )
            {
              v11 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
              v12 = &v11[-(unsigned int)KeKernelStackSize];
              if ( (unsigned __int64)v12 <= a2 && a2 < (unsigned __int64)v11 )
              {
                *a3 = (unsigned __int64)v11;
                *a1 = (unsigned __int64)v12;
                return 1;
              }
            }
            v10 = v20;
          }
          v14 = 0;
          if ( !*a4 )
          {
            LOBYTE(v8) = 1;
            KeGetNextKernelStackSegment(CurrentThread, a4, v8);
            v14 = v15;
          }
          if ( (v10 == 1 || v10 == 6) && v14 || (unsigned __int8)KeGetNextKernelStackSegment(CurrentThread, a4, 0LL) )
          {
            v16 = a4[1];
            v17 = *a4;
            if ( a2 >= v16 && a2 < v17 )
            {
              *a1 = v16;
              *a3 = v17;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}
