/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C0073F50
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C00426E0 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  struct _ERESOURCE *v6; // rbp
  __int64 v7; // rdx
  int v8; // edi
  bool v9; // zf
  int v10; // r8d
  __int64 v12; // rax

  v3 = (unsigned int)a2;
  if ( a1 )
  {
    if ( (unsigned int)a2 < *(_DWORD *)(a1 + 40) )
    {
      v6 = (struct _ERESOURCE *)(a1 + 1232);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1232), 1u);
      if ( a3 )
      {
        *(_DWORD *)(a1 + 1956) |= 1 << v3;
        if ( !*(_DWORD *)(a1 + 1940) )
          goto LABEL_7;
        v10 = 65538;
        LOBYTE(v7) = 1;
      }
      else
      {
        v8 = ~(1 << v3);
        v9 = (v8 & *(_DWORD *)(a1 + 1956)) == 0;
        *(_DWORD *)(a1 + 1956) &= v8;
        if ( !v9 )
        {
LABEL_7:
          ExReleaseResourceLite(v6);
          return 0LL;
        }
        v7 = 0LL;
        v10 = 2;
      }
      VidSchiControlVSync(a1, v7, v10);
      goto LABEL_7;
    }
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v12 + 24) = v3;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdAssertion(v12);
  return 3221225485LL;
}
