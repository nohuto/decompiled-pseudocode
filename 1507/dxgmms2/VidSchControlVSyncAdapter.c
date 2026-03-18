/*
 * XREFs of VidSchControlVSyncAdapter @ 0x1C0077C10
 * Callers:
 *     VidSchControlVSyncDevice @ 0x1C0077CE0 (VidSchControlVSyncDevice.c)
 *     VidSchTerminateAdapter @ 0x1C0079880 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C007A1EC (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchControlVSyncAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rdi
  char v6; // si
  __int64 v8; // rax
  struct _ERESOURCE *v10; // r14
  __int64 v11; // rdx

  v4 = 0;
  v5 = (int)a2;
  v6 = a3;
  if ( a1 )
  {
    v10 = (struct _ERESOURCE *)(a1 + 1192);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1192), 1u);
    if ( !v6 )
    {
      if ( (_DWORD)v5 != 3 )
        --*(_DWORD *)(a1 + 4 * v5 + 1960);
      --*(_DWORD *)(a1 + 1956);
    }
    if ( !*(_DWORD *)(a1 + 1956) )
    {
      LOBYTE(v11) = v6;
      v4 = VidSchiControlVSync(a1, v11, v6 != 0 ? 0x10000 : 0);
    }
    if ( v6 && v4 >= 0 )
    {
      ++*(_DWORD *)(a1 + 1956);
      if ( (_DWORD)v5 != 3 )
        ++*(_DWORD *)(a1 + 4 * v5 + 1960);
    }
    ExReleaseResourceLite(v10);
    return (unsigned int)v4;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
    return 0LL;
  }
}
