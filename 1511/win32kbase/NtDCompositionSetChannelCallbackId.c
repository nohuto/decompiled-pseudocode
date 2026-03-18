/*
 * XREFs of NtDCompositionSetChannelCallbackId @ 0x1C007A460
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetCallbackId@CApplicationChannel@DirectComposition@@QEAAJ_NII@Z @ 0x1C001DEB8 (-SetCallbackId@CApplicationChannel@DirectComposition@@QEAAJ_NII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChannelCallbackId(__int64 a1, int a2, int a3, int a4)
{
  int v7; // ebx
  void (__fastcall ***v8)(_QWORD); // rcx
  DirectComposition::CApplicationChannel *v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v10);
  if ( v7 >= 0 )
  {
    v7 = DirectComposition::CApplicationChannel::SetCallbackId(v10, a2 != 0, a3, a4);
    (**v8)(v8);
  }
  return (unsigned int)v7;
}
