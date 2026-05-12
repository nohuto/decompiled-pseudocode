/*
 * XREFs of RaUnitAsyncError @ 0x1C000EA18
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaidUnitReleaseIrp @ 0x1C000EBBC (RaidUnitReleaseIrp.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000EDE4 (RaidSrbStatusToNtStatus.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000EE60 (RaidUnitHandleSpecialErrorConditions.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0031F60 (RaidLogRequestComplete.c)
 *     WPP_SF_qdq @ 0x1C00346A8 (WPP_SF_qdq.c)
 */

char __fastcall RaUnitAsyncError(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r10
  IRP *v4; // rdi
  char v5; // r14
  char *v6; // rsi
  PDEVICE_OBJECT v9; // rcx
  int v10; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int v13; // eax
  _LARGE_INTEGER ByteOffset; // r15
  unsigned int v15; // r11d
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rcx
  int v23; // [rsp+78h] [rbp+10h]
  unsigned int v24; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 160);
  v3 = 0;
  v4 = *(IRP **)(a2 + 152);
  v5 = 0;
  v6 = 0LL;
  if ( *(_BYTE *)(v2 + 2) != 40 )
  {
    v6 = (char *)(v2 + 4);
    v23 = *(_DWORD *)(v2 + 12);
    v24 = *(_DWORD *)(v2 + 16);
    goto LABEL_3;
  }
  v23 = *(_DWORD *)(v2 + 24);
  v24 = *(_DWORD *)(v2 + 60);
  if ( !*(_DWORD *)(v2 + 20) )
  {
    v15 = *(_DWORD *)(v2 + 56);
    v16 = 0LL;
    if ( v15 )
    {
      while ( 1 )
      {
        v17 = *(unsigned int *)(v2 + 4 * v16 + 120);
        if ( (unsigned int)v17 >= 0x80 )
        {
          v18 = *(unsigned int *)(v2 + 16);
          if ( (unsigned int)v17 <= (unsigned int)v18 )
            break;
        }
LABEL_40:
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
          goto LABEL_4;
      }
      v19 = (unsigned int)v17;
      v20 = *(_DWORD *)(v17 + v2) - 64;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 && v19 + 40 <= v18 )
          {
            v6 = (char *)(v19 + v2 + 8);
LABEL_3:
            v5 = *v6;
            goto LABEL_4;
          }
          goto LABEL_39;
        }
        v22 = v19 + 56;
      }
      else
      {
        v22 = v19 + 40;
      }
      if ( v22 <= v18 )
      {
        v3 = 1;
        v6 = (char *)(v19 + v2 + 8);
        v5 = *v6;
      }
LABEL_39:
      if ( v3 )
        goto LABEL_4;
      goto LABEL_40;
    }
  }
LABEL_4:
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      44LL,
      &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
      a1,
      v2,
      *(_BYTE *)(v2 + 3) & 0x3F);
    v9 = WPP_GLOBAL_Control;
  }
  v10 = *(_BYTE *)(v2 + 3) & 0x3F;
  if ( v10 != 5 && ((v5 - 8) & 0xDF) != 0 && v10 != 37 )
    goto LABEL_9;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  v13 = *(_DWORD *)(a1 + 1496);
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( ByteOffset.LowPart >= v13 && v13 && v10 != 37 )
  {
    if ( v9 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v9->Timer) & 8) != 0 && BYTE1(v9->Timer) >= 3u )
      WPP_SF_qdq(v9->AttachedDevice, 46LL, &WPP_GLOBAL_Control, a1, ByteOffset.LowPart, v2);
    *(_BYTE *)(v2 + 3) = 4;
    if ( v5 == 8 )
      *v6 = 40;
LABEL_9:
    if ( (v23 & 0x100) == 0 && !*(_BYTE *)(a1 + 436) )
    {
      *(_BYTE *)(a1 + 436) = 1;
      *(_BYTE *)(v2 + 3) |= 0x40u;
    }
    RaidUnitHandleSpecialErrorConditions(a1, a2);
    if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v5 - 8) & 0xDF) == 0 )
      v4->IoStatus.Status = -1073741661;
    else
      v4->IoStatus.Status = RaidSrbStatusToNtStatus(*(unsigned __int8 *)(v2 + 3));
    if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 0x12 )
      v4->IoStatus.Information = v24;
    else
      v4->IoStatus.Information = 0LL;
    RaidUnitReleaseIrp(v4);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        47LL,
        &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
        a1,
        v4,
        v4->IoStatus.Status);
    }
    if ( (qword_1C0044010 & 0x10) != 0 )
      RaidLogRequestComplete(*(_QWORD *)(a1 + 24), v4, v2);
    RaidCompleteRequestEx(v4, 0, v4->IoStatus.Status);
    return 1;
  }
  if ( v9 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v9->Timer) & 8) != 0 && BYTE1(v9->Timer) >= 4u )
    WPP_SF_qdq(v9->AttachedDevice, 45LL, &WPP_GLOBAL_Control, a1, ByteOffset.LowPart, v2);
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
  RaidUnitProcessBusyRequest(a1, a2, v6);
  return 0;
}
