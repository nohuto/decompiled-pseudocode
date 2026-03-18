/*
 * XREFs of VidSchIsVSyncAvailable @ 0x1C0066DF0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00051FC (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsVSyncAvailable(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v4; // rsi
  int v5; // eax
  char v6; // bl
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = (unsigned int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v9 + 24) = v2;
      WdLogEvent5_WdAssertion(v9);
      return 0;
    }
    else
    {
      v4 = (struct _ERESOURCE *)(a1 + 1232);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1232), 1u);
      v5 = *(_DWORD *)(a1 + 1956);
      if ( _bittest(&v5, v2) )
        v6 = 1;
      else
        v6 = 0;
      ExReleaseResourceLite(v4);
      return v6;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v8);
    return 0;
  }
}
