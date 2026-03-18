/*
 * XREFs of NtDCompositionSetChannelCommitCompletionEvent @ 0x1C007A990
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C001DB5C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChannelCommitCompletionEvent(__int64 a1, void *a2)
{
  int v3; // edi
  void *v4; // rdx
  struct DirectComposition::CApplicationChannel *v5; // rbx
  struct DirectComposition::CApplicationChannel *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( a2 )
  {
    v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
    if ( v3 >= 0 )
    {
      v4 = a2;
      v5 = v7;
      v3 = DirectComposition::CApplicationChannel::SetCommitCompletionEvent(v7, v4);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
