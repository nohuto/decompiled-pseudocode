/*
 * XREFs of VidSchIsSyncObjectWaitUnordered @ 0x1C005EF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsSyncObjectWaitUnordered(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax

  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 40);
  if ( v4 != 4 )
  {
    if ( v4 != 2 )
      return 0;
    v6 = *(_BYTE *)(a1 + 27) ? *(_QWORD *)(*(_QWORD *)(a1 + 168) + 40LL) : *(_QWORD *)(a1 + 56);
    if ( v6 >= a2 )
      return 0;
  }
  return 1;
}
