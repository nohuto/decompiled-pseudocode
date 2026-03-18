/*
 * XREFs of DbgParseOneArg @ 0x1C00497E8
 * Callers:
 *     DbgParseArgs @ 0x1C0049778 (DbgParseArgs.c)
 *     DbgParseOneArg @ 0x1C00497E8 (DbgParseOneArg.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C0024C9E (_strtoui64_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     DbgMatchArg @ 0x1C00496BC (DbgMatchArg.c)
 *     DbgParseOneArg @ 0x1C00497E8 (DbgParseOneArg.c)
 */

__int64 __fastcall DbgParseOneArg(__int64 a1, char *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v6; // edi
  __int64 matched; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int (__fastcall *v11)(__int64, char *, _QWORD, _QWORD); // rax
  char *v12; // rsi
  char *v13; // rsi
  unsigned int (__fastcall *v14)(__int64, char *, _QWORD, _QWORD); // rax
  char *EndPtr; // [rsp+30h] [rbp-28h] BYREF
  char *String; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+18h]

  v19 = a3;
  String = a2;
  v6 = 0;
  matched = DbgMatchArg(a1, (const char **)&String, a4);
  v8 = matched;
  if ( !matched )
  {
    ConPrintf("AMLI_ARGERR: ");
    ConPrintf("invalid command argument - %s", String);
    ConPrintf("\n");
    return (unsigned int)-3;
  }
  v9 = *(_DWORD *)(matched + 8);
  if ( !v9 )
    goto LABEL_26;
  if ( v9 <= 2 )
  {
    v13 = String;
    if ( (*(_DWORD *)(v8 + 12) & 2) != 0 )
    {
      if ( !*String || !strchr("=:", *String) )
      {
        ConPrintf("AMLI_ARGERR: ");
        ConPrintf("argument missing option separator - %s", v13);
        ConPrintf("\n");
        return (unsigned int)-1;
      }
      ++v13;
    }
    if ( *(_DWORD *)(v8 + 8) == 1 )
    {
      **(_QWORD **)(v8 + 16) = v13;
    }
    else
    {
      **(_DWORD **)(v8 + 16) = strtoui64_0(v13, &EndPtr, *(_DWORD *)(v8 + 24));
      if ( v13 == EndPtr )
      {
        ConPrintf("AMLI_ARGERR: ");
        ConPrintf("invalid numeric argument - %s", v13);
        ConPrintf("\n");
        return (unsigned int)-2;
      }
    }
    v14 = *(unsigned int (__fastcall **)(__int64, char *, _QWORD, _QWORD))(v8 + 32);
    if ( v14 )
      return v14(v8, v13, v19, (unsigned int)*a4);
  }
  else
  {
    if ( v9 > 4 )
    {
      if ( v9 == 5 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(v8 + 32))(
                               v8,
                               String,
                               a3,
                               (unsigned int)*a4);
LABEL_26:
      ConPrintf("AMLI_ARGERR: ");
      ConPrintf("invalid argument table");
      ConPrintf("\n");
      return (unsigned int)-4;
    }
    if ( v9 == 3 )
      _InterlockedOr(*(volatile signed __int32 **)(v8 + 16), *(_DWORD *)(v8 + 24));
    else
      _InterlockedAnd(*(volatile signed __int32 **)(v8 + 16), ~*(_DWORD *)(v8 + 24));
    v11 = *(unsigned int (__fastcall **)(__int64, char *, _QWORD, _QWORD))(v8 + 32);
    v12 = String;
    if ( (!v11 || !v11(v8, String, v19, (unsigned int)*a4)) && *v12 )
      return (unsigned int)DbgParseOneArg(a1, v12, v19, a4);
  }
  return v6;
}
