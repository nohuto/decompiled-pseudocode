/*
 * XREFs of GreSystemProcessCallout @ 0x14028CC90
 * Callers:
 *     W32pProcessCallout @ 0x1401F2240 (W32pProcessCallout.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CEB58 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     FreeW32Process @ 0x1401F23E4 (FreeW32Process.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x140225158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

__int64 __fastcall GreSystemProcessCallout(__int64 a1)
{
  __int64 v1; // rsi
  int W32ProcessImpl; // edi
  __int64 ProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // ecx
  __int64 v8; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  USHORT *p_SectorSize; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
  {
    p_SectorSize = &WPP_MAIN_CB.SectorSize;
    GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)&WPP_MAIN_CB.SectorSize);
    W32ProcessImpl = AllocateW32ProcessImpl(v1);
    if ( W32ProcessImpl >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(v1);
      v6 = *(_DWORD *)(ProcessWin32Process + 276);
      if ( (v6 & 0x200) != 0 )
      {
        Gre::PUSHLOCKEX::vUnlock((struct W32_PUSH_LOCK **)&p_SectorSize, 0);
        return 1073741851LL;
      }
      v8 = v6 | 0x2C0u;
      *(_DWORD *)(ProcessWin32Process + 276) = v8;
      if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v8, v4, v5) )
        W32ProcessImpl = 0;
      Gre::PUSHLOCKEX::vUnlock((struct W32_PUSH_LOCK **)&p_SectorSize, 0);
    }
    else
    {
      GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)&WPP_MAIN_CB.SectorSize);
    }
  }
  else
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, ThreadWin32Thread);
    v10 = PsGetProcessWin32Process(v1);
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v12, v11, v13) )
      UmfdHostLifeTimeManager::UninitializeProcess(v15, v14);
    FreeW32Process(v10, 0);
    return 0;
  }
  return (unsigned int)W32ProcessImpl;
}
