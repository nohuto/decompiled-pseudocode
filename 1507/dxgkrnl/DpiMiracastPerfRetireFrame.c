/*
 * XREFs of DpiMiracastPerfRetireFrame @ 0x1C0029748
 * Callers:
 *     ?DpiMiracastPerfFlushTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0029480 (-DpiMiracastPerfFlushTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     DpiMiracastPerfGetCurrentFrameRecord @ 0x1C0029568 (DpiMiracastPerfGetCurrentFrameRecord.c)
 * Callees:
 *     Template_qqqzz @ 0x1C0027D24 (Template_qqqzz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029F90 (DpiMiracastPerfReportGlobalConfiguration.c)
 */

char __fastcall DpiMiracastPerfRetireFrame(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdi
  int v4; // ecx
  unsigned int v5; // esi
  __int64 v6; // r8
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // esi
  __int64 v10; // r8
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // ecx

  v1 = *(int *)(a1 + 936);
  ++*(_DWORD *)(a1 + 752);
  v3 = 32 * v1;
  if ( !*(_BYTE *)(v3 + a1 + 984) && !*(_BYTE *)(v3 + a1 + 986) )
  {
    *(_DWORD *)(v3 + a1 + 972) = MEMORY[0xFFFFF78000000008] / 0x2710uLL - *(_DWORD *)(v3 + a1 + 968);
    ++*(_DWORD *)(a1 + 768);
  }
  if ( *(_BYTE *)(v3 + a1 + 986) )
  {
    ++*(_DWORD *)(a1 + 756);
    ++*(_DWORD *)(a1 + 720);
  }
  if ( ++*(_DWORD *)(a1 + 724) >= (unsigned int)dword_1C0046FBC >> 1 )
  {
    v4 = *(_DWORD *)(a1 + 716);
    if ( v4 )
      v5 = *(_DWORD *)(a1 + 720) + v4 - 1;
    else
      v5 = 0;
    if ( v5 < dword_1C0046FB8 )
    {
      v7 = *(_DWORD *)(a1 + 720);
      *(_DWORD *)(a1 + 720) = 0;
      *(_DWORD *)(a1 + 724) = 0;
      *(_DWORD *)(a1 + 716) = v7 + 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 780);
      if ( v5 > *(_DWORD *)(a1 + 784) )
        *(_DWORD *)(a1 + 784) = v5;
      DpiMiracastPerfReportGlobalConfiguration(a1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqzz(
          (unsigned int)dword_1C0046FBC,
          &EventMiracastPerfTrackSourceDroppedFrames,
          v6,
          100 * v5 / dword_1C0046FBC,
          dword_1C0046FBC,
          *(_DWORD *)(a1 + 204),
          *(const wchar_t **)(a1 + 272),
          *(const wchar_t **)(a1 + 232));
      *(_QWORD *)(a1 + 716) = 0LL;
      *(_DWORD *)(a1 + 724) = 0;
    }
  }
  *(_DWORD *)(a1 + 764) += *(_DWORD *)(v3 + a1 + 980);
  *(_DWORD *)(a1 + 732) += *(_DWORD *)(v3 + a1 + 980);
  if ( ++*(_DWORD *)(a1 + 736) >= (unsigned int)dword_1C0046FC4 >> 1 )
  {
    v8 = *(_DWORD *)(a1 + 728);
    if ( v8 )
      v9 = v8 + *(_DWORD *)(a1 + 732) - 1;
    else
      v9 = 0;
    if ( v9 > dword_1C0046FC4 )
      v9 = dword_1C0046FC4;
    if ( v9 < dword_1C0046FC0 )
    {
      v11 = *(_DWORD *)(a1 + 732);
      *(_DWORD *)(a1 + 732) = 0;
      *(_DWORD *)(a1 + 736) = 0;
      *(_DWORD *)(a1 + 728) = v11 + 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 788);
      if ( v9 > *(_DWORD *)(a1 + 792) )
        *(_DWORD *)(a1 + 792) = v9;
      DpiMiracastPerfReportGlobalConfiguration(a1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqzz(
          (unsigned int)dword_1C0046FC4,
          &EventMiracastPerfTrackIFrameRequest,
          v10,
          100 * v9 / dword_1C0046FC4,
          dword_1C0046FC4,
          *(_DWORD *)(a1 + 204),
          *(const wchar_t **)(a1 + 256),
          *(const wchar_t **)(a1 + 232));
      *(_QWORD *)(a1 + 728) = 0LL;
      *(_DWORD *)(a1 + 736) = 0;
    }
  }
  *(_DWORD *)(a1 + 760) += *(_DWORD *)(v3 + a1 + 972);
  *(_DWORD *)(a1 + 744) += *(_DWORD *)(v3 + a1 + 972);
  if ( ++*(_DWORD *)(a1 + 748) >= (unsigned int)dword_1C0046FCC >> 1 )
  {
    v12 = *(_DWORD *)(a1 + 740);
    if ( v12 )
      v13 = (v12 + *(_DWORD *)(a1 + 744) - 1) / (unsigned int)dword_1C0046FCC;
    else
      v13 = 0;
    if ( v13 < dword_1C0046FC8 )
    {
      v16 = *(_DWORD *)(a1 + 744);
      *(_DWORD *)(a1 + 744) = 0;
      *(_DWORD *)(a1 + 748) = 0;
      *(_DWORD *)(a1 + 740) = v16 + 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 796);
      if ( v13 > *(_DWORD *)(a1 + 800) )
        *(_DWORD *)(a1 + 800) = v13;
      DpiMiracastPerfReportGlobalConfiguration(a1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqzz(
          v14,
          &EventMiracastPerfTrackGraphicsLatency,
          v15,
          v13,
          dword_1C0046FCC,
          *(_DWORD *)(a1 + 204),
          *(const wchar_t **)(a1 + 272),
          *(const wchar_t **)(a1 + 256));
      *(_QWORD *)(a1 + 740) = 0LL;
      *(_DWORD *)(a1 + 748) = 0;
    }
  }
  v17 = ++*(_DWORD *)(a1 + 936);
  if ( v17 >= 32 )
  {
    *(_DWORD *)(a1 + 940) -= 32;
    *(_DWORD *)(a1 + 936) = v17 - 32;
  }
  return 1;
}
