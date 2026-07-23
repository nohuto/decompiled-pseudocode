/*
 * XREFs of ArbpUpdatePriority @ 0x140559BF4
 * Callers:
 *     ArbGetNextAllocationRange @ 0x140559A7C (ArbGetNextAllocationRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArbpUpdatePriority(__int64 a1, __int64 *a2)
{
  int v3; // edx
  __int64 result; // rax
  char v5; // r10
  char *v6; // r11
  char *v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  bool v11; // cf
  unsigned __int64 v12; // rcx
  int v13; // eax

  v3 = *((_DWORD *)a2 + 8);
  result = (unsigned int)(v3 - 2147483645);
  if ( (unsigned int)result <= 1 )
    goto LABEL_23;
  v5 = *(_BYTE *)a2[5] & 1;
  if ( v3 )
  {
    result = *((unsigned int *)a2 + 9);
    if ( (result & 2) == 0 )
    {
      if ( v3 <= 0 )
        v13 = -1 - v3;
      else
        v13 = v3 - 1;
      v6 = *(char **)(a1 + 64);
      v7 = &v6[16 * (v13 + 1)];
      goto LABEL_4;
    }
LABEL_23:
    *((_DWORD *)a2 + 8) = 0x7FFFFFFF;
    return result;
  }
  v6 = *(char **)(a1 + 64);
  v7 = v6;
LABEL_4:
  v8 = (unsigned __int64)&v6[16 * *(unsigned __int16 *)(a1 + 56)];
  if ( (unsigned __int64)v7 >= v8 )
  {
LABEL_10:
    result = 2147483646 - (unsigned int)(v5 != 0);
    goto LABEL_20;
  }
  v9 = *a2;
  while ( 1 )
  {
    v10 = *(_QWORD *)v7;
    v11 = *(_QWORD *)v7 < v9;
    if ( *(_QWORD *)v7 <= v9 )
      break;
    if ( a2[1] >= v10 )
    {
      v11 = v10 < v9;
      break;
    }
LABEL_9:
    v7 += 16;
    if ( (unsigned __int64)v7 >= v8 )
      goto LABEL_10;
  }
  if ( v11 && *((_QWORD *)v7 + 1) < v9 )
    goto LABEL_9;
  v12 = *((_QWORD *)v7 + 1);
  if ( a2[1] < v12 )
    v12 = a2[1];
  if ( v9 > v10 )
    v10 = *a2;
  if ( v12 - v10 + 1 < a2[2] )
    goto LABEL_9;
  result = (unsigned int)((v7 - v6) >> 4) + 1;
  *((_DWORD *)a2 + 8) = result;
  if ( v5 )
  {
    result = (unsigned int)-(int)result;
LABEL_20:
    *((_DWORD *)a2 + 8) = result;
  }
  return result;
}
