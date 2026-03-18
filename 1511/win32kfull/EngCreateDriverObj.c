/*
 * XREFs of EngCreateDriverObj @ 0x1C027ACA0
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1C02909C0 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025AE90 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025AEA0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct OBJECT *v12; // rbx
  __int64 CurrentProcess; // rax
  HDEV v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL, 0LL);
  v12 = Object;
  if ( Object )
  {
    v15[0] = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 228);
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
    v16 = 0LL;
    *((_QWORD *)v12 + 7) = CurrentProcess;
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v16, v12, 0, 0, 28);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)v15);
    else
      FreeObject(v12, 28LL);
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v16);
  }
  return (HDRVOBJ)v3;
}
