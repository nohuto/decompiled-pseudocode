/*
 * XREFs of RIMCALMGetAfterLifePosition @ 0x1C00CA010
 * Callers:
 *     RIMICAnalyzeUserPalmCluster @ 0x1C00D4760 (RIMICAnalyzeUserPalmCluster.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000A3C4 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00C5600 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C7D58 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall RIMCALMGetAfterLifePosition(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  unsigned int v5; // r14d
  unsigned __int64 v6; // r12
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // rdx
  _QWORD *v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+38h] [rbp-30h]
  int v21; // [rsp+78h] [rbp+10h]

  v21 = a2;
  v3 = (_QWORD *)(a1 + 640);
  v4 = *(_QWORD **)(a1 + 640);
  v5 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v7 = 0;
  *(_DWORD *)(a1 + 664) = v6;
  v8 = 2;
  WPP_RECORDER_SF_ddd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4u,
    0x11u,
    (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
    *(_DWORD *)(a1 + 660),
    a2,
    HIDWORD(a2));
  if ( v4 == v3 )
    return v8;
  do
  {
    v10 = v4 - 4;
    v11 = v6 - *((_DWORD *)v4 - 1);
    LODWORD(v19) = *((_DWORD *)v4 - 7);
    LODWORD(v17) = *((_DWORD *)v4 - 8);
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      4u,
      0x12u,
      (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
      v17,
      v19);
    v4 = (_QWORD *)*v4;
    if ( v11 > 0x7D0 )
    {
      LODWORD(v18) = *((_DWORD *)v10 + 7);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        4u,
        0x15u,
        (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
        v18);
      v14 = v10[4];
      v15 = (_QWORD *)v10[5];
      if ( *(_QWORD **)(v14 + 8) != v10 + 4 || (_QWORD *)*v15 != v10 + 4 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      --*(_DWORD *)(a1 + 660);
      Win32FreePool();
    }
    else
    {
      if ( *(_DWORD *)v10 <= v21 )
      {
        ++v7;
        v13 = 20;
        LODWORD(v20) = *((_DWORD *)v10 + 1);
        LODWORD(v19) = *(_DWORD *)v10;
        LODWORD(v18) = v7;
      }
      else
      {
        ++v5;
        v13 = 19;
        LODWORD(v20) = *((_DWORD *)v10 + 1);
        LODWORD(v19) = *(_DWORD *)v10;
        LODWORD(v18) = v5;
      }
      WPP_RECORDER_SF_ddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        4u,
        v13,
        (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
        v18,
        v19,
        v20);
    }
  }
  while ( v4 != (_QWORD *)(a1 + 640) );
  if ( v7 )
  {
    if ( v5 <= 2 * v7 )
      goto LABEL_17;
LABEL_15:
    v8 = 3;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x16u,
      (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids);
    return v8;
  }
  if ( v5 >= 2 )
    goto LABEL_15;
LABEL_17:
  if ( v5 )
  {
    if ( v7 <= 2 * v5 )
      return v8;
    goto LABEL_21;
  }
  if ( v7 >= 2 )
  {
LABEL_21:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0x17u,
      (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids);
    return 1;
  }
  return v8;
}
