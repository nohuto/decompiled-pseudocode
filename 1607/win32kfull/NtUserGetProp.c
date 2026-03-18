/*
 * XREFs of NtUserGetProp @ 0x1C00D5700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetProp(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rax
  bool v8; // zf
  __int64 v9; // rbx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  if ( v4
    && (v6 = *(_QWORD *)(v4 + 168)) != 0
    && a2
    && (v5 = *(unsigned int *)(v6 + 4), v7 = (__int64 *)(v6 + 8), (_DWORD)v5) )
  {
    while ( *((_WORD *)v7 + 4) != a2 || (*((_BYTE *)v7 + 10) & 1) != 0 )
    {
      v7 += 2;
      v8 = (_DWORD)v5 == 1;
      v5 = (unsigned int)(v5 - 1);
      if ( v8 )
        goto LABEL_7;
    }
    v9 = *v7;
  }
  else
  {
LABEL_7:
    v9 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v9;
}
