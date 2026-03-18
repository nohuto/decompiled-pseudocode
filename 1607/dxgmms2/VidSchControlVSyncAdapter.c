/*
 * XREFs of VidSchControlVSyncAdapter @ 0x1C0040A40
 * Callers:
 *     VidSchControlVSyncDevice @ 0x1C0040980 (VidSchControlVSyncDevice.c)
 *     VidSchTerminateAdapter @ 0x1C00A19F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C00426E0 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchControlVSyncAdapter(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebp
  __int64 v4; // rdi
  struct _ERESOURCE *v7; // r14
  __int64 v8; // rdx
  __int64 v10; // rax

  v3 = 0;
  v4 = (int)a2;
  if ( a1 )
  {
    v7 = (struct _ERESOURCE *)(a1 + 1232);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1232), 1u);
    if ( !a3 )
    {
      if ( (_DWORD)v4 != 3 )
        --*(_DWORD *)(a1 + 4 * v4 + 1944);
      --*(_DWORD *)(a1 + 1940);
    }
    if ( !*(_DWORD *)(a1 + 1940) )
    {
      LOBYTE(v8) = a3;
      v3 = VidSchiControlVSync(a1, v8, a3 != 0 ? 0x10000 : 0);
    }
    if ( a3 && v3 >= 0 )
    {
      ++*(_DWORD *)(a1 + 1940);
      if ( (_DWORD)v4 != 3 )
        ++*(_DWORD *)(a1 + 4 * v4 + 1944);
    }
    ExReleaseResourceLite(v7);
    return (unsigned int)v3;
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v10);
    return 0LL;
  }
}
