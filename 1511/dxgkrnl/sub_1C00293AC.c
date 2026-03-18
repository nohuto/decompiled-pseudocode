/*
 * XREFs of sub_1C00293AC @ 0x1C00293AC
 * Callers:
 *     ?DpiMiracastPerfFlushTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00290E0 (-DpiMiracastPerfFlushTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     sub_1C00291C8 @ 0x1C00291C8 (sub_1C00291C8.c)
 * Callees:
 *     Template_qqqzz @ 0x1C0027918 (Template_qqqzz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029BF8 (DpiMiracastPerfReportGlobalConfiguration.c)
 */

char __fastcall sub_1C00293AC(__int64 a1)
{
  __int64 v1; // rax
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

  v1 = *(int *)(a1 + 944);
  ++*(_DWORD *)(a1 + 760);
  if ( !*(_BYTE *)(32 * (v1 + 31) + a1) && !*(_BYTE *)(32 * v1 + a1 + 994) )
  {
    *(_DWORD *)(32 * v1 + a1 + 980) = MEMORY[0xFFFFF78000000008] / 0x2710uLL - *(_DWORD *)(32 * v1 + a1 + 976);
    ++*(_DWORD *)(a1 + 776);
  }
  v3 = 32 * v1;
  if ( *(_BYTE *)(32 * v1 + a1 + 994) )
  {
    ++*(_DWORD *)(a1 + 764);
    ++*(_DWORD *)(a1 + 728);
  }
  if ( ++*(_DWORD *)(a1 + 732) >= (unsigned int)dword_1C004703C >> 1 )
  {
    v4 = *(_DWORD *)(a1 + 724);
    if ( v4 )
      v5 = *(_DWORD *)(a1 + 728) + v4 - 1;
    else
      v5 = 0;
    if ( v5 < dword_1C0047038 )
    {
      v7 = *(_DWORD *)(a1 + 728);
      *(_DWORD *)(a1 + 728) = 0;
      *(_DWORD *)(a1 + 732) = 0;
      *(_DWORD *)(a1 + 724) = v7 + 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 788);
      if ( v5 > *(_DWORD *)(a1 + 792) )
        *(_DWORD *)(a1 + 792) = v5;
      DpiMiracastPerfReportGlobalConfiguration(a1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqzz(
          (unsigned int)dword_1C004703C,
          &EventMiracastPerfTrackSourceDroppedFrames,
          v6,
          100 * v5 / dword_1C004703C,
          dword_1C004703C,
          *(_DWORD *)(a1 + 204),
          *(const wchar_t **)(a1 + 272),
          *(const wchar_t **)(a1 + 232));
      *(_QWORD *)(a1 + 724) = 0LL;
      *(_DWORD *)(a1 + 732) = 0;
    }
  }
  *(_DWORD *)(a1 + 772) += *(_DWORD *)(v3 + a1 + 988);
  *(_DWORD *)(a1 + 740) += *(_DWORD *)(v3 + a1 + 988);
  if ( ++*(_DWORD *)(a1 + 744) >= (unsigned int)dword_1C0047044 >> 1 )
  {
    v8 = *(_DWORD *)(a1 + 736);
    if ( v8 )
      v9 = *(_DWORD *)(a1 + 740) + v8 - 1;
    else
      v9 = 0;
    if ( v9 > dword_1C0047044 )
      v9 = dword_1C0047044;
    if ( v9 < dword_1C0047040 )
    {
      v11 = *(_DWORD *)(a1 + 740);
      *(_DWORD *)(a1 + 740) = 0;
      *(_DWORD *)(a1 + 744) = 0;
      *(_DWORD *)(a1 + 736) = v11 + 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 796);
      if ( v9 > *(_DWORD *)(a1 + 800) )
        *(_DWORD *)(a1 + 800) = v9;
      DpiMiracastPerfReportGlobalConfiguration(a1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqzz(
          (unsigned int)dword_1C0047044,
          &EventMiracastPerfTrackIFrameRequest,
          v10,
          100 * v9 / dword_1C0047044,
          dword_1C0047044,
          *(_DWORD *)(a1 + 204),
          *(const wchar_t **)(a1 + 256),
          *(const wchar_t **)(a1 + 232));
      *(_QWORD *)(a1 + 736) = 0LL;
      *(_DWORD *)(a1 + 744) = 0;
    }
  }
  *(_DWORD *)(a1 + 768) += *(_DWORD *)(v3 + a1 + 980);
  *(_DWORD *)(a1 + 752) += *(_DWORD *)(v3 + a1 + 980);
  if ( ++*(_DWORD *)(a1 + 756) >= (unsigned int)dword_1C004704C >> 1 )
  {
    v12 = *(_DWORD *)(a1 + 748);
    if ( v12 )
      v13 = (v12 + *(_DWORD *)(a1 + 752) - 1) / (unsigned int)dword_1C004704C;
    else
      v13 = 0;
    if ( v13 < dword_1C0047048 )
    {
      v16 = *(_DWORD *)(a1 + 752);
      *(_DWORD *)(a1 + 752) = 0;
      *(_DWORD *)(a1 + 756) = 0;
      *(_DWORD *)(a1 + 748) = v16 + 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 804);
      if ( v13 > *(_DWORD *)(a1 + 808) )
        *(_DWORD *)(a1 + 808) = v13;
      DpiMiracastPerfReportGlobalConfiguration(a1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqzz(
          v14,
          &EventMiracastPerfTrackGraphicsLatency,
          v15,
          v13,
          dword_1C004704C,
          *(_DWORD *)(a1 + 204),
          *(const wchar_t **)(a1 + 272),
          *(const wchar_t **)(a1 + 256));
      *(_QWORD *)(a1 + 748) = 0LL;
      *(_DWORD *)(a1 + 756) = 0;
    }
  }
  v17 = ++*(_DWORD *)(a1 + 944);
  if ( v17 >= 32 )
  {
    *(_DWORD *)(a1 + 948) -= 32;
    *(_DWORD *)(a1 + 944) = v17 - 32;
  }
  return 1;
}
