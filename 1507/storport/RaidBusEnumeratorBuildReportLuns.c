/*
 * XREFs of RaidBusEnumeratorBuildReportLuns @ 0x1C000D0C0
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C000C67C (RaidBusEnumeratorIssueReportLuns.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 *     RaidInitializeReportLunsSrb @ 0x1C004DA58 (RaidInitializeReportLunsSrb.c)
 */

_QWORD *__fastcall RaidBusEnumeratorBuildReportLuns(
        __int64 *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        _QWORD *a5)
{
  void *v5; // rsi
  __int64 v7; // rbp
  __int64 v9; // r15
  char v10; // r12
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // rax
  _QWORD *result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax

  v5 = (void *)a3[4];
  v7 = a3[2];
  v9 = a4;
  v10 = 0;
  memset(v5, 0, a4);
  v11 = *a1;
  LOBYTE(v12) = a2;
  RaidInitializeReportLunsSrb(v7, v12, a2 >> 8, HIWORD(a2), (__int64)v5, v9, *(_BYTE *)(v11 + 402));
  if ( *(_BYTE *)(v11 + 402) == 1 )
  {
    *(_QWORD *)(v7 + 104) = 0LL;
    v15 = 0LL;
    *(_DWORD *)(v7 + 24) |= 0x80110u;
    *(_QWORD *)(v7 + 64) = a3[4];
    *(_DWORD *)(v7 + 60) = v9;
    if ( *(_DWORD *)(v7 + 56) )
    {
      do
      {
        v16 = *(unsigned int *)(v7 + 4 * v15 + 120);
        if ( (unsigned int)v16 >= 0x80 )
        {
          v17 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v16 <= (unsigned int)v17 )
          {
            if ( *(_DWORD *)(v16 + v7) == 64 && v16 + 40 <= v17 )
            {
              v10 = 1;
              *(_QWORD *)((unsigned int)v16 + v7 + 16) = a3[3];
              *(_BYTE *)((unsigned int)v16 + v7 + 9) = 18;
            }
            if ( v10 )
              break;
          }
        }
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < *(_DWORD *)(v7 + 56) );
    }
  }
  else
  {
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)(v7 + 32) = a3[3];
    *(_BYTE *)(v7 + 11) = 18;
    v13 = a3[4];
    *(_DWORD *)(v7 + 12) |= 0x80110u;
    *(_QWORD *)(v7 + 24) = v13;
    *(_DWORD *)(v7 + 16) = v9;
  }
  result = a5;
  *a5 = v7;
  return result;
}
