/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C000C720
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C000C2C0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C000C43C (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEE40 (--0-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF1C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF74 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00AF044 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(
        BRUSHMEMOBJ *this,
        HBITMAP a2,
        HBITMAP a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  unsigned int v11; // ebx
  struct BRUSH *v12; // rax
  struct OBJECT *v13; // rdi
  _DWORD *v14; // rcx
  _BYTE v16[48]; // [rsp+30h] [rbp-48h] BYREF

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::UnexpectedThreadTerminationHandler<BRUSHSELOBJ>((char *)this + 16);
  v11 = a6;
  if ( a5 == 1 )
  {
    v11 = a6 | 0x1000;
  }
  else if ( a5 == 2 )
  {
    v11 = a6 | 0x2000;
  }
  v12 = BRUSHMEMOBJ::pbrAllocBrush(this, a7);
  *(_QWORD *)this = v12;
  v13 = v12;
  if ( v12 )
  {
    *((_DWORD *)v12 + 21) = 0;
    v14 = (_DWORD *)*((_QWORD *)v12 + 7);
    *((_DWORD *)v12 + 6) = 13;
    *((_QWORD *)v12 + 4) = a2;
    *((_QWORD *)v12 + 5) = a3;
    *v14 = 0;
    *((_DWORD *)v12 + 12) = v11;
    if ( a4 )
      *((_DWORD *)v12 + 12) = v11 | 0x20003;
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v16);
    if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v16, v13, 1, 0, 0x10u) )
    {
      FreeObject(v13, 16LL);
      *(_QWORD *)this = 0LL;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v16);
  }
  return this;
}
