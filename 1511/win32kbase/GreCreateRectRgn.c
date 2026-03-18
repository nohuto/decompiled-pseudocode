/*
 * XREFs of GreCreateRectRgn @ 0x1C0069800
 * Callers:
 *     EngCreateRectRgn @ 0x1C0069780 (EngCreateRectRgn.c)
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C002B390 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002DC70 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00B2E1C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00B2E2C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  struct HOBJ__ *v4; // rbx
  struct _RECTL v6; // [rsp+30h] [rbp-20h] BYREF
  struct OBJECT *v7; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+48h] [rbp-8h]

  v6.left = a1;
  v6.top = a2;
  v6.right = a3;
  v6.bottom = a4;
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
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v7, 0LL, 1);
    v4 = v7;
    if ( v7 )
    {
      ERECTL::vOrder((ERECTL *)&v6);
      RGNOBJ::vSet((RGNOBJ *)&v7, &v6);
      *(_QWORD *)&v6.left = 0LL;
      v4 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v6, v4, 0, 1, 4u);
      if ( !v4 )
        RGNOBJ::vDeleteRGNOBJ((__int16 **)&v7);
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v6);
    }
    else
    {
      EngSetLastError(8u);
    }
    if ( v8 == 1 )
      RGNOBJ::vDeleteRGNOBJ((__int16 **)&v7);
  }
  return v4;
}
