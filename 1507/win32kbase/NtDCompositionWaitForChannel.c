/*
 * XREFs of NtDCompositionWaitForChannel @ 0x1C0016660
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z @ 0x1C002DCE4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionWaitForChannel(unsigned int a1, int a2)
{
  int v3; // edi
  bool v4; // zf
  int *v5; // rbx
  bool v6; // si
  struct DirectComposition::CApplicationChannel *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v8);
  if ( v3 >= 0 )
  {
    v4 = a2 == 0;
    v5 = (int *)v8;
    v6 = !v4;
    do
    {
      if ( v5[43] <= 0 )
        break;
      DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)v5, 1);
    }
    while ( v6 );
    (**(void (__fastcall ***)(int *))v5)(v5);
  }
  return (unsigned int)v3;
}
