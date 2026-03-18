/*
 * XREFs of Command_FailAllCommands @ 0x1C001B3EC
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C001E69C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C001C810 (WPP_RECORDER_SF_qL.c)
 *     Etw_CommandCompleteError @ 0x1C003351C (Etw_CommandCompleteError.c)
 */

__int64 **__fastcall Command_FailAllCommands(__int64 a1)
{
  KSPIN_LOCK *v2; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 *v5; // rdx
  KIRQL v6; // r9
  __int64 **v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rcx
  int v10; // edx
  __int64 *v11; // rbx
  __int64 **result; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v16; // [rsp+48h] [rbp-8h]

  v16 = &v15;
  v2 = (KSPIN_LOCK *)(a1 + 128);
  v15 = (__int64 *)&v15;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v4 = a1 + 88;
  *(_DWORD *)(a1 + 36) = 5;
  v5 = *(__int64 **)(a1 + 88);
  v6 = v3;
  if ( v5 == (__int64 *)(a1 + 88) )
  {
    v7 = v16;
  }
  else
  {
    *v16 = v5;
    *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v16;
    **(_QWORD **)(a1 + 96) = &v15;
    v7 = *(__int64 ***)(a1 + 96);
    v16 = v7;
    *(_QWORD *)(a1 + 96) = a1 + 88;
    *(_QWORD *)v4 = v4;
  }
  v8 = a1 + 104;
  v9 = *(__int64 **)(a1 + 104);
  if ( v9 != (__int64 *)(a1 + 104) )
  {
    *v7 = v9;
    *(_QWORD *)(*(_QWORD *)v8 + 8LL) = v16;
    **(_QWORD **)(a1 + 112) = &v15;
    v16 = *(__int64 ***)(a1 + 112);
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)v8 = v8;
  }
  *(_BYTE *)(a1 + 144) = 1;
  KeReleaseSpinLock(v2, v6);
  while ( 1 )
  {
    v11 = v15;
    result = &v15;
    if ( v15 == (__int64 *)&v15 )
      break;
    v13 = (__int64 *)*v15;
    if ( (__int64 **)v15[1] != &v15 || (__int64 *)v13[1] != v15 )
      __fastfail(3u);
    v15 = (__int64 *)*v15;
    v13[1] = (__int64)&v15;
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(a1 + 16),
      v10,
      6,
      58,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      (char)v11,
      (unsigned __int8)HIBYTE(*((_WORD *)v11 + 18)) >> 2);
    Etw_CommandCompleteError(v14, a1, v11, 3LL);
    ((void (__fastcall *)(__int64 *, __int64))v11[6])(v11, 3LL);
  }
  return result;
}
