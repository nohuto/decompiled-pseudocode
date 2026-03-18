/*
 * XREFs of Command_ControllerResetPostResetSuccess @ 0x1C00118C8
 * Callers:
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 * Callees:
 *     Command_InternalSendCommand @ 0x1C0012270 (Command_InternalSendCommand.c)
 */

void __fastcall Command_ControllerResetPostResetSuccess(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // al
  __int64 **v4; // rdx
  KIRQL v5; // si
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 **v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v11; // [rsp+28h] [rbp-8h]

  v11 = &v10;
  v2 = (KSPIN_LOCK *)(a1 + 128);
  v10 = (__int64 *)&v10;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  *(_DWORD *)(a1 + 36) = 1;
  v4 = (__int64 **)(a1 + 104);
  v5 = v3;
  while ( *v4 != (__int64 *)v4 )
  {
    v6 = *v4;
    v7 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v4 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v4;
    v8 = v11;
    *v6 = (__int64)&v10;
    v6[1] = (__int64)v8;
    if ( *v8 != (__int64 *)&v10 )
      __fastfail(3u);
    *v8 = v6;
    v11 = (__int64 **)v6;
  }
  while ( v10 != (__int64 *)&v10 )
  {
    v9 = (__int64 *)*v10;
    if ( (__int64 **)v10[1] != &v10 || (__int64 *)v9[1] != v10 )
      __fastfail(3u);
    v10 = (__int64 *)*v10;
    v9[1] = (__int64)&v10;
    Command_InternalSendCommand(a1);
  }
  KeReleaseSpinLock(v2, v5);
}
