/*
 * XREFs of ?DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x180082E90
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x180083008 (-CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?GetValueForBitFlags@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJKPEAPEAVInputRedirectionTarget@@@Z @ 0x180083154 (-GetValueForBitFlags@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJKPEAPEAVInputRe.c)
 *     ?RemoveValue@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJAEBQEAVInputRedirectionTarget@@@Z @ 0x1800832AC (-RemoveValue@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJAEBQEAVInputRedirection.c)
 *     ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x18008369C (-IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionComponent::DisableInputRedirection(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int v8; // r10d
  _DWORD *v9; // rax
  __int128 v13; // xmm1
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int ValueForBitFlags; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int128 v21; // xmm1
  _QWORD v22[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-10h]

  v5 = 0;
  v6 = a1 + 72;
  v8 = 0;
  v9 = (_DWORD *)(a1 + 72);
  while ( (a5 & *v9) == 0 )
  {
    ++v8;
    v9 += 4;
    if ( v8 >= 3 )
      goto LABEL_4;
  }
  v22[0] = 0LL;
  ValueForBitFlags = FixedSizeBitFlagMap<InputRedirectionTarget *,3>::GetValueForBitFlags(a1 + 72, a5, v22);
  if ( ValueForBitFlags < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v19, &MinInput_Warning_CheckResult, 0, 347, ValueForBitFlags);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v20 = v22[0];
  if ( !v22[0]
    || (v21 = a3[1],
        v23 = *a3,
        v25 = *((_QWORD *)a3 + 4),
        v24 = v21,
        !(unsigned __int8)InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(v22[0], &v23, a2)) )
  {
LABEL_4:
    v5 = -2147024891;
    goto LABEL_5;
  }
  FixedSizeBitFlagMap<InputRedirectionTarget *,3>::RemoveValue(v6, v22);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_5:
  v13 = a4[1];
  v23 = *a4;
  v25 = *((_QWORD *)a4 + 4);
  v24 = v13;
  v14 = InputRedirectionComponent::CallCallbackWithResult(a1 - 8, &v23, v5);
  v16 = v14;
  if ( v14 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 364, v14);
  return v16;
}
