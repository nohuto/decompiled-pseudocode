/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C0079360
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C007A1EC (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v5; // r14
  __int64 v7; // rax
  struct _ERESOURCE *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // edi
  bool v13; // zf

  v4 = (unsigned int)a2;
  v5 = a3;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = v4;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    goto LABEL_3;
  }
  v9 = (struct _ERESOURCE *)(a1 + 1192);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1192), 1u);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 1972) |= 1 << v4;
    if ( *(_DWORD *)(a1 + 1956) )
    {
      v11 = 65538LL;
      LOBYTE(v10) = 1;
LABEL_11:
      VidSchiControlVSync(a1, v10, v11);
    }
  }
  else
  {
    v12 = ~(1 << v4);
    v13 = (v12 & *(_DWORD *)(a1 + 1972)) == 0;
    *(_DWORD *)(a1 + 1972) &= v12;
    if ( v13 )
    {
      v10 = 0LL;
      v11 = 2LL;
      goto LABEL_11;
    }
  }
  ExReleaseResourceLite(v9);
  return 0LL;
}
