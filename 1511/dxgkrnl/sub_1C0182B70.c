/*
 * XREFs of sub_1C0182B70 @ 0x1C0182B70
 * Callers:
 *     sub_1C0182E44 @ 0x1C0182E44 (sub_1C0182E44.c)
 * Callees:
 *     sub_1C0182C14 @ 0x1C0182C14 (sub_1C0182C14.c)
 */

__int64 __fastcall sub_1C0182B70(_BYTE *a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v13; // rax

  v3 = 0;
  if ( !*a1 )
    return 0LL;
  v6 = 104LL * a3;
  while ( 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&a1[104 * v3 + 16] + 16LL) == *(_DWORD *)(*(_QWORD *)&a1[v6 + 16] + 16LL) )
    {
      v9 = sub_1C0182C14(a1, a2, v3);
      if ( v9 < 0 )
        break;
    }
    if ( ++v3 >= (unsigned __int8)*a1 )
      return 0LL;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v10, v11);
  v13[5] = v3;
  v13[3] = a1;
  v13[4] = a2;
  WdLogEvent5_WdWarning(v13);
  return (unsigned int)v9;
}
