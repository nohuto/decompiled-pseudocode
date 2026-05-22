/*
 * XREFs of ?OnTargetWithFocusChanged@OneCoreUAPInputHost@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800047D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OneCoreUAPInputHost::OnTargetWithFocusChanged(
        OneCoreUAPInputHost *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF

  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( v6 )
  {
    v16 = 0LL;
    if ( (**v6)(v6, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, &v16) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v16 + 24LL))(
             v16,
             a2,
             a3);
      v9 = v7;
      if ( v7 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 219, v7);
        v10 = v16;
        v16 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        return v9;
      }
    }
    v11 = v16;
    v16 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 6);
  v13 = *((_QWORD *)this + 7);
  while ( v12 != v13 )
  {
    v16 = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v12 + 16))(
           *(_QWORD *)(v12 + 16),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           &v16) >= 0 )
      (*(void (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v16 + 24LL))(
        v16,
        a2,
        a3);
    v14 = v16;
    v16 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v12 += 24LL;
  }
  return 0;
}
