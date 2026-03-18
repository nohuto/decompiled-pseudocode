/*
 * XREFs of NtDCompositionWaitForChannel @ 0x1C0079B50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?HasPendingBatches@CApplicationChannel@DirectComposition@@QEBA_NXZ @ 0x1C00D5BA4 (-HasPendingBatches@CApplicationChannel@DirectComposition@@QEBA_NXZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C00D74CC (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 */

__int64 __fastcall NtDCompositionWaitForChannel(__int64 a1, int a2)
{
  int v3; // ebx
  DirectComposition::CApplicationChannel *v4; // rdi
  DirectComposition::CApplicationChannel *v5; // rcx
  DirectComposition::CApplicationChannel *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
    if ( DirectComposition::CApplicationChannel::HasPendingBatches(v7)
      && !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(v5, a2 != 0) )
    {
      v3 = -1073741823;
    }
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v4)(v4);
  }
  return (unsigned int)v3;
}
