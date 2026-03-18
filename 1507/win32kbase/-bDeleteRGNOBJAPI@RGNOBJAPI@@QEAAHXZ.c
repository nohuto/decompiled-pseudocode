/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0042D40
 * Callers:
 *     EngDeleteRgn @ 0x1C0011020 (EngDeleteRgn.c)
 *     bDeleteRegion @ 0x1C0044670 (bDeleteRegion.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C003C3B8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0041E60 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0042E40 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgFreeObjectAttr @ 0x1C005C5F0 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(__int64 **this)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  struct HOBJ__ *v4; // rdx
  __int64 v5; // r9
  __int64 *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+44h] [rbp-14h]

  v1 = 0;
  v2 = 0LL;
  if ( !*this )
    goto LABEL_22;
  v4 = (struct HOBJ__ *)**this;
  v9 = 0;
  v8 = 0LL;
  v10 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v8, v4, 4);
  if ( v9 )
  {
    if ( v8 )
    {
      v5 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)*this;
      v2 = *(_QWORD *)(v5 + 16);
      if ( !v2 || (v1 = bPEBCacheHandle(**this, 2LL, *(_DWORD **)(v5 + 16), v5, &v8, (__int64)this)) == 0 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v8);
    }
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v8);
  if ( !v1 )
  {
LABEL_22:
    if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this) )
    {
      v6 = *this;
      if ( *this && v6 != (__int64 *)prgnDefault )
      {
        if ( *((__int16 *)v6 + 7) >= 0 )
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
