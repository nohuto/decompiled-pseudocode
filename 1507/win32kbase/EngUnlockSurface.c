/*
 * XREFs of EngUnlockSurface @ 0x1C0008310
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B4B00 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00AEEB0 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B3150 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  HSURF hsurf; // rdx
  PVOID *v2; // r8
  PVOID *p_pvScan0; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-40h]
  unsigned int v8; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v9; // [rsp+44h] [rbp-34h]
  _BYTE v10[32]; // [rsp+48h] [rbp-30h] BYREF
  PVOID *v11; // [rsp+68h] [rbp-10h]

  if ( pso )
  {
    hsurf = pso->hsurf;
    v2 = 0LL;
    p_pvScan0 = &pso[-1].pvScan0;
    if ( (unsigned __int16)hsurf < (unsigned int)gcMaxHmgr
      && *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)hsurf + 14) == 5
      && *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)hsurf + 12) == WORD1(hsurf) )
    {
      v2 = *(PVOID **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)hsurf);
    }
    if ( p_pvScan0 == v2 )
    {
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v10);
      v11 = p_pvScan0;
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)&v6,
        (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)p_pvScan0),
        0,
        (unsigned __int16)*(_DWORD *)p_pvScan0,
        0);
      if ( v7 )
      {
        v4 = v6;
        if ( v6 )
        {
          if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement
                        + 24LL * (unsigned __int16)*(_DWORD *)p_pvScan0
                        + 14) == 5
            && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
            && gpentHmgrAltStacks )
          {
            RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)p_pvScan0);
          }
          --*((_DWORD *)p_pvScan0 + 2);
          if ( (*(_BYTE *)(v4 + 15) & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v9, 0LL);
          }
          else
          {
            v5 = *(_DWORD *)(v4 + 8) & 0xFFFFFFFE;
            _m_prefetchw((const void *)(v4 + 8));
            v8 = v5;
            _InterlockedExchange((volatile __int32 *)(v4 + 8), v5);
          }
        }
        KeLeaveCriticalRegion();
      }
      v11 = 0LL;
      UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v10);
    }
  }
}
