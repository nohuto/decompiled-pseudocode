/*
 * XREFs of ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x18001E32C
 * Callers:
 *     PbmAllowMediaPlaybackForApp @ 0x180016760 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800100A8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CTransportControlRouterWorkItem::CreateInstance(
        int a1,
        const unsigned __int16 *a2,
        struct IPBMWorkItem **a3)
{
  HANDLE ProcessHeap; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  LPVOID v9; // rbx
  int v10; // edi
  unsigned __int64 v11; // r9
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-28h]

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = a1;
    *(_QWORD *)v9 = &CTransportControlRouterWorkItem::`vftable';
    *((_QWORD *)v9 + 2) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
      v12 = _AllocStringWorker<CTCoAllocPolicy>(v8, v7, a2, v11, v14, (unsigned __int16 **)v9 + 2);
      v10 = v12;
      if ( v12 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v12);
        }
        AudPolicyLogError("CTransportControlRouterWorkItem::Initialize", 833, v10);
      }
      if ( v10 >= 0 )
      {
        *a3 = (struct IPBMWorkItem *)v9;
        v9 = 0LL;
      }
    }
    else
    {
      v10 = -2147467261;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v9 )
  {
    *(_QWORD *)v9 = &WORKER_THREAD_EVENT::`vftable';
    operator delete(v9, 0x18uLL);
  }
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v10);
    }
    AudPolicyLogError("CTransportControlRouterWorkItem::CreateInstance", 810, v10);
  }
  return (unsigned int)v10;
}
