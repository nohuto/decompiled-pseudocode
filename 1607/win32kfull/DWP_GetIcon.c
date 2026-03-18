/*
 * XREFs of DWP_GetIcon @ 0x1C011D8AC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DWP_GetIcon(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  __int64 Prop; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  int v8; // r10d
  __int64 v10; // rax

  if ( a2 > 2 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  else
  {
    if ( a2 == 1 )
      v2 = *(_WORD *)(gpsi + 1358LL);
    else
      v2 = *(_WORD *)(gpsi + 1356LL);
    Prop = GetProp(a1, v2, 1LL);
    v7 = Prop;
    if ( !v8 )
    {
      if ( Prop )
      {
        LOBYTE(v4) = 3;
        v10 = HMValidateHandleNoRip(Prop, v4, v5, v6);
        if ( v10 )
        {
          if ( *(char *)(v10 + 80) < 0 )
            return 0LL;
        }
      }
    }
    return v7;
  }
}
