/*
 * XREFs of ?Initialize@DWMCursor@@QEAAJXZ @ 0x18001F3D0
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@_NV?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x18001F5CC (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@_NV-$ComPtr@UIDCompositionDev.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x180009B18 (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::Initialize(DWMCursor *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // r9d
  __int64 v5; // r15
  char *v6; // rsi
  DWORD LastError; // ebx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10))(
         *((_QWORD *)this + 10),
         &GUID_0ab6bdb3_4d49_46a8_b90b_1a86b0cd4e41,
         &v12);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_18;
    v4 = 43;
    goto LABEL_4;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v12 + 216LL))(
         v12,
         &GUID_16cdff07_c503_419c_83f2_0965c7af1fa6,
         (char *)this + 88);
  if ( v2 >= 0 )
  {
    v5 = v12;
    v6 = (char *)*((_QWORD *)this + 12);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v6);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 12) = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v5 + 224LL))(
           v5,
           *((_QWORD *)this + 11),
           (char *)this + 96);
    if ( v2 >= 0 )
    {
      TestCommandHost::RegisterForTestCommandMessage(
        v3,
        (__int64)this,
        (__int64)lambda_c739a78b7ff0a2fdc5f9b94b3ac1dde9_::_lambda_invoker_cdecl_,
        (__int64)this + 144);
      v13 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 24LL))(
        *((_QWORD *)this + 4) + 8LL,
        &v13);
      v8 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v9 = *((_QWORD *)this + 6);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      *((_QWORD *)this + 6) = v8;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 47;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v4 = 45;
LABEL_4:
    Template_qqq(v3, &MinInput_Warning_CheckResult, 0, v4, v2);
  }
LABEL_18:
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
