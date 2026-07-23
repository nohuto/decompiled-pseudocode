/*
 * XREFs of CmQueryKey @ 0x1404396E0
 * Callers:
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmpLockTableAdd @ 0x1401B50E8 (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401B5218 (CmpLockTableRemove.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140437EA0 (CmpUnlockTwoKcbs.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpQueryKeyData @ 0x1404A7348 (CmpQueryKeyData.c)
 *     CmpIsMasterHive @ 0x1404BCA00 (CmpIsMasterHive.c)
 *     CmGetKeyFlags @ 0x1405819C0 (CmGetKeyFlags.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x140600410 (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1406012EC (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, _DWORD *a4, unsigned int a5, unsigned int *a6)
{
  int v7; // r12d
  unsigned int *v10; // rax
  signed __int64 v11; // rbx
  int KeyData; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r15
  unsigned int LayeredKey; // ebx
  unsigned int v17; // r12d
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r15
  UNICODE_STRING *p_UnicodeString; // rax
  unsigned int v23; // eax
  __int64 v24; // rdi
  int v25; // r12d
  char v26; // r8
  int v27; // edx
  char v28; // cl
  unsigned int v29; // ecx
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // r8d
  __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  bool v36; // r14
  signed __int64 v37; // rax
  __int64 v38; // rtt
  __int64 v39; // rdx
  int v40; // [rsp+50h] [rbp-118h]
  _DWORD v41[3]; // [rsp+54h] [rbp-114h] BYREF
  __int64 v42; // [rsp+60h] [rbp-108h]
  __int64 v43; // [rsp+68h] [rbp-100h]
  PVOID P; // [rsp+70h] [rbp-F8h]
  __int64 v45; // [rsp+78h] [rbp-F0h] BYREF
  unsigned int v46; // [rsp+80h] [rbp-E8h]
  int v47; // [rsp+84h] [rbp-E4h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+98h] [rbp-D0h]
  _DWORD *v50; // [rsp+A0h] [rbp-C8h]
  UNICODE_STRING *v51; // [rsp+A8h] [rbp-C0h] BYREF
  unsigned int v52; // [rsp+B0h] [rbp-B8h]
  _BYTE v53[4]; // [rsp+C4h] [rbp-A4h] BYREF
  _BYTE v54[4]; // [rsp+D4h] [rbp-94h] BYREF
  _BYTE v55[8]; // [rsp+E8h] [rbp-80h] BYREF
  _BYTE v56[8]; // [rsp+F0h] [rbp-78h] BYREF
  char v57; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v58; // [rsp+108h] [rbp-60h]
  unsigned int v59; // [rsp+110h] [rbp-58h]
  unsigned int v60; // [rsp+114h] [rbp-54h]
  unsigned int v61; // [rsp+11Ch] [rbp-4Ch]
  unsigned int v62; // [rsp+120h] [rbp-48h]

  v7 = a3;
  v42 = a1;
  v43 = a2;
  v50 = a4;
  v10 = a6;
  *(_QWORD *)&v41[1] = a6;
  v11 = 0LL;
  P = 0LL;
  v45 = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( a3 == 7 )
  {
    *a6 = 4;
    if ( a5 >= 4 )
    {
      *a4 = *(unsigned __int16 *)(a1 + 50);
      return 0;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
    v10 = *(unsigned int **)&v41[1];
  }
  v14 = *(_QWORD *)(a1 + 8);
  v49 = v14;
  if ( *(_WORD *)(v14 + 58) )
  {
    LayeredKey = CmQueryLayeredKey(a1, v7, a4, a5, v10);
    CmpUnlockRegistry();
    return LayeredKey;
  }
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
  {
LABEL_17:
    if ( a2 )
    {
      v18 = *(_QWORD *)(a2 + 8);
      v49 = v18;
      CmpLockTwoKcbsShared(v18, *(_QWORD *)(a1 + 8));
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v19 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v19 + 60) = CmpLockTableAdd(*(_QWORD *)(a1 + 8), 0);
      v20 = KeAbPreAcquire(v19 + 40, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v19 + 40), v20, v19 + 40);
      if ( v20 )
        *(_BYTE *)(v20 + 26) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 48));
      v18 = v49;
    }
    if ( v7 != 3 )
    {
      v24 = v45;
      if ( a2 && CmpIsKeyDeletedForKeyBody(a2, v45) || CmpIsKeyDeletedForKeyBody(a1, v24) )
      {
        v25 = -1073741444;
        if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
          v25 = -1073740763;
        KeyData = v25;
        v40 = v25;
        goto LABEL_127;
      }
      switch ( v7 )
      {
        case 5:
          **(_DWORD **)&v41[1] = 12;
          if ( a5 >= 0xC )
          {
            *a4 = CmGetKeyFlags(v18, v24);
            a4[1] = 0;
            if ( *(int *)(v18 + 32) < 0 )
              a4[1] = 1;
            if ( (*(_BYTE *)(v18 + 178) & 0x10) != 0 )
              a4[1] |= 2u;
            a4[2] = (*(_DWORD *)(v18 + 176) >> 4) & 0xF;
            KeyData = 0;
            v40 = 0;
          }
          else
          {
            KeyData = -1073741789;
            v40 = -1073741789;
          }
          break;
        case 6:
          **(_DWORD **)&v41[1] = 4;
          if ( a5 >= 4 )
          {
            if ( !CmpVEEnabled
              || (*(_WORD *)(v18 + 178) & 0x200) != 0
              || (unsigned __int8)CmpIsMasterHive(v18)
              || CmpIsSystemEntity(0LL) )
            {
              v26 = 0;
              v28 = 0;
              v27 = 1;
            }
            else
            {
              v26 = 1;
              v27 = 1;
              v28 = 1;
            }
            *a4 ^= ((unsigned __int8)v28 ^ (unsigned __int8)*a4) & 1;
            v29 = *a4 & 0xFFFFFFFD;
            *a4 = v29;
            if ( v26 && (*(_DWORD *)(v18 + 176) & 0x20) == 0 )
              *a4 = v29 | 2;
            if ( !CmpVEEnabled || (*(_WORD *)(v18 + 178) & 0x100) == 0 )
              v27 = 0;
            *a4 ^= (*a4 ^ (4 * v27)) & 4;
            v30 = *a4 ^ (*a4 ^ (8 * ((*(unsigned __int16 *)(v18 + 178) >> 9) & 1))) & 8;
            *a4 = v30;
            *a4 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(16 * (*(_BYTE *)(v18 + 178) >> 7))) & 0x10;
            KeyData = 0;
            v40 = 0;
          }
          else
          {
            KeyData = -1073741789;
            v40 = -1073741789;
          }
          break;
        case 8:
          **(_DWORD **)&v41[1] = 4;
          if ( a5 < 4 )
          {
            KeyData = -1073741789;
            goto LABEL_126;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(v18 + 24) + 5360LL) & 1) != 0 )
            *a4 &= ~1u;
          else
            *a4 |= 1u;
          KeyData = 0;
          v40 = 0;
LABEL_88:
          if ( a2 )
          {
            if ( ((v7 - 3) & 0xFFFFFFFC) != 0 || v7 == 4 )
            {
              v31 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 160LL);
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) < v31 )
                *(_QWORD *)a4 = v31;
            }
            if ( ((v7 - 2) & 0xFFFFFFFD) == 0 )
            {
              v32 = v45;
              if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                   *(_QWORD *)(a2 + 8),
                                   *(_QWORD *)(a1 + 8),
                                   -1,
                                   v45,
                                   (__int64)v55,
                                   (__int64)v53,
                                   0LL,
                                   (__int64)v41) == -2147483622 )
              {
                if ( v7 == 2 )
                  a4[5] = v41[0];
                else
                  a4[3] = v41[0];
              }
              LOBYTE(v33) = 1;
              if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v33, -1, 0, 0LL, 0, 0LL, (__int64)v41) == -2147483622 )
              {
                if ( v7 == 2 )
                  a4[8] = v41[0];
                else
                  a4[5] = v41[0];
              }
              KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), v7, (unsigned int)&v57, 48, *(__int64 *)&v41[1], v32);
              v40 = KeyData;
              if ( ((KeyData + 0x80000000) & 0x80000000) != 0 || KeyData == -2147483643 )
              {
                if ( v7 == 2 )
                {
                  if ( v59 > a4[6] )
                    a4[6] = v59;
                  if ( v61 > a4[9] )
                    a4[9] = v61;
                  if ( v62 > a4[10] )
                    a4[10] = v62;
                }
                else
                {
                  if ( v58 > a4[4] )
                    a4[4] = v58;
                  if ( v59 > a4[6] )
                    a4[6] = v59;
                  if ( v60 > a4[7] )
                    a4[7] = v60;
                }
              }
            }
          }
          else if ( CmpVEEnabled )
          {
            v34 = *(_QWORD *)(a1 + 8);
            if ( (*(_WORD *)(v34 + 178) & 0x100) != 0 && ((v7 - 2) & 0xFFFFFFFD) == 0 )
            {
              KeyData = CmpFindSubKeyByNumberFromMergedView(
                          v34,
                          0,
                          -1,
                          v45,
                          (__int64)v56,
                          (__int64)v54,
                          0LL,
                          (__int64)&v47);
              v40 = KeyData;
              if ( KeyData == -2147483622 )
              {
                if ( v7 == 2 )
                  a4[5] = v47;
                else
                  a4[3] = v47;
                KeyData = 0;
                v40 = 0;
              }
            }
          }
          goto LABEL_127;
        default:
          KeyData = CmpQueryKeyData(v18, v7, (_DWORD)a4, a5, *(__int64 *)&v41[1], v24);
          v40 = KeyData;
          break;
      }
LABEL_86:
      if ( KeyData < 0 )
      {
LABEL_127:
        if ( a2 )
        {
          CmpUnlockTwoKcbs(*(char **)(a2 + 8), *(_QWORD *)(a1 + 8));
        }
        else
        {
          v35 = *(_QWORD *)(a1 + 8);
          v36 = (*(_DWORD *)(v35 + 4) & 0x80000) != 0;
          if ( *(struct _KTHREAD **)(v35 + 48) == KeGetCurrentThread() )
            *(_QWORD *)(v35 + 48) = 0LL;
          else
            _InterlockedDecrement((volatile signed __int32 *)(v35 + 48));
          _m_prefetchw((const void *)(v35 + 40));
          v37 = *(_QWORD *)(v35 + 40);
          if ( (v37 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v11 = v37 - 16;
          if ( (v37 & 2) != 0
            || (v38 = *(_QWORD *)(v35 + 40),
                v38 != _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 40), v11, v37)) )
          {
            ExfReleasePushLock((_QWORD *)(v35 + 40));
          }
          KeAbPostRelease(v35 + 40);
          if ( (*(_DWORD *)(v35 + 4) & 0x100000) != 0 )
            CmpLockTableRemove(v35, *(_DWORD *)(v35 + 60));
          if ( v36 && (*(_DWORD *)(v35 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v35);
          KeyData = v40;
        }
        if ( !CmpPuntBoot )
        {
          ExReleaseResourceLite(&CmpRegistryLock);
          KeLeaveCriticalRegion();
          LOBYTE(v39) = 1;
          PsBoostThreadIo((__int64)KeGetCurrentThread(), v39);
          KeyData = v40;
        }
        if ( UnicodeString.Buffer )
        {
          RtlFreeAnsiString(&UnicodeString);
        }
        else if ( P )
        {
          CmpFreeTransientPoolWithTag(P, 0x624E4D43u);
        }
        return (unsigned int)KeyData;
      }
      v7 = a3;
      goto LABEL_88;
    }
    v21 = *(_QWORD *)(a1 + 8);
    v49 = v21;
    if ( CmpIsKeyDeletedForKeyBody(a1, v45) )
    {
      if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
      {
        KeyData = -1073740763;
LABEL_126:
        v40 = KeyData;
        goto LABEL_127;
      }
      KeyData = -1073741444;
      v40 = -1073741444;
    }
    else
    {
      KeyData = 0;
      v40 = 0;
    }
    if ( !*(_QWORD *)(v21 + 72) )
    {
LABEL_40:
      KeyData = -1073741670;
      goto LABEL_126;
    }
    if ( CmpVEEnabled && (*(_WORD *)(v21 + 178) & 0x100) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v21, &UnicodeString) < 0 )
      {
LABEL_39:
        if ( !P )
          goto LABEL_40;
        v23 = *(unsigned __int16 *)P;
        v46 = v23 + 4;
        **(_DWORD **)&v41[1] = v23 + 4;
        if ( a5 >= 4 )
        {
          *a4 = v23;
          v52 = a5 - 4;
          v46 = v23;
          if ( a5 - 4 < v23 )
          {
            v23 = a5 - 4;
            v46 = a5 - 4;
            KeyData = -2147483643;
            v40 = -2147483643;
          }
          memmove(a4 + 1, *((const void **)P + 1), v23);
        }
        else
        {
          KeyData = -1073741789;
          v40 = -1073741789;
        }
        goto LABEL_86;
      }
      p_UnicodeString = &UnicodeString;
    }
    else
    {
      v51 = 0LL;
      CmpConstructNameWithStatus(v21, &v51);
      p_UnicodeString = v51;
    }
    P = p_UnicodeString;
    goto LABEL_39;
  }
  CmpLockKcbShared(v14);
  if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    CmpUnlockKcb((char *)v14);
    KeyData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v45);
    if ( KeyData < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)KeyData;
    }
    goto LABEL_17;
  }
  v17 = -1073741444;
  if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
    v17 = -1073740763;
  CmpUnlockKcb((char *)v14);
  CmpUnlockRegistry();
  return v17;
}
