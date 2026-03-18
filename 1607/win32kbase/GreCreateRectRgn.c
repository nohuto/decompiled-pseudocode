/*
 * XREFs of GreCreateRectRgn @ 0x1C0057900
 * Callers:
 *     EngCreateRectRgn @ 0x1C0057710 (EngCreateRectRgn.c)
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C00315D0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0039950 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCF98 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCFD8 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00BD0A8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00BF048 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 */

struct OBJECT *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  struct OBJECT *v4; // rbx
  struct _RECTL v6; // [rsp+30h] [rbp-50h] BYREF
  struct OBJECT *v7; // [rsp+40h] [rbp-40h] BYREF
  int v8; // [rsp+48h] [rbp-38h]
  _BYTE v9[48]; // [rsp+50h] [rbp-30h] BYREF

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
      *((_DWORD *)v4 + 9) = GrepIsPreviousModeKernel();
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v9);
      v4 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v9, v4, 0, 1, 4u);
      if ( !v4 )
        RGNOBJ::vDeleteRGNOBJ((__int16 **)&v7);
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v9);
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
