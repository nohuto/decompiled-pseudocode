/*
 * XREFs of Controller_DisableController @ 0x1C001E2A0
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C001E69C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C001F190 (Controller_SetControllerGone.c)
 */

void __fastcall Controller_DisableController(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  Controller_SetControllerGone(a1, 0LL);
  if ( *(_DWORD *)(a1 + 148) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 184);
    v3 = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, int))(a1 + 192))(v2, 0LL, &v3, 4LL, 2);
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0xA9u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
  }
  KeFlushQueuedDpcs();
}
