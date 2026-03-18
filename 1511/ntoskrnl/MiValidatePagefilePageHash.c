/*
 * XREFs of MiValidatePagefilePageHash @ 0x140108248
 * Callers:
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MiObtainPagefileHashes @ 0x140107E4C (MiObtainPagefileHashes.c)
 *     MiComputePageHash @ 0x14010875C (MiComputePageHash.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiLockPage @ 0x1401DFF7C (MiLockPage.c)
 *     MiUnlockPage @ 0x1401DFF84 (MiUnlockPage.c)
 *     MiComparePageHash @ 0x1401E5814 (MiComparePageHash.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // r14
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r13
  char *v7; // rsi
  __int64 i; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  ULONG_PTR v11; // r12
  unsigned int v12; // eax
  ULONG_PTR v13; // rbp
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // eax
  ULONG_PTR BugCheckParameter4; // rcx
  char v19; // [rsp+30h] [rbp-98h]
  __int64 v20; // [rsp+38h] [rbp-90h]
  unsigned int v21; // [rsp+40h] [rbp-88h]
  unsigned int v22[16]; // [rsp+50h] [rbp-78h] BYREF

  v1 = *(_QWORD *)(a1 + 248);
  v2 = a1 + 256;
  v3 = *(_QWORD *)(a1 + 88);
  if ( v1 )
    v2 = v1;
  v4 = 0LL;
  v21 = 0;
  v20 = 0LL;
  v5 = (_QWORD *)(v2 + 48);
  v6 = v2 + 48 + 8 * (((unsigned __int64)((*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF) + v3 + 4095) >> 12);
  if ( (*(_BYTE *)(v2 + 10) & 5) != 0 )
    v7 = *(char **)(v2 + 24);
  else
    v7 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( (unsigned __int64)v5 < v6 )
  {
    for ( i = v6 - (_QWORD)v5; ; i -= 8LL )
    {
      v9 = 48LL * *v5 - 0x58000000000LL;
      if ( v9 != qword_1402FF240 )
        break;
LABEL_21:
      v4 = (unsigned int)(v4 + 1);
      if ( v7 )
        v7 += 4096;
      if ( (unsigned __int64)++v5 >= v6 )
        return 0LL;
    }
    v19 = MiLockPage(48LL * *v5 - 0x58000000000LL);
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 )
    {
      if ( (v10 = (*(_DWORD *)(v9 + 16) >> 5) & 0x1F, (dword_1403810F8 & 1) != 0)
        || (_DWORD)v10 == 31
        || ((unsigned int)v10 >> 3 != 3 || ((*(_DWORD *)(v9 + 16) >> 5) & 7) == 0) && (unsigned int)v10 >> 3 != 1 )
      {
        v11 = (unsigned int)MiComputePageHash(v9, v7);
        if ( !v20 )
          v20 = *(_QWORD *)&MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF)[2 * ((*(_DWORD *)(v9 + 16) >> 1) & 0xF) + 1432];
        v12 = MI_GET_PAGING_FILE_OFFSET(v9 + 16);
        v13 = v12;
        if ( !v12 )
        {
          v20 = 0LL;
          goto LABEL_19;
        }
        if ( (unsigned int)v4 >= v21 )
        {
          v15 = i >> 3;
          if ( (unsigned int)(i >> 3) > 0x10 )
            LODWORD(v15) = 16;
          v21 = v15;
          MiObtainPagefileHashes(v20, v13, v15, v22);
          v4 = 0LL;
        }
        v16 = v22[v4];
        if ( (_DWORD)v11 == v16 )
          goto LABEL_19;
        v10 = 0x4000000000000000LL;
        if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 || v16 == 2 )
          goto LABEL_19;
        if ( !v16 )
        {
          v17 = MiComparePageHash(v20, (unsigned int)v13, (unsigned int)v11);
          goto LABEL_36;
        }
        if ( byte_1402FEE00 != 1 )
        {
          v17 = -1073741761;
LABEL_36:
          if ( v17 < 0 )
          {
            BugCheckParameter4 = v22[v4];
            ++dword_1402FED4C;
            KeBugCheckEx(0x1Au, 0x3FuLL, v13, v11, BugCheckParameter4);
          }
        }
      }
    }
LABEL_19:
    if ( v19 != 17 )
    {
      LOBYTE(v10) = v19;
      MiUnlockPage(v9, v10);
    }
    goto LABEL_21;
  }
  return 0LL;
}
