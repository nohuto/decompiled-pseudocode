/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x14014E5A8
 * Callers:
 *     MmMapMemoryDumpMdl @ 0x14014D9BC (MmMapMemoryDumpMdl.c)
 *     PopGetNextTable @ 0x14014DAD8 (PopGetNextTable.c)
 *     PopHiberCheckResume @ 0x1403EFBB8 (PopHiberCheckResume.c)
 *     PopCreateDumpMdl @ 0x1403F4A20 (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x1403F53D4 (PopDecompressHiberBlocks.c)
 *     IopLiveDumpBufferDumpData @ 0x1403FE6C8 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  unsigned int v5; // edx
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  int v9; // r12d
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r11d
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v21; // [rsp+30h] [rbp-108h] BYREF
  __int16 v22; // [rsp+34h] [rbp-104h]
  __int64 v23; // [rsp+38h] [rbp-100h]
  __int64 v24; // [rsp+40h] [rbp-F8h]
  __int64 v25; // [rsp+48h] [rbp-F0h]

  v4 = *(unsigned int *)(a3 + 44);
  v5 = v4 + *(_DWORD *)(a3 + 40);
  v23 = 20LL;
  v21 = 0;
  v22 = 0;
  v24 = 0LL;
  *(_QWORD *)(a3 + 24) = a1 + v4;
  v6 = ((v5 & 0xFFF) != 0) + (v5 >> 12);
  v25 = 0LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9 = a4 & 1;
  v10 = v7 + 0x90482413000LL;
  v11 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x7B7DBED030LL;
  do
  {
    if ( !v9 )
      MiMakeProtectionPfnCompatible(4, 48LL * *(_QWORD *)(v11 + v10) - 0x58000000000LL);
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v7) )
      v12 |= 0x100uLL;
    v15 = v12 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
    v16 = *(_QWORD *)v7;
    v17 = v15 | 0x42;
    if ( v10 <= 0x7F8 && (unsigned int)MiPteHasShadow(v13, v16) )
    {
      if ( (v16 & 1) == 0 )
        goto LABEL_21;
      if ( (v16 & 0x20) == 0 || (v16 & 0x42) == 0 )
      {
        v18 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v16 |= 0x20uLL;
          if ( (v19 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
      }
    }
    if ( (v16 & 1) != 0 )
    {
      if ( v16 == v17 )
        goto LABEL_24;
      *(_QWORD *)v7 = v17;
      if ( v10 <= 0x7F8 )
        MiWritePteShadow(v7, v17);
      MiInsertTbFlushEntry((__int64)&v21, v8, 1LL, 0);
      goto LABEL_23;
    }
LABEL_21:
    *(_QWORD *)v7 = v17;
    if ( v10 > 0x7F8 )
      goto LABEL_24;
    MiWritePteShadow(v7, v17);
LABEL_23:
    v14 = 0;
LABEL_24:
    v7 += 8LL;
    v10 += 8LL;
    v8 += 4096LL;
    --v6;
  }
  while ( v6 );
  *(_WORD *)(a3 + 10) |= 0x2002u;
  if ( HIDWORD(v23) != v14 )
  {
    LOBYTE(v22) = 3;
    MiFlushTbList((__int64)&v21);
  }
}
