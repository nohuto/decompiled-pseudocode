/*
 * XREFs of MiInitializePrototypePtes @ 0x1403C8F74
 * Callers:
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 *     MiCreatePagingFileMap @ 0x1403C89F8 (MiCreatePagingFileMap.c)
 *     MiCopyDirectMapHeader @ 0x14062C788 (MiCopyDirectMapHeader.c)
 * Callees:
 *     MiEncodeProtoFill @ 0x14000CEF0 (MiEncodeProtoFill.c)
 */

unsigned __int64 __fastcall MiInitializePrototypePtes(unsigned __int64 a1, __int64 a2, _WORD *a3, int a4)
{
  char *v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  int v8; // ebp
  __int64 v9; // rbx
  unsigned __int64 result; // rax
  __int64 v11; // rbx

  v5 = (char *)a1;
  v6 = *(_QWORD *)a3;
  v7 = 8 * a2;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    v8 = 1;
    v9 = 16 * (((_QWORD)a3 << 12) | a3[16] & 0x3E | 0x40LL);
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    if ( (*(_DWORD *)(v6 + 56) & 0x1000) == 0 )
      v9 = 16LL * (a3[16] & 0x3E);
    if ( (*(_DWORD *)(v6 + 60) & 0x3FF) != 0 )
      v9 |= 0x1000000uLL;
  }
  if ( v7 >= 0x1000 && a4 == 1 )
  {
    result = (unsigned int)dword_1403810E8;
    if ( (dword_1403810E8 & 2) == 0 )
    {
      v11 = v9 | 2;
      if ( !v8 )
        v11 |= 0x400uLL;
      MiEncodeProtoFill(a1, v7, v11);
      v9 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
      result = v7 & 0xFFFFFFFFFFFFF000uLL;
      v7 &= 0xFFFu;
      v5 += result;
      if ( !v8 )
        v9 &= ~0x400uLL;
    }
  }
  if ( v7 )
  {
    result = v9;
    memset64(v5, v9, (v7 & 0xFFFFFFFFFFFFFFF8uLL) >> 3);
  }
  return result;
}
