/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x1401198BC
 * Callers:
 *     MmMapMemoryDumpMdl @ 0x140118D80 (MmMapMemoryDumpMdl.c)
 *     PopGetNextTable @ 0x140118DF8 (PopGetNextTable.c)
 *     PopHiberCheckResume @ 0x14039D7D4 (PopHiberCheckResume.c)
 *     PopCreateDumpMdl @ 0x1403A1C80 (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x1403A2574 (PopDecompressHiberBlocks.c)
 *     IopLiveDumpBufferDumpData @ 0x1403AE2A8 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  unsigned int v6; // edx
  unsigned __int64 v7; // rsi
  int v8; // r12d
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 *v11; // rdi
  __int64 v12; // r15
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  _KPROCESS *v16; // rdx
  int v17; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+24h] [rbp-F4h]
  int v19; // [rsp+28h] [rbp-F0h]
  int v20; // [rsp+2Ch] [rbp-ECh]
  __int64 v21; // [rsp+30h] [rbp-E8h]
  __int64 v22; // [rsp+38h] [rbp-E0h]

  v5 = *(unsigned int *)(a3 + 44);
  v6 = v5 + *(_DWORD *)(a3 + 40);
  v18 = 0;
  v19 = 20;
  v20 = 0;
  v17 = 0;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v21 = 0LL;
  v8 = a4 & 1;
  v22 = 0LL;
  *(_QWORD *)(a3 + 24) = a1 + v5;
  v9 = ((v6 & 0xFFF) != 0) + (v6 >> 12);
  v10 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v11 = (unsigned __int64 *)(v10 - 0x98000000000LL);
  v12 = a3 + 48 - v10 + 0x98000000000LL;
  do
  {
    ProtectionPfnCompatible = 4;
    if ( !v8 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(
                                  4,
                                  48 * *(unsigned __int64 *)((char *)v11 + v12) - 0x58000000000LL);
    v14 = MiMakeValidKernelPte(
            *(unsigned __int64 *)((char *)v11 + v12),
            ProtectionPfnCompatible,
            (unsigned __int64)v11,
            a4) | 0x42;
    v15 = MI_READ_PTE_LOCK_FREE(v11);
    if ( (v15 & 1) != 0 )
    {
      if ( v15 != v14 )
      {
        *v11 = v14;
        if ( (unsigned int)MiPteInShadowRange(v11) )
          MiWritePteShadow(v11, v14);
        MiInsertTbFlushEntry((__int64)&v17, v7, 1LL, 0);
      }
    }
    else
    {
      *v11 = v14;
      if ( (unsigned int)MiPteInShadowRange(v11) )
        MiWritePteShadow(v11, v14);
    }
    ++v11;
    v7 += 4096LL;
    --v9;
  }
  while ( v9 );
  *(_WORD *)(a3 + 10) |= 0x2002u;
  if ( v20 )
  {
    LOBYTE(v18) = 3;
    MiFlushTbList((__int64)&v17, v16);
  }
}
