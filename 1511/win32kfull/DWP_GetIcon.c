/*
 * XREFs of DWP_GetIcon @ 0x1C00F9C60
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DWP_GetIcon(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  __int64 Prop; // rax
  __int64 v4; // rbx
  int v5; // r10d
  __int64 v7; // rax

  if ( a2 > 2 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    if ( a2 == 1 )
      v2 = *(_WORD *)(gpsi + 1358LL);
    else
      v2 = *(_WORD *)(gpsi + 1356LL);
    Prop = GetProp(a1, v2, 1LL);
    v4 = Prop;
    if ( !v5 )
    {
      if ( Prop )
      {
        v7 = HMValidateHandleNoRip(Prop, 3);
        if ( v7 )
        {
          if ( (*(_BYTE *)(v7 + 80) & 0x80) != 0 )
            return 0LL;
        }
      }
    }
    return v4;
  }
}
