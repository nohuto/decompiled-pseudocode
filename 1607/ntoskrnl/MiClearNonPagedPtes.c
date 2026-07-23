/*
 * XREFs of MiClearNonPagedPtes @ 0x1400240A0
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 * Callees:
 *     MiLockNonPagedPoolPte @ 0x1400242D0 (MiLockNonPagedPoolPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInitializeTbFlushStamps @ 0x14004B64C (MiInitializeTbFlushStamps.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1401EC52C (MiLogNonPagedPoolReleaseEvent.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 */

__int64 __fastcall MiClearNonPagedPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // r12d
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  int v7; // r15d
  int v8; // eax
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  int v19; // r10d
  _BYTE v21[8]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v22; // [rsp+28h] [rbp-110h] BYREF
  int v23; // [rsp+30h] [rbp-108h] BYREF
  __int16 v24; // [rsp+34h] [rbp-104h]
  __int64 v25; // [rsp+38h] [rbp-100h]
  __int64 v26; // [rsp+40h] [rbp-F8h]
  __int64 v27; // [rsp+48h] [rbp-F0h]

  v3 = MmProtectFreedNonPagedPool;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = 20LL;
  v23 = 0;
  v5 = 0LL;
  v24 = 0;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 1;
  v27 = 0LL;
  while ( v6 < a2 )
  {
    if ( v7 != 1 && (v4 & 0xFFF) != 0 )
      goto LABEL_10;
    v7 = 0;
    v8 = MI_IS_PHYSICAL_ADDRESS((__int64)(v4 << 25) >> 16);
    if ( !v8 )
      goto LABEL_10;
    do
    {
      v9 <<= 9;
      --v8;
    }
    while ( v8 );
    if ( v9 > 1 )
    {
      v10 = v9 - ((v4 >> 3) & 0x1FF);
      if ( v10 + v6 > a2 )
        v10 = a2 - v6;
      v6 += v10;
      v4 += 8 * v10;
    }
    else
    {
LABEL_10:
      MiLockNonPagedPoolPte(v4, v21);
      v22 = MI_READ_PTE_LOCK_FREE(v4);
      v12 = *(_BYTE *)(v11 + 34) & 0xFD;
      *(_QWORD *)v11 = v5;
      v5 = v11;
      *(_BYTE *)(v11 + 34) = v12 | 5;
      *(_QWORD *)v4 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4, v13) )
        MiWritePteShadow(v15, 0LL);
      if ( v21[0] != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v21[0]);
      }
      v22 = 0LL;
      v18 = 0LL;
      if ( !v3 )
      {
        MiInitializeTbFlushStamps(&v22, v14, v16, 0LL);
        v18 = v22;
        *(_QWORD *)v4 = v22;
        if ( v19 )
          MiWritePteShadow(v4, v18);
      }
      if ( !MiGetPteTimeStamp(v18, v14, v16) )
        MiInsertTbFlushEntry(&v23, (__int64)(v4 << 25) >> 16, 1LL);
      ++v6;
      v4 += 8LL;
    }
  }
  MiFlushTbList(&v23);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && v5 )
    MiLogNonPagedPoolReleaseEvent(v5);
  return v5;
}
