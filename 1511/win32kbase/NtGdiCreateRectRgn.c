/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C005D500
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002B390 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002DC70 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     HmgAllocateObjectAttr @ 0x1C005D650 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C0074420 (HmgFreeObjectAttr.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00B2E1C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00B2E2C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 ObjectAttr; // rdi
  struct HOBJ__ *v5; // rbx
  struct OBJECT *v6; // rsi
  struct _RECTL v8; // [rsp+30h] [rbp-20h] BYREF
  struct OBJECT *v9; // [rsp+40h] [rbp-10h] BYREF
  int v10; // [rsp+48h] [rbp-8h]

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
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9, 0LL, 1);
      v6 = v9;
      if ( v9 )
      {
        ERECTL::vOrder((ERECTL *)&v8);
        RGNOBJ::vSet((RGNOBJ *)&v9, &v8);
        *(_QWORD *)&v8.left = 0LL;
        v5 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v8, v6, 0, 0, 4u);
        if ( v5 )
        {
          *((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*(_DWORD *)v6 + 2) = ObjectAttr;
        }
        else
        {
          RGNOBJ::vDeleteRGNOBJ((__int16 **)&v9);
          HmgFreeObjectAttr(ObjectAttr);
        }
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v8);
      }
      else
      {
        v5 = 0LL;
        EngSetLastError(8u);
      }
      if ( v10 == 1 )
        RGNOBJ::vDeleteRGNOBJ((__int16 **)&v9);
    }
    else
    {
      v5 = 0LL;
      EngSetLastError(8u);
    }
  }
  return v5;
}
