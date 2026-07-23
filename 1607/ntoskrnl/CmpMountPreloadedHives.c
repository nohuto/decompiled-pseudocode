/*
 * XREFs of CmpMountPreloadedHives @ 0x14055E9A4
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     TmEnableCallbacks @ 0x140001168 (TmEnableCallbacks.c)
 *     RtlSetAllBits @ 0x140005744 (RtlSetAllBits.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     RtlAreBitsClear @ 0x14008275C (RtlAreBitsClear.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     CmpInitializeActualFileSizes @ 0x14047F2D0 (CmpInitializeActualFileSizes.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404A4ED0 (CmpQueryHiveRedirectionFileList.c)
 *     CmRmFinalizeRecovery @ 0x1404CE378 (CmRmFinalizeRecovery.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     SyspartGetSystemPartition @ 0x14053BE0C (SyspartGetSystemPartition.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x1406036C8 (CmpDiskFullWarning.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
 *     ExRaiseHardError @ 0x1406B61A0 (ExRaiseHardError.c)
 */

void CmpMountPreloadedHives()
{
  wchar_t *PoolWithTag; // r12
  __int64 *i; // r15
  __int64 *v2; // rdi
  int v3; // eax
  int SystemPartition; // ebx
  ULONG v5; // ebx
  unsigned int v6; // r13d
  ULONG j; // esi
  int v8; // eax
  int v9; // ebx
  PKRESOURCEMANAGER *v10; // rcx
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Source[4]; // [rsp+68h] [rbp-A0h] BYREF
  ULONG Length[2]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING *p_Destination; // [rsp+78h] [rbp-90h] BYREF
  char v16[4]; // [rsp+80h] [rbp-88h] BYREF
  int v17; // [rsp+84h] [rbp-84h] BYREF
  int v18; // [rsp+88h] [rbp-80h] BYREF
  int v19; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v20; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v22[44]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&Destination.MaximumLength = 0LL;
  Destination.Length = 0;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  *(_DWORD *)Source = 0;
  memset(v22, 0, sizeof(v22));
  *(_QWORD *)Length = 0LL;
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
            SystemPartition = SyspartGetSystemPartition(PoolWithTag, 0x1000u, (__int64)v16);
            if ( SystemPartition < 0 )
            {
              BugCheckParameter4 = 0;
LABEL_43:
              v2[7] = (__int64)v22;
              v22[0] = i - 343;
              SetFailureLocation(v2[7], 0, 21, SystemPartition, BugCheckParameter4);
LABEL_44:
              CmpPuntBoot = 1;
              p_Destination = &Destination;
              ExRaiseHardError(3221226008LL, 1LL, 1LL, &p_Destination, 1, &Source[2]);
              KeBugCheckEx(0x74u, 2uLL, 1uLL, (ULONG_PTR)(i - 343), SystemPartition);
            }
          }
        }
        RtlAppendUnicodeToString(&Destination, (PCWSTR)v2[375]);
      }
      ExFreePoolWithTag((PVOID)v2[375], 0);
      *((_DWORD *)v2 + 748) = 0;
      v2[375] = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination, 0, (HANDLE *)&v20, &v17, 7, 0LL, (__int64)Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 16;
        goto LABEL_43;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 4u, (HANDLE *)&v21, &v18, 18, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 32;
        goto LABEL_43;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 5u, (HANDLE *)&p_Destination, &v19, 18, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 48;
        goto LABEL_43;
      }
      v5 = Length[0];
      v2[333] = v20;
      v2[337] = v21;
      v2[338] = (__int64)p_Destination;
      *((_DWORD *)v2 + 36) &= ~2u;
      *((_DWORD *)v2 + 42) = Length[1];
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
      v8 = CmpInitializeActualFileSizes((__int64)(i - 343), &Source[2]);
      SystemPartition = v8;
      if ( v8 < 0 )
      {
        v2[7] = (__int64)v22;
        v22[0] = i - 343;
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
        CmRmFinalizeRecovery(v2[675]);
      }
      CmpLockRegistryExclusive();
    }
    *((_DWORD *)v2 + 1340) |= 4u;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
}
