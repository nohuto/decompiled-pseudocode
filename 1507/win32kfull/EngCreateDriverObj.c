/*
 * XREFs of EngCreateDriverObj @ 0x1C027BCE0
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1C0290BB0 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B110 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B148 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025B1A0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct OBJECT *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[48]; // [rsp+30h] [rbp-48h] BYREF
  HDEV v16; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL, 0LL);
  v10 = Object;
  if ( Object )
  {
    v16 = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 228);
    *((_QWORD *)Object + 7) = PsGetCurrentProcess(v9, v8);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v15);
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v15, v10, 0, 0, 28);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v16);
    else
      FreeObject(v10, 28LL);
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v15, v11, v12, v13);
  }
  return (HDRVOBJ)v3;
}
