/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x1401144BC
 * Callers:
 *     MmMapMemoryDumpMdl @ 0x140113968 (MmMapMemoryDumpMdl.c)
 *     PopGetNextTable @ 0x1401139EC (PopGetNextTable.c)
 *     PopCreateDumpMdl @ 0x1403CCEFC (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x1403CDE5C (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x1403D06EC (PopHiberCheckResume.c)
 *     IopLiveDumpBufferDumpData @ 0x1403DA328 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  __int64 v6; // rbp
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // r15d
  __int64 v10; // r14
  int ProtectionPfnCompatible; // eax
  __int64 v12; // rax
  _KPROCESS *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v20; // [rsp+24h] [rbp-F4h]
  int v21; // [rsp+28h] [rbp-F0h]
  int v22; // [rsp+2Ch] [rbp-ECh]
  __int64 v23; // [rsp+30h] [rbp-E8h]
  __int64 v24; // [rsp+38h] [rbp-E0h]

  v4 = *(unsigned int *)(a3 + 44);
  v6 = ((((_DWORD)v4 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0) + ((unsigned int)(v4 + *(_DWORD *)(a3 + 40)) >> 12);
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v23 = 0LL;
  v7 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v24 = 0LL;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9 = a4 & 1;
  *(_QWORD *)(a3 + 24) = a1 + v4;
  v21 = 20;
  v10 = a3 + 48 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    ProtectionPfnCompatible = 4;
    if ( !v9 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * *(__int64 *)((char *)v7 + v10) - 0x58000000000LL);
    MiMakeValidKernelPte(*(__int64 *)((char *)v7 + v10), ProtectionPfnCompatible, (unsigned __int64)v7);
    v12 = MI_READ_PTE_LOCK_FREE(v7);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 != v15 )
      {
        *v7 = v15;
        if ( (unsigned int)MiPteInShadowRange(v7, v13) )
          MiWritePteShadow(v16, v17);
        MiInsertTbFlushEntry((__int64)&v19, v8, 1LL, 0);
      }
    }
    else
    {
      *v7 = v15;
      if ( (unsigned int)MiPteInShadowRange(v7, v13) )
        MiWritePteShadow(v18, v15);
    }
    ++v7;
    v8 += 4096LL;
    --v6;
  }
  while ( v6 );
  *(_WORD *)(a3 + 10) |= 0x2002u;
  if ( v22 )
  {
    LOBYTE(v20) = 3;
    MiFlushTbList((__int64)&v19, v13, v14, v15);
  }
}
