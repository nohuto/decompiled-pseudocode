/*
 * XREFs of ?RIMICEClassifyContact@@YAXPEAUtagHPD_CONTACT@@0W4tagRIMCALM_STATUS@@W4tagRIMIC_LEVEL@@@Z @ 0x1C00D1DC0
 * Callers:
 *     RIMICAnalyzeUserPalmCluster @ 0x1C00D2940 (RIMICAnalyzeUserPalmCluster.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddddddd @ 0x1C00D2F60 (WPP_RECORDER_SF_ddddddd.c)
 */

__int64 __fastcall RIMICEClassifyContact(_DWORD *a1, __int64 a2, int a3)
{
  int v3; // r10d
  int v5; // r11d
  int v6; // ebp
  int v7; // ebx
  int v8; // r14d
  unsigned int v9; // r9d
  int v10; // eax
  unsigned int v11; // eax
  int v12; // r9d
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edi
  int v19; // [rsp+20h] [rbp-58h]

  v3 = *(_DWORD *)(a2 + 2276);
  v5 = a1[569];
  v6 = 0;
  v7 = 5;
  v8 = 5;
  v9 = abs32(v3 - v5);
  v10 = *(_DWORD *)(a2 + 2280) - a1[570];
  v11 = v9 * v9 + abs32(v10) * abs32(v10);
  v12 = 10;
  if ( v11 < 0x5F5E100 )
    v8 = 10;
  v13 = 0;
  if ( *(_QWORD *)(a2 + 2368) < 0x1E8480uLL )
    v13 = 10;
  v14 = *(_DWORD *)(a2 + 2348) - a1[587];
  v15 = abs32(v14);
  v16 = 3000;
  if ( v15 >= 3000 )
  {
    if ( v15 <= 3000 || v14 >= 5000 )
      v7 = 1;
  }
  else
  {
    v7 = 10;
  }
  if ( a3 == 3 && v3 > v5 || a3 == 1 && v3 < v5 )
    v6 = 10;
  v17 = 15 * v6 + 35 * (v7 + v8) + 10 * v13;
  if ( v17 >= 0x226 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0xAu,
      (__int64)&WPP_86289b4e279a767c521179e66ac4ddc8_Traceguids);
    *(_DWORD *)(a2 + 2392) |= 0x4000u;
  }
  return WPP_RECORDER_SF_ddddddd(WPP_GLOBAL_Control->DeviceExtension, v16, a3, v12, v19, v17, v8, v13, v6, v7, 0, 0);
}
