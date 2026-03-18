/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800E44C0
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800E4E20 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x1800E4E00 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x1800E5554 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x1800E58CC (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v6; // rbx
  unsigned __int16 *v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  bool v13; // zf
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // cx
  CTelemetryTouchLatencyAnalysis *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _OWORD v22[6]; // [rsp+20h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 203);
  v6 = a2;
  if ( v4 )
  {
    v7 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
    v8 = v4 - (_QWORD)v7;
    do
    {
      v9 = *(unsigned __int16 *)((char *)v7 + v8);
      v10 = *v7 - v9;
      if ( v10 )
        break;
      ++v7;
    }
    while ( v9 );
    if ( !v10 )
    {
      v11 = *((_DWORD *)v6 + 16);
      if ( (v11 == *((_DWORD *)this + 410) || !v11) && *((_DWORD *)v6 + 17) == *((_DWORD *)this + 412) )
        goto LABEL_11;
    }
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(this);
    a2 = v6;
  }
  if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(this, a2) )
    return;
LABEL_11:
  if ( *((_WORD *)v6 + 36) || ((*((_DWORD *)this + 410) - 4) & 0xFFFFFFFD) == 0 )
  {
    v12 = *((_DWORD *)this + 410);
    if ( v12 > 3 )
    {
      if ( v12 == 4 )
      {
        if ( *((_DWORD *)v6 + 39) == 513 && *((_DWORD *)this + 434) == 514 )
          goto LABEL_23;
        v13 = ((*((_DWORD *)this + 434) - 522) & 0xFFFFFFFB) == 0;
      }
      else
      {
        if ( v12 == 5 )
          goto LABEL_23;
        if ( v12 != 6 || *((_DWORD *)v6 + 39) != 256 )
          goto LABEL_24;
        v13 = *((_DWORD *)this + 434) == 257;
      }
      if ( !v13 )
      {
LABEL_24:
        *((_DWORD *)this + 419) += *((_DWORD *)v6 + 27) - *((_DWORD *)v6 + 26);
        *((_DWORD *)this + 420) += *((unsigned __int16 *)v6 + 51);
        *((_DWORD *)this + 421) += *((unsigned __int16 *)v6 + 44);
        v14 = *((_WORD *)v6 + 48);
        if ( *((_WORD *)this + 844) > v14 )
          v14 = *((_WORD *)this + 844);
        *((_WORD *)this + 844) = v14;
        *((_DWORD *)this + 423) += *((_DWORD *)v6 + 23);
        v15 = *((_WORD *)v6 + 49);
        if ( *((_WORD *)this + 848) > v15 )
          v15 = *((_WORD *)this + 848);
        *((_WORD *)this + 848) = v15;
        *((_DWORD *)this + 425) += *((unsigned __int16 *)v6 + 49);
        *((_WORD *)this + 852) += *((_WORD *)v6 + 50);
        *((_WORD *)this + 853) += *((_WORD *)v6 + 76);
        *((_WORD *)this + 854) += *((_WORD *)v6 + 77);
        if ( a3 >= 0x1F4 )
        {
          if ( a3 >= 0x3E8 )
            ++*((_WORD *)this + 829);
          else
            ++*((_WORD *)this + 828);
        }
        else
        {
          ++*((_WORD *)this + 827);
        }
        if ( *((_WORD *)v6 + 36) )
        {
          if ( *((_WORD *)v6 + 36) == 1 )
          {
            ++*((_WORD *)this + 830);
          }
          else if ( *((_WORD *)v6 + 36) == 2 )
          {
            ++*((_WORD *)this + 831);
          }
          else if ( *((_WORD *)v6 + 36) == 3 )
          {
            ++*((_WORD *)this + 832);
          }
          else
          {
            if ( *((_WORD *)v6 + 36) == 4 )
              ++*((_WORD *)this + 833);
            ++*((_WORD *)this + 834);
          }
        }
        goto LABEL_43;
      }
    }
LABEL_23:
    ++*((_WORD *)this + 826);
    *((_DWORD *)this + 418) += a3;
    goto LABEL_24;
  }
LABEL_43:
  QueryPerformanceCounter(&PerformanceCount);
  if ( CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
         this,
         *((_QWORD *)this + 202),
         PerformanceCount.QuadPart) >= 0xEA60 )
  {
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v16);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 203));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 204));
    *(_QWORD *)&v22[0] = 0LL;
    memset_0((char *)v22 + 8, 0, 0x58uLL);
    v17 = v22[1];
    *((_OWORD *)this + 101) = v22[0];
    v18 = v22[2];
    *((_OWORD *)this + 102) = v17;
    v19 = v22[3];
    *((_OWORD *)this + 103) = v18;
    v20 = v22[4];
    *((_OWORD *)this + 104) = v19;
    v21 = v22[5];
    *((_OWORD *)this + 105) = v20;
    *((_OWORD *)this + 106) = v21;
  }
}
