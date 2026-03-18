/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x140113998
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x140113844 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 */

void __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1)
{
  _QWORD *v1; // rsi
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 v6; // r14
  char v7; // cl
  int *v8; // rax
  unsigned __int64 v9; // r9

  v1 = a1 + 12;
  v2 = 0LL;
  v3 = (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12;
  v4 = (8 * v3 + 7) >> 3;
  if ( v1 > &v1[v3] )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = 48LL * *v1 - 0x58000000000LL;
      v6 = MiLockPageInline(v5);
      MiCapturePageFileInfoInline((unsigned __int64 *)(v5 + 16), 1, 0);
      v7 = *(_BYTE *)(v5 + 34);
      if ( (v7 & 0x10) == 0 )
        *(_BYTE *)(v5 + 34) = v7 | 0x10;
      v8 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v5 + 40)) >> 8) & 0x3FF);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v6);
      if ( v9 )
        MiReleasePageFileInfo((__int64)v8, v9, 0);
      ++v1;
      ++v2;
    }
    while ( v2 < v4 );
  }
}
