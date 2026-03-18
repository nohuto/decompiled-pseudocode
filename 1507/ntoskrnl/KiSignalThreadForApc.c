/*
 * XREFs of KiSignalThreadForApc @ 0x14000D028
 * Callers:
 *     KeRequestTerminationThread @ 0x14000C2F4 (KeRequestTerminationThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x14000C7EC (KiInsertDeferredPreemptionApc.c)
 *     KiSuspendThread @ 0x14000CA68 (KiSuspendThread.c)
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     KeTryToInsertQueueApc @ 0x140204508 (KeTryToInsertQueueApc.c)
 * Callees:
 *     KiSignalThread @ 0x14000D8F0 (KiSignalThread.c)
 */

char __fastcall KiSignalThreadForApc(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  int v4; // eax
  char v5; // r10
  struct _KPRCB *CurrentPrcb; // rax
  char v7; // al
  bool v8; // cf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(char *)(a2 + 80);
  v5 = *(_BYTE *)(a2 + 81);
  if ( v4 == *(unsigned __int8 *)(v3 + 586) )
  {
    if ( v3 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v5 )
      {
        LOBYTE(v4) = *(_QWORD *)(a2 + 48) != 0LL;
        if ( !*(_DWORD *)(v3 + 484) || !*(_QWORD *)(a2 + 48) && !*(_WORD *)(v3 + 486) )
        {
          *(_BYTE *)(v3 + 193) = 1;
          if ( !a3 )
          {
            *(_DWORD *)(v3 + 116) |= 0x40u;
            return v4;
          }
LABEL_19:
          LOBYTE(a1) = 1;
          LOBYTE(v4) = HalRequestSoftwareInterrupt(a1);
        }
      }
    }
    else if ( v5 )
    {
      LOBYTE(v4) = *(_BYTE *)(v3 + 388);
      if ( (_BYTE)v4 == 5 && *(_BYTE *)(v3 + 391) == 1 )
      {
        v7 = *(_BYTE *)(v3 + 112) & 7;
        v8 = v7 == 3;
        LOBYTE(v4) = v7 - 3;
        if ( !v8 && (_BYTE)v4 != 1 )
        {
          v4 = *(_DWORD *)(v3 + 116);
          if ( (v4 & 0x10) != 0 || *(_BYTE *)(v3 + 194) )
          {
            *(_BYTE *)(v3 + 112) |= 0x40u;
            LOBYTE(v4) = KiSignalThread(a1, v3, 192LL, 0LL);
            if ( (_BYTE)v4 )
              *(_BYTE *)(v3 + 194) = 1;
          }
        }
      }
    }
    else
    {
      *(_BYTE *)(v3 + 193) = 1;
      _InterlockedOr(v10, 0);
      LOBYTE(v4) = *(_BYTE *)(v3 + 388);
      if ( (_BYTE)v4 == 2 )
      {
        a1 = *(unsigned int *)(v3 + 536);
        LODWORD(a1) = a1 & 0x7FFFFFFF;
        if ( KeGetPcr()->Prcb.Number != (_DWORD)a1 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          LOBYTE(a2) = 1;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          LOBYTE(v4) = HalSendSoftwareInterrupt(a1, a2);
          return v4;
        }
        goto LABEL_19;
      }
      if ( (_BYTE)v4 == 5
        && !*(_BYTE *)(v3 + 390)
        && !*(_WORD *)(v3 + 486)
        && (!*(_QWORD *)(a2 + 48) || !*(_WORD *)(v3 + 484) && !*(_BYTE *)(v3 + 192)) )
      {
        LOBYTE(v4) = KiSignalThread(a1, v3, 256LL, 0LL);
        *(_BYTE *)(v3 + 112) |= 0x20u;
      }
    }
  }
  return v4;
}
