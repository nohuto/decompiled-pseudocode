/*
 * XREFs of ?CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x180083008
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x180082D60 (-EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 *     ?DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x180082E90 (-DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputRedirectionComponent::CallCallbackWithResult(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF

  v15[1] = -2LL;
  v15[0] = 0LL;
  v13 = 0;
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**(_QWORD **)(a1 + 48) + 24LL))(
         *(_QWORD *)(a1 + 48),
         &GUID_a464cb85_68af_4085_87c5_bbf363d89286,
         &v13);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v9 = 384;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD *))(**(_QWORD **)(a1 + 48) + 48LL))(
         *(_QWORD *)(a1 + 48),
         a2,
         v13,
         v15);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v9 = 389;
    goto LABEL_13;
  }
  v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v15[0])(
         v15[0],
         &GUID_a464cb85_68af_4085_87c5_bbf363d89286,
         &v14);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v9 = 393;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, a3);
  v8 = v6;
  if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 395;
LABEL_13:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v9, v6);
  }
LABEL_14:
  v10 = v14;
  v14 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = v15[0];
  v15[0] = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v8;
}
