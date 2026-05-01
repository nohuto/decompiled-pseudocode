/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18002A560
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180016448 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ??0CLaunchActivatedEventArgs@@QEAA@XZ @ 0x18002A27C (--0CLaunchActivatedEventArgs@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002CA30 (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_5d878536394a9e5d6c15e6b3f5940618_>::Run(
        __int64 a1)
{
  HSTRING **v1; // rax
  HSTRING *v3; // rdi
  HSTRING *v4; // r14
  CLaunchActivatedEventArgs *v5; // rax
  int v6; // edi
  CLaunchActivatedEventArgs *v7; // rbx
  int *result; // rax
  struct IUnknown *v9; // [rsp+30h] [rbp+8h]

  v1 = *(HSTRING ***)(a1 + 16);
  v3 = v1[1];
  v4 = *v1;
  v9 = 0LL;
  v5 = (CLaunchActivatedEventArgs *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = CLaunchActivatedEventArgs::CLaunchActivatedEventArgs(v5);
    v6 = CLaunchActivatedEventArgs::RuntimeClassInitialize(v7, *v4, *v3);
    if ( v6 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(CLaunchActivatedEventArgs *))(*(_QWORD *)v7 + 8LL))(v7);
      v9 = (struct IUnknown *)v7;
      if ( v7 )
        (*(void (__fastcall **)(CLaunchActivatedEventArgs *))(*(_QWORD *)v7 + 16LL))(v7);
      v6 = 0;
    }
    else if ( v7 )
    {
      (*(void (__fastcall **)(CLaunchActivatedEventArgs *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  **(_DWORD **)(a1 + 32) = v6;
  result = *(int **)(a1 + 32);
  if ( *result >= 0 )
  {
    result = (int *)AgileGitPtr::Initialize(*(AgileGitPtr **)(a1 + 24), &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, v9);
    **(_DWORD **)(a1 + 32) = (_DWORD)result;
  }
  if ( v9 )
    return (int *)((__int64 (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  return result;
}
