/*
 * XREFs of DxgkEngGetClientRect @ 0x14001B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14001B5B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngGetClientRect(Gre::Base *a1, _OWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rax
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v11; // [rsp+30h] [rbp-38h]
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v11 = Gre::Base::Globals(a1);
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v12);
  v4 = 1;
  LOBYTE(v5) = 1;
  v6 = HmgShareLock(v11, a1, v5, 1LL);
  v10 = v6;
  if ( v6 )
  {
    *a2 = *(_OWORD *)(v6 + 1032);
    v8 = Gre::Base::Globals(v7);
    DEC_SHARE_REF_CNT(v8, v10);
  }
  else
  {
    v4 = 0;
  }
  PopThreadGuardedObject(v12);
  return v4;
}
