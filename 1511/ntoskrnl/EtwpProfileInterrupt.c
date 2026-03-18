/*
 * XREFs of EtwpProfileInterrupt @ 0x14020EC6C
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpProfileInterrupt(__int64 a1)
{
  unsigned __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  int v3; // r8d
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NestingLevel; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v7; // rcx
  unsigned __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  int KernelStack; // [rsp+38h] [rbp-28h]
  __int16 v11; // [rsp+3Ch] [rbp-24h]
  char v12; // [rsp+3Eh] [rbp-22h]
  char v13; // [rsp+3Fh] [rbp-21h]
  unsigned __int64 *v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 360);
  CurrentThread = KeGetCurrentThread();
  v3 = 34658818;
  if ( v1 <= (unsigned __int64)MmHighestUserAddress )
    v3 = 34656770;
  KernelStack = (int)CurrentThread[1].KernelStack;
  v12 = 0;
  v12 = 8 * CurrentThread->Priority;
  v9 = v1;
  v11 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel == 2 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      v12 |= 1u;
LABEL_8:
      v3 &= ~0x4000u;
      goto LABEL_9;
    }
LABEL_7:
    v12 |= 2u;
    goto LABEL_8;
  }
  if ( NestingLevel > 1 )
    goto LABEL_7;
LABEL_9:
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v7 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    LOBYTE(SchedulingGroup) = -1;
    if ( *((_DWORD *)v7 + 29) <= 0xFFu )
      LOBYTE(SchedulingGroup) = v7[116];
  }
  v16 = 0;
  v13 = (char)SchedulingGroup;
  v14 = &v9;
  v15 = 16;
  return EtwTraceKernelEvent((int)&v14, 1, 0x20000002u, 0xF2Eu, v3);
}
