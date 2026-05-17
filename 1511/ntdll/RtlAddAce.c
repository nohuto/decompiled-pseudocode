/*
 * XREFs of RtlAddAce @ 0x180065620
 * Callers:
 *     RtlCreateAndSetSD @ 0x180065340 (RtlCreateAndSetSD.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180019670 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800196D0 (RtlValidAcl.c)
 */

__int64 __fastcall RtlAddAce(__int64 a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5)
{
  char v9; // r15
  unsigned __int8 *v10; // rcx
  __int64 v11; // r11
  __int16 v12; // r12
  unsigned __int64 v13; // rdx
  unsigned __int8 v14; // al
  unsigned int v15; // ecx
  __int64 i; // rdx
  int v17; // r8d
  __int64 v18; // r10
  char *v19; // rsi
  __int64 result; // rax
  __int64 v21; // r9
  bool v22; // cf
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v23) )
    return 3221225485LL;
  v9 = *(_BYTE *)a1;
  v10 = (unsigned __int8 *)a4;
  v11 = a5;
  if ( (unsigned __int8)a2 > *(_BYTE *)a1 )
    v9 = a2;
  v12 = 0;
  v13 = (unsigned __int64)&a4[a5];
  if ( (unsigned __int64)a4 < v13 )
  {
    do
    {
      v14 = *v10;
      if ( *v10 > 3u )
      {
        if ( v14 <= 4u )
        {
          v22 = a2 < 3;
        }
        else
        {
          if ( v14 > 8u )
            goto LABEL_7;
          v22 = a2 < 4;
        }
        if ( v22 )
          return 3221225485LL;
      }
LABEL_7:
      ++v12;
      v10 += *((unsigned __int16 *)v10 + 1);
    }
    while ( (unsigned __int64)v10 < v13 );
  }
  if ( (unsigned __int64)v10 > v13 )
    return 3221225485LL;
  if ( !v23[0] || (unsigned __int64)a5 + v23[0] > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225507LL;
  v15 = 0;
  for ( i = a1 + 8; v15 < a3; i += *(unsigned __int16 *)(i + 2) )
  {
    if ( v15 >= *(unsigned __int16 *)(a1 + 4) )
      break;
    ++v15;
  }
  v17 = LODWORD(v23[0]) - i - 1;
  v18 = v17;
  if ( v17 >= 0 )
  {
    v21 = v17 + a5;
    do
    {
      *(_BYTE *)(v21 + i) = *(_BYTE *)(v18 + i);
      v21 = (unsigned int)(v21 - 1);
      --v18;
    }
    while ( v18 >= 0 );
  }
  if ( a5 )
  {
    v19 = &a4[-i];
    do
    {
      *(_BYTE *)i = v19[i];
      ++i;
      --v11;
    }
    while ( v11 );
  }
  *(_WORD *)(a1 + 4) += v12;
  result = 0LL;
  *(_BYTE *)a1 = v9;
  return result;
}
