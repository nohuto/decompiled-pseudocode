/*
 * XREFs of KiCompareVarMtrr @ 0x1403F6640
 * Callers:
 *     KeLoadMTRR @ 0x1403F6174 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

char KiCompareVarMtrr()
{
  unsigned int v0; // r9d
  __int64 v1; // r10
  unsigned int i; // r11d
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // r10

  v0 = 0;
  if ( KeGetCurrentPrcb()->Number || !(_BYTE)qword_140332AE8 )
    return 1;
  v1 = 0LL;
  for ( i = 513; ; i += 2 )
  {
    v3 = __readmsr(i - 1);
    v4 = __readmsr(i);
    v5 = 2 * v1;
    if ( v3 != *((_QWORD *)qword_140332AF8 + v5) || v4 != *((_QWORD *)qword_140332AF8 + v5 + 1) )
      break;
    v1 = ++v0;
    if ( v0 >= (unsigned __int64)(unsigned __int8)qword_140332AE8 )
      return 1;
  }
  return 0;
}
