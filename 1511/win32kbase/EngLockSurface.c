/*
 * XREFs of EngLockSurface @ 0x1C00308D0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B7960 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  unsigned __int16 v1; // ebx^2
  __int64 v2; // rdi
  struct _ENTRY *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  unsigned int v9; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v10; // [rsp+44h] [rbp-24h]
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  int v12; // [rsp+50h] [rbp-18h]
  unsigned int v13; // [rsp+54h] [rbp-14h]
  unsigned int v14; // [rsp+5Ch] [rbp-Ch]

  v1 = WORD1(hsurf);
  v2 = 0LL;
  if ( (unsigned __int16)hsurf >= (unsigned int)gcMaxHmgr )
    return 0LL;
  v3 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)hsurf);
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v7, v3, 1, (unsigned __int16)hsurf, 0);
  if ( v8 )
  {
    v4 = v7;
    if ( v7 )
    {
      if ( *((_BYTE *)v3 + 14) == 5 && ((*((unsigned __int16 *)v3 + 6) ^ v1) & 0xFFFFFF7F) == 0 )
      {
        v2 = *(_QWORD *)v3;
        ++*(_DWORD *)(*(_QWORD *)v3 + 8LL);
      }
      if ( (*(_BYTE *)(v4 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v10);
      }
      else
      {
        _m_prefetchw((const void *)(v4 + 8));
        v9 = *(_DWORD *)(v4 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v4 + 8), v9);
      }
      v8 = 0;
      v7 = 0LL;
      KeLeaveCriticalRegion();
    }
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  if ( !v2 )
    return 0LL;
  HmgIncrementShareReferenceCount(v2);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v11,
    (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v2),
    0,
    (unsigned __int16)*(_DWORD *)v2,
    0);
  if ( v12 )
  {
    v5 = v11;
    if ( v11 )
    {
      if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v2 + 14) == 5
        && HIDWORD(WPP_MAIN_CB.SecurityDescriptor) )
      {
        if ( gpentHmgrAltStacks )
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v2);
      }
      --*(_DWORD *)(v2 + 8);
      if ( (*(_BYTE *)(v5 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v14);
        KeLeaveCriticalRegion();
        return (SURFOBJ *)(v2 + 24);
      }
      _m_prefetchw((const void *)(v5 + 8));
      v13 = *(_DWORD *)(v5 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v5 + 8), v13);
    }
    KeLeaveCriticalRegion();
  }
  return (SURFOBJ *)(v2 + 24);
}
