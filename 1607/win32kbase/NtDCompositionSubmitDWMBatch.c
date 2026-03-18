/*
 * XREFs of NtDCompositionSubmitDWMBatch @ 0x1C0042890
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_K@Z @ 0x1C00428E0 (-SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_K@Z.c)
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0042978 (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSubmitDWMBatch(unsigned int a1, unsigned __int64 a2)
{
  int v3; // edi
  unsigned __int64 v4; // rdx
  struct DirectComposition::CDwmChannel *v5; // rbx
  struct DirectComposition::CDwmChannel *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = DirectComposition::CDwmChannel::ReferenceHandleAndLock(a1, &v7);
  if ( v3 >= 0 )
  {
    v4 = a2;
    v5 = v7;
    DirectComposition::CDwmChannel::SubmitDwmBatch(v7, v4);
    (**(void (__fastcall ***)(struct DirectComposition::CDwmChannel *))v5)(v5);
  }
  return (unsigned int)v3;
}
