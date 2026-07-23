/*
 * XREFs of MiUnmapMdlCommon @ 0x1401E3B1C
 * Callers:
 *     MmUnmapReservedMapping @ 0x1401E3FC4 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x14065756C (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiInsertLargeTbFlushEntry @ 0x14008B0B4 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, ULONG_PTR a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // r14
  _KPROCESS *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  KIRQL v12; // al
  _QWORD *v13; // r15
  unsigned int v14; // r9d
  _QWORD *v15; // r8
  __int64 v16; // rdi
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-C0h]
  _QWORD *v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v28; // [rsp+54h] [rbp-ACh]
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]

  v30 = 0;
  v4 = (_QWORD *)(a3 + 48);
  v27 = 0;
  v28 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v29 = 20;
  v7 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = v7 + 8 * a4;
  v8 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (MI_READ_PTE_LOCK_FREE(v8) & 0x80u) == 0LL )
  {
    v13 = 0LL;
  }
  else
  {
    v12 = ExAcquireSpinLockExclusive(&dword_1403275A8);
    v13 = (_QWORD *)qword_1403275B8;
    v14 = 0;
    v15 = (_QWORD *)qword_1403275B8;
    if ( a4 >> 9 != 1 )
    {
      do
      {
        v15 = (_QWORD *)*v15;
        ++v14;
      }
      while ( v14 < (a4 >> 9) - 1 );
    }
    qword_1403275B8 = *v15;
    *v15 = 0LL;
    ExReleaseSpinLockExclusive(&dword_1403275A8, v12);
    v11 = 0xFFFFF68000000000uLL;
  }
  while ( v7 < v25 )
  {
    if ( v13 )
    {
      v24 = MI_READ_PTE_LOCK_FREE(v8);
      if ( (v24 & 0x80u) == 0LL || *v4 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFLL) )
        KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a2, a4);
      v26 = v4 + 512;
      v16 = (__int64)v13;
      v13 = (_QWORD *)*v13;
      MiInsertLargeTbFlushEntry((__int64)&v27, 1u, (__int64)v8);
      v24 = ~qword_1403A9350 & (MiMakeValidKernelPte((v16 + 0x58000000000LL) / 48, 6, v7) & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
      v17 = MiLockPageInline(v16);
      *(_QWORD *)(v16 + 8) = v8;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v17);
      v18 = v24;
      *v8 = v24;
      if ( (unsigned int)MiPteInShadowRange(v8, v18) )
        MiWritePteShadow(v19, v9);
      v4 = v26;
      ++v8;
      v7 += 4096LL;
    }
    else
    {
      v24 = MI_READ_PTE_LOCK_FREE(v7);
      if ( (v24 & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a2, a4);
      MiInsertTbFlushEntry((__int64)&v27, (__int64)((v7 << 25) - (v20 << 25)) >> 16, 1LL, 0);
      *(_QWORD *)v7 = 0LL;
      ++v4;
      if ( (unsigned int)MiPteInShadowRange(v7, v21) )
        MiWritePteShadow(v22, 0LL);
      v7 += 8LL;
    }
  }
  MiFlushTbList((__int64)&v27, v9, v10, v11);
}
