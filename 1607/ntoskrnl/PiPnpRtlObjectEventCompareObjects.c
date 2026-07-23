/*
 * XREFs of PiPnpRtlObjectEventCompareObjects @ 0x1404E4E48
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCompareObjects(_RTL_AVL_TABLE *a1, __int64 *a2, PVOID a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // eax
  int v9; // eax
  int v10; // r8d
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rcx
  int v13; // ecx

  v3 = *a2;
  if ( *a2 == *(_QWORD *)a3 )
    return 2LL;
  v5 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
  v6 = *(_QWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v5 + 24);
  v8 = *(_DWORD *)(v6 + 24);
  if ( v8 < v7 )
    return 0LL;
  if ( v8 > v7 )
    return 1LL;
  v9 = *(_DWORD *)(v6 + 28);
  v10 = *(_DWORD *)(v5 + 28);
  if ( v9 < v10 )
    return 0LL;
  if ( v9 > v10 )
    return 1LL;
  v11 = *(const wchar_t **)(v5 + 16);
  v12 = *(const wchar_t **)(v6 + 16);
  if ( v9 == 3 )
  {
    v11 += 4;
    v12 += 4;
  }
  v13 = wcsicmp(v12, v11);
  result = 0LL;
  if ( v13 >= 0 )
  {
    LOBYTE(result) = v13 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
