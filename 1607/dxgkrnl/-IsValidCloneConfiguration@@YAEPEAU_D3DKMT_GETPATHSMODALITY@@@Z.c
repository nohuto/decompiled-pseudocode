/*
 * XREFs of ?IsValidCloneConfiguration@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017A154
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?IsValidCloneGroup@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C017A1D4 (-IsValidCloneGroup@@YAEPEAU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 */

unsigned __int8 __fastcall IsValidCloneConfiguration(struct _D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int i; // edx
  __int64 v4; // rax
  unsigned int v5; // edi

  if ( !a1 )
    return 0;
  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); *((_DWORD *)a1 + 54 * v4 + 12) &= ~0x20u )
    v4 = i++;
  v5 = 0;
  if ( *((_WORD *)a1 + 10) )
  {
    while ( (*((_DWORD *)a1 + 54 * v5 + 12) & 0x20) != 0 || IsValidCloneGroup(a1, v5) )
    {
      if ( ++v5 >= *((unsigned __int16 *)a1 + 10) )
        return 1;
    }
    return 0;
  }
  return 1;
}
