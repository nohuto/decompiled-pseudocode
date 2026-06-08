/*
 * XREFs of SnapEnergyCounters @ 0x1C0003B20
 * Callers:
 *     <none>
 * Callees:
 *     DeactivateFixedFunctionCounters @ 0x1C0002F30 (DeactivateFixedFunctionCounters.c)
 */

_DWORD *__fastcall SnapEnergyCounters(unsigned int a1, char a2, char a3)
{
  _DWORD *result; // rax
  __int64 v5; // r9
  _DWORD *v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int *v10; // r10
  _QWORD *v11; // r11
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD *v14; // rcx

  result = (_DWORD *)DevExts;
  v5 = *(_QWORD *)(DevExts + 8LL * a1);
  if ( !v5 )
    return result;
  v6 = *(_DWORD **)(v5 + 328);
  if ( !v6 || !*v6 )
    return result;
  v7 = 3LL;
  if ( !a2 )
  {
    if ( __readmsr(0x38Du) == 819
      && (v8 = __readmsr(0x38Fu),
          ((((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) & 0x700000000LL) == 0x700000000LL) )
    {
      if ( (EnergyModelContext[0] & 0x40) != 0 )
      {
        v9 = qword_1C000EC10;
        v10 = (unsigned int *)&CounterId;
        v11 = v6 + 8;
        v12 = 3LL;
        do
        {
          v13 = __readmsr(*v10++);
          result = (_DWORD *)(v9 & (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13));
          *v11 = result;
          v11 += 3;
          --v12;
        }
        while ( v12 );
        goto LABEL_10;
      }
    }
    else
    {
      LODWORD(EnergyModelContext[0]) &= ~0x40u;
    }
    return DeactivateFixedFunctionCounters();
  }
LABEL_10:
  if ( a3 )
  {
    v14 = v6 + 4;
    do
    {
      result = (_DWORD *)v14[2];
      *v14 = result;
      v14 += 3;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
