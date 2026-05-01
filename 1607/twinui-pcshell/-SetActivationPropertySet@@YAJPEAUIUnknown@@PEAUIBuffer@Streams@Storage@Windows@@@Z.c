/*
 * XREFs of ?SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x180029180
 * Callers:
 *     ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x180029230 (-CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIAppl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetActivationPropertySet(struct IUnknown *a1, struct Windows::Storage::Streams::IBuffer *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_e7a5f14e_0650_44f2_9168_35cd1d04fe20,
         &v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v9 + 24LL))(
           v9,
           0LL,
           0LL,
           0LL,
           a2);
    v4 = v3;
    if ( v3 >= 0 )
      goto LABEL_6;
    v5 = 34LL;
  }
  else
  {
    v5 = 33LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
    (const char *)(unsigned int)v3);
LABEL_6:
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
