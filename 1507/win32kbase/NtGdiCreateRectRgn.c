/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C000C820
 * Callers:
 *     <none>
 * Callees:
 *     HmgAllocateObjectAttr @ 0x1C000C97C (HmgAllocateObjectAttr.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C004BDB0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     HmgFreeObjectAttr @ 0x1C005C5F0 (HmgFreeObjectAttr.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF1C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF74 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00AF044 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B4270 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 ObjectAttr; // rdi
  struct HOBJ__ *v5; // rbx
  struct OBJECT *v6; // rsi
  struct _RECTL v8; // [rsp+30h] [rbp-50h] BYREF
  struct OBJECT *v9; // [rsp+40h] [rbp-40h] BYREF
  int v10; // [rsp+48h] [rbp-38h]
  _BYTE v11[48]; // [rsp+50h] [rbp-30h] BYREF

  v8.left = a1;
  v8.top = a2;
  v8.right = a3;
  v8.bottom = a4;
  if ( (((a1 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    ObjectAttr = HmgAllocateObjectAttr();
    if ( ObjectAttr )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9, 0, 1);
      v6 = v9;
      if ( v9 )
      {
        ERECTL::vOrder((ERECTL *)&v8);
        RGNOBJ::vSet((RGNOBJ *)&v9, &v8);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v11);
        v5 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v11, v6, 0, 0, 4u);
        if ( v5 )
        {
          *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v6 + 16) = ObjectAttr;
        }
        else
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
          HmgFreeObjectAttr(ObjectAttr);
        }
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v11);
      }
      else
      {
        v5 = 0LL;
        EngSetLastError(8u);
      }
      if ( v10 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
    }
    else
    {
      v5 = 0LL;
      EngSetLastError(8u);
    }
  }
  return v5;
}
