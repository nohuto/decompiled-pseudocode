/*
 * XREFs of ApiSetResolveToHost @ 0x180015BEC
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x18001559C (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetQueryApiSetPresence @ 0x1800157C0 (ApiSetQueryApiSetPresence.c)
 *     LdrpApplyFileNameRedirection @ 0x180015A24 (LdrpApplyFileNameRedirection.c)
 * Callees:
 *     ApiSetpSearchForApiSetHost @ 0x1800154E8 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpSearchForApiSet @ 0x180015D10 (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  char v6; // bl
  unsigned __int16 v9; // cx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  _WORD *v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax

  v6 = 0;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  v9 = *a2;
  if ( *a2 >= 8u )
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = *v10 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
    {
      v12 = v9;
      v13 = (_WORD *)((char *)v10 + v9);
      do
      {
        if ( v12 <= 1 )
          break;
        v12 -= 2;
        --v13;
      }
      while ( *v13 != 45 );
      v14 = (unsigned __int16)v12 >> 1;
      if ( v14 )
      {
        v15 = ApiSetpSearchForApiSet(a1, v10, v14);
        if ( v15 )
        {
          if ( a3 && *(_DWORD *)(v15 + 20) > 1u )
          {
            v16 = ApiSetpSearchForApiSetHost(v15, *(const WCHAR **)(a3 + 8), *(_WORD *)a3 >> 1, a1);
            goto LABEL_12;
          }
          if ( *(_DWORD *)(v15 + 20) )
          {
            v16 = a1 + *(unsigned int *)(v15 + 16);
LABEL_12:
            v6 = 1;
            *(_QWORD *)(a5 + 8) = a1 + *(unsigned int *)(v16 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v16 + 16);
            *(_WORD *)a5 = *(_WORD *)(v16 + 16);
          }
        }
      }
    }
  }
  result = 0LL;
  *a4 = v6;
  return result;
}
