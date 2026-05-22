/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x18002D550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18004A724 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAX_N@Z @ 0x18004A7DC (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCGamepadProcessor::OnTargetWithFocus3dChanged(
        MPCGamepadProcessor *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3)
{
  struct MPCGamepadInputHelper *Instance; // rax
  struct MPCGamepadInputHelper *v5; // rbx
  HWND v6; // rax

  Instance = MPCGamepadInputHelper::GetInstance();
  v5 = Instance;
  if ( a3 )
  {
    *(_BYTE *)Instance = (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3) == 1;
    v6 = (HWND)(*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 64LL))(a3);
    *((_QWORD *)v5 + 1) = v6;
    *((_QWORD *)v5 + 2) = GetAncestor(v6, 2u);
  }
  else
  {
    *((_QWORD *)Instance + 2) = 0LL;
    *((_QWORD *)Instance + 1) = 0LL;
    *(_BYTE *)Instance = 0;
  }
  if ( *(_BYTE *)v5 && *((_BYTE *)v5 + 24) )
    MPCGamepadInputHelper::UpdateGamepadFocus(v5, 0);
  return 0LL;
}
