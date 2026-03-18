/*
 * XREFs of ACPISystemPowerInitializeRootMapping @ 0x1C0027C88
 * Callers:
 *     ACPIRootIrpQueryCapabilities @ 0x1C008F7D0 (ACPIRootIrpQueryCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     ACPISystemPowerProcessRootMapping @ 0x1C008F970 (ACPISystemPowerProcessRootMapping.c)
 *     ACPISystemPowerProcessSxD @ 0x1C008F9F0 (ACPISystemPowerProcessSxD.c)
 */

__int64 __fastcall ACPISystemPowerInitializeRootMapping(__int64 a1, __int64 a2)
{
  __int128 v6; // xmm0
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // r8
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // eax
  KIRQL v14; // al
  int v15; // edx
  __int64 v16; // xmm1_8
  __int64 v17; // r9
  const char *v18; // rcx
  const char *v19; // r8
  __int64 v20; // r8
  const char *v21; // rcx
  const char *v22; // r10
  char v23[8]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+58h] [rbp-28h] BYREF
  __int64 v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+70h] [rbp-10h]

  if ( (*(_QWORD *)(a1 + 8) & 0x400000000000000LL) != 0 || (unsigned int)(*(_DWORD *)(a1 + 320) - 2) > 1 )
  {
LABEL_2:
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 460);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 476);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 484);
    return 0LL;
  }
  v6 = *(_OWORD *)(a1 + 460);
  v7 = 5LL;
  v26 = *(_DWORD *)(a1 + 484);
  v8 = (_DWORD *)&v24 + 2;
  v25 = *(_QWORD *)(a1 + 476);
  v24 = v6;
  DWORD1(v24) = 1;
  v9 = a2 - ((_QWORD)&v24 + 8);
  do
  {
    v10 = *(_DWORD *)((char *)v8 + v9 + 24);
    if ( v10 )
      *v8 = v10;
    ++v8;
    --v7;
  }
  while ( v7 );
  v11 = ACPISystemPowerProcessSxD(a1, &v24, v23);
  if ( v11 >= 0 )
  {
    v12 = v26;
    if ( !v26 )
      v12 = 4;
    v26 = v12;
    v13 = ACPISystemPowerProcessRootMapping(a1, &v24);
    if ( v13 < 0 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v21 = (const char *)qword_1C002C340;
      v22 = (const char *)qword_1C002C340;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v21 = *(const char **)(a1 + 560);
        if ( (v20 & 0x400000000000LL) != 0 )
          v22 = *(const char **)(a1 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0xFu,
        (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
        v13,
        a1,
        v21,
        v22);
    }
    else
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x400000000000000uLL);
      v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v15 = v26;
      v16 = v25;
      *(_OWORD *)(a1 + 460) = v24;
      *(_QWORD *)(a1 + 476) = v16;
      *(_DWORD *)(a1 + 484) = v15;
      KeReleaseSpinLock(&AcpiPowerLock, v14);
    }
    goto LABEL_2;
  }
  v17 = *(_QWORD *)(a1 + 8);
  v18 = (const char *)qword_1C002C340;
  v19 = (const char *)qword_1C002C340;
  if ( (v17 & 0x200000000000LL) != 0 )
  {
    v18 = *(const char **)(a1 + 560);
    if ( (v17 & 0x400000000000LL) != 0 )
      v19 = *(const char **)(a1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0xFu,
    0xEu,
    (__int64)&WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
    v11,
    a1,
    v18,
    v19);
  return (unsigned int)v11;
}
