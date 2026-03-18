/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C005BC90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C00315D0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0039950 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     HmgFreeObjectAttr @ 0x1C005AF54 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x1C005BDE0 (HmgAllocateObjectAttr.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCF98 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCFD8 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00BD0A8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 ObjectAttr; // rdi
  struct HOBJ__ *v5; // rbx
  struct OBJECT *v7; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+38h] [rbp-48h]
  struct _RECTL v9; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v10[48]; // [rsp+50h] [rbp-30h] BYREF

  v9.left = a1;
  v9.top = a2;
  v9.right = a3;
  v9.bottom = a4;
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
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v7, 0LL, 1);
      if ( v7 )
      {
        ERECTL::vOrder((ERECTL *)&v9);
        RGNOBJ::vSet((RGNOBJ *)&v7, &v9);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v10);
        v5 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v10, v7, 0, 0, 4u);
        if ( v5 )
        {
          *((_QWORD *)GdiHandleManager::GetEntryFromObject(
                        (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                        v7)
          + 2) = ObjectAttr;
        }
        else
        {
          RGNOBJ::vDeleteRGNOBJ((__int16 **)&v7);
          HmgFreeObjectAttr(ObjectAttr);
        }
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v10);
      }
      else
      {
        v5 = 0LL;
        EngSetLastError(8u);
      }
      if ( v8 == 1 )
        RGNOBJ::vDeleteRGNOBJ((__int16 **)&v7);
    }
    else
    {
      v5 = 0LL;
      EngSetLastError(8u);
    }
  }
  return v5;
}
