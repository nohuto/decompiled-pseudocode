/*
 * XREFs of ApiSetResolveToHost @ 0x1C0080638
 * Callers:
 *     ?IsMobileCore@@YAEXZ @ 0x1C0080598 (-IsMobileCore@@YAEXZ.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1C0080710 (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  char v6; // bl
  unsigned __int16 v7; // cx
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _WORD *v12; // rcx
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 result; // rax

  v6 = 0;
  v7 = *a2;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  if ( v7 >= 8u )
  {
    v9 = (_QWORD *)*((_QWORD *)a2 + 1);
    v10 = *v9 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v10 == 0x2D004900500041LL || v10 == 0x2D005400580045LL )
    {
      v11 = v7;
      v12 = (_WORD *)((char *)v9 + v7);
      do
      {
        if ( v11 <= 1 )
          break;
        v11 -= 2;
        --v12;
      }
      while ( *v12 != 45 );
      v13 = (unsigned __int16)v11 >> 1;
      if ( v13 )
      {
        v14 = ApiSetpSearchForApiSet(a1, v9, v13);
        if ( v14 )
        {
          if ( *(_DWORD *)(v14 + 20) )
          {
            v15 = *(unsigned int *)(v14 + 16);
            v6 = 1;
            *(_QWORD *)(a5 + 8) = a1 + *(unsigned int *)(v15 + a1 + 12);
            v16 = *(_WORD *)(v15 + a1 + 16);
            *(_WORD *)(a5 + 2) = v16;
            *(_WORD *)a5 = v16;
          }
        }
      }
    }
  }
  result = 0LL;
  *a4 = v6;
  return result;
}
