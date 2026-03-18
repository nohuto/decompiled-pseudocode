/*
 * XREFs of EngUnlockSurface @ 0x1C005EAD0
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B7130 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  HSURF hsurf; // rdx
  PVOID *v2; // r8
  PVOID *p_pvScan0; // rbx
  __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  unsigned int v8; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v9; // [rsp+44h] [rbp-14h]

  if ( pso )
  {
    hsurf = pso->hsurf;
    v2 = 0LL;
    p_pvScan0 = &pso[-1].pvScan0;
    if ( (unsigned __int16)hsurf < (unsigned int)gcMaxHmgr
      && *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)hsurf + 14) == 5
      && *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 12 * (unsigned __int16)hsurf + 6) == WORD1(hsurf) )
    {
      v2 = (PVOID *)*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)hsurf);
    }
    if ( p_pvScan0 == v2 )
    {
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)&v6,
        (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)p_pvScan0),
        0,
        (unsigned __int16)*(_DWORD *)p_pvScan0,
        0);
      if ( v7 )
      {
        v4 = v6;
        if ( v6 )
        {
          if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)p_pvScan0 + 14) == 5
            && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
            && gpentHmgrAltStacks )
          {
            RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)p_pvScan0);
          }
          --*((_DWORD *)p_pvScan0 + 2);
          if ( (*(_BYTE *)(v4 + 15) & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v9);
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
    }
  }
}
