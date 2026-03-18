/*
 * XREFs of NtGdiEngMarkBandingSurface @ 0x14032D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     EngMarkBandingSurface @ 0x14031D840 (EngMarkBandingSurface.c)
 */

__int64 __fastcall NtGdiEngMarkBandingSurface(HSURF a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8
  unsigned int v6; // ebx
  BOOL v7; // edi
  _OWORD v9[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-98h]
  _BYTE v11[32]; // [rsp+48h] [rbp-90h] BYREF
  __int64 v12; // [rsp+68h] [rbp-70h]
  UMPDOBJ *v13[12]; // [rsp+70h] [rbp-68h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v13, CurrentThread);
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v9);
  v10 = 0LL;
  v4 = Gre::Base::Globals(v3);
  LOBYTE(v5) = 5;
  v10 = HmgShareLock(v4, a1, v5, 16LL);
  SURFREF::SURFREF((SURFREF *)v11, a1);
  v6 = 1;
  v7 = v12 && (*(_DWORD *)(v12 + 112) & 0x40000) != 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v11);
  if ( !v7 || !EngMarkBandingSurface(a1) )
    v6 = 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v9);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v13);
  return v6;
}
