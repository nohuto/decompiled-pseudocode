/*
 * XREFs of ?EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x180082D60
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x180083008 (-CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?SetValueForBitFlags@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJKAEBQEAVInputRedirectionTarget@@@Z @ 0x1800831B4 (-SetValueForBitFlags@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJKAEBQEAVInputRe.c)
 *     ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x18008341C (-Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionComponent::EnableInputRedirection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  unsigned int v9; // r9d
  _DWORD *v10; // rax
  int v11; // edi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _QWORD v18[2]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v19[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+60h] [rbp-48h]

  v18[1] = -2LL;
  v9 = 0;
  v10 = (_DWORD *)(a1 + 72);
  do
  {
    if ( (a6 & *v10) != 0 )
    {
      v11 = -2147024891;
      goto LABEL_9;
    }
    ++v9;
    v10 += 4;
  }
  while ( v9 < 3 );
  v18[0] = 0LL;
  v11 = InputRedirectionTarget::Create(a2, a3, a4, v18, a6, a7);
  v12 = v18[0];
  if ( v11 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 8LL))(v18[0]);
    v18[0] = v12;
    v11 = FixedSizeBitFlagMap<InputRedirectionTarget *,3>::SetValueForBitFlags(a1 + 72, a6, v18);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_9:
  v19[0] = *(_OWORD *)a5;
  v19[1] = *(_OWORD *)(a5 + 16);
  v20 = *(_QWORD *)(a5 + 32);
  v13 = InputRedirectionComponent::CallCallbackWithResult(a1 - 8, v19, (unsigned int)v11);
  v15 = v13;
  if ( v13 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 327, v13);
  return v15;
}
