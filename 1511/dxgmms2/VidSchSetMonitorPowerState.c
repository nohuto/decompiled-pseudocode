/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C006DC50
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C0039180 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v5; // r14
  struct _ERESOURCE *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // edi
  bool v11; // zf
  __int64 v12; // r8
  __int64 v14; // rax

  v4 = (unsigned int)a2;
  v5 = a3;
  if ( a1 )
  {
    if ( (unsigned int)a2 < *(_DWORD *)(a1 + 40) )
    {
      v7 = (struct _ERESOURCE *)(a1 + 1200);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1200), 1u);
      if ( v5 )
      {
        *(_DWORD *)(a1 + 1924) |= 1 << v4;
        if ( !*(_DWORD *)(a1 + 1908) )
          goto LABEL_7;
        v12 = 65538LL;
        LOBYTE(v8) = 1;
      }
      else
      {
        v10 = ~(1 << v4);
        v11 = (v10 & *(_DWORD *)(a1 + 1924)) == 0;
        *(_DWORD *)(a1 + 1924) &= v10;
        if ( !v11 )
        {
LABEL_7:
          ExReleaseResourceLite(v7);
          return 0LL;
        }
        v8 = 0LL;
        v12 = 2LL;
      }
      VidSchiControlVSync(a1, v8, v12, v9);
      goto LABEL_7;
    }
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = v4;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdAssertion(v14);
  return 3221225485LL;
}
