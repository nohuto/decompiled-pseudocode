/*
 * XREFs of MonitorUnifyCCDMonitorString @ 0x1C00C6C40
 * Callers:
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C00C6A30 (DpiFdoInitializeAdapterUniqueString.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00C8A90 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorUnifyCCDMonitorString(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  const wchar_t *v7; // rax
  unsigned int v8; // r8d
  __int64 v9; // rax

  if ( a1 )
  {
    result = *a1;
    v5 = 0LL;
    if ( (result & 0xFFFFFFFE) != 0 )
    {
      do
      {
        v6 = *((_QWORD *)a1 + 1);
        v7 = L"+*^~\\/";
        v8 = 0;
        while ( *(_WORD *)(v6 + 2 * v5) != *v7 )
        {
          ++v8;
          ++v7;
          if ( v8 >= 6 )
            goto LABEL_6;
        }
        *(_WORD *)(v6 + 2 * v5) = 95;
LABEL_6:
        v5 = (unsigned int)(v5 + 1);
        result = *a1 >> 1;
      }
      while ( (unsigned int)v5 < (unsigned int)result );
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    return WdLogEvent5_WdAssertion(v9);
  }
  return result;
}
