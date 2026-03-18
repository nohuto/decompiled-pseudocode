/*
 * XREFs of HmgReferenceCheckLock @ 0x1C0014950
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
    && *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1 + 14) == a2
    && *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1 + 12) == HIWORD(a1) )
  {
    return *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1);
  }
  return v2;
}
