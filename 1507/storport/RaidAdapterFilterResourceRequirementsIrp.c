/*
 * XREFs of RaidAdapterFilterResourceRequirementsIrp @ 0x1C004CFA8
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaCallMiniportAdapterControl @ 0x1C0008F44 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C000958C (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     WPP_SF_qD @ 0x1C0025AB4 (WPP_SF_qD.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0039FC0 (RaidMachineRequireIoPortResource.c)
 */

__int64 __fastcall RaidAdapterFilterResourceRequirementsIrp(__int64 a1, IRP *a2)
{
  signed int v4; // r14d
  _DWORD *Information; // rdi
  __int64 v6; // rax
  PDEVICE_OBJECT v7; // rcx
  int v9; // r15d
  _DWORD *v10; // rdx
  _DWORD *v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  _DWORD *v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-30h]
  _DWORD *v20; // [rsp+38h] [rbp-28h]
  GUID v21; // [rsp+40h] [rbp-20h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v4 = RaForwardIrpSynchronous(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  if ( v4 < 0 )
    goto LABEL_5;
  Information = (_DWORD *)a2->IoStatus.Information;
  if ( !Information )
    goto LABEL_5;
  v6 = *(_QWORD *)(a1 + 528);
  *(_DWORD *)(a1 + 752) = Information[2];
  *(_DWORD *)(a1 + 756) = Information[3];
  if ( (*(_DWORD *)(v6 + 184) & 0x200) != 0 && !RaidMachineRequireIoPortResource() )
  {
    v9 = 0;
    v10 = Information + 8;
    v11 = Information + 8;
    if ( Information[7] )
    {
      while ( 1 )
      {
        v12 = 0;
        v13 = v10[1];
        *(_WORD *)v11 = *(_WORD *)v10;
        *((_WORD *)v11 + 1) = *((_WORD *)v10 + 1);
        if ( v13 )
          break;
LABEL_19:
        v10 += 10;
        v11[1] = v12;
        if ( v13 )
          v10 += 8 * v13 - 8;
        v11 += 10;
        if ( v12 )
          v11 += 8 * v12 - 8;
        if ( (unsigned int)++v9 >= Information[7] )
          goto LABEL_4;
      }
      v14 = v10 + 2;
      v15 = v13;
      while ( 1 )
      {
        if ( *((_BYTE *)v14 + 1) != 1 )
          goto LABEL_17;
        if ( (*(_BYTE *)v14 & 8) == 0 )
          break;
LABEL_18:
        v14 += 8;
        if ( !--v15 )
          goto LABEL_19;
      }
      *((_BYTE *)v14 + 1) = 0;
LABEL_17:
      v16 = 8LL * v12++;
      *(_OWORD *)&v11[v16 + 2] = *(_OWORD *)v14;
      *(_OWORD *)&v11[v16 + 6] = *((_OWORD *)v14 + 1);
      goto LABEL_18;
    }
  }
LABEL_4:
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 528) + 184LL) & 0x100) != 0
    && (unsigned int)RaidIsAdapterControlSupported(a1, 13)
    && (v19 = 0x1000000001LL, v20 = Information, v4 = RaCallMiniportAdapterControl(a1 + 296), v4 < 0) )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Du,
        (__int64)&WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
        a1,
        v4);
      v7 = WPP_GLOBAL_Control;
    }
    v4 = 0;
  }
  else
  {
LABEL_5:
    v7 = WPP_GLOBAL_Control;
  }
  if ( StorEtwLoggingEnabled )
  {
    v21.Data1 = 0;
    *(_QWORD *)&v21.Data2 = 0LL;
    *(_DWORD *)&v21.Data4[4] = 0;
    IoGetActivityIdIrp(a2, &v21);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      LODWORD(v18) = a2->IoStatus.Status;
      Template_pq(v17, &EventPnpRequestComplete, &v21, a2, v18);
    }
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v7->Timer) & 2) != 0 && BYTE1(v7->Timer) >= 4u )
    WPP_SF_qqD(
      (__int64)v7->AttachedDevice,
      0x1Eu,
      (__int64)&WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
      a1,
      a2,
      v4,
      v19,
      v20);
  return RaidCompleteRequestEx(a2, 0, v4);
}
