/*
 * XREFs of DpiMiracastPerfRetireFrame @ 0x1C0030760
 * Callers:
 *     ?DpiMiracastPerfFlushTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00304B0 (-DpiMiracastPerfFlushTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     DpiMiracastPerfGetCurrentFrameRecord @ 0x1C0030598 (DpiMiracastPerfGetCurrentFrameRecord.c)
 * Callees:
 *     Template_qqqz @ 0x1C002E85C (Template_qqqz.c)
 *     DpiMiracastPerfReportGlobalConfiguration @ 0x1C0030F78 (DpiMiracastPerfReportGlobalConfiguration.c)
 *     Template_qqqzz @ 0x1C0031098 (Template_qqqzz.c)
 */

char __fastcall DpiMiracastPerfRetireFrame(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdi
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // r8d
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

  v1 = *(int *)(a1 + 1032);
  ++*(_DWORD *)(a1 + 848);
  v3 = 32 * v1;
  if ( !*(_BYTE *)(v3 + a1 + 1080) && !*(_BYTE *)(v3 + a1 + 1082) )
  {
    *(_DWORD *)(v3 + a1 + 1068) = MEMORY[0xFFFFF78000000008] / 0x2710uLL - *(_DWORD *)(v3 + a1 + 1064);
    ++*(_DWORD *)(a1 + 864);
  }
  if ( *(_BYTE *)(v3 + a1 + 1082) )
  {
    ++*(_DWORD *)(a1 + 852);
    ++*(_DWORD *)(a1 + 816);
  }
  if ( ++*(_DWORD *)(a1 + 820) >= (unsigned int)dword_1C00571FC >> 1 )
  {
    v4 = *(_DWORD *)(a1 + 812);
    if ( v4 )
      v5 = *(_DWORD *)(a1 + 816) + v4 - 1;
    else
      v5 = 0;
    if ( v5 < dword_1C00571F8 )
    {
      v7 = *(_DWORD *)(a1 + 816);
      *(_DWORD *)(a1 + 816) = 0;
      *(_DWORD *)(a1 + 820) = 0;
      *(_DWORD *)(a1 + 812) = v7 + 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 876);
      if ( v5 > *(_DWORD *)(a1 + 880) )
        *(_DWORD *)(a1 + 880) = v5;
      DpiMiracastPerfReportGlobalConfiguration(a1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqzz(
          dword_1C00571FC,
          100 * v5 % dword_1C00571FC,
          v6,
          100 * v5 / dword_1C00571FC,
          dword_1C00571FC,
          *(_DWORD *)(a1 + 204),
          *(_QWORD *)(a1 + 392),
          *(_QWORD *)(a1 + 360));
      *(_QWORD *)(a1 + 812) = 0LL;
      *(_DWORD *)(a1 + 820) = 0;
    }
  }
  *(_DWORD *)(a1 + 860) += *(_DWORD *)(v3 + a1 + 1076);
  *(_DWORD *)(a1 + 828) += *(_DWORD *)(v3 + a1 + 1076);
  if ( ++*(_DWORD *)(a1 + 832) >= (unsigned int)dword_1C0057204 >> 1 )
  {
    v8 = *(_DWORD *)(a1 + 824);
    if ( v8 )
      v9 = v8 + *(_DWORD *)(a1 + 828) - 1;
    else
      v9 = 0;
    if ( v9 > dword_1C0057204 )
      v9 = dword_1C0057204;
    if ( v9 < dword_1C0057200 )
    {
      v11 = *(_DWORD *)(a1 + 828);
      *(_DWORD *)(a1 + 828) = 0;
      *(_DWORD *)(a1 + 832) = 0;
      *(_DWORD *)(a1 + 824) = v11 + 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 884);
      if ( v9 > *(_DWORD *)(a1 + 888) )
        *(_DWORD *)(a1 + 888) = v9;
      DpiMiracastPerfReportGlobalConfiguration(a1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqz(
          (unsigned int)dword_1C0057204,
          &EventMiracastPerfTrackIFrameRequest,
          v10,
          100 * v9 / dword_1C0057204,
          dword_1C0057204,
          *(_DWORD *)(a1 + 204),
          *(const wchar_t **)(a1 + 360));
      *(_QWORD *)(a1 + 824) = 0LL;
      *(_DWORD *)(a1 + 832) = 0;
    }
  }
  *(_DWORD *)(a1 + 856) += *(_DWORD *)(v3 + a1 + 1068);
  *(_DWORD *)(a1 + 840) += *(_DWORD *)(v3 + a1 + 1068);
  if ( ++*(_DWORD *)(a1 + 844) >= (unsigned int)dword_1C005720C >> 1 )
  {
    v12 = *(_DWORD *)(a1 + 836);
    if ( v12 )
      v13 = (v12 + *(_DWORD *)(a1 + 840) - 1) / (unsigned int)dword_1C005720C;
    else
      v13 = 0;
    if ( v13 < dword_1C0057208 )
    {
      v16 = *(_DWORD *)(a1 + 840);
      *(_DWORD *)(a1 + 840) = 0;
      *(_DWORD *)(a1 + 844) = 0;
      *(_DWORD *)(a1 + 836) = v16 + 1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 892);
      if ( v13 > *(_DWORD *)(a1 + 896) )
        *(_DWORD *)(a1 + 896) = v13;
      DpiMiracastPerfReportGlobalConfiguration(a1);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        Template_qqqz(
          v14,
          &EventMiracastPerfTrackGraphicsLatency,
          v15,
          v13,
          dword_1C005720C,
          *(_DWORD *)(a1 + 204),
          *(const wchar_t **)(a1 + 392));
      *(_QWORD *)(a1 + 836) = 0LL;
      *(_DWORD *)(a1 + 844) = 0;
    }
  }
  v17 = ++*(_DWORD *)(a1 + 1032);
  if ( v17 >= 32 )
  {
    *(_DWORD *)(a1 + 1036) -= 32;
    *(_DWORD *)(a1 + 1032) = v17 - 32;
  }
  return 1;
}
