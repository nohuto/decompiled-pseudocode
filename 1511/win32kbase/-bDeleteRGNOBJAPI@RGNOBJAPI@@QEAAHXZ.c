/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0028010
 * Callers:
 *     bDeleteRegion @ 0x1C0037860 (bDeleteRegion.c)
 *     EngDeleteRgn @ 0x1C0074EB0 (EngDeleteRgn.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0028110 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C002A070 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0031F98 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgFreeObjectAttr @ 0x1C0074420 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(struct HOBJ__ ***this)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  struct HOBJ__ *v4; // rdx
  char *v5; // r9
  __int16 *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+44h] [rbp-14h]

  v1 = 0;
  v2 = 0LL;
  if ( !*this )
    goto LABEL_22;
  v4 = **this;
  v9 = 0;
  v8 = 0LL;
  v10 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v8, v4, 4u);
  if ( v9 )
  {
    if ( v8 )
    {
      v5 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)*this;
      v2 = *((_QWORD *)v5 + 2);
      if ( !v2 || (v1 = bPEBCacheHandle(**this, 2LL, *((_QWORD *)v5 + 2), v5, &v8, this)) == 0 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
    }
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v8);
  if ( !v1 )
  {
LABEL_22:
    if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this) )
    {
      v6 = (__int16 *)*this;
      if ( *this && v6 != (__int16 *)prgnDefault )
      {
        if ( v6[7] >= 0 )
        {
          Win32FreePool();
        }
        else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        {
          Win32FreeToPagedLookasideListImpl_0();
        }
      }
      *this = 0LL;
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
