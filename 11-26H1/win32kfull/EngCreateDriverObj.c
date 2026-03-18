/*
 * XREFs of EngCreateDriverObj @ 0x140318C60
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x140349810 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1401DEC60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z @ 0x1401E6998 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  HDRVOBJ v6; // rsi
  struct Gre::Base::SESSION_GLOBALS *v7; // rdi
  struct OBJECT *Object; // rax
  __int64 v9; // rcx
  struct OBJECT *v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  _OWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]
  char v16; // [rsp+58h] [rbp-20h]
  HDEV v17; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = Gre::Base::Globals((Gre::Base *)pvObj);
  Object = (struct OBJECT *)AllocateObject(v7, 0x40u, 0x1Cu);
  v10 = Object;
  if ( Object )
  {
    v17 = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 223);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    *((_QWORD *)v10 + 7) = v12;
    memset(v14, 0, sizeof(v14));
    PushThreadGuardedObject(
      v14,
      v14,
      UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
    v15 = 0LL;
    v16 = 0;
    v6 = (HDRVOBJ)HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v14, v7, v10, 0x1Cu, 0);
    if ( v6 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v17, v7);
    else
      FreeObject(v7, v10, 0x1Cu);
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
  }
  return v6;
}
