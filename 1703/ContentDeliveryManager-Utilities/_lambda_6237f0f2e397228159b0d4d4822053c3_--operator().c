/*
 * XREFs of _lambda_6237f0f2e397228159b0d4d4822053c3_::operator() @ 0x1800504FC
 * Callers:
 *     ?First@?$SimpleVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@345@@Z @ 0x180050450 (-First@-$SimpleVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@W.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6237f0f2e397228159b0d4d4822053c3_::operator()(_QWORD **a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[8])(
         (*a1)[8],
         &GUID_fa4f30bc_096b_5280_b633_948d8ebba990,
         &v5);
  if ( v2 >= 0 )
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *a1[1]);
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return (unsigned int)v2;
}
