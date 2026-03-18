/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x14001B600
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14001B5B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x14001C31C (GreAddBitmapD3DDirtyRgn.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(Gre::Base *a1, unsigned int *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  Gre::Base *v6; // rcx
  __int64 v7; // rdx
  void (__fastcall *v8)(__int64, unsigned int *); // rax
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-40h]
  struct Gre::Base::SESSION_GLOBALS *v12; // [rsp+30h] [rbp-30h]
  _OWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF

  v12 = Gre::Base::Globals(a1);
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v13);
  LOBYTE(v4) = 1;
  v5 = HmgShareLock(v12, a1, v4, 1LL);
  v11 = v5;
  if ( v5 )
  {
    v6 = *(Gre::Base **)(v5 + 48);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v5 + 496);
      if ( (*(_DWORD *)(v7 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v7 + 92);
        v8 = (void (__fastcall *)(__int64, unsigned int *))*((_QWORD *)v6 + 433);
        if ( v8 )
          v8((*(_QWORD *)(v11 + 496) + 24LL) & -(__int64)(*(_QWORD *)(v11 + 496) != 0LL), a2);
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn(*(_QWORD *)(v11 + 472), *a2, *((_QWORD *)a2 + 1));
  }
  if ( v11 )
  {
    v9 = Gre::Base::Globals(v6);
    DEC_SHARE_REF_CNT(v9, v11);
  }
  return PopThreadGuardedObject(v13);
}
