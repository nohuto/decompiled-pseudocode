/*
 * XREFs of VidSchIsSyncObjectWaitUnordered @ 0x1C0078850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsSyncObjectWaitUnordered(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned __int64 v7; // rcx

  if ( a1 )
  {
    v5 = *(_DWORD *)(a1 + 40);
    if ( v5 == 4 )
      return 1;
    if ( v5 == 2 )
    {
      v7 = *(_BYTE *)(a1 + 27) ? *(_QWORD *)(*(_QWORD *)(a1 + 168) + 40LL) : *(_QWORD *)(a1 + 56);
      if ( v7 < a2 )
        return 1;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v4);
  }
  return 0;
}
