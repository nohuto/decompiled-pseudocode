/*
 * XREFs of MiValidatePagefilePageHash @ 0x140231FD8
 * Callers:
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiComparePageHash @ 0x140231B88 (MiComparePageHash.c)
 *     MiComputePageHash @ 0x140231C88 (MiComputePageHash.c)
 *     MiObtainPagefileHashes @ 0x140231EF4 (MiObtainPagefileHashes.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // r14
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 *v11; // rbx
  unsigned int v12; // ecx
  ULONG_PTR v13; // r12
  __int64 PteShadow; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // r10
  unsigned int v17; // ecx
  int v18; // eax
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+38h] [rbp-80h]
  unsigned int v23[16]; // [rsp+40h] [rbp-78h] BYREF

  v1 = *(_QWORD *)(a1 + 248);
  v2 = a1 + 256;
  v3 = *(_QWORD *)(a1 + 88);
  if ( v1 )
    v2 = v1;
  LODWORD(v4) = 0;
  v5 = 0LL;
  v22 = 0LL;
  v6 = (_QWORD *)(v2 + 48);
  v7 = v2 + 48 + 8 * (((unsigned __int64)((*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF) + v3 + 4095) >> 12);
  v21 = v7;
  if ( (*(_BYTE *)(v2 + 10) & 5) != 0 )
    v8 = *(_QWORD **)(v2 + 24);
  else
    v8 = MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( (unsigned __int64)v6 < v7 )
  {
    v9 = v7 - (_QWORD)v6;
    do
    {
      v10 = 48LL * *v6 - 0x58000000000LL;
      if ( v10 == qword_14034F700 || (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_35;
      v11 = (__int64 *)(v10 + 16);
      v12 = (*(_DWORD *)(v10 + 16) >> 5) & 0x1F;
      if ( (dword_1403D00E8 & 1) != 0
        || v12 == 31
        || (v12 >> 3 != 3 || ((*(_DWORD *)(v10 + 16) >> 5) & 7) == 0) && v12 >> 3 != 1 )
      {
        v13 = (unsigned int)MiComputePageHash(48LL * *v6 - 0x58000000000LL, v8);
        if ( !v22 )
          v22 = *(_QWORD *)&MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v10 + 40)) >> 8) & 0x3FF)[4 * ((unsigned __int8)HIBYTE(*(_WORD *)v11) >> 4) + 2672];
        PteShadow = *v11;
        if ( (unsigned __int64)(v10 + 0x90482413010LL) <= 0x7F8 )
          PteShadow = MiReadPteShadow(v10 + 16, *v11);
        if ( (PteShadow & 4) != 0 )
        {
          v15 = MiReverseSwizzleInvalidPte(PteShadow) >> 32;
          if ( (unsigned int)v5 >= (unsigned int)v4 )
          {
            v4 = v9 >> 3;
            if ( (unsigned int)(v9 >> 3) > 0x10 )
              LODWORD(v4) = 16;
            MiObtainPagefileHashes(v16, v15, v4, v23);
            v5 = 0LL;
          }
          v17 = v23[v5];
          if ( (_DWORD)v13 == v17 || (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 || v17 == 2 )
            goto LABEL_34;
          if ( !v17 )
          {
            v18 = MiComparePageHash(v22, v15, v13);
            goto LABEL_31;
          }
          if ( byte_14034F2C0 != 1 )
          {
            v18 = -1073741761;
LABEL_31:
            if ( v18 < 0 )
            {
              BugCheckParameter4 = v23[v5];
              ++dword_14034F200;
              KeBugCheckEx(0x1Au, 0x3FuLL, v15, v13, BugCheckParameter4);
            }
          }
        }
        else
        {
          v22 = 0LL;
        }
      }
LABEL_34:
      v7 = v21;
LABEL_35:
      v5 = (unsigned int)(v5 + 1);
      if ( v8 )
        v8 += 512;
      ++v6;
      v9 -= 8LL;
    }
    while ( (unsigned __int64)v6 < v7 );
  }
  return 0LL;
}
