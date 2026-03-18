/*
 * XREFs of ttfdQueryFont @ 0x1C014C390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ttfdQueryFont(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  bool v7; // zf
  __int64 result; // rax

  v4 = 2LL * (unsigned int)(a3 - 1);
  v5 = *(_QWORD *)(a2 + 16 * ((unsigned int)(a3 - 1) + 3LL));
  v6 = *(_DWORD *)(a2 + 8 * v4 + 44);
  *a4 = 0LL;
  v7 = v6 == 1;
  result = v5 + 352;
  if ( !v7 )
    return *(_QWORD *)(v5 + 16);
  return result;
}
