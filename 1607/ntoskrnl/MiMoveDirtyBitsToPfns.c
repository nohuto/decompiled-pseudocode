/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x1400425F0
 * Callers:
 *     NtResetWriteWatch @ 0x140013270 (NtResetWriteWatch.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _QWORD *v5; // rdi
  __int64 NextPageTable; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  struct _KEVENT *v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  int v20; // [rsp+30h] [rbp-118h] BYREF
  char v21[4]; // [rsp+34h] [rbp-114h] BYREF
  __int64 v22; // [rsp+38h] [rbp-110h] BYREF
  int v23; // [rsp+40h] [rbp-108h] BYREF
  __int16 v24; // [rsp+44h] [rbp-104h]
  __int64 v25; // [rsp+48h] [rbp-100h]
  __int64 v26; // [rsp+50h] [rbp-F8h]
  __int64 v27; // [rsp+58h] [rbp-F0h]

  v25 = 20LL;
  v23 = 1;
  v24 = 0;
  v26 = 0LL;
  LODWORD(v5) = a1;
  v27 = 0LL;
  if ( a1 <= a2 )
  {
    do
    {
      NextPageTable = MiGetNextPageTable((_DWORD)v5, a2, 0, a3, 5, (__int64)v21);
      v7 = NextPageTable;
      if ( !NextPageTable )
        break;
      v8 = MI_READ_PTE_LOCK_FREE(NextPageTable);
      v22 = v8;
      if ( (v8 & 1) != 0 && (v8 & 0x42) != 0 )
      {
        v9 = MI_READ_PTE_LOCK_FREE(&v22);
        *(_QWORD *)v7 = v10 & 0xFFFFFFFFFFFFFFBDuLL;
        v11 = 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (unsigned int)MiPteInShadowRange(v7, v12) )
          MiWritePteShadow(v13, v14);
        MiInsertTbFlushEntry(&v23, v7 << 25 >> 16, 1LL);
        v20 = 0;
        v16 = 0LL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v20);
          while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0 );
        }
        v17 = *(unsigned __int8 *)(v11 + 34);
        v18 = 0LL;
        if ( (v17 & 0x10) == 0 )
        {
          if ( (*(_DWORD *)(v11 + 16) & 0x400LL) == 0 && (v17 & 8) == 0 )
            v18 = MiCapturePageFileInfoInline(v11 + 16, 1LL, 0LL);
          *(_BYTE *)(v11 + 34) |= 0x10u;
          if ( v18 )
            v16 = (struct _KEVENT *)MiPartitionIdToPointer(
                                      ((unsigned int)HIDWORD(*(_QWORD *)(v11 + 40)) >> 8) & 0x3FF,
                                      v17,
                                      v15,
                                      v18);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v18 )
          MiReleasePageFileInfo(v16, v18, 1);
      }
      v5 = (_QWORD *)(v7 + 8);
    }
    while ( (unsigned __int64)v5 <= a2 );
  }
  return MiFlushTbList(&v23);
}
