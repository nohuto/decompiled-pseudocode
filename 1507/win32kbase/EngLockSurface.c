/*
 * XREFs of EngLockSurface @ 0x1C0008010
 * Callers:
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00B3A90 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B5330 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B30A0 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B3150 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00B38A0 (--0SURFREF@@QEAA@XZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00B3B10 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  _DWORD *v2; // rsi
  __int64 v3; // rdi
  _DWORD *v4; // rdi
  SURFOBJ *v5; // rsi
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+38h] [rbp-60h]
  unsigned int v10; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v11; // [rsp+44h] [rbp-54h]
  __int64 v12; // [rsp+48h] [rbp-50h] BYREF
  int v13; // [rsp+50h] [rbp-48h]
  unsigned int v14; // [rsp+54h] [rbp-44h]
  unsigned int v15; // [rsp+5Ch] [rbp-3Ch]
  _BYTE v16[32]; // [rsp+60h] [rbp-38h] BYREF
  _DWORD *v17; // [rsp+80h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v16);
  SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v16, hsurf);
  v2 = v17;
  if ( !v17 )
  {
    v5 = 0LL;
    goto LABEL_24;
  }
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v8,
    (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v17),
    0,
    (unsigned __int16)*v17,
    0);
  if ( v9 )
  {
    v3 = v8;
    if ( v8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v2 + 14) == 5
        && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
        && gpentHmgrAltStacks )
      {
        RECALTLOCKSTACKBACKTRACE(
          (unsigned __int16)*v2,
          *(struct _BASEOBJECT **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v2));
      }
      ++v2[2];
      if ( (*(_BYTE *)(v3 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v11, 0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v3 + 8));
        v10 = *(_DWORD *)(v3 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v3 + 8), v10);
      }
      v9 = 0;
      v8 = 0LL;
      KeLeaveCriticalRegion();
    }
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v8);
  v4 = v17;
  v5 = 0LL;
  if ( v17 )
  {
    v5 = (SURFOBJ *)(v17 + 6);
    HANDLELOCK::vLockHandle(
      (HANDLELOCK *)&v12,
      (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v17),
      0,
      (unsigned __int16)*v17,
      0);
    if ( v13 )
    {
      v6 = v12;
      if ( v12 )
      {
        if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v4 + 14) == 5
          && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
          && gpentHmgrAltStacks )
        {
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*v4);
        }
        --v4[2];
        if ( (*(_BYTE *)(v6 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v15, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_24;
        }
        _m_prefetchw((const void *)(v6 + 8));
        v14 = *(_DWORD *)(v6 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v6 + 8), v14);
      }
      KeLeaveCriticalRegion();
    }
  }
LABEL_24:
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v16);
  return v5;
}
