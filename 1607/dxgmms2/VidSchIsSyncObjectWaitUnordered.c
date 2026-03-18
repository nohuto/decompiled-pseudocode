/*
 * XREFs of VidSchIsSyncObjectWaitUnordered @ 0x1C0066F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsSyncObjectWaitUnordered(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v5);
    return 0;
  }
  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 != 4 )
  {
    if ( v2 != 2 )
      return 0;
    v4 = *(_BYTE *)(a1 + 27) ? *(_QWORD *)(*(_QWORD *)(a1 + 168) + 40LL) : *(_QWORD *)(a1 + 56);
    if ( v4 >= a2 )
      return 0;
  }
  return 1;
}
