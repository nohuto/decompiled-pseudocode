/*
 * XREFs of IopInitActivityIdIrp @ 0x1401F2680
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x140006730 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400480F0 (IopAllocateIrpPrivate.c)
 *     IopAllocateBackpocketIrp @ 0x1401F1960 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F1C40 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x140734804 (IovAllocateIrp.c)
 * Callees:
 *     PnpIsSafeToExamineUserModeTeb @ 0x140026CF4 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     EtwWriteTransfer @ 0x1400EFF50 (EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x14011B7E4 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     IoSetActivityIdIrp @ 0x1401F669C (IoSetActivityIdIrp.c)
 */

int __fastcall IopInitActivityIdIrp(__int64 a1)
{
  char v2; // si
  const GUID *v3; // rdi
  const EVENT_DESCRIPTOR *v4; // r14
  struct _KTHREAD *CurrentThread; // rbx
  GUID *SparePtr; // rbx
  __int64 v8; // rcx
  _WORD *v10; // rax
  char v12; // [rsp+30h] [rbp-68h]
  GUID ActivityId; // [rsp+50h] [rbp-48h] BYREF
  __m128i v14; // [rsp+60h] [rbp-38h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    SparePtr = (GUID *)CurrentThread[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
    {
      if ( IoTraceHandle && EtwEventEnabled(IoTraceHandle, &IoTrace_KernelIo_AllocateIrp) )
      {
        v3 = SparePtr;
        v4 = &IoTrace_KernelIo_AllocateIrp;
        goto LABEL_25;
      }
      ActivityId = *SparePtr;
LABEL_24:
      v2 = 1;
      goto LABEL_25;
    }
    if ( PnpIsSafeToExamineUserModeTeb(a1) )
    {
      v12 = 0;
      if ( KeGetPcr()->NtTib.$AF8612CD83A736763F879D38CB10FD36::$24B86187094815B389AF40DF8BA8CE4C::Self )
      {
        v14 = *(__m128i *)&KeGetPcr()->NtTib.$AF8612CD83A736763F879D38CB10FD36::$24B86187094815B389AF40DF8BA8CE4C::Self[105].SubSystemTib;
        v12 = 1;
      }
      if ( v12 )
      {
        v8 = *(_QWORD *)&NullGuid.Data1 - v14.m128i_i64[0];
        if ( *(_QWORD *)&NullGuid.Data1 == v14.m128i_i64[0] )
          v8 = *(_QWORD *)NullGuid.Data4 - _mm_srli_si128(v14, 8).m128i_u64[0];
        if ( v8 )
        {
          if ( IoTraceHandle && EtwEventEnabled(IoTraceHandle, &IoTrace_UserInitiatedIo) )
          {
            v3 = (const GUID *)&v14;
            v4 = &IoTrace_UserInitiatedIo;
            goto LABEL_25;
          }
          ActivityId = (GUID)v14;
          goto LABEL_24;
        }
      }
    }
  }
LABEL_25:
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v10) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v10 >= 0 )
  {
    v10 = *(_WORD **)(a1 + 200);
    *v10 |= 2u;
    if ( v3 )
      LODWORD(v10) = EtwWriteTransfer(IoTraceHandle, v4, &ActivityId, v3, 0, 0LL);
  }
  return (int)v10;
}
