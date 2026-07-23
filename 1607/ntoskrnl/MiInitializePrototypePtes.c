/*
 * XREFs of MiInitializePrototypePtes @ 0x1404A2E54
 * Callers:
 *     MiCreatePrototypePtes @ 0x14008F5E4 (MiCreatePrototypePtes.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 *     MiCopyDirectMapHeader @ 0x14065A9C4 (MiCopyDirectMapHeader.c)
 * Callees:
 *     MiEncodeProtoFill @ 0x14008FA2C (MiEncodeProtoFill.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1401F25A8 (MiMakeSubsectionPte.c)
 */

void __fastcall MiInitializePrototypePtes(char *a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rsi
  unsigned __int64 SubsectionPte; // rbx
  int v10; // r10d
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  v6 = *(_QWORD *)a3;
  v7 = 4096LL;
  v8 = 8 * a2;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    SubsectionPte = MiMakeSubsectionPte((__int64)a3);
  }
  else
  {
    v10 = 0;
    if ( (*(_DWORD *)(v6 + 56) & 0x1000) != 0 )
      SubsectionPte = 0LL;
    else
      SubsectionPte = MiMakeDemandZeroPte((a3[16] >> 1) & 0x1F);
    if ( (*(_DWORD *)(v6 + 60) & 0x3FF) != 0 )
      SubsectionPte |= 8uLL;
  }
  if ( v8 >= v7 && a4 == 1 && (dword_1403A9134 & 2) == 0 )
  {
    v11 = SubsectionPte;
    if ( !SubsectionPte )
      v11 = MiMakeDemandZeroPte(4) & 0xFFFFFFFFFFFFFC1FuLL;
    v12 = v11 | 2;
    if ( !v10 )
      v12 |= 0x400uLL;
    MiEncodeProtoFill((unsigned __int64)a1, v8, v12);
    a1 += v8 & 0xFFFFFFFFFFFFF000uLL;
    v8 &= 0xFFFu;
  }
  if ( v8 )
    memset64(a1, SubsectionPte, (v8 & 0xFFFFFFFFFFFFFFF8uLL) >> 3);
}
