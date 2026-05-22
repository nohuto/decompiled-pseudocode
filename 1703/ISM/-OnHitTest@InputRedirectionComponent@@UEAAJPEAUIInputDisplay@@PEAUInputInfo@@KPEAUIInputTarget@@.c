/*
 * XREFs of ?OnHitTest@InputRedirectionComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180082B40
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForBitFlags@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJKPEAPEAVInputRedirectionTarget@@@Z @ 0x180083154 (-GetValueForBitFlags@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJKPEAPEAVInputRe.c)
 *     ?RemoveValue@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJAEBQEAVInputRedirectionTarget@@@Z @ 0x1800832AC (-RemoveValue@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJAEBQEAVInputRedirection.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionComponent::OnHitTest(
        InputRedirectionComponent *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        __int64 a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  unsigned int v8; // r14d
  int v9; // esi
  __int64 v10; // rbx
  unsigned int v11; // edx
  unsigned int v12; // r9d
  char *v13; // r15
  _DWORD *v14; // rax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64); // rax
  __int64 v19; // rcx
  _QWORD v21[2]; // [rsp+30h] [rbp-30h] BYREF
  int v22; // [rsp+40h] [rbp-20h]
  __int64 v23; // [rsp+48h] [rbp-18h]
  int v24; // [rsp+50h] [rbp-10h]

  v21[1] = -2LL;
  v8 = 0;
  v21[0] = 0LL;
  v9 = 0;
  v22 = 0;
  v10 = 0LL;
  v23 = 0LL;
  v11 = 0;
  v12 = *(_DWORD *)a3;
  v13 = (char *)this + 80;
  v14 = (_DWORD *)((char *)this + 80);
  while ( (v12 & *v14) == 0 )
  {
    ++v11;
    v14 += 4;
    if ( v11 >= 3 )
      goto LABEL_17;
  }
  FixedSizeBitFlagMap<InputRedirectionTarget *,3>::GetValueForBitFlags((char *)this + 80, v12, v21);
  v15 = v21[0];
  if ( *(_DWORD *)(v21[0] + 40LL) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**((_QWORD **)this + 9) + 24LL))(
            *((_QWORD *)this + 9),
            *((unsigned int *)a3 + 1),
            v21);
    v8 = v16;
    if ( v16 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 215, v16);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    if ( *(_DWORD *)(v15 + 64) != *(_DWORD *)(v21[0] + 8LL) )
    {
      v18 = *(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL);
      v9 = 1;
      if ( *(_BYTE *)(v15 + 48) )
        v9 = 2;
      v22 = v9;
      v18(v15);
      v10 = v15;
      v23 = v15;
      v24 |= 1u;
    }
  }
  else
  {
    FixedSizeBitFlagMap<InputRedirectionTarget *,3>::RemoveValue(v13, v21);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_17:
  *(_DWORD *)a6 = v9;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v19 = *((_QWORD *)a6 + 1);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  *((_QWORD *)a6 + 1) = v10;
  *((_DWORD *)a6 + 4) = v24;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v8;
}
