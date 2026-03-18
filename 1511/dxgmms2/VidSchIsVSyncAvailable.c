/*
 * XREFs of VidSchIsVSyncAvailable @ 0x1C005ECB0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00109F4 (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsVSyncAvailable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct _ERESOURCE *v6; // rsi
  int v7; // eax
  char v8; // bl
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = (unsigned int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
    {
      v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v11 + 24) = v4;
      WdLogEvent5_WdAssertion(v11);
      return 0;
    }
    else
    {
      v6 = (struct _ERESOURCE *)(a1 + 1200);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1200), 1u);
      v7 = *(_DWORD *)(a1 + 1924);
      if ( _bittest(&v7, v4) )
        v8 = 1;
      else
        v8 = 0;
      ExReleaseResourceLite(v6);
      return v8;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
    return 0;
  }
}
