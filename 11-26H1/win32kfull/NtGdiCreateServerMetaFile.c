/*
 * XREFs of NtGdiCreateServerMetaFile @ 0x140325C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1401DEC60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1401DEC90 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z @ 0x1401E6998 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z.c)
 */

__int64 __fastcall NtGdiCreateServerMetaFile(Gre::Base *a1, unsigned int a2, const void *a3, int a4, int a5, int a6)
{
  unsigned __int64 v8; // rdi
  int v9; // r14d
  struct Gre::Base::SESSION_GLOBALS *v10; // r12
  volatile signed __int16 *Object; // rax
  volatile signed __int16 *v12; // rbx
  __int64 result; // rax
  _BYTE v14[56]; // [rsp+38h] [rbp-50h] BYREF

  v8 = a2;
  v9 = (int)a1;
  if ( (_DWORD)a1 != 1480934989 && (_DWORD)a1 != 1599096397 )
    return 0LL;
  if ( !a3 )
    return 0LL;
  if ( a2 > 0xFFFFFFCF )
    return 0LL;
  if ( (unsigned __int64)a2 + 48 > 0x2710000 )
    return 0LL;
  v10 = Gre::Base::Globals(a1);
  Object = (volatile signed __int16 *)AllocateObject(v10, (int)v8 + 48, 0x15u);
  v12 = Object;
  if ( !Object )
    return 0LL;
  *((_DWORD *)Object + 6) = v9;
  *((_DWORD *)Object + 7) = a4;
  *((_DWORD *)Object + 8) = a5;
  *((_DWORD *)Object + 9) = a6;
  *((_DWORD *)Object + 10) = v8;
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v14, v10, (struct OBJECT *)v12, 0x15u, 9u) )
  {
    FreeObject(v10, (void *)v12, 0x15u);
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
    return 0LL;
  }
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
  if ( (_DWORD)v8 )
    GreProbeAndReadFromUntrustedVa((void *)(v12 + 22), v8, a3, v8, 1uLL);
  result = *(_QWORD *)v12;
  _InterlockedDecrement16(v12 + 6);
  return result;
}
