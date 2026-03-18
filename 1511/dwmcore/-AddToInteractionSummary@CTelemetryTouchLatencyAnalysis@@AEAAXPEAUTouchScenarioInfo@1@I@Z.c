/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800032E8
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180002A0C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x1800027F8 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 *     ?BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEAUTouchScenarioInfo@1@@Z @ 0x18000315C (-BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEAUTouchScenarioInfo@1@@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x1800032C8 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180101EF0 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        LARGE_INTEGER *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        unsigned int a3)
{
  LARGE_INTEGER v4; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v6; // rbx
  unsigned __int16 *v7; // rax
  LONGLONG v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // eax
  unsigned int LowPart; // eax
  unsigned __int16 v13; // cx
  unsigned __int16 LowPart_high; // cx
  unsigned __int16 v15; // cx
  CTelemetryTouchLatencyAnalysis *v16; // rcx
  bool v17; // zf
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  LARGE_INTEGER v25; // rax
  _OWORD v26[8]; // [rsp+20h] [rbp-A8h] BYREF
  LARGE_INTEGER v27; // [rsp+A0h] [rbp-28h]
  LARGE_INTEGER PerformanceCount; // [rsp+D0h] [rbp+8h] BYREF

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
LABEL_24:
    QueryPerformanceCounter(&PerformanceCount);
    if ( (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                         (CTelemetryTouchLatencyAnalysis *)this,
                         this[212].QuadPart,
                         PerformanceCount.QuadPart) >= 0xEA60 )
    {
      CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v16);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LARGE_INTEGER))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this[213]);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LARGE_INTEGER))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this[214]);
      *(_QWORD *)&v26[0] = 0LL;
      memset_0((char *)v26 + 8, 0, 0x80uLL);
      v18 = v26[1];
      *(_OWORD *)&this[212].LowPart = v26[0];
      v19 = v26[2];
      *(_OWORD *)&this[214].LowPart = v18;
      v20 = v26[3];
      *(_OWORD *)&this[216].LowPart = v19;
      v21 = v26[4];
      *(_OWORD *)&this[218].LowPart = v20;
      v22 = v26[5];
      *(_OWORD *)&this[220].LowPart = v21;
      v23 = v26[6];
      *(_OWORD *)&this[222].LowPart = v22;
      v24 = v26[7];
      v25 = v27;
      *(_OWORD *)&this[224].LowPart = v23;
      *(_OWORD *)&this[226].LowPart = v24;
      this[228] = v25;
    }
    return;
  }
  LowPart = this[215].LowPart;
  if ( LowPart <= 3 )
    goto LABEL_10;
  if ( LowPart == 4 )
  {
    if ( *((_DWORD *)v6 + 39) == 513 && this[232].LowPart == 514 )
      goto LABEL_10;
    v17 = ((this[232].LowPart - 522) & 0xFFFFFFFB) == 0;
LABEL_40:
    if ( v17 )
      goto LABEL_10;
    goto LABEL_11;
  }
  if ( LowPart == 5 )
  {
LABEL_10:
    ++WORD2(this[216].QuadPart);
    this[219].LowPart += a3;
    goto LABEL_11;
  }
  if ( LowPart == 6 && *((_DWORD *)v6 + 39) == 256 )
  {
    v17 = this[232].LowPart == 257;
    goto LABEL_40;
  }
LABEL_11:
  this[219].HighPart += *((_DWORD *)v6 + 28) - *((_DWORD *)v6 + 27);
  this[220].LowPart += *((unsigned __int16 *)v6 + 52);
  v13 = *((_WORD *)v6 + 51);
  if ( WORD2(this[220].QuadPart) > v13 )
    v13 = WORD2(this[220].QuadPart);
  WORD2(this[220].QuadPart) = v13;
  this[221].LowPart += *((unsigned __int16 *)v6 + 44);
  LowPart_high = *((_WORD *)v6 + 48);
  if ( HIWORD(this[225].u.LowPart) > LowPart_high )
    LowPart_high = HIWORD(this[225].u.LowPart);
  HIWORD(this[225].u.LowPart) = LowPart_high;
  this[225].HighPart += *((_DWORD *)v6 + 23);
  v15 = *((_WORD *)v6 + 49);
  if ( LOWORD(this[226].LowPart) > v15 )
    v15 = this[226].LowPart;
  LOWORD(this[226].LowPart) = v15;
  this[226].HighPart += *((unsigned __int16 *)v6 + 49);
  LOWORD(this[227].LowPart) += *((_WORD *)v6 + 50);
  HIWORD(this[227].u.LowPart) += *((_WORD *)v6 + 76);
  WORD2(this[227].QuadPart) += *((_WORD *)v6 + 77);
  this[228].LowPart += *((_DWORD *)v6 + 40);
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
    goto LABEL_24;
  }
}
