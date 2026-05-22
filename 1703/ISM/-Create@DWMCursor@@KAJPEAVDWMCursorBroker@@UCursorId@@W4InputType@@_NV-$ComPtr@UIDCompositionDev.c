/*
 * XREFs of ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@_NV?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x18001F5CC
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z @ 0x18001E934 (-CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputType@@UCursorId@@_N@Z @ 0x18001EFB4 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputT.c)
 *     ?Initialize@DWMCursor@@QEAAJXZ @ 0x18001F3D0 (-Initialize@DWMCursor@@QEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursor::Create(__int64 a1, __int128 *a2, int a3, __int64 a4, __int64 *a5, DWMCursor **a6)
{
  DWMCursor **v9; // rsi
  unsigned int v10; // ebx
  int v11; // r9d
  void *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  DWMCursor *v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int128 v20; // [rsp+40h] [rbp-28h] BYREF

  v9 = a6;
  if ( !a6 )
  {
    v10 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_19;
    v11 = (_DWORD)a6 + 83;
LABEL_18:
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v11, v10);
    goto LABEL_19;
  }
  *a6 = 0LL;
  v12 = malloc(0x158uLL);
  v13 = (__int64)v12;
  if ( v12 )
    memset(v12, 0, 0x158uLL);
  if ( v13 )
  {
    v20 = *a2;
    v14 = *a5;
    a6 = (DWMCursor **)v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = (DWMCursor *)DWMCursor::DWMCursor(v13, a1, &a6, a3, &v20);
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
  {
    v10 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_19;
    v11 = 96;
    goto LABEL_18;
  }
  v16 = DWMCursor::Initialize(v15);
  v10 = v16;
  if ( v16 >= 0 )
  {
    *v9 = v15;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 92, v16);
  }
LABEL_19:
  v18 = *a5;
  if ( *a5 )
  {
    *a5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v10;
}
