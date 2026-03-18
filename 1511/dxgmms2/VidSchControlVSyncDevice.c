/*
 * XREFs of VidSchControlVSyncDevice @ 0x1C0038EF0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00109F4 (VidSchiSetFlipDevice.c)
 *     VidSchTerminateDevice @ 0x1C0038790 (VidSchTerminateDevice.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0038994 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     VidSchControlVSyncAdapter @ 0x1C0038FB0 (VidSchControlVSyncAdapter.c)
 */

__int64 __fastcall VidSchControlVSyncDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  char v6; // bp
  __int64 v8; // r15
  struct _ERESOURCE *v9; // r14
  __int64 v10; // r8
  __int64 v12; // rax

  v4 = 0;
  v5 = (int)a2;
  v6 = a3;
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v9 = (struct _ERESOURCE *)(a1 + 872);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 872), 1u);
    if ( !v6 )
    {
      if ( (_DWORD)v5 != 3 )
        --*(_DWORD *)(a1 + 4 * v5 + 980);
      --*(_DWORD *)(a1 + 976);
    }
    if ( !*(_DWORD *)(a1 + 976) )
    {
      LOBYTE(v10) = v6;
      v4 = VidSchControlVSyncAdapter(v8, 0LL, v10);
    }
    if ( v6 && v4 >= 0 )
    {
      ++*(_DWORD *)(a1 + 976);
      if ( (_DWORD)v5 != 3 )
        ++*(_DWORD *)(a1 + 4 * v5 + 980);
    }
    ExReleaseResourceLite(v9);
    return (unsigned int)v4;
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
    return 0LL;
  }
}
