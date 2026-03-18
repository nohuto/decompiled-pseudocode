/*
 * XREFs of VidSchControlVSyncDevice @ 0x1C0077CE0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 *     VidSchTerminateDevice @ 0x1C002E0F0 (VidSchTerminateDevice.c)
 *     VidSchiCreateDeviceInternal @ 0x1C00382EC (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     VidSchControlVSyncAdapter @ 0x1C0077C10 (VidSchControlVSyncAdapter.c)
 */

__int64 __fastcall VidSchControlVSyncDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  char v6; // bp
  __int64 v8; // rax
  __int64 v10; // r15
  struct _ERESOURCE *v11; // r14
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = 0;
  v5 = (int)a2;
  v6 = a3;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = (struct _ERESOURCE *)(a1 + 744);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 744), 1u);
    if ( !v6 )
    {
      if ( (_DWORD)v5 != 3 )
        --*(_DWORD *)(a1 + 4 * v5 + 852);
      --*(_DWORD *)(a1 + 848);
    }
    if ( !*(_DWORD *)(a1 + 848) )
    {
      LOBYTE(v12) = v6;
      v4 = VidSchControlVSyncAdapter(v10, 0LL, v12, v13);
    }
    if ( v6 && v4 >= 0 )
    {
      ++*(_DWORD *)(a1 + 848);
      if ( (_DWORD)v5 != 3 )
        ++*(_DWORD *)(a1 + 4 * v5 + 852);
    }
    ExReleaseResourceLite(v11);
    return (unsigned int)v4;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
    return 0LL;
  }
}
