/*
 * XREFs of PopPepCancelActivityRange @ 0x1400C0944
 * Callers:
 *     PopPepCancelActivities @ 0x1400C0604 (PopPepCancelActivities.c)
 *     PopPepUpdateConstraints @ 0x14012C8E4 (PopPepUpdateConstraints.c)
 * Callees:
 *     <none>
 */

int *__fastcall PopPepCancelActivityRange(__int64 a1, int a2, int a3, int a4, volatile signed __int32 *a5)
{
  int **v5; // r11
  int *result; // rax
  _DWORD *v7; // rdx
  __int64 v8; // r10
  int v9; // r8d

  if ( a3 <= a4 )
  {
    v5 = (int **)(a1 + 8LL * a3);
    result = (int *)&unk_140257698;
    v7 = (_DWORD *)((char *)&unk_140257698 + 136 * a2 + 4 * a3);
    v8 = (unsigned int)(a4 - a3 + 1);
    do
    {
      if ( *v7 )
      {
        result = *v5;
        v9 = **v5;
        if ( (*v7 & v9) != 0 )
        {
          if ( (v9 & 2) != 0 )
            _InterlockedDecrement(a5);
          result = *v5;
          **v5 &= 0xFFFFFFFC;
        }
      }
      ++v7;
      ++v5;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
