/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0036950
 * Callers:
 *     bDeleteRegion @ 0x1C003A220 (bDeleteRegion.c)
 *     EngDeleteRgn @ 0x1C0078910 (EngDeleteRgn.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002A438 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0036A00 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C005A930 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     HmgFreeObjectAttr @ 0x1C005AF54 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(struct OBJECT **this)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  struct HOBJ__ *v4; // rdx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v2 = 0LL;
  if ( !*this )
    goto LABEL_17;
  v4 = *(struct HOBJ__ **)*this;
  v7 = 0LL;
  v8 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v7, v4, 4);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v7) )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject(
                        (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                        *this);
    v2 = *((_QWORD *)EntryFromObject + 2);
    if ( !v2 || (v1 = bPEBCacheHandle(&v7, 2LL, v2, EntryFromObject, &v7, this)) == 0 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  }
  if ( v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  if ( !v1 )
  {
LABEL_17:
    if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this) )
    {
      RGNOBJ::vDeleteRGNOBJ((__int16 **)this);
      v1 = 1;
      if ( v2 )
        HmgFreeObjectAttr(v2);
    }
    else
    {
      return 0;
    }
  }
  return v1;
}
