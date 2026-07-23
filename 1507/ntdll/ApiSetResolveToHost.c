/*
 * XREFs of ApiSetResolveToHost @ 0x180021380
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpApplyFileNameRedirection @ 0x18002108C (LdrpApplyFileNameRedirection.c)
 *     ApiSetQueryApiSetPresence @ 0x1800212C0 (ApiSetQueryApiSetPresence.c)
 * Callees:
 *     ApiSetpSearchForApiSetHost @ 0x180020A10 (ApiSetpSearchForApiSetHost.c)
 *     RtlCompareUnicodeStrings @ 0x180035820 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetResolveToHost(_DWORD *a1, __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  char v5; // bp
  unsigned __int16 v9; // r10
  const WCHAR *v10; // r14
  unsigned __int64 v11; // rax
  unsigned int v12; // r11d
  _WORD *v13; // rax
  unsigned __int16 v14; // r11
  int v15; // r10d
  unsigned int v16; // ebx
  unsigned __int16 *v17; // r8
  __int64 v18; // r9
  unsigned __int16 v19; // ax
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned int *v24; // rbx
  __int64 v25; // rcx
  __int64 result; // rax

  v5 = 0;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  v9 = *a2;
  if ( (unsigned __int16)*a2 < 8u )
    goto LABEL_26;
  v10 = (const WCHAR *)*((_QWORD *)a2 + 1);
  v11 = *(_QWORD *)v10 & 0xFFFFFFDFFFDFFFDFuLL;
  if ( v11 != 0x2D004900500041LL && v11 != 0x2D005400580045LL )
    goto LABEL_26;
  v12 = v9;
  v13 = (_WORD *)((char *)v10 + v9);
  if ( v9 > 1u )
  {
    do
    {
      v12 -= 2;
      --v13;
    }
    while ( *v13 != 45 && v12 > 1 );
  }
  v14 = (unsigned __int16)v12 >> 1;
  if ( !v14 )
    goto LABEL_26;
  v15 = 0;
  v16 = 0;
  v17 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v18 = v14;
  do
  {
    v19 = *v17;
    if ( (unsigned __int16)(*v17 - 65) <= 0x19u )
      v19 += 32;
    ++v17;
    v16 = v16 * a1[6] + v19;
    --v18;
  }
  while ( v18 );
  v20 = a1[3] - 1;
  if ( v20 < 0 )
    goto LABEL_26;
  while ( 1 )
  {
    v21 = (v20 + v15) >> 1;
    v22 = (unsigned int)a1[5] + 8LL * v21;
    v23 = *(_DWORD *)((char *)a1 + v22);
    if ( v16 < v23 )
    {
      v20 = v21 - 1;
      goto LABEL_18;
    }
    if ( v16 <= v23 )
      break;
    v15 = v21 + 1;
LABEL_18:
    if ( v15 > v20 )
      goto LABEL_26;
  }
  v24 = (_DWORD *)((char *)&a1[6 * *(_DWORD *)((char *)a1 + v22 + 4)] + (unsigned int)a1[4]);
  if ( v24 && !RtlCompareUnicodeStrings(v10, v14, (PCWCH)((char *)a1 + v24[1]), (unsigned __int64)v24[3] >> 1, 1u) )
  {
    if ( a3 && v24[5] > 1 )
    {
      v25 = ApiSetpSearchForApiSetHost((__int64)v24, *(const WCHAR **)(a3 + 8), *(_WORD *)a3 >> 1, (__int64)a1);
LABEL_25:
      v5 = 1;
      *(_QWORD *)(a5 + 8) = (char *)a1 + *(unsigned int *)(v25 + 12);
      *(_WORD *)(a5 + 2) = *(_WORD *)(v25 + 16);
      *(_WORD *)a5 = *(_WORD *)(v25 + 16);
    }
    else if ( v24[5] )
    {
      v25 = (__int64)a1 + v24[4];
      goto LABEL_25;
    }
  }
LABEL_26:
  result = 0LL;
  *a4 = v5;
  return result;
}
