/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x1400284B8
 * Callers:
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140028340 (KeQueryCurrentStackInformation.c)
 *     KeGetNextKernelStackSegment @ 0x14002BFA4 (KeGetNextKernelStackSegment.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v9; // r8
  _KTHREAD *CurrentThread; // r10
  int v11; // r9d
  char v12; // al
  char v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char *v16; // rcx
  char *v17; // rdx
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
          v11 = v20;
          if ( v20 != 1 )
          {
            if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && CurrentThread != KeGetCurrentPrcb()->IdleThread )
            {
              v16 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
              v17 = &v16[-(unsigned int)KeKernelStackSize];
              if ( (unsigned __int64)v17 <= a2 && a2 < (unsigned __int64)v16 )
              {
                *a3 = (unsigned __int64)v16;
                *a1 = (unsigned __int64)v17;
                return 1;
              }
            }
            v11 = v20;
          }
          v12 = 0;
          if ( !*a4 )
          {
            LOBYTE(v9) = 1;
            KeGetNextKernelStackSegment(CurrentThread, a4, v9);
            v12 = v13;
          }
          if ( (v11 == 1 || v11 == 6) && v12 || (unsigned __int8)KeGetNextKernelStackSegment(CurrentThread, a4, 0LL) )
          {
            v14 = a4[1];
            v15 = *a4;
            if ( a2 >= v14 && a2 < v15 )
            {
              *a1 = v14;
              *a3 = v15;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}
