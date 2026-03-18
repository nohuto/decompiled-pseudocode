/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0028110
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0028010 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteHandle(RGNOBJAPI *this, __int64 a2, int a3)
{
  HRGN v3; // rbx
  struct _ERESOURCE *v6; // rdi
  __int64 v7; // r12
  struct _ENTRY *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // r14
  _QWORD *SystemArgument2; // rdi
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]
  unsigned int v19; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v20; // [rsp+44h] [rbp-24h]

  v3 = (HRGN)*((_QWORD *)this + 1);
  if ( v3 == hrgnDefault )
    return 0LL;
  if ( (unsigned __int16)v3 >= (unsigned int)gcMaxHmgr )
  {
    v13 = 0LL;
  }
  else
  {
    v6 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(this, a2);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
      LODWORD(v6) = (_DWORD)ghsemHmgr;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)v6, 16, (__int64)L"ghsemHmgr");
    v7 = (unsigned __int16)v3;
    v8 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v3);
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, v8, 1, (unsigned __int16)v3, 0);
    if ( v18 && (v12 = v17) != 0 )
    {
      if ( *((_BYTE *)v8 + 14) == 4
        && *((_WORD *)v8 + 6) == WORD1(v3)
        && (v13 = *(_QWORD *)v8, *(_WORD *)(*(_QWORD *)v8 + 12LL) == 1)
        && !*(_DWORD *)(v13 + 8)
        && (*((_BYTE *)v8 + 15) & 1) == 0 )
      {
        *(_QWORD *)v13 = 0LL;
        SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
        v15 = *((_DWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 6 * (unsigned __int16)v3 + 2);
        HmgDecProcessHandleCount(*((_DWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 6 * v7 + 2) & 0xFFFFFFFE, v9, v11);
        v16 = 3 * v7;
        SystemArgument2[v16] = ghFreeHmgr;
        *((_QWORD *)v8 + 2) = 0LL;
        *((_WORD *)v8 + 6) += 256;
        --gcCurHmgr;
        *((_BYTE *)v8 + 14) = 0;
        LODWORD(SystemArgument2[v16 + 1]) = v15 & 1;
        ghFreeHmgr = v7;
      }
      else
      {
        v13 = 0LL;
      }
      if ( (*(_BYTE *)(v12 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v20);
      }
      else
      {
        _m_prefetchw((const void *)(v12 + 8));
        v19 = *(_DWORD *)(v12 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v12 + 8), v19);
      }
      v18 = 0;
      v17 = 0LL;
      KeLeaveCriticalRegion();
    }
    else
    {
      v13 = 0LL;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v10, &LockRelease, v11, ghsemHmgr, L"ghsemHmgr");
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion();
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
  }
  if ( v13 != *(_QWORD *)this )
    return 0LL;
  *((_QWORD *)this + 1) = 0LL;
  return 1LL;
}
