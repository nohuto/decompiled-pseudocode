/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x140122A2C
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1401228E0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 */

void __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int8 v4; // bp
  char v5; // cl
  struct _KEVENT *v6; // rax
  unsigned __int64 v7; // r9

  v1 = a1 + 12;
  v2 = (unsigned __int64)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                           + 12];
  while ( (unsigned __int64)v1 < v2 )
  {
    v3 = 48LL * *v1 - 0x58000000000LL;
    v4 = MiLockPageInline(v3);
    MiCapturePageFileInfoInline((_QWORD *)(v3 + 16), 1, 0);
    v5 = *(_BYTE *)(v3 + 34);
    if ( (v5 & 0x10) == 0 )
      *(_BYTE *)(v3 + 34) = v5 | 0x10;
    v6 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v3 + 40)) >> 8) & 0x3FF);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v4);
    if ( v7 )
      MiReleasePageFileInfo(v6, v7, 0);
    ++v1;
  }
}
