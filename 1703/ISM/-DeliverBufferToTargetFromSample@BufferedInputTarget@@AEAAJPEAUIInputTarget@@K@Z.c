/*
 * XREFs of ?DeliverBufferToTargetFromSample@BufferedInputTarget@@AEAAJPEAUIInputTarget@@K@Z @ 0x180080D58
 * Callers:
 *     ?DeliverInput@BufferedInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180080900 (-DeliverInput@BufferedInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BufferedInputTarget::DeliverBufferToTargetFromSample(
        BufferedInputTarget *this,
        struct IInputTarget *a2,
        int a3)
{
  __int64 v3; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi

  v3 = *((_QWORD *)this + 23);
  if ( v3 == *((_QWORD *)this + 24) )
  {
LABEL_6:
    v9 = 0;
    *((_QWORD *)this + 24) = *((_QWORD *)this + 23);
    return v9;
  }
  while ( a3 )
  {
    --a3;
LABEL_5:
    v3 += 1888LL;
    if ( v3 == *((_QWORD *)this + 24) )
      goto LABEL_6;
  }
  v7 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v3);
  v9 = v7;
  if ( v7 >= 0 )
    goto LABEL_5;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 403, v7);
  return v9;
}
