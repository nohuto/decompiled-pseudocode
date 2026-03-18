/*
 * XREFs of HmgRemoveObject @ 0x1C0036F40
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C002360C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005D1F0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C006FEE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C007F6A4 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     EngDeleteDriverObj @ 0x1C00BF9B0 (EngDeleteDriverObj.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall HmgRemoveObject(__int64 a1, __int64 a2, int a3, int a4, char a5, _DWORD *a6)
{
  __int64 v6; // rdi
  __int16 v7; // r13
  __int16 v8; // esi^2
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  _BYTE *SystemArgument2; // rdi
  __int64 v13; // r12
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // r14
  int v22; // ecx
  char *v23; // rsi
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned int v29; // [rsp+3Ch] [rbp-4Ch]
  int v30; // [rsp+90h] [rbp+8h] BYREF
  int v31; // [rsp+A0h] [rbp+18h]
  int v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v6 = (unsigned __int16)a1;
  v7 = a2;
  v8 = WORD1(a1);
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    return 0LL;
  v9 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(a1, a2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
    LODWORD(v9) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)v9, 16, (__int64)L"ghsemHmgr");
  v10 = 3 * v6;
  v11 = v6;
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v13 = 8 * v10;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v30);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v15 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v16 = *(_QWORD *)(v15 + 72);
  else
    v16 = 0LL;
LABEL_11:
  _m_prefetchw(&SystemArgument2[v13 + 8]);
  v17 = *(_DWORD *)&SystemArgument2[v13 + 8];
  v18 = v17 & 0xFFFFFFFE;
  if ( ((v17 & 0xFFFFFFFE) == (v30 & 0xFFFFFFFC) || !v18 || v16 && v18 == *(_DWORD *)(v16 + 8))
    && (SystemArgument2[v13 + 15] & 0x20) == 0 )
  {
    while ( (SystemArgument2[v13 + 15] & 0x40) == 0 )
    {
      if ( (v17 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_11;
      }
      if ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)&SystemArgument2[v13 + 8], v17 | 1, v17)
        || (SystemArgument2[v13 + 15] & 0x40) != 0 )
      {
        goto LABEL_11;
      }
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v11) = 0LL;
      SystemArgument2[v13 + 15] |= 0x40u;
      _m_prefetchw(&SystemArgument2[v13 + 8]);
      v29 = *(_DWORD *)&SystemArgument2[v13 + 8] & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)&SystemArgument2[v13 + 8], v29);
      v17 = v29;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v11, 0LL);
    if ( SystemArgument2[v13 + 14] != a5 || *(_WORD *)&SystemArgument2[v13 + 12] != v8 )
      goto LABEL_31;
    v21 = *(_QWORD *)&SystemArgument2[v13];
    v22 = *(_DWORD *)(v21 + 8);
    if ( *(_WORD *)(v21 + 12) != v7 || v22 != v31 )
    {
      v21 = 0LL;
      if ( a6 )
        *a6 = v22;
      goto LABEL_32;
    }
    if ( v32 || (SystemArgument2[v13 + 15] & 1) == 0 )
    {
      *(_QWORD *)v21 = 0LL;
      v23 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2;
      v24 = *(_DWORD *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + v13 + 8);
      HmgDecProcessHandleCount(v24 & 0xFFFFFFFE, v19, v20);
      *(_QWORD *)&v23[v13] = ghFreeHmgr;
      *(_WORD *)&SystemArgument2[v13 + 12] += 256;
      --gcCurHmgr;
      SystemArgument2[v13 + 14] = 0;
      *(_QWORD *)&SystemArgument2[v13 + 16] = 0LL;
      ghFreeHmgr = v11;
      *(_DWORD *)&v23[v13 + 8] = v24 & 1;
    }
    else
    {
LABEL_31:
      v21 = 0LL;
    }
LABEL_32:
    if ( (SystemArgument2[v13 + 15] & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v11);
    }
    else
    {
      _m_prefetchw(&SystemArgument2[v13 + 8]);
      _InterlockedExchange(
        (volatile __int32 *)&SystemArgument2[v13 + 8],
        *(_DWORD *)&SystemArgument2[v13 + 8] & 0xFFFFFFFE);
    }
    KeLeaveCriticalRegion();
    goto LABEL_37;
  }
  KeLeaveCriticalRegion();
  v21 = 0LL;
LABEL_37:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v25, &LockRelease, v26, ghsemHmgr, L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v27);
  }
  return v21;
}
