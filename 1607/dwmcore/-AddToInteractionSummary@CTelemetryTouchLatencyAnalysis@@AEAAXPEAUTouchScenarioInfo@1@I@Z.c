/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18001C628
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001CB00 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18001C23C (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 *     ?BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEAUTouchScenarioInfo@1@@Z @ 0x18001C434 (-BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEAUTouchScenarioInfo@1@@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18001C608 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18001CA90 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        LARGE_INTEGER *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        unsigned int a3)
{
  LARGE_INTEGER v4; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v6; // rdi
  unsigned __int16 *v7; // rax
  LONGLONG v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // eax
  CTelemetryTouchLatencyAnalysis *v12; // rcx
  unsigned int LowPart; // eax
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // cx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  bool v24; // zf
  _OWORD v25[9]; // [rsp+20h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+C0h] [rbp+8h] BYREF

  v4 = this[213];
  v6 = a2;
  if ( v4.QuadPart )
  {
    v7 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
    v8 = v4.QuadPart - (_QWORD)v7;
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
      if ( (v11 == this[215].LowPart || !v11) && *((_DWORD *)v6 + 17) == this[216].LowPart )
        goto LABEL_8;
    }
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary((CTelemetryTouchLatencyAnalysis *)this);
    a2 = v6;
  }
  if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(this, a2) )
    return;
LABEL_8:
  if ( !*((_WORD *)v6 + 36) && ((this[215].LowPart - 4) & 0xFFFFFFFD) != 0 )
  {
LABEL_10:
    QueryPerformanceCounter(&PerformanceCount);
    if ( (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                         (CTelemetryTouchLatencyAnalysis *)this,
                         this[212].QuadPart,
                         PerformanceCount.QuadPart) >= 0xEA60 )
    {
      CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v12);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LARGE_INTEGER))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this[213]);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LARGE_INTEGER))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this[214]);
      memset_0(v25, 0, sizeof(v25));
      v17 = v25[1];
      *(_OWORD *)&this[212].LowPart = v25[0];
      v18 = v25[2];
      *(_OWORD *)&this[214].LowPart = v17;
      v19 = v25[3];
      *(_OWORD *)&this[216].LowPart = v18;
      v20 = v25[4];
      *(_OWORD *)&this[218].LowPart = v19;
      v21 = v25[5];
      *(_OWORD *)&this[220].LowPart = v20;
      v22 = v25[6];
      *(_OWORD *)&this[222].LowPart = v21;
      v23 = v25[8];
      *(_OWORD *)&this[224].LowPart = v22;
      *(_OWORD *)&this[226].LowPart = v25[7];
      *(_OWORD *)&this[228].LowPart = v23;
    }
    return;
  }
  LowPart = this[215].LowPart;
  if ( LowPart <= 3 )
    goto LABEL_17;
  if ( LowPart == 4 )
  {
    if ( *((_DWORD *)v6 + 39) == 513 && this[233].LowPart == 514 )
      goto LABEL_17;
    v24 = ((this[233].LowPart - 522) & 0xFFFFFFFB) == 0;
LABEL_35:
    if ( v24 )
      goto LABEL_17;
    goto LABEL_18;
  }
  if ( LowPart == 5 )
  {
LABEL_17:
    ++WORD2(this[216].QuadPart);
    this[219].LowPart += a3;
    goto LABEL_18;
  }
  if ( LowPart == 6 && *((_DWORD *)v6 + 39) == 256 )
  {
    v24 = this[233].LowPart == 257;
    goto LABEL_35;
  }
LABEL_18:
  this[219].HighPart += *((_DWORD *)v6 + 28) - *((_DWORD *)v6 + 27);
  this[220].LowPart += *((unsigned __int16 *)v6 + 52);
  v14 = *((_WORD *)v6 + 51);
  if ( WORD2(this[220].QuadPart) > v14 )
    v14 = WORD2(this[220].QuadPart);
  WORD2(this[220].QuadPart) = v14;
  this[221].LowPart += *((unsigned __int16 *)v6 + 44);
  v15 = *((_WORD *)v6 + 48);
  if ( WORD2(this[226].QuadPart) > v15 )
    v15 = WORD2(this[226].QuadPart);
  WORD2(this[226].QuadPart) = v15;
  this[227].LowPart += *((_DWORD *)v6 + 23);
  v16 = *((_WORD *)v6 + 49);
  if ( WORD2(this[227].QuadPart) > v16 )
    v16 = WORD2(this[227].QuadPart);
  WORD2(this[227].QuadPart) = v16;
  this[228].LowPart += *((unsigned __int16 *)v6 + 49);
  WORD2(this[228].QuadPart) += *((_WORD *)v6 + 50);
  HIWORD(this[228].QuadPart) += *((_WORD *)v6 + 76);
  LOWORD(this[229].LowPart) += *((_WORD *)v6 + 77);
  this[229].HighPart += *((_DWORD *)v6 + 40);
  if ( (int)CTelemetryTouchLatencyAnalysis::BucketInteractionByPerformance((CTelemetryTouchLatencyAnalysis *)this, v6) >= 0 )
  {
    if ( a3 < 0x1F4 )
    {
      ++HIWORD(this[216].QuadPart);
    }
    else if ( a3 >= 0x3E8 )
    {
      ++HIWORD(this[217].u.LowPart);
    }
    else
    {
      ++LOWORD(this[217].LowPart);
    }
    if ( *((_WORD *)v6 + 36) )
    {
      if ( *((_WORD *)v6 + 36) == 1 )
      {
        ++WORD2(this[217].QuadPart);
      }
      else if ( *((_WORD *)v6 + 36) == 2 )
      {
        ++HIWORD(this[217].QuadPart);
      }
      else if ( *((_WORD *)v6 + 36) == 3 )
      {
        ++LOWORD(this[218].LowPart);
      }
      else
      {
        if ( *((_WORD *)v6 + 36) == 4 )
          ++HIWORD(this[218].u.LowPart);
        ++WORD2(this[218].QuadPart);
      }
    }
    goto LABEL_10;
  }
}
