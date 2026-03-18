/*
 * XREFs of CmQueryKey @ 0x1403FF980
 * Callers:
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401AA120 (CmpLockTableRemove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpQueryKeyData @ 0x1403D66A8 (CmpQueryKeyData.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpIsMasterHive @ 0x1403DF1A0 (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405E1414 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1405E2410 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmGetKeyFlags @ 0x1405EBDF8 (CmGetKeyFlags.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, _DWORD *a4, unsigned int a5, _DWORD *a6)
{
  signed __int64 v10; // rbx
  char *v11; // rdx
  int KeyData; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  void *p_UnicodeString; // rax
  unsigned int v20; // eax
  __int64 v21; // rcx
  char v22; // r8
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // edx
  int v26; // edx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // ecx
  unsigned __int64 v30; // rdi
  signed __int64 v31; // rax
  __int64 v32; // rtt
  __int64 v33; // rdx
  unsigned int v34; // ebx
  int v35; // [rsp+50h] [rbp-118h]
  int v36; // [rsp+50h] [rbp-118h]
  _DWORD v37[3]; // [rsp+54h] [rbp-114h] BYREF
  char *v38[2]; // [rsp+60h] [rbp-108h] BYREF
  PVOID P; // [rsp+70h] [rbp-F8h]
  int v40; // [rsp+78h] [rbp-F0h] BYREF
  unsigned int v41; // [rsp+7Ch] [rbp-ECh]
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+90h] [rbp-D8h]
  _DWORD *v44; // [rsp+98h] [rbp-D0h]
  _DWORD *v45; // [rsp+A0h] [rbp-C8h]
  __int64 v46; // [rsp+A8h] [rbp-C0h]
  _BYTE v47[4]; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int v48; // [rsp+CCh] [rbp-9Ch]
  _BYTE v49[16]; // [rsp+D8h] [rbp-90h] BYREF
  _BYTE v50[8]; // [rsp+E8h] [rbp-80h] BYREF
  _BYTE v51[8]; // [rsp+F0h] [rbp-78h] BYREF
  char v52; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v53; // [rsp+108h] [rbp-60h]
  unsigned int v54; // [rsp+110h] [rbp-58h]
  unsigned int v55; // [rsp+114h] [rbp-54h]
  unsigned int v56; // [rsp+11Ch] [rbp-4Ch]
  unsigned int v57; // [rsp+120h] [rbp-48h]

  *(_QWORD *)&v37[1] = a1;
  v38[1] = (char *)a2;
  v45 = a4;
  v44 = a6;
  v10 = 0LL;
  P = 0LL;
  v11 = 0LL;
  v38[0] = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( a3 == 7 )
  {
    *a6 = 4;
    if ( a5 < 4 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a4 = *(unsigned __int16 *)(a1 + 50);
      return 0;
    }
  }
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
    v11 = v38[0];
  }
  v15 = *(_QWORD *)(a1 + 8);
  v43 = v15;
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
  {
LABEL_10:
    if ( a2 )
    {
      v18 = *(_QWORD *)(a2 + 8);
      v43 = v18;
      CmpLockTwoKcbsShared(v18, *(_QWORD *)(a1 + 8));
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v16 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v16 + 64) = CmpLockTableAdd(*(_QWORD *)(a1 + 8), 0);
      v17 = KeAbPreAcquire(v16 + 48, 0LL, 0LL);
      v46 = v17;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 48), 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v16 + 48), v17, v16 + 48);
        v17 = v46;
      }
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 56));
      v18 = v43;
    }
    if ( a3 != 3 )
    {
      if ( CmRmIsKCBDeleted(v18, (__int64)v38[0]) || a2 && CmRmIsKCBDeleted(*(_QWORD *)(a1 + 8), (__int64)v38[0]) )
      {
        v29 = -1073741444;
        if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
          v29 = -1073740763;
        KeyData = v29;
        v35 = v29;
        goto LABEL_117;
      }
      switch ( a3 )
      {
        case 5:
          *a6 = 12;
          if ( a5 >= 0xC )
          {
            *(_QWORD *)a4 = (unsigned int)CmGetKeyFlags(v18, v38[0]);
            if ( *(int *)(v18 + 40) < 0 )
              a4[1] = 1;
            if ( (*(_BYTE *)(v18 + 186) & 0x10) != 0 )
              a4[1] |= 2u;
            a4[2] = (*(_DWORD *)(v18 + 184) >> 4) & 0xF;
            KeyData = 0;
            v35 = 0;
          }
          else
          {
            KeyData = -1073741789;
            v35 = -1073741789;
          }
          break;
        case 6:
          *a6 = 4;
          if ( a5 >= 4 )
          {
            if ( !CmpVEEnabled || (*(_WORD *)(v18 + 186) & 0x200) != 0 || CmpIsMasterHive(v18) || CmpIsSystemEntity(0LL) )
            {
              v22 = 0;
              v24 = 0;
              v23 = 1;
            }
            else
            {
              v22 = 1;
              v23 = 1;
              v24 = 1;
            }
            *a4 ^= (*a4 ^ v24) & 1;
            v25 = *a4 & 0xFFFFFFFD;
            *a4 = v25;
            if ( v22 && (*(_DWORD *)(v18 + 184) & 0x20) == 0 )
              *a4 = v25 | 2;
            if ( !CmpVEEnabled || (*(_WORD *)(v18 + 186) & 0x100) == 0 )
              v23 = 0;
            *a4 ^= (*a4 ^ (4 * v23)) & 4;
            v26 = *a4 ^ (*a4 ^ (8 * ((*(unsigned __int16 *)(v18 + 186) >> 9) & 1))) & 8;
            *a4 = v26;
            *a4 = v26 ^ ((unsigned __int8)v26 ^ (unsigned __int8)(16 * (*(_BYTE *)(v18 + 186) >> 7))) & 0x10;
            KeyData = 0;
            v35 = 0;
          }
          else
          {
            KeyData = -1073741789;
            v35 = -1073741789;
          }
          break;
        case 8:
          *a6 = 4;
          if ( a5 >= 4 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v18 + 32) + 5360LL) & 1) != 0 )
              *a4 &= ~1u;
            else
              *a4 |= 1u;
            KeyData = 0;
            v35 = 0;
LABEL_33:
            if ( a2 )
            {
              if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
              {
                v27 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL);
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) < v27 )
                  *(_QWORD *)a4 = v27;
              }
              if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
              {
                if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                     *(_QWORD *)(a2 + 8),
                                     *(_QWORD *)(a1 + 8),
                                     -1,
                                     v38[0],
                                     (__int64)v50,
                                     (__int64)v49,
                                     0LL,
                                     (__int64)v37) == -2147483622 )
                {
                  if ( a3 == 2 )
                    a4[5] = v37[0];
                  else
                    a4[3] = v37[0];
                }
                LOBYTE(v28) = 1;
                if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v28, -1, 0, 0LL, 0, 0LL, (__int64)v37) == -2147483622 )
                {
                  if ( a3 == 2 )
                    a4[8] = v37[0];
                  else
                    a4[5] = v37[0];
                }
                KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (int)&v52, 48, (__int64)a6, (__int64)v38[0]);
                v35 = KeyData;
                if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                {
                  if ( a3 == 2 )
                  {
                    if ( v54 > a4[6] )
                      a4[6] = v54;
                    if ( v56 > a4[9] )
                      a4[9] = v56;
                    if ( v57 > a4[10] )
                      a4[10] = v57;
                  }
                  else
                  {
                    if ( v53 > a4[4] )
                      a4[4] = v53;
                    if ( v54 > a4[6] )
                      a4[6] = v54;
                    if ( v55 > a4[7] )
                      a4[7] = v55;
                  }
                }
              }
            }
            else if ( CmpVEEnabled )
            {
              v21 = *(_QWORD *)(a1 + 8);
              if ( (*(_WORD *)(v21 + 186) & 0x100) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
              {
                KeyData = CmpFindSubKeyByNumberFromMergedView(
                            v21,
                            0,
                            -1,
                            v38[0],
                            (__int64)v51,
                            (__int64)v47,
                            0LL,
                            (__int64)&v40);
                v35 = KeyData;
                if ( KeyData == -2147483622 )
                {
                  if ( a3 == 2 )
                    a4[5] = v40;
                  else
                    a4[3] = v40;
                  KeyData = 0;
                  v35 = 0;
                }
              }
            }
            goto LABEL_117;
          }
          KeyData = -1073741789;
          v35 = -1073741789;
LABEL_117:
          if ( a2 )
          {
            CmpUnlockTwoKcbs(*(char **)(a2 + 8), *(char **)(a1 + 8));
          }
          else
          {
            v30 = *(_QWORD *)(a1 + 8);
            if ( *(struct _KTHREAD **)(v30 + 56) == KeGetCurrentThread() )
              *(_QWORD *)(v30 + 56) = 0LL;
            else
              _InterlockedDecrement((volatile signed __int32 *)(v30 + 56));
            _m_prefetchw((const void *)(v30 + 48));
            v31 = *(_QWORD *)(v30 + 48);
            if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
              v10 = v31 - 16;
            if ( (v31 & 2) != 0
              || (v32 = *(_QWORD *)(v30 + 48),
                  v32 != _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 48), v10, v31)) )
            {
              ExfReleasePushLock((_QWORD *)(v30 + 48));
            }
            KeAbPostRelease(v30 + 48);
            if ( (*(_DWORD *)(v30 + 4) & 0x100000) != 0 )
              CmpLockTableRemove(v30, *(_DWORD *)(v30 + 64));
            if ( (*(_DWORD *)(v30 + 4) & 0x80000) != 0 )
              CmpFreeKeyControlBlock(v30);
            KeyData = v35;
          }
          if ( !CmpPuntBoot )
          {
            ExReleaseResourceLite(&CmpRegistryLock);
            KeLeaveCriticalRegion();
            LOBYTE(v33) = 1;
            PsBoostThreadIo((__int64)KeGetCurrentThread(), v33);
            KeyData = v35;
          }
          if ( UnicodeString.Buffer )
          {
            RtlFreeAnsiString(&UnicodeString);
          }
          else if ( P )
          {
            ExFreePoolWithTag(P, 0x624E4D43u);
          }
          return (unsigned int)KeyData;
        default:
          KeyData = CmpQueryKeyData(v18, a3, (int)a4, a5, (__int64)a6, (__int64)v38[0]);
          v35 = KeyData;
          break;
      }
LABEL_32:
      if ( KeyData >= 0 )
        goto LABEL_33;
      goto LABEL_117;
    }
    v46 = *(_QWORD *)(a1 + 8);
    v43 = v46;
    if ( CmRmIsKCBDeleted(v46, (__int64)v38[0]) )
    {
      if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
      {
        KeyData = -1073740763;
        v35 = -1073740763;
        goto LABEL_117;
      }
      KeyData = -1073741444;
      v35 = -1073741444;
    }
    else
    {
      KeyData = 0;
      v35 = 0;
    }
    if ( !*(_QWORD *)(v46 + 80) )
    {
LABEL_52:
      KeyData = -1073741670;
      v35 = -1073741670;
      goto LABEL_117;
    }
    if ( CmpVEEnabled && (*(_WORD *)(v46 + 186) & 0x100) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v46, &UnicodeString) < 0 )
      {
LABEL_26:
        if ( P )
        {
          v20 = *(unsigned __int16 *)P;
          v41 = v20 + 4;
          *a6 = v20 + 4;
          if ( a5 < 4 )
          {
            KeyData = -1073741789;
            v35 = -1073741789;
          }
          else
          {
            *a4 = v20;
            v48 = a5 - 4;
            v41 = v20;
            if ( a5 - 4 < v20 )
            {
              v20 = a5 - 4;
              v41 = a5 - 4;
              KeyData = -2147483643;
              v35 = -2147483643;
            }
            memmove(a4 + 1, *((const void **)P + 1), v20);
          }
          goto LABEL_32;
        }
        goto LABEL_52;
      }
      p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = CmpConstructName(v46);
    }
    P = p_UnicodeString;
    goto LABEL_26;
  }
  if ( CmRmIsKCBDeleted(v15, (__int64)v11) )
  {
    v34 = -1073741444;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      v34 = -1073740763;
    CmpUnlockRegistry();
    return v34;
  }
  else
  {
    v36 = CmpSearchAddTrans(a1, 0LL, 0LL, *(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), 0, v38);
    if ( v36 >= 0 )
      goto LABEL_10;
    CmpUnlockRegistry();
    return (unsigned int)v36;
  }
}
