/*
 * XREFs of PfTTraceListTrim @ 0x140533DD0
 * Callers:
 *     PfTTraceListAdd @ 0x1403E6D38 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x140669770 (PfTCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall PfTTraceListTrim(int a1, unsigned int a2, __int64 a3)
{
  _QWORD *v4; // rcx
  int *v5; // r9
  int *v6; // r10
  _QWORD *v7; // rax
  __int64 v8; // rdx
  int v9; // edx
  _QWORD *v10; // rdx

  if ( a1 == 1 )
  {
    v4 = &unk_140328208;
    v5 = &dword_140328220;
    v6 = &dword_140328324;
  }
  else
  {
    v4 = &unk_1403281F8;
    v5 = &dword_140328218;
    v6 = (int *)&unk_140328320;
  }
  for ( ; *v5 > a2; *(_QWORD *)(a3 + 8) = v7 )
  {
    v7 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v8 = *v7;
    if ( (_QWORD *)v7[1] != v4 || *(_QWORD **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v4 = v8;
    *(_QWORD *)(v8 + 8) = v4;
    v9 = *((_DWORD *)v7 + 7) ? *((_DWORD *)v7 + 12) : *((_DWORD *)v7 + 9);
    --*v5;
    *v6 += v9;
    v10 = *(_QWORD **)(a3 + 8);
    if ( *v10 != a3 )
      __fastfail(3u);
    *v7 = a3;
    v7[1] = v10;
    *v10 = v7;
  }
}
