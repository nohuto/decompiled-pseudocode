/*
 * XREFs of ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x1800162A4
 * Callers:
 *     PbmReportAppClosing @ 0x180016700 (PbmReportAppClosing.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800100A8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::OnAppClosed(CPlaybackManager *this, const unsigned __int16 *a2, int a3)
{
  LPVOID v4; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  LPVOID v9; // rdi
  int v10; // ebx
  unsigned __int64 v11; // r9
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-28h]

  v4 = 0LL;
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( v9 )
  {
    *((_QWORD *)v9 + 1) = 0LL;
    *(_QWORD *)v9 = &CAppClosedWorkItem::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *((_DWORD *)v9 + 4) = a3;
    v10 = 0;
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
      v12 = _AllocStringWorker<CTCoAllocPolicy>(v8, v7, a2, v11, v14, (unsigned __int16 **)v9 + 1);
      v10 = v12;
      if ( v12 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v12);
        }
        AudPolicyLogError("CAppClosedWorkItem::Initialize", 906, v10);
      }
    }
    if ( v10 >= 0 )
    {
      v4 = v9;
      v9 = 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v9 )
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v10 >= 0 )
      v4 = 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v10);
    }
    AudPolicyLogError("CAppClosedWorkItem::CreateInstance", 881, v10);
  }
  if ( v4 )
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_41cf1b36f95b3f413e10328c0a55d7ad_Traceguids, v10);
    }
    AudPolicyLogError("CPlaybackManager::OnAppClosed", 251, v10);
  }
  return (unsigned int)v10;
}
