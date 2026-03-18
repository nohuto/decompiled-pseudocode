/*
 * XREFs of UserDetachQueueFromInputWindow @ 0x140206238
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x140206220 (UserDetachQueueFromInputWindowApiExt.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1402062BC (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 */

void __fastcall UserDetachQueueFromInputWindow(__int64 a1, struct IInputQueue *a2)
{
  bool v4; // bl
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagWND *v8; // r8

  v4 = IS_USERCRIT_OWNED_EXCLUSIVE(a1, (__int64)a2);
  if ( !v4 )
    EnterCrit(1LL, 0LL);
  v5 = HMValidateHandleNoSecure(a1, 1);
  v8 = (struct tagWND *)v5;
  if ( v5 && !(unsigned int)IsWindowBeingDestroyed(v5) )
    DetachInputQueueFromWindow(v8, a2);
  if ( !v4 )
    UserSessionSwitchLeaveCritWithNonPaged(v7, v6, v8);
}
