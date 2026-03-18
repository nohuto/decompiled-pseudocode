/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1C005E660
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B30A0 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
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
    (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*a1),
    0,
    (unsigned __int16)*a1,
    0);
  if ( v5 )
  {
    v2 = v4;
    if ( v4 )
    {
      if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*a1 + 14) == 5
        && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) )
      {
        if ( gpentHmgrAltStacks )
          RECALTLOCKSTACKBACKTRACE(
            (unsigned __int16)*a1,
            *(struct _BASEOBJECT **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*a1));
      }
      ++a1[2];
      if ( (*(_BYTE *)(v2 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v7, 0LL);
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
