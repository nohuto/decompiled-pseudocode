/*
 * XREFs of CmQueryKey @ 0x1404C3F30
 * Callers:
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PsBoostThreadIo @ 0x1400CA880 (PsBoostThreadIo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpIsMasterHive @ 0x140448D7C (CmpIsMasterHive.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404C6EF0 (CmpLockTwoKcbsShared.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpQueryKeyData @ 0x1404F0460 (CmpQueryKeyData.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140657138 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x140657A00 (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140658850 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmGetKeyFlags @ 0x140663DA0 (CmGetKeyFlags.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, _DWORD *a4, unsigned int a5, _DWORD *a6)
{
  int KeyData; // r12d
  __int64 v12; // r9
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r12
  UNICODE_STRING *p_UnicodeString; // rax
  unsigned int v19; // eax
  __int64 v20; // rcx
  char v21; // r8
  int v22; // ecx
  char v23; // dl
  unsigned int v24; // edx
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // ecx
  __int64 v29; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v31; // ax
  unsigned int v32; // ebx
  int v33; // [rsp+50h] [rbp-F8h]
  int v34; // [rsp+50h] [rbp-F8h]
  int v35; // [rsp+54h] [rbp-F4h] BYREF
  __int64 v36[3]; // [rsp+58h] [rbp-F0h] BYREF
  PVOID P; // [rsp+70h] [rbp-D8h]
  int v38; // [rsp+78h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-C8h] BYREF
  _DWORD *v40; // [rsp+90h] [rbp-B8h]
  _DWORD *v41; // [rsp+98h] [rbp-B0h]
  __int64 v42; // [rsp+A0h] [rbp-A8h]
  __int64 v43; // [rsp+A8h] [rbp-A0h]
  char v44[4]; // [rsp+B0h] [rbp-98h] BYREF
  char v45[4]; // [rsp+B4h] [rbp-94h] BYREF
  char v46[16]; // [rsp+B8h] [rbp-90h] BYREF
  char v47[8]; // [rsp+C8h] [rbp-80h] BYREF
  char v48; // [rsp+D0h] [rbp-78h] BYREF
  unsigned int v49; // [rsp+E0h] [rbp-68h]
  unsigned int v50; // [rsp+E8h] [rbp-60h]
  unsigned int v51; // [rsp+ECh] [rbp-5Ch]
  unsigned int v52; // [rsp+F4h] [rbp-54h]
  unsigned int v53; // [rsp+F8h] [rbp-50h]

  v36[1] = a1;
  v36[2] = a2;
  v40 = a4;
  v41 = a6;
  P = 0LL;
  v36[0] = 0LL;
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
  CmpLockRegistry();
  v13 = *(_QWORD *)(a1 + 8);
  v43 = v13;
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
  {
LABEL_8:
    if ( a2 )
    {
      v17 = *(_QWORD *)(a2 + 8);
      v43 = v17;
      CmpLockTwoKcbsShared(v17, *(_QWORD *)(a1 + 8));
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v14 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v14 + 64) = CmpLockTableAdd(*(_QWORD *)(a1 + 8), 0);
      v15 = KeAbPreAcquire(v14 + 48, 0LL, 0LL, v12);
      v42 = v15;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 48), 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v14 + 48), v15, v14 + 48, v16);
        v15 = v42;
      }
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 56));
      v17 = v43;
    }
    if ( a3 != 3 )
    {
      if ( (unsigned __int8)CmRmIsKCBDeleted(v17, v36[0]) == 1
        || a2 && (unsigned __int8)CmRmIsKCBDeleted(*(_QWORD *)(a1 + 8), v36[0]) == 1 )
      {
        v28 = -1073741444;
        if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
          v28 = -1073740763;
        KeyData = v28;
        v33 = v28;
        goto LABEL_115;
      }
      switch ( a3 )
      {
        case 5:
          *a6 = 12;
          if ( a5 >= 0xC )
          {
            *(_QWORD *)a4 = (unsigned int)CmGetKeyFlags(v17, v36[0]);
            if ( *(int *)(v17 + 40) < 0 )
              a4[1] = 1;
            if ( (*(_BYTE *)(v17 + 186) & 0x10) != 0 )
              a4[1] |= 2u;
            a4[2] = (*(_DWORD *)(v17 + 184) >> 4) & 0xF;
            KeyData = 0;
            v33 = 0;
          }
          else
          {
            KeyData = -1073741789;
            v33 = -1073741789;
          }
          break;
        case 6:
          *a6 = 4;
          if ( a5 >= 4 )
          {
            if ( !CmpVEEnabled || (*(_WORD *)(v17 + 186) & 0x200) != 0 || CmpIsMasterHive(v17) || CmpIsSystemEntity(0LL) )
            {
              v21 = 0;
              v23 = 0;
              v22 = 1;
            }
            else
            {
              v21 = 1;
              v22 = 1;
              v23 = 1;
            }
            *a4 ^= ((unsigned __int8)v23 ^ (unsigned __int8)*a4) & 1;
            v24 = *a4 & 0xFFFFFFFD;
            *a4 = v24;
            if ( v21 && (*(_DWORD *)(v17 + 184) & 0x20) == 0 )
              *a4 = v24 | 2;
            if ( !CmpVEEnabled || (*(_WORD *)(v17 + 186) & 0x100) == 0 )
              v22 = 0;
            *a4 ^= (*a4 ^ (4 * v22)) & 4;
            v25 = *a4 ^ (*a4 ^ (8 * ((*(unsigned __int16 *)(v17 + 186) >> 9) & 1))) & 8;
            *a4 = v25;
            *a4 = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)(16 * (*(_BYTE *)(v17 + 186) >> 7))) & 0x10;
            KeyData = 0;
            v33 = 0;
          }
          else
          {
            KeyData = -1073741789;
            v33 = -1073741789;
          }
          break;
        case 8:
          *a6 = 4;
          if ( a5 >= 4 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v17 + 32) + 5360LL) & 1) != 0 )
              *a4 &= ~1u;
            else
              *a4 |= 1u;
            KeyData = 0;
            v33 = 0;
LABEL_31:
            if ( a2 )
            {
              if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
              {
                v26 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL);
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) < v26 )
                  *(_QWORD *)a4 = v26;
              }
              if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
              {
                if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                     *(_QWORD *)(a2 + 8),
                                     *(_QWORD *)(a1 + 8),
                                     -1,
                                     v36[0],
                                     (__int64)v46,
                                     (__int64)v44,
                                     0LL,
                                     (__int64)&v35) == -2147483622 )
                {
                  if ( a3 == 2 )
                    a4[5] = v35;
                  else
                    a4[3] = v35;
                }
                LOBYTE(v27) = 1;
                if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v27, -1, 0, 0LL, 0, 0LL, (__int64)&v35) == -2147483622 )
                {
                  if ( a3 == 2 )
                    a4[8] = v35;
                  else
                    a4[5] = v35;
                }
                KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (unsigned int)&v48, 48, (__int64)a6, v36[0]);
                v33 = KeyData;
                if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                {
                  if ( a3 == 2 )
                  {
                    if ( v50 > a4[6] )
                      a4[6] = v50;
                    if ( v52 > a4[9] )
                      a4[9] = v52;
                    if ( v53 > a4[10] )
                      a4[10] = v53;
                  }
                  else
                  {
                    if ( v49 > a4[4] )
                      a4[4] = v49;
                    if ( v50 > a4[6] )
                      a4[6] = v50;
                    if ( v51 > a4[7] )
                      a4[7] = v51;
                  }
                }
              }
            }
            else if ( CmpVEEnabled )
            {
              v20 = *(_QWORD *)(a1 + 8);
              if ( (*(_WORD *)(v20 + 186) & 0x100) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
              {
                KeyData = CmpFindSubKeyByNumberFromMergedView(
                            v20,
                            0,
                            -1,
                            v36[0],
                            (__int64)v47,
                            (__int64)v45,
                            0LL,
                            (__int64)&v38);
                v33 = KeyData;
                if ( KeyData == -2147483622 )
                {
                  if ( a3 == 2 )
                    a4[5] = v38;
                  else
                    a4[3] = v38;
                  KeyData = 0;
                  v33 = 0;
                }
              }
            }
            goto LABEL_115;
          }
          KeyData = -1073741789;
          v33 = -1073741789;
LABEL_115:
          if ( a2 )
            CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 8));
          else
            CmpUnlockKcb(*(PVOID *)(a1 + 8));
          if ( !CmpPuntBoot )
          {
            ExReleaseResourceLite(&CmpRegistryLock);
            CurrentThread = KeGetCurrentThread();
            v31 = CurrentThread->KernelApcDisable + 1;
            CurrentThread->KernelApcDisable = v31;
            if ( !v31
              && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
              && !CurrentThread->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            LOBYTE(v29) = 1;
            PsBoostThreadIo((__int64)KeGetCurrentThread(), v29);
            KeyData = v33;
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
          KeyData = CmpQueryKeyData(v17, a3, (_DWORD)a4, a5, (__int64)a6, v36[0]);
          v33 = KeyData;
          break;
      }
LABEL_30:
      if ( KeyData >= 0 )
        goto LABEL_31;
      goto LABEL_115;
    }
    v42 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int8)CmRmIsKCBDeleted(v42, v36[0]) == 1 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
      {
        KeyData = -1073740763;
        v33 = -1073740763;
        goto LABEL_115;
      }
      KeyData = -1073741444;
      v33 = -1073741444;
    }
    else
    {
      KeyData = 0;
      v33 = 0;
    }
    if ( !*(_QWORD *)(v42 + 80) )
    {
LABEL_50:
      KeyData = -1073741670;
      v33 = -1073741670;
      goto LABEL_115;
    }
    if ( CmpVEEnabled && (*(_WORD *)(v42 + 186) & 0x100) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v42, &UnicodeString) < 0 )
      {
LABEL_24:
        if ( P )
        {
          v19 = *(unsigned __int16 *)P;
          *a6 = v19 + 4;
          if ( a5 < 4 )
          {
            KeyData = -1073741789;
            v33 = -1073741789;
          }
          else
          {
            *a4 = v19;
            if ( a5 - 4 < v19 )
            {
              v19 = a5 - 4;
              KeyData = -2147483643;
              v33 = -2147483643;
            }
            memmove(a4 + 1, *((const void **)P + 1), v19);
          }
          goto LABEL_30;
        }
        goto LABEL_50;
      }
      p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v42);
    }
    P = p_UnicodeString;
    goto LABEL_24;
  }
  if ( (unsigned __int8)CmRmIsKCBDeleted(v13, v36[0]) == 1 )
  {
    v32 = -1073741444;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      v32 = -1073740763;
    CmpUnlockRegistry();
    return v32;
  }
  else
  {
    v34 = CmpSearchAddTrans(a1, 0, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), 0, (__int64)v36);
    if ( v34 >= 0 )
      goto LABEL_8;
    CmpUnlockRegistry();
    return (unsigned int)v34;
  }
}
