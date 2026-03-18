/*
 * XREFs of NtDCompositionCreateAndBindSharedSection @ 0x1C0076CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C001DD68 (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionCreateAndBindSharedSection(__int64 a1, int a2, unsigned __int64 a3, _QWORD *a4)
{
  HANDLE v7; // rbx
  int v8; // edi
  DirectComposition::CApplicationChannel *v9; // rbx
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CApplicationChannel *v12; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v12);
  if ( v8 >= 0 )
  {
    v9 = v12;
    v8 = DirectComposition::CApplicationChannel::CreateAndBindSharedSection(v12, a2, a3, &Handle);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v9)(v9);
    v7 = Handle;
  }
  if ( v8 >= 0 )
  {
    if ( a4 >= W32UserProbeAddress )
      a4 = W32UserProbeAddress;
    *a4 = v7;
  }
  return (unsigned int)v8;
}
