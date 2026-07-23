/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x1400F1148
 * Callers:
 *     PspGetSetContextInternal @ 0x1404FB520 (PspGetSetContextInternal.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14004EF40 (KeQueryCurrentStackInformation.c)
 *     KeGetNextKernelStackSegment @ 0x1400EEA2C (KeGetNextKernelStackSegment.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  _KTHREAD *CurrentThread; // r10
  int v10; // r9d
  char v11; // al
  char v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char *v15; // rcx
  char *v16; // rdx
  unsigned __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-10h] BYREF
  int v19; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2 & 7) == 0 )
  {
    if ( a2 >= *a1 && a2 < *a3 )
      return 1;
    if ( *a1 >= 0xFFFF800000000000uLL )
    {
      KeQueryCurrentStackInformation(&v19, &v18, &v17);
      if ( v19 != 5 )
      {
        if ( v19 )
        {
          CurrentThread = KeGetCurrentThread();
          v10 = v19;
          if ( v19 != 1 )
          {
            if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && CurrentThread != KeGetCurrentPrcb()->IdleThread )
            {
              v15 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
              v16 = &v15[-(unsigned int)KeKernelStackSize];
              if ( (unsigned __int64)v16 <= a2 && a2 < (unsigned __int64)v15 )
              {
                *a3 = (unsigned __int64)v15;
                *a1 = (unsigned __int64)v16;
                return 1;
              }
            }
            v10 = v19;
          }
          v11 = 0;
          if ( !*a4 )
          {
            KeGetNextKernelStackSegment(CurrentThread, a4, 1);
            v11 = v12;
          }
          if ( (v10 == 1 || v10 == 6) && v11 || KeGetNextKernelStackSegment(CurrentThread, a4, 0) )
          {
            v13 = a4[1];
            v14 = *a4;
            if ( a2 >= v13 && a2 < v14 )
            {
              *a1 = v13;
              *a3 = v14;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}
