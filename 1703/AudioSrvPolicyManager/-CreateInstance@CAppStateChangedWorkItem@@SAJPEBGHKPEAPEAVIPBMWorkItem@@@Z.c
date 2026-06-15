/*
 * XREFs of ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z @ 0x18001DD5C
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180014738 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800100A8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CAppStateChangedWorkItem::CreateInstance(
        const unsigned __int16 *a1,
        int a2,
        int a3,
        struct IPBMWorkItem **a4)
{
  HANDLE ProcessHeap; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  LPVOID v11; // rbx
  int v12; // edi
  unsigned __int64 v13; // r9
  int v14; // eax
  void *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-38h]

  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( v11 )
  {
    *(_QWORD *)v11 = &CAppStateChangedWorkItem::`vftable';
    *((_QWORD *)v11 + 1) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = a2;
    *((_DWORD *)v11 + 5) = a3;
    v13 = -1LL;
    do
      ++v13;
    while ( a1[v13] );
    v14 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, a1, v13, v17, (unsigned __int16 **)v11 + 1);
    v12 = v14;
    if ( v14 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v14);
      }
      AudPolicyLogError("CAppStateChangedWorkItem::Initialize", 567, v12);
    }
    if ( v12 >= 0 )
    {
      *a4 = (struct IPBMWorkItem *)v11;
      v11 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v11 )
  {
    v15 = (void *)*((_QWORD *)v11 + 1);
    *(_QWORD *)v11 = &CAppStateChangedWorkItem::`vftable';
    if ( v15 )
    {
      CoTaskMemFree(v15);
      *((_QWORD *)v11 + 1) = 0LL;
    }
    *(_QWORD *)v11 = &WORKER_THREAD_EVENT::`vftable';
    operator delete(v11, 0x18uLL);
  }
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v12);
    }
    AudPolicyLogError("CAppStateChangedWorkItem::CreateInstance", 547, v12);
  }
  return (unsigned int)v12;
}
