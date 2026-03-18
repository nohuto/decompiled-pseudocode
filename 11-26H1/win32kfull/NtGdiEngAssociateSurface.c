/*
 * XREFs of NtGdiEngAssociateSurface @ 0x14032CA10
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1400F4A1C (-ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x140296AE8 (-ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z.c)
 */

_BOOL8 __fastcall NtGdiEngAssociateSurface(HSURF hsurf, Gre::Base *a2, int a3)
{
  struct _GRETHREAD *CurrentThread; // rax
  BOOL v7; // ebx
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  HDEV v15; // r9
  BOOL v16; // eax
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  _OWORD v19[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v20; // [rsp+40h] [rbp-78h]
  UMPDOBJ *v21[12]; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v22; // [rsp+D8h] [rbp+20h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)hsurf);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v21, CurrentThread);
  v7 = 0;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v19);
  v20 = 0LL;
  v9 = Gre::Base::Globals(v8);
  LOBYTE(v10) = 5;
  v11 = HmgShareLock(v9, hsurf, v10, 16LL);
  v20 = v11;
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 112) & 0x40000) != 0 )
    {
      v12 = ValidUmpdHdev(a2);
      if ( v12 )
      {
        v14 = a3 & 0xFFFFB7EF;
        v22 = v12;
        if ( (v14 & 0xFFFC4A10) == 0 && (unsigned int)ValidUmpdHooks((struct PDEVOBJ *)&v22, v14) )
        {
          v16 = EngAssociateSurface(hsurf, v15, v14);
          v13 = 1LL;
          v7 = v16;
        }
        v17 = Gre::Base::Globals((Gre::Base *)v13);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v22, v17);
      }
    }
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v21);
  return v7;
}
