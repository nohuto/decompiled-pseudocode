/*
 * XREFs of NtGdiCreateClientObj @ 0x1C00FEEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025AE90 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025AEA0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

unsigned __int64 __fastcall NtGdiCreateClientObj(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdi
  struct OBJECT *Object; // rax
  struct OBJECT *v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = a1;
  if ( (_WORD)a1 || (a1 & 0x600000) == 0 || (a1 & 0x1F0000) != 0x60000 )
    return 0LL;
  Object = (struct OBJECT *)AllocateObject(24LL, 6LL, 0LL);
  v4 = Object;
  if ( Object )
  {
    v7 = 0LL;
    v5 = (unsigned __int64)HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v7, Object, 0, 0, 6);
    v1 = v5;
    if ( v5 )
    {
      v1 = v2 | v5;
      HmgModifyHandleType(v2 | v5);
    }
    else
    {
      FreeObject(v4, 6LL);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v7);
  }
  return v1;
}
