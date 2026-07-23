/*
 * XREFs of KiCompareVarMtrr @ 0x1403D2994
 * Callers:
 *     KeLoadMTRR @ 0x1403D2568 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

char KiCompareVarMtrr()
{
  unsigned int v0; // r9d
  __int64 v2; // r10
  unsigned int i; // r11d
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // r10

  v0 = 0;
  if ( KeGetCurrentPrcb()->Number || !(_BYTE)qword_140307BA8 )
    return 1;
  v2 = 0LL;
  for ( i = 513; ; i += 2 )
  {
    v4 = __readmsr(i - 1);
    v5 = __readmsr(i);
    v6 = 2 * v2;
    if ( v4 != *((_QWORD *)qword_140307BB8 + v6) || v5 != *((_QWORD *)qword_140307BB8 + v6 + 1) )
      break;
    v2 = ++v0;
    if ( v0 >= (unsigned __int64)(unsigned __int8)qword_140307BA8 )
      return 1;
  }
  return 0;
}
