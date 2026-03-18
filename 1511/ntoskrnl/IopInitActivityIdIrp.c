/*
 * XREFs of IopInitActivityIdIrp @ 0x1401B73A0
 * Callers:
 *     IopAllocateIrpPrivate @ 0x140043750 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1401023EC (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1401B6964 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401B6C44 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x1406B4804 (IovAllocateIrp.c)
 * Callees:
 *     EtwWriteTransfer @ 0x14009250C (EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1400E48B0 (EtwActivityIdControl.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400FF608 (PnpIsSafeToExamineUserModeTeb.c)
 *     IopIsActivityTracingEventEnabled @ 0x140105BF4 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     IoSetActivityIdIrp @ 0x1401BB3D4 (IoSetActivityIdIrp.c)
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
      if ( KeGetPcr()->NtTib.$0C91CFB10D28D41C3392B7C54F9CA6F4::$3E0F0F6D91C5C9A349763DE49766E812::Self )
      {
        v12 = *(__m128i *)&KeGetPcr()->NtTib.$0C91CFB10D28D41C3392B7C54F9CA6F4::$3E0F0F6D91C5C9A349763DE49766E812::Self[105].SubSystemTib;
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
