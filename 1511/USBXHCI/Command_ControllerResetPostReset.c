/*
 * XREFs of Command_ControllerResetPostReset @ 0x1C001B130
 * Callers:
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 * Callees:
 *     Command_Initialize @ 0x1C0007028 (Command_Initialize.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C001C810 (WPP_RECORDER_SF_qL.c)
 *     Etw_CommandCompleteError @ 0x1C003351C (Etw_CommandCompleteError.c)
 */

_DWORD *__fastcall Command_ControllerResetPostReset(__int64 a1)
{
  KSPIN_LOCK *v2; // rbx
  KIRQL v3; // si
  __int64 **v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 **v7; // rax
  __int64 **v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 **v11; // rdx
  int v12; // edx
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v18; // [rsp+48h] [rbp-8h]

  v18 = &v17;
  v2 = (KSPIN_LOCK *)(a1 + 128);
  v17 = (__int64 *)&v17;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v4 = (__int64 **)(a1 + 88);
  while ( *v4 != (__int64 *)v4 )
  {
    v5 = *v4;
    v6 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v4;
    v7 = v18;
    *v5 = (__int64)&v17;
    v5[1] = (__int64)v7;
    if ( *v7 != (__int64 *)&v17 )
      __fastfail(3u);
    *v7 = v5;
    v18 = (__int64 **)v5;
  }
  v8 = (__int64 **)(a1 + 104);
  while ( *v8 != (__int64 *)v8 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    v11 = v18;
    *v9 = (__int64)&v17;
    v9[1] = (__int64)v11;
    if ( *v11 != (__int64 *)&v17 )
      __fastfail(3u);
    *v11 = v9;
    v18 = (__int64 **)v9;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 24),
    0LL);
  *(_DWORD *)(a1 + 36) = 4;
  KeReleaseSpinLock(v2, v3);
  while ( 1 )
  {
    v13 = v17;
    if ( v17 == (__int64 *)&v17 )
      break;
    v14 = (__int64 *)*v17;
    if ( (__int64 **)v17[1] != &v17 || (__int64 *)v14[1] != v17 )
      __fastfail(3u);
    v17 = (__int64 *)*v17;
    v14[1] = (__int64)&v17;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(a1 + 16),
      v12,
      6,
      57,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      (char)v13,
      (unsigned __int8)HIBYTE(*((_WORD *)v13 + 18)) >> 2);
    Etw_CommandCompleteError(v15, a1, v13, 3LL);
    ((void (__fastcall *)(__int64 *, __int64))v13[6])(v13, 3LL);
  }
  return Command_Initialize(a1);
}
