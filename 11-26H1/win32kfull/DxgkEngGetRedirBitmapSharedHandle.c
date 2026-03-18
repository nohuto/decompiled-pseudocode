/*
 * XREFs of DxgkEngGetRedirBitmapSharedHandle @ 0x14001B3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14001B5B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     GreGetDxSharedSurface @ 0x14001D3F4 (GreGetDxSharedSurface.c)
 */

__int64 __fastcall DxgkEngGetRedirBitmapSharedHandle(Gre::Base *a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  struct Gre::Base::SESSION_GLOBALS *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  _BYTE v14[32]; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  char v16; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+38h] BYREF

  v13 = 0LL;
  v12 = Gre::Base::Globals(a1);
  v11 = 0;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v14);
  LOBYTE(v4) = 1;
  v5 = HmgShareLock(v12, a1, v4, 1LL);
  v10 = v5;
  *a2 = 0LL;
  if ( v5 )
  {
    v15 = 0;
    v17 = 0LL;
    GreGetDxSharedSurface(
      *(_QWORD *)(v5 + 472),
      (_DWORD)a2,
      (unsigned int)&v17,
      (unsigned int)&v16,
      (__int64)&v15,
      (__int64)v9);
    if ( v10 )
    {
      v7 = Gre::Base::Globals(v6);
      DEC_SHARE_REF_CNT(v7, v10);
      v10 = 0LL;
    }
  }
  return PopThreadGuardedObject(v14);
}
