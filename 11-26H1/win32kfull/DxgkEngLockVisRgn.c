/*
 * XREFs of DxgkEngLockVisRgn @ 0x14001B330
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14001B5B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngLockVisRgn(Gre::Base *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rax
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v9; // [rsp+30h] [rbp-38h]
  _BYTE v10[40]; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0LL;
  v9 = Gre::Base::Globals(a1);
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v10);
  LOBYTE(v3) = 1;
  v4 = HmgShareLock(v9, a1, v3, 1LL);
  v8 = v4;
  if ( v4 )
  {
    v2 = *(_QWORD *)(v4 + 48);
    v6 = Gre::Base::Globals(v5);
    DEC_SHARE_REF_CNT(v6, v8);
  }
  PopThreadGuardedObject(v10);
  return v2;
}
