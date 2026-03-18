/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x1C00B5F60
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C00B5DA8 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C0034220 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(_DWORD *a1, int a2)
{
  unsigned int v2; // r9d
  ENTRYOBJ *v3; // rcx

  v2 = 0;
  if ( a1 )
  {
    v3 = (ENTRYOBJ *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*a1);
    if ( v3 )
    {
      if ( ENTRYOBJ::bOwnedBy(v3, a2) )
        ++v2;
    }
  }
  return v2;
}
