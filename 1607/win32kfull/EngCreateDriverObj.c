/*
 * XREFs of EngCreateDriverObj @ 0x1C0279220
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1C028F6F0 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258250 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258288 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025829C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rcx
  struct OBJECT *v9; // rbx
  _BYTE v11[48]; // [rsp+30h] [rbp-48h] BYREF
  HDEV v12; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL);
  v9 = Object;
  if ( Object )
  {
    v12 = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 228);
    *((_QWORD *)Object + 7) = PsGetCurrentProcess(v8);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v11);
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v11, v9, 0, 0, 28);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v12);
    else
      FreeObject(v9, 28LL);
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v11);
  }
  return (HDRVOBJ)v3;
}
