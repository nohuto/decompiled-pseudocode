/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x14023ABE0
 * Callers:
 *     <none>
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1400A4304 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall CheckAndProcessSurfaceComplete(__int64 a1)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rbx
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  __int64 v9; // r8
  struct DWMSPRITE *v10; // rax
  _OWORD v12[2]; // [rsp+20h] [rbp-60h] BYREF
  volatile signed __int16 *v13; // [rsp+40h] [rbp-40h]
  _OWORD v14[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]

  memset(v14, 0, sizeof(v14));
  PushThreadGuardedObject(
    v14,
    v14,
    UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
  v15 = 0LL;
  v16 = 0;
  if ( a1 )
  {
    v3 = Gre::Base::Globals(v2);
    LOBYTE(v4) = 18;
    v5 = HmgLock(v3, a1, v4, 0LL);
    v15 = v5;
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 296);
      memset(v12, 0, sizeof(v12));
      PushThreadGuardedObject(
        v12,
        v12,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v13 = 0LL;
      v8 = Gre::Base::Globals(v7);
      if ( v6 )
      {
        LOBYTE(v9) = 15;
        v10 = (struct DWMSPRITE *)HmgLock(v8, v6, v9, 0LL);
        v13 = (volatile signed __int16 *)v10;
      }
      else
      {
        v10 = (struct DWMSPRITE *)v13;
      }
      if ( v10 )
      {
        if ( *((_DWORD *)v10 + 29) == 3 )
          *((_DWORD *)v10 + 29) = 1;
        CheckAndProcessWindowResizeComplete(v10, 0, 0LL);
        if ( v13 )
          _InterlockedDecrement16(v13 + 6);
      }
      v13 = 0LL;
      PopThreadGuardedObject(v12);
    }
  }
  SFMLOGICALSURFACEREF_vDestructor((__int64)v14);
  return PopThreadGuardedObject(v14);
}
