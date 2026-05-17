/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x18006EC70
 * Callers:
 *     RtlCreateAndSetSD @ 0x180080030 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetSaclSecurityDescriptor(__int64 a1, char a2, __int64 a3, char a4)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int64 v7; // rax
  __int16 v8; // cx
  __int16 v10; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      *(_QWORD *)(a1 + 24) = 0LL;
      v6 = v5 | 0x10;
      v7 = *(_QWORD *)(a1 + 24);
      if ( a3 )
        v7 = a3;
      *(_QWORD *)(a1 + 24) = v7;
      v8 = v6 & 0xFFDF;
      *(_WORD *)(a1 + 2) = v8;
      if ( !a4 )
        return 0LL;
      v10 = v8 | 0x20;
    }
    else
    {
      v10 = v5 & 0xFFEF;
    }
    *(_WORD *)(a1 + 2) = v10;
    return 0LL;
  }
  return 3221225593LL;
}
