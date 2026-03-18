/*
 * XREFs of MiInitializePrototypePtes @ 0x1404B24A0
 * Callers:
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 * Callees:
 *     MiEncodeProtoFill @ 0x140081B8C (MiEncodeProtoFill.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x140225C5C (MiMakeSubsectionPte.c)
 */

void __fastcall MiInitializePrototypePtes(char *a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rsi
  int v8; // edi
  unsigned __int64 SubsectionPte; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rax

  v5 = *(_QWORD *)a3;
  v6 = 4096LL;
  v7 = 8 * a2;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    v8 = 1;
    SubsectionPte = MiMakeSubsectionPte((__int64)a3);
  }
  else
  {
    v8 = 0;
    if ( (*(_DWORD *)(v5 + 56) & 0x1000) != 0 )
      SubsectionPte = 0LL;
    else
      SubsectionPte = MiMakeDemandZeroPte((a3[16] >> 1) & 0x1F);
    if ( (*(_DWORD *)(v5 + 60) & 0x3FF) != 0 )
      SubsectionPte |= 8uLL;
  }
  if ( v7 >= v6 && (dword_1403D00D8 & 2) == 0 )
  {
    v10 = SubsectionPte;
    if ( !SubsectionPte )
      v10 = MiMakeDemandZeroPte(4) & 0xFFFFFFFFFFFFFC1FuLL;
    v11 = v10 | 2;
    if ( !v8 )
      v11 |= 0x400uLL;
    MiEncodeProtoFill((unsigned __int64)a1, v7, v11);
    a1 += v7 & 0xFFFFFFFFFFFFF000uLL;
    v7 &= 0xFFFu;
  }
  if ( v7 )
    memset64(a1, SubsectionPte, (v7 & 0xFFFFFFFFFFFFFFF8uLL) >> 3);
}
