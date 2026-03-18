/*
 * XREFs of ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C00046F8
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C00042DC (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiVerifyDriverReportedFenceId(
        struct _VIDSCH_NODE *a1,
        unsigned int a2,
        int a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int32 v6; // edi
  unsigned __int32 v7; // eax
  _QWORD *v9; // rax

  v4 = *((_QWORD *)a1 + 3);
  v5 = a2;
  if ( a3 )
  {
    v6 = *((_DWORD *)a1 + 26);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 32, 0, 0);
LABEL_4:
    if ( v7 < v6 )
    {
      if ( a2 <= v7 )
        return 1LL;
    }
    else if ( a2 > v7 )
    {
      goto LABEL_11;
    }
    if ( a2 >= v6 )
      return 1LL;
LABEL_11:
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, 0LL);
    v9[6] = v6;
    v9[3] = 281LL;
    v9[4] = 1LL;
    v9[5] = v5;
    v9[7] = *(_QWORD *)(v4 + 16);
    WdLogEvent5_WdCriticalError(v9);
    JUMPOUT(0x1C000BED9LL);
  }
  *a4 = a2;
  v6 = *((_DWORD *)a1 + 16);
  if ( a2 != v6 )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 30, 0, 0);
    goto LABEL_4;
  }
  return 1LL;
}
