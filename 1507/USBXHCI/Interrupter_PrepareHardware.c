/*
 * XREFs of Interrupter_PrepareHardware @ 0x1C0047884
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004AEE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C001DBA0 (WPP_RECORDER_SF_Dd.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C004797C (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_CreateInterrupter @ 0x1C0047A80 (Interrupter_CreateInterrupter.c)
 *     Interrupter_PrepareInterrupter @ 0x1C00484F0 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C00496E4 (Interrupter_CmResList_GetInterrupterCountAndType.c)
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
  int v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_DWORD *)(a1 + 16);
  Interrupter_CmResList_GetInterrupterCountAndType(a1, a2, &v30, a1 + 16);
  v8 = v30;
  if ( !(_DWORD)v30 )
  {
    Interrupter = -1073741670;
    v16 = 14;
LABEL_11:
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 64), 2u, 8u, v16, (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids);
    return (unsigned int)Interrupter;
  }
  v9 = 8 * v30;
  PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, (unsigned int)(8 * v30), 0x49434858u);
  *(_QWORD *)(a1 + 32) = PoolWithTag;
  if ( !PoolWithTag )
  {
    Interrupter = -1073741670;
    v16 = 15;
    goto LABEL_11;
  }
  memset(PoolWithTag, 0, v9);
  v11 = Interrupter_PrepareInterrupter(*(_QWORD *)(a1 + 40));
  Interrupter = v11;
  if ( v11 < 0 )
  {
    v17 = 16;
LABEL_30:
    LODWORD(v29) = v11;
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 64), 2u, 8u, v17, (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids, v29);
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
          i < (*(unsigned int (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 2432))(
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                a3);
          ++i )
    {
      v20 = (_BYTE *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
                       WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                       a3,
                       i);
      if ( *v20 == 2 && (v20[2] & 3) == 3 )
      {
        if ( v18 )
        {
          v21 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
                  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                  a3,
                  i);
          v22 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
                  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                  a2,
                  i);
          Interrupter = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, v18, v22, v21, (__int64)&v30, 0LL);
          if ( Interrupter < 0 )
          {
            v27 = 17;
            goto LABEL_27;
          }
          v25 = v30;
          Interrupter = Interrupter_PrepareInterrupter(v30);
          if ( Interrupter < 0 )
          {
            v27 = 18;
LABEL_27:
            WPP_RECORDER_SF_Dd(*(_QWORD *)(v3 + 64), v23, v24, v27, v28);
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
  v11 = Interrupter_PopulateInterrupterLookupTable(a1);
  Interrupter = v11;
  if ( v11 < 0 )
  {
    v17 = 19;
    goto LABEL_30;
  }
  return (unsigned int)Interrupter;
}
