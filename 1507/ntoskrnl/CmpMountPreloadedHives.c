/*
 * XREFs of CmpMountPreloadedHives @ 0x1405A4DC4
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     TmEnableCallbacks @ 0x140001168 (TmEnableCallbacks.c)
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     RtlAreBitsClear @ 0x14011717C (RtlAreBitsClear.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     CmpInitializeActualPrimaryFileSize @ 0x1404AF970 (CmpInitializeActualPrimaryFileSize.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404EC358 (CmpQueryHiveRedirectionFileList.c)
 *     CmRmFinalizeRecovery @ 0x1404EC588 (CmRmFinalizeRecovery.c)
 *     SyspartGetSystemPartition @ 0x14056D534 (SyspartGetSystemPartition.c)
 *     HvpDropPagedBins @ 0x1405987EC (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x14065AE40 (CmpDiskFullWarning.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 *     ExRaiseHardError @ 0x1406F78B0 (ExRaiseHardError.c)
 */

void CmpMountPreloadedHives()
{
  wchar_t *PoolWithTag; // r12
  __int64 *i; // r15
  __int64 *v2; // rdi
  int v3; // eax
  int SystemPartition; // ebx
  ULONG v5; // r14d
  unsigned int v6; // r13d
  ULONG j; // ebx
  int v8; // eax
  int v9; // ebx
  PKRESOURCEMANAGER *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Source[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Length; // [rsp+70h] [rbp-98h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING *p_Destination; // [rsp+80h] [rbp-88h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  char v22[4]; // [rsp+98h] [rbp-70h] BYREF
  int v23; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v24; // [rsp+A0h] [rbp-68h] BYREF
  int v25; // [rsp+A4h] [rbp-64h] BYREF
  _QWORD v26[44]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&Destination.MaximumLength = 0LL;
  Destination.Length = 0;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  *(_DWORD *)Source = 0;
  memset(v26, 0, sizeof(v26));
  Length = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x62534D43u);
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  for ( i = (__int64 *)CmpPreloadedHivesList; i != &CmpPreloadedHivesList; i = (__int64 *)*i )
  {
    v2 = i - 343;
    if ( (*(_DWORD *)(i - 325) & 1) == 0 )
    {
      *(_DWORD *)&Destination.Length = 0x10000000;
      Destination.Buffer = PoolWithTag;
      if ( !CmpQueryHiveRedirectionFileList((PUNICODE_STRING)v2 + 189, &Destination) || Destination.Length == 2 )
      {
        v3 = *((_DWORD *)v2 + 36);
        if ( (v3 & 0x1000) != 0 )
        {
          Source[0] = *NtSystemRoot.Buffer;
          *(_DWORD *)&Destination.Length = 0x10000000;
          Destination.Buffer = PoolWithTag;
          RtlAppendUnicodeToString(&Destination, L"\\??\\");
          RtlAppendUnicodeToString(&Destination, Source);
          RtlAppendUnicodeToString(&Destination, L":");
        }
        else
        {
          *(_DWORD *)&Destination.Length = 0x10000000;
          Destination.Buffer = PoolWithTag;
          if ( (v3 & 0x2000) != 0 )
          {
            SystemPartition = SyspartGetSystemPartition(PoolWithTag, 0x1000u, (__int64)v22);
            if ( SystemPartition < 0 )
            {
              BugCheckParameter4 = 0;
LABEL_43:
              v2[7] = (__int64)v26;
              v26[0] = i - 343;
              SetFailureLocation(v2[7], 0, 21, SystemPartition, BugCheckParameter4);
LABEL_44:
              CmpPuntBoot = 1;
              p_Destination = &Destination;
              ExRaiseHardError(3221226008LL, 1LL, 1LL, &p_Destination, 1, &v18);
              KeBugCheckEx(0x74u, 2uLL, 1uLL, (ULONG_PTR)(i - 343), SystemPartition);
            }
          }
        }
        RtlAppendUnicodeToString(&Destination, (PCWSTR)v2[375]);
      }
      ExFreePoolWithTag((PVOID)v2[375], 0);
      *((_DWORD *)v2 + 748) = 0;
      v2[375] = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination, 0, (HANDLE *)&v20, &v25, 7, 0LL, (__int64)&Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 16;
        goto LABEL_43;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 4u, (HANDLE *)&v21, &v24, 18, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 32;
        goto LABEL_43;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 5u, (HANDLE *)&p_Destination, &v23, 18, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 48;
        goto LABEL_43;
      }
      v5 = Length;
      v2[333] = v20;
      v2[337] = v21;
      v2[338] = (__int64)p_Destination;
      *((_DWORD *)v2 + 36) &= ~2u;
      *((_DWORD *)v2 + 42) = HIDWORD(Length);
      v6 = *((_DWORD *)v2 + 350) + 4096;
      if ( *((_DWORD *)v2 + 30) != v5 )
      {
        for ( j = 0; j < *((_DWORD *)v2 + 18); j += v5 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 + 9), j, v5) )
            RtlSetBits((PRTL_BITMAP)(v2 + 9), j, v5);
        }
        *((_DWORD *)v2 + 22) = RtlNumberOfSetBits((PRTL_BITMAP)(v2 + 9));
        *((_DWORD *)v2 + 30) = v5;
      }
      v8 = CmpInitializeActualPrimaryFileSize((__int64)(i - 343), (unsigned int *)&v18);
      SystemPartition = v8;
      if ( v8 < 0 )
      {
        v2[7] = (__int64)v26;
        v26[0] = i - 343;
        SetFailureLocation(v2[7], 0, 21, v8, 64);
        goto LABEL_44;
      }
      if ( (int)CmpDoFileSetSizeEx((__int64)(i - 343), 0, v6, 1) < 0 )
      {
        *((_DWORD *)v2 + 36) &= ~0x20000u;
        BYTE2(NlsMbCodePageTag) = 1;
      }
      if ( *(_DWORD *)(v2[8] + 4092) )
      {
        RtlSetAllBits((PRTL_BITMAP)(v2 + 9));
        *((_DWORD *)v2 + 22) = *((_DWORD *)v2 + 18);
      }
      SystemPartition = HvpDropPagedBins((ULONG_PTR)(i - 343));
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 96;
        goto LABEL_43;
      }
      if ( *(_DWORD *)(v2[8] + 4092) )
      {
        HvSyncHive((ULONG_PTR)(i - 343));
        *(_DWORD *)(v2[8] + 4092) = 0;
      }
      if ( BYTE2(NlsMbCodePageTag) )
        CmpDiskFullWarning();
      v9 = *((_DWORD *)v2 + 36);
      *((_DWORD *)v2 + 36) = v9 & 0xFFFFF7FF;
      CmpUnlockRegistry();
      CmpInitCmRM((ULONG_PTR)(i - 343), (v9 & 0x800) != 0);
      v10 = (PKRESOURCEMANAGER *)v2[675];
      *((_DWORD *)v2 + 1340) |= 8u;
      if ( v10 )
      {
        TmEnableCallbacks(v10[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v10);
        CmRmFinalizeRecovery(v2[675], v11, v12, v13);
      }
      CmpLockRegistryExclusive();
    }
    *((_DWORD *)v2 + 1340) |= 4u;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
}
