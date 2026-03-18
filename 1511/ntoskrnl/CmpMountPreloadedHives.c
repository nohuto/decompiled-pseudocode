/*
 * XREFs of CmpMountPreloadedHives @ 0x14051EACC
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     TmEnableCallbacks @ 0x140001168 (TmEnableCallbacks.c)
 *     RtlAreBitsClear @ 0x14001B1AC (RtlAreBitsClear.c)
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     RtlSetAllBits @ 0x1400F9D20 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpInitializeActualFileSizes @ 0x1403D3D80 (CmpInitializeActualFileSizes.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404BF0E0 (CmpQueryHiveRedirectionFileList.c)
 *     CmRmFinalizeRecovery @ 0x1404C2C8C (CmRmFinalizeRecovery.c)
 *     SyspartGetSystemPartition @ 0x1404FAF9C (SyspartGetSystemPartition.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x1405E3D10 (CmpDiskFullWarning.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 *     ExRaiseHardError @ 0x140673360 (ExRaiseHardError.c)
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
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  WCHAR Source[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 Length; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h] BYREF
  __int64 v18; // [rsp+80h] [rbp-88h] BYREF
  char v19[8]; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING *p_Destination; // [rsp+90h] [rbp-78h] BYREF
  int v21; // [rsp+98h] [rbp-70h] BYREF
  int v22; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v23; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v24[44]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&Destination.MaximumLength = 0LL;
  Destination.Length = 0;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  *(_DWORD *)Source = 0;
  memset(v24, 0, sizeof(v24));
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
            SystemPartition = SyspartGetSystemPartition(PoolWithTag, 0x1000u, (__int64)v19);
            if ( SystemPartition < 0 )
            {
              BugCheckParameter4 = 0;
LABEL_43:
              v2[7] = (__int64)v24;
              v24[0] = i - 343;
              SetFailureLocation(v2[7], 0, 21, SystemPartition, BugCheckParameter4);
LABEL_44:
              CmpPuntBoot = 1;
              p_Destination = &Destination;
              ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&p_Destination, 1, (__int64)&v15);
              KeBugCheckEx(0x74u, 2uLL, 1uLL, (ULONG_PTR)(i - 343), SystemPartition);
            }
          }
        }
        RtlAppendUnicodeToString(&Destination, (PCWSTR)v2[375]);
      }
      ExFreePoolWithTag((PVOID)v2[375], 0);
      *((_DWORD *)v2 + 748) = 0;
      v2[375] = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination, 0, (HANDLE *)&v16, &v22, 7, (int *)&Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 16;
        goto LABEL_43;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 4u, (HANDLE *)&v17, &v23, 18, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 32;
        goto LABEL_43;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 5u, (HANDLE *)&v18, &v21, 18, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        BugCheckParameter4 = 48;
        goto LABEL_43;
      }
      v5 = Length;
      v2[333] = v16;
      v2[337] = v17;
      v2[338] = v18;
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
      v8 = CmpInitializeActualFileSizes((__int64)(i - 343), &v15);
      SystemPartition = v8;
      if ( v8 < 0 )
      {
        v2[7] = (__int64)v24;
        v24[0] = i - 343;
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
