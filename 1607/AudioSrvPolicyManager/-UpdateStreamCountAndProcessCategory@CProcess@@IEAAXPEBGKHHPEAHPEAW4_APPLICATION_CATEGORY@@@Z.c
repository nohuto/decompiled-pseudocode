/*
 * XREFs of ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000EE3C
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180020390 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_dSS @ 0x18000A890 (WPP_SF_dSS.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18000E19C (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180010178 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 */

void __fastcall CProcess::UpdateStreamCountAndProcessCategory(
        CProcess *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int *a6,
        enum _APPLICATION_CATEGORY *a7)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  int v10; // esi
  int v11; // edi
  __int64 v12; // rax
  unsigned int *v13; // [rsp+50h] [rbp+8h] BYREF

  v7 = *((int *)this + 78);
  v8 = a3;
  v10 = a4 != 0 ? 1 : -1;
  v11 = 0;
  if ( (int)CProcess::GetActiveStreamCountStatsForEndpoint(this, a2, a5, &v13) >= 0 )
  {
    v13[v8] += v10;
    if ( a5 )
    {
      *((_DWORD *)this + 77) += v10;
    }
    else
    {
      *((_DWORD *)this + 76) += v10;
      if ( CProcess::GetActiveRenderStreamCount(this, 3u) || CProcess::GetActiveRenderStreamCount(this, 8u) )
      {
        *((_DWORD *)this + 78) = 0;
      }
      else if ( CProcess::GetActiveRenderStreamCount(this, 2u) )
      {
        *((_DWORD *)this + 78) = 1;
      }
      else if ( CProcess::GetActiveRenderStreamCount(this, 0xBu)
             || CProcess::GetActiveRenderStreamCount(this, 0xAu)
             || CProcess::GetActiveRenderStreamCount(this, 1u) )
      {
        *((_DWORD *)this + 78) = 2;
      }
      else
      {
        *((_DWORD *)this + 78) = 4 - (CProcess::GetActiveRenderStreamCount(this, 7u) != 0);
      }
    }
  }
  if ( a7 )
    *(_DWORD *)a7 = v7;
  if ( a6 )
  {
    LOBYTE(v11) = (_DWORD)v7 != *((_DWORD *)this + 78);
    *a6 = v11;
  }
  v12 = *((int *)this + 78);
  if ( (_DWORD)v7 != (_DWORD)v12
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (__int64)&WPP_GLOBAL_Control,
      (__int64)off_180028258,
      *((_DWORD *)this + 42),
      off_180028258[v7],
      off_180028258[v12]);
  }
}
