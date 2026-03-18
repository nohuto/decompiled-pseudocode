/*
 * XREFs of NtGdiCreateCompatibleBitmap @ 0x1400172E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x1400173F4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall NtGdiCreateCompatibleBitmap(Gre::Base *a1, int a2, int a3)
{
  HBITMAP CompatibleBitmap; // rbx
  __int64 v8; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+40h] [rbp-11h]
  struct Gre::Base::SESSION_GLOBALS *v10; // [rsp+48h] [rbp-9h]
  __int64 v11; // [rsp+50h] [rbp-1h]
  _OWORD v12[2]; // [rsp+58h] [rbp+7h] BYREF
  _OWORD v13[2]; // [rsp+78h] [rbp+27h] BYREF
  Gre::Base *v14; // [rsp+98h] [rbp+47h]
  __int16 v15; // [rsp+A0h] [rbp+4Fh]

  v11 = 0LL;
  v10 = Gre::Base::Globals(a1);
  v8 = 0LL;
  v9 = 0;
  memset(v12, 0, sizeof(v12));
  PushThreadGuardedObject(
    v12,
    &v8,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  memset(v13, 0, sizeof(v13));
  PushThreadGuardedObject(
    v13,
    &v8,
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v14 = a1;
  v15 = 1;
  CompatibleBitmap = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)&v8, a2, a3 & 0xF0FFFFFF, 0, 0LL, 0LL);
  v8 &= -(__int64)((_BYTE)v15 != 0);
  PopThreadGuardedObject(v13);
  DCOBJ::~DCOBJ((DCOBJ *)&v8);
  return CompatibleBitmap;
}
