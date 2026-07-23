/*
 * XREFs of CmpFreeCallbackObjectContexts @ 0x1405FB5CC
 * Callers:
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpLockContextListExclusive @ 0x140603C70 (CmpLockContextListExclusive.c)
 *     CmpUnlockContextList @ 0x140603E6C (CmpUnlockContextList.c)
 */

PVOID *__fastcall CmpFreeCallbackObjectContexts(__int64 a1)
{
  char v2; // di
  PVOID ***v3; // rbx
  PVOID **v4; // rax
  PVOID *v5; // rcx
  PVOID *v6; // r8
  PVOID ***v7; // rdx
  PVOID *v8; // rcx
  PVOID v9; // rcx
  PVOID *result; // rax
  PVOID *v11; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-30h] BYREF
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  v2 = 0;
  P = &P;
  CmpLockContextListExclusive();
  v3 = (PVOID ***)(a1 + 72);
  while ( *v3 != (PVOID **)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (*v3)[1] != (PVOID *)v3 || v5[1] != v4 )
      __fastfail(3u);
    *v3 = (PVOID **)v5;
    v5[1] = v3;
    v6 = v4[2];
    v7 = (PVOID ***)v4[3];
    if ( v6[1] != v4 + 2 || *v7 != v4 + 2 )
      __fastfail(3u);
    *v7 = (PVOID **)v6;
    v6[1] = v7;
    if ( v7 == (PVOID ***)v6 )
      v2 = 1;
    v8 = p_P;
    if ( *p_P != &P )
      __fastfail(3u);
    v4[1] = p_P;
    *v4 = &P;
    *v8 = v4;
    p_P = (PVOID *)v4;
  }
  CmpUnlockContextList();
  if ( v2 )
  {
    _InterlockedOr(v12, 0);
    if ( CallbackListDeleteEvent )
      ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
  }
  while ( 1 )
  {
    v9 = P;
    result = &P;
    if ( P == &P )
      break;
    v11 = *(PVOID **)P;
    if ( *((PVOID **)P + 1) != &P || v11[1] != P )
      __fastfail(3u);
    P = *(PVOID *)P;
    v11[1] = &P;
    ExFreePoolWithTag(v9, 0x63634D43u);
  }
  return result;
}
