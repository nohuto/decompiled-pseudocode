/*
 * XREFs of NtUserGetMenuIndex @ 0x1C0213F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetMenuIndex(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned int v10; // edi

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHmenu(a1);
  v7 = 0;
  v8 = v4;
  if ( !v4 || (v9 = ValidateHmenu(a2)) == 0 )
  {
LABEL_7:
    v10 = v7;
    goto LABEL_8;
  }
  v5 = *(unsigned int *)(v8 + 52);
  v10 = -1;
  if ( (_DWORD)v5 )
  {
    do
    {
      v6 = 152LL * v7;
      if ( *(_QWORD *)(v6 + *(_QWORD *)(v8 + 80) + 16) == v9 )
        goto LABEL_7;
    }
    while ( ++v7 < (unsigned int)v5 );
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v10;
}
