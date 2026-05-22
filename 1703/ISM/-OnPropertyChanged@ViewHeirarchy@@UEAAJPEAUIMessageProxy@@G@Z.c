/*
 * XREFs of ?OnPropertyChanged@ViewHeirarchy@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18006D660
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@IUViewHeirarchyEntry@ViewHeirarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@4@@std@@QEAAAEAUViewHeirarchyEntry@ViewHeirarchy@@AEBI@Z @ 0x18006E490 (--A-$unordered_map@IUViewHeirarchyEntry@ViewHeirarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHeirarchy::OnPropertyChanged(ViewHeirarchy *this, struct IMessageProxy *a2, unsigned __int16 a3)
{
  int (__fastcall **v6)(struct IMessageProxy *, GUID *, _QWORD *); // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v19; // [rsp+68h] [rbp+10h] BYREF
  char v20; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = *(int (__fastcall ***)(struct IMessageProxy *, GUID *, _QWORD *))a2;
  v17[0] = 0LL;
  if ( (*v6)(a2, &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa, v17) >= 0 && a3 == 15 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v17[0] + 120LL))(v17[0], &v20);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x85,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v17[0] + 144LL))(v17[0], &v19);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x88,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = v17[0];
    if ( v17[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 8LL))(v17[0]);
    v10 = v19;
    v11 = std::unordered_map<unsigned int,ViewHeirarchy::ViewHeirarchyEntry>::operator[]((char *)this + 80, &v20);
    v12 = *(_QWORD *)v11;
    *(_QWORD *)v11 = v9;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *(_DWORD *)(v11 + 8) = v10;
  }
  if ( *((struct IMessageProxy **)this + 7) == a2 && (unsigned int)a3 - 1 <= 1 && !*((_QWORD *)this + 9) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 8) + 40LL))(
            *((_QWORD *)this + 8),
            (char *)this + 72);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 64LL))(
            *((_QWORD *)this + 9),
            (char *)this + 8);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
        (const char *)(unsigned int)v14);
      JUMPOUT(0x18006D864LL);
    }
  }
  v15 = v17[0];
  if ( v17[0] )
  {
    v17[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)a2 + 16LL))(a2);
  return 0LL;
}
