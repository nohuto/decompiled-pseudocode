/*
 * XREFs of ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x1800039C4
 * Callers:
 *     PbmReportApplicationState @ 0x180001E2C (PbmReportApplicationState.c)
 * Callees:
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180007F94 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall ApplicationStateChangedContext::CreateInstance(
        __int64 a1,
        int a2,
        int a3,
        CHostedAppInteractivity **a4)
{
  HANDLE ProcessHeap; // rax
  CHostedAppInteractivity *v9; // rax
  unsigned int v10; // edx
  int v11; // ecx
  CHostedAppInteractivity *v12; // rbx
  __int64 v13; // r9
  int v14; // edi

  ProcessHeap = GetProcessHeap();
  v9 = (CHostedAppInteractivity *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v12 = v9;
  if ( v9 )
    *(_QWORD *)v9 = 0LL;
  else
    v12 = 0LL;
  if ( v12 )
  {
    *((_DWORD *)v12 + 2) = a2;
    v13 = -1LL;
    *((_DWORD *)v12 + 3) = a3;
    do
      ++v13;
    while ( *(_WORD *)(a1 + 2 * v13) );
    v14 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, a1, v13);
    if ( v14 >= 0 )
    {
      *a4 = v12;
      v12 = 0LL;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  if ( v12 )
    CHostedAppInteractivity::`scalar deleting destructor'(v12, v10);
  if ( v14 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      36LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v14);
  }
  return (unsigned int)v14;
}
