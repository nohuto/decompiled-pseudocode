/*
 * XREFs of NtGdiGetDCforBitmap @ 0x1401D0490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetDCforBitmap(__int64 a1)
{
  __int64 v2; // rdi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v2 = 0LL;
  memset(v10, 0, sizeof(v10));
  PushThreadGuardedObject(
    v10,
    v10,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v4 = Gre::Base::Globals(v3);
  LOBYTE(v5) = 5;
  v6 = HmgShareLock(v4, a1, v5, 0LL);
  v11 = v6;
  if ( v6 )
  {
    v2 = *(_QWORD *)(v6 + 160);
    v8 = Gre::Base::Globals(v7);
    DEC_SHARE_REF_CNT(v8, v11);
  }
  PopThreadGuardedObject(v10);
  return v2;
}
