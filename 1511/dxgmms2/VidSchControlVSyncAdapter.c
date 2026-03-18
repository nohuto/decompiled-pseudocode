/*
 * XREFs of VidSchControlVSyncAdapter @ 0x1C0038FB0
 * Callers:
 *     VidSchControlVSyncDevice @ 0x1C0038EF0 (VidSchControlVSyncDevice.c)
 *     VidSchTerminateAdapter @ 0x1C008C0D0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiControlVSync @ 0x1C0039180 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchControlVSyncAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rdi
  char v6; // si
  struct _ERESOURCE *v8; // r14
  __int64 v9; // rdx
  __int64 v11; // rax

  v4 = 0;
  v5 = (int)a2;
  v6 = a3;
  if ( a1 )
  {
    v8 = (struct _ERESOURCE *)(a1 + 1200);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1200), 1u);
    if ( !v6 )
    {
      if ( (_DWORD)v5 != 3 )
        --*(_DWORD *)(a1 + 4 * v5 + 1912);
      --*(_DWORD *)(a1 + 1908);
    }
    if ( !*(_DWORD *)(a1 + 1908) )
    {
      LOBYTE(v9) = v6;
      v4 = VidSchiControlVSync(a1, v9, v6 != 0 ? 0x10000 : 0);
    }
    if ( v6 && v4 >= 0 )
    {
      ++*(_DWORD *)(a1 + 1908);
      if ( (_DWORD)v5 != 3 )
        ++*(_DWORD *)(a1 + 4 * v5 + 1912);
    }
    ExReleaseResourceLite(v8);
    return (unsigned int)v4;
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
    return 0LL;
  }
}
