/*
 * XREFs of EtwpProfileInterrupt @ 0x140226960
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpProfileInterrupt(__int64 a1)
{
  unsigned __int64 v1; // rdx
  int v2; // r8d
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NestingLevel; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v7; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  int KernelStack; // [rsp+38h] [rbp-28h]
  __int16 v11; // [rsp+3Ch] [rbp-24h]
  char v12; // [rsp+3Eh] [rbp-22h]
  char v13; // [rsp+3Fh] [rbp-21h]
  unsigned __int64 *v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 360);
  v2 = 34658818;
  if ( v1 <= 0x7FFFFFFEFFFFLL )
    v2 = 34656770;
  CurrentThread = KeGetCurrentThread();
  KernelStack = (int)CurrentThread[1].KernelStack;
  v12 = 0;
  v12 = 8 * CurrentThread->Priority;
  v9 = v1;
  v11 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel != 2 )
  {
    if ( NestingLevel <= 1 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
LABEL_7:
    v12 |= 2u;
    goto LABEL_8;
  }
  v12 |= 1u;
LABEL_8:
  v2 &= ~0x4000u;
LABEL_9:
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v7 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    do
    {
      if ( *((_DWORD *)v7 + 29) > 0xFFu )
        LOBYTE(SchedulingGroup) = -1;
      else
        LOBYTE(SchedulingGroup) = v7[116];
      if ( (_BYTE)SchedulingGroup )
        break;
      v7 = (char *)*((_QWORD *)v7 + 51);
    }
    while ( v7 );
  }
  v16 = 0;
  v13 = (char)SchedulingGroup;
  v14 = &v9;
  v15 = 16;
  return EtwTraceKernelEvent((int)&v14, 1, 0x20000002u, 3886, v2);
}
