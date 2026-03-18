/*
 * XREFs of VidSchTerminateProcess @ 0x1C0054AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0011CAC (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011CC0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VidSchTerminateProcess(PVOID *P, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v7; // rax
  __int64 v9; // rax

  if ( P )
  {
    v5 = 0;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        ++v5;
        v7 = DXGGLOBAL::GetGlobal();
      }
      while ( v5 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v7) );
    }
    ExFreePoolWithTag(P[3], 0);
    ExFreePoolWithTag(P[327], 0);
    if ( (PVOID *)g_pVidSchSystemProcess == P )
      g_pVidSchSystemProcess = 0LL;
    ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
}
