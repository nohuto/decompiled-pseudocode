/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1C006DCD0
 * Callers:
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B5B74 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall INC_SHARE_REF_CNT(_DWORD *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  unsigned int v6; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v7; // [rsp+44h] [rbp-14h]

  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v4,
    (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*a1),
    0,
    (unsigned __int16)*a1,
    0);
  if ( v5 )
  {
    v2 = v4;
    if ( v4 )
    {
      if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*a1 + 14) == 5
        && HIDWORD(WPP_MAIN_CB.SecurityDescriptor) )
      {
        if ( gpentHmgrAltStacks )
          RECALTLOCKSTACKBACKTRACE(
            (unsigned __int16)*a1,
            *((struct _BASEOBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*a1));
      }
      ++a1[2];
      if ( (*(_BYTE *)(v2 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7);
        KeLeaveCriticalRegion();
        return;
      }
      v3 = *(_DWORD *)(v2 + 8) & 0xFFFFFFFE;
      _m_prefetchw((const void *)(v2 + 8));
      v6 = v3;
      _InterlockedExchange((volatile __int32 *)(v2 + 8), v3);
    }
    KeLeaveCriticalRegion();
  }
}
