/*
 * XREFs of Interrupter_PrepareHardware @ 0x1C004C728
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004C600 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0022DF8 (WPP_RECORDER_SF_Dd.c)
 *     Interrupter_CreateInterrupter @ 0x1C004C88C (Interrupter_CreateInterrupter.c)
 *     Interrupter_PrepareInterrupter @ 0x1C004D6A0 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C004E9C8 (Interrupter_CmResList_GetInterrupterCountAndType.c)
 */

__int64 __fastcall Interrupter_PrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _DWORD *v4; // r14
  unsigned int v8; // esi
  unsigned int v9; // ebx
  PVOID PoolWithTag; // rax
  int v11; // eax
  int Interrupter; // ebx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // r9
  unsigned int v18; // esi
  unsigned int i; // r14d
  _BYTE *v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned __int16 v27; // r9
  ULONG ActiveProcessorCount; // eax
  SIZE_T v29; // rbx
  PVOID v30; // rax
  unsigned int v31; // r8d
  __int16 v32; // dx
  __int64 v33; // rcx
  unsigned int v34; // eax
  int v35; // [rsp+20h] [rbp-48h]
  __int64 v36; // [rsp+28h] [rbp-40h]
  __int64 v37; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_DWORD *)(a1 + 16);
  Interrupter_CmResList_GetInterrupterCountAndType(a1, a2, &v37, a1 + 16);
  v8 = v37;
  if ( !(_DWORD)v37 )
  {
    Interrupter = -1073741670;
    v16 = 14;
LABEL_12:
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 64), 2u, 8u, v16, (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
    return (unsigned int)Interrupter;
  }
  v9 = 8 * v37;
  PoolWithTag = ExAllocatePoolWithTag(
                  *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                  (unsigned int)(8 * v37),
                  0x49434858u);
  *(_QWORD *)(a1 + 32) = PoolWithTag;
  if ( !PoolWithTag )
  {
    Interrupter = -1073741670;
    v16 = 15;
    goto LABEL_12;
  }
  memset(PoolWithTag, 0, v9);
  v11 = Interrupter_PrepareInterrupter(*(_QWORD *)(a1 + 40));
  Interrupter = v11;
  if ( v11 < 0 )
  {
    v17 = 16;
    LODWORD(v36) = v11;
LABEL_15:
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 64), 2u, 8u, v17, (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids, v36);
    return (unsigned int)Interrupter;
  }
  v13 = *(_QWORD **)(a1 + 32);
  v14 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 24) = 1;
  *v13 = v14;
  if ( (*(_QWORD *)(v3 + 232) & 0x1000LL) != 0 )
    *(_DWORD *)(a1 + 20) = 0;
  if ( *(_DWORD *)(a1 + 20) && v8 > 1 && *v4 == 2 )
  {
    v18 = 0;
    for ( i = 0;
          i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2432))(
                WdfDriverGlobals,
                a3);
          ++i )
    {
      v20 = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
                       WdfDriverGlobals,
                       a3,
                       i);
      if ( *v20 == 2 && (v20[2] & 3) == 3 )
      {
        if ( v18 )
        {
          v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
                  WdfDriverGlobals,
                  a3,
                  i);
          v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
                  WdfDriverGlobals,
                  a2,
                  i);
          Interrupter = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, v18, v22, v21, (__int64)&v37, 0LL);
          if ( Interrupter < 0 )
          {
            v27 = 17;
            goto LABEL_30;
          }
          v25 = v37;
          Interrupter = Interrupter_PrepareInterrupter(v37);
          if ( Interrupter < 0 )
          {
            v27 = 18;
LABEL_30:
            WPP_RECORDER_SF_Dd(*(_QWORD *)(v3 + 64), v23, v24, v27, v35);
            return (unsigned int)Interrupter;
          }
          v26 = v18++;
          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v26) = v25;
        }
        else
        {
          v18 = 1;
        }
      }
    }
    *(_DWORD *)(a1 + 24) += *(_DWORD *)(a1 + 20);
  }
  if ( *(_DWORD *)(a1 + 24) == 1 )
    return 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 48) = ActiveProcessorCount;
  v29 = 2 * ActiveProcessorCount;
  v30 = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v29, 0x49434858u);
  *(_QWORD *)(a1 + 56) = v30;
  if ( !v30 )
  {
    Interrupter = -1073741670;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      8u,
      0x35u,
      (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
    v17 = 19;
    LODWORD(v36) = -1073741670;
    goto LABEL_15;
  }
  memset(v30, 0, (unsigned int)v29);
  v31 = 0;
  v32 = 1;
  while ( v31 < *(_DWORD *)(a1 + 48) )
  {
    v33 = v31++;
    *(_WORD *)(*(_QWORD *)(a1 + 56) + 2 * v33) = v32;
    v34 = (unsigned __int16)(v32 + 1);
    v32 = 1;
    if ( v34 < *(_DWORD *)(a1 + 24) )
      v32 = v34;
  }
  return 0;
}
