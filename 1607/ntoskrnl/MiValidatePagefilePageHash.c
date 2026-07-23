/*
 * XREFs of MiValidatePagefilePageHash @ 0x140115370
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiComputePageHash @ 0x140115750 (MiComputePageHash.c)
 *     MiObtainPagefileHashes @ 0x1401157EC (MiObtainPagefileHashes.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiComparePageHash @ 0x1401FB43C (MiComparePageHash.c)
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
  unsigned int v10; // edx
  ULONG_PTR v11; // r12
  unsigned int PagingFileOffset; // eax
  __int64 v13; // r10
  ULONG_PTR v14; // rbp
  unsigned int v15; // ecx
  __int64 v17; // rax
  int v18; // eax
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int8 v20; // [rsp+30h] [rbp-98h]
  __int64 v21; // [rsp+38h] [rbp-90h]
  unsigned int v22; // [rsp+40h] [rbp-88h]
  unsigned int v23[16]; // [rsp+50h] [rbp-78h] BYREF

  v1 = *(_QWORD *)(a1 + 248);
  v2 = a1 + 256;
  v3 = *(_QWORD *)(a1 + 88);
  if ( v1 )
    v2 = v1;
  v4 = 0LL;
  v22 = 0;
  v5 = (_QWORD *)(v2 + 48);
  v6 = v2 + 48 + 8 * (((unsigned __int64)((*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF) + v3 + 4095) >> 12);
  v21 = 0LL;
  if ( (*(_BYTE *)(v2 + 10) & 5) != 0 )
    v7 = *(char **)(v2 + 24);
  else
    v7 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( (unsigned __int64)v5 < v6 )
  {
    for ( i = v6 - (_QWORD)v5; ; i -= 8LL )
    {
      v9 = 48LL * *v5 - 0x58000000000LL;
      if ( v9 != qword_1403276D0 )
        break;
LABEL_20:
      v4 = (unsigned int)(v4 + 1);
      if ( v7 )
        v7 += 4096;
      if ( (unsigned __int64)++v5 >= v6 )
        return 0LL;
    }
    v20 = MiLockPageInline(48LL * *v5 - 0x58000000000LL);
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 )
    {
      if ( (v10 = (*(_DWORD *)(v9 + 16) >> 5) & 0x1F, (dword_1403A9144 & 1) != 0)
        || v10 == 31
        || (v10 >> 3 != 3 || ((*(_DWORD *)(v9 + 16) >> 5) & 7) == 0) && v10 >> 3 != 1 )
      {
        v11 = (unsigned int)MiComputePageHash(v9, v7);
        if ( !v21 )
          v21 = *(_QWORD *)&MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF)[2 * ((unsigned __int8)HIBYTE(*(_WORD *)(v9 + 16)) >> 4) + 1576];
        PagingFileOffset = MiGetPagingFileOffset(v9 + 16);
        v14 = PagingFileOffset;
        if ( PagingFileOffset )
        {
          if ( (unsigned int)v4 >= v22 )
          {
            v17 = i >> 3;
            if ( (unsigned int)(i >> 3) > 0x10 )
              LODWORD(v17) = 16;
            v22 = v17;
            MiObtainPagefileHashes(v13, (unsigned int)v14, (unsigned int)v17, v23);
            v4 = 0LL;
          }
          v15 = v23[v4];
          if ( (_DWORD)v11 == v15 || (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 || v15 == 2 )
            goto LABEL_18;
          if ( !v15 )
          {
            v18 = MiComparePageHash(v21, (unsigned int)v14, (unsigned int)v11);
            goto LABEL_37;
          }
          if ( byte_140327240 != 1 )
          {
            v18 = -1073741761;
LABEL_37:
            if ( v18 < 0 )
            {
              BugCheckParameter4 = v23[v4];
              ++dword_14032715C;
              KeBugCheckEx(0x1Au, 0x3FuLL, v14, v11, BugCheckParameter4);
            }
          }
        }
        else
        {
          v21 = 0LL;
        }
      }
    }
LABEL_18:
    if ( v20 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v20);
    }
    goto LABEL_20;
  }
  return 0LL;
}
