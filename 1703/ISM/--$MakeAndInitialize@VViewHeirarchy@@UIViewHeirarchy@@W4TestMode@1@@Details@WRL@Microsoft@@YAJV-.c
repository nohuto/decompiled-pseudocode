/*
 * XREFs of ??$MakeAndInitialize@VViewHeirarchy@@UIViewHeirarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@@012@$$QEAW4TestMode@ViewHeirarchy@@@Z @ 0x18006E888
 * Callers:
 *     ?Create@ViewHeirarchy@@SA?AV?$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ @ 0x18006D108 (-Create@ViewHeirarchy@@SA-AV-$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??0ViewHeirarchy@@QEAA@XZ @ 0x18006E95C (--0ViewHeirarchy@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHeirarchy,IViewHeirarchy,enum ViewHeirarchy::TestMode>(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v4; // rcx
  ViewHeirarchy *v5; // rax
  int v6; // esi
  ViewHeirarchy *v7; // rdi

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = 0LL;
  v5 = (ViewHeirarchy *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = ViewHeirarchy::ViewHeirarchy(v5);
    v6 = (*(__int64 (__fastcall **)(ViewHeirarchy *, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, *a2);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(ViewHeirarchy *, GUID *, __int64 *))v7)(
             v7,
             &GUID_60285f40_b2da_4b48_b9fd_7550a7fff1b4,
             a1);
    (*(void (__fastcall **)(ViewHeirarchy *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
