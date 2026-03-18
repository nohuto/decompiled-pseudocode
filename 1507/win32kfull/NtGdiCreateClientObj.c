/*
 * XREFs of NtGdiCreateClientObj @ 0x1C00F6340
 * Callers:
 *     <none>
 * Callees:
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B110 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B148 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025B1A0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

unsigned __int64 __fastcall NtGdiCreateClientObj(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdi
  struct OBJECT *Object; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0LL;
  v2 = a1;
  if ( (_WORD)a1 || (a1 & 0x600000) == 0 || (a1 & 0x1F0000) != 0x60000 )
    return 0LL;
  Object = (struct OBJECT *)AllocateObject(24LL, 6LL, 0LL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v7);
    v4 = (unsigned __int64)HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v7, Object, 0, 0, 6);
    v1 = v4;
    if ( v4 )
    {
      v1 = v2 | v4;
      HmgModifyHandleType(v2 | v4, v5);
    }
    else
    {
      FreeObject(Object, 6LL);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v7);
  }
  return v1;
}
