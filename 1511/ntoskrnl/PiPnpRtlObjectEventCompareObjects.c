/*
 * XREFs of PiPnpRtlObjectEventCompareObjects @ 0x14043FB88
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCompareObjects(_RTL_AVL_TABLE *a1, __int64 *a2, PVOID a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r8d
  unsigned int v7; // eax
  int v8; // eax
  int v9; // r8d
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rcx
  int v12; // ecx
  __int64 result; // rax

  v3 = *a2;
  if ( *a2 == *(_QWORD *)a3 )
    return 2LL;
  v4 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v5 + 24);
  if ( v7 > v6 )
    return 1LL;
  if ( v7 < v6 )
    return 0LL;
  v8 = *(_DWORD *)(v5 + 28);
  v9 = *(_DWORD *)(v4 + 28);
  if ( v8 < v9 )
    return 0LL;
  if ( v8 > v9 )
    return 1LL;
  v10 = *(const wchar_t **)(v4 + 16);
  v11 = *(const wchar_t **)(v5 + 16);
  if ( v8 == 3 )
  {
    v10 += 4;
    v11 += 4;
  }
  v12 = wcsicmp(v11, v10);
  result = 0LL;
  if ( v12 >= 0 )
  {
    LOBYTE(result) = v12 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
