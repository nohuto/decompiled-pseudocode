/*
 * XREFs of HmgReferenceCheckLock @ 0x1C0077CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgReferenceCheckLock(int a1, char a2)
{
  __int64 v2; // r9

  v2 = 0LL;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr
    && *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1 + 14) == a2
    && *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 12 * (unsigned __int16)a1 + 6) == HIWORD(a1) )
  {
    return *((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)a1);
  }
  return v2;
}
