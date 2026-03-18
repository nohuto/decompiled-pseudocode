/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x1C00B3438
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C00B32C8 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C0038500 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(_DWORD *a1, int a2)
{
  unsigned int v2; // r9d
  ENTRYOBJ *v3; // rcx

  v2 = 0;
  if ( a1 )
  {
    v3 = (ENTRYOBJ *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*a1);
    if ( v3 )
    {
      if ( ENTRYOBJ::bOwnedBy(v3, a2) )
        ++v2;
    }
  }
  return v2;
}
