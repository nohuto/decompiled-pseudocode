/*
 * XREFs of IopInitActivityIdIrp @ 0x1401C4E8C
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x14000788C (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x14002DDD0 (IopAllocateIrpPrivate.c)
 *     IopAllocateBackpocketIrp @ 0x1401C4320 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401C4600 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x14070066C (IovAllocateIrp.c)
 * Callees:
 *     EtwWriteTransfer @ 0x14000A1B0 (EtwWriteTransfer.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140086AA0 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     IopIsActivityTracingEventEnabled @ 0x14011236C (IopIsActivityTracingEventEnabled.c)
 *     IoSetActivityIdIrp @ 0x14011253C (IoSetActivityIdIrp.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

int __fastcall IopInitActivityIdIrp(__int64 a1)
{
  char v2; // si
  const GUID *v3; // rbx
  const EVENT_DESCRIPTOR *v4; // r14
  struct _KTHREAD *CurrentThread; // rdi
  GUID *SparePtr; // rdi
  __int64 v7; // rcx
  _WORD *v8; // rax
  char v10; // [rsp+30h] [rbp-68h]
  GUID ActivityId; // [rsp+50h] [rbp-48h] BYREF
  __m128i v12; // [rsp+60h] [rbp-38h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    SparePtr = (GUID *)CurrentThread[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
    {
      if ( IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_AllocateIrp) )
      {
        v3 = SparePtr;
        v4 = &IoTrace_KernelIo_AllocateIrp;
        goto LABEL_17;
      }
      ActivityId = *SparePtr;
LABEL_16:
      v2 = 1;
      goto LABEL_17;
    }
    if ( PnpIsSafeToExamineUserModeTeb() )
    {
      v10 = 0;
      if ( KeGetPcr()->NtTib.$1A06FDC1EC270D7EC697F13D78904F04::$120F2532A465E26E2E996D9F9639858A::Self )
      {
        v12 = *(__m128i *)&KeGetPcr()->NtTib.$1A06FDC1EC270D7EC697F13D78904F04::$120F2532A465E26E2E996D9F9639858A::Self[105].SubSystemTib;
        v10 = 1;
      }
      if ( v10 )
      {
        v7 = *(_QWORD *)&NullGuid.Data1 - v12.m128i_i64[0];
        if ( *(_QWORD *)&NullGuid.Data1 == v12.m128i_i64[0] )
          v7 = *(_QWORD *)NullGuid.Data4 - _mm_srli_si128(v12, 8).m128i_u64[0];
        if ( v7 )
        {
          if ( IopIsActivityTracingEventEnabled(&IoTrace_UserInitiatedIo) )
          {
            v3 = (const GUID *)&v12;
            v4 = &IoTrace_UserInitiatedIo;
            goto LABEL_17;
          }
          ActivityId = (GUID)v12;
          goto LABEL_16;
        }
      }
    }
  }
LABEL_17:
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v8) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v8 >= 0 )
  {
    v8 = *(_WORD **)(a1 + 200);
    *v8 |= 2u;
    if ( v3 )
      LODWORD(v8) = EtwWriteTransfer(IoTraceHandle, v4, &ActivityId, v3, 0, 0LL);
  }
  return (int)v8;
}
