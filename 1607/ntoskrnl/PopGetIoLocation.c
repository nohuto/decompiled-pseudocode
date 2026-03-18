/*
 * XREFs of PopGetIoLocation @ 0x1403CE9D4
 * Callers:
 *     PopWriteHiberPages @ 0x1403CBF00 (PopWriteHiberPages.c)
 *     PopHiberReadChecksums @ 0x1403CD0C4 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x1403CD62C (PopRequestWrite.c)
 *     PopRequestRead @ 0x1403CE5E8 (PopRequestRead.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopGetIoLocation(__int64 *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rcx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // r9

  *a3 = 0LL;
  v4 = a1[2];
  if ( a2 < v4 )
    goto LABEL_5;
  if ( a2 < v4 + *(_QWORD *)a1[1] )
    goto LABEL_3;
  if ( a2 < v4 )
  {
LABEL_5:
    v9 = *a1;
    a1[2] = 0LL;
    a1[1] = v9;
  }
  v10 = (_QWORD *)a1[1];
  v11 = a1[2];
  while ( a2 >= v11 + *v10 )
  {
    v11 += *v10;
    v10 += 2;
    a1[2] = v11;
    a1[1] = (__int64)v10;
  }
LABEL_3:
  v6 = (_QWORD *)a1[1];
  v7 = a2 - a1[2];
  result = v7 + v6[1];
  *a3 = *v6 - v7;
  return result;
}
