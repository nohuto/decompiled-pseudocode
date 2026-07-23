/*
 * XREFs of AlpcpGetEffectiveTokenMessage @ 0x1403FDD8C
 * Callers:
 *     AlpcpQuerySidMessage @ 0x1403FDE48 (AlpcpQuerySidMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x140655754 (AlpcpQueryTokenModifiedIdMessage.c)
 * Callees:
 *     SeCreateClientSecurityEx @ 0x14040E110 (SeCreateClientSecurityEx.c)
 */

__int64 __fastcall AlpcpGetEffectiveTokenMessage(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) != 0 )
    return 3221227267LL;
  v7 = *(_QWORD *)(a2 + 136);
  if ( v7 )
  {
    if ( *(int *)(v7 + 36) < 1 )
      return 3221225506LL;
    v13 = *(_QWORD *)(v7 + 48);
LABEL_14:
    *a3 = v13;
    *a5 = 0;
    return 0LL;
  }
  v8 = *(_DWORD *)(a1 + 416);
  v9 = *(_QWORD *)(a2 + 24);
  if ( (v8 & 6) != 2 )
    return 3221225506LL;
  if ( !v9 )
    return 3221225506LL;
  v10 = *(_DWORD *)(v9 + 416);
  if ( (v10 & 6) != 4 )
    return 3221225506LL;
  if ( (v10 & 0x400) == 0 )
  {
    v13 = *(_QWORD *)(v9 + 80);
    if ( !v13 )
      return 3221225506LL;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(a2 + 32);
  if ( !v11 )
    return 3221225506LL;
  result = SeCreateClientSecurityEx(v11, v9 + 260, 0LL);
  if ( (int)result < 0 )
    return result;
  *a3 = *(_QWORD *)(a4 + 16);
  *a5 = 1;
  return 0LL;
}
