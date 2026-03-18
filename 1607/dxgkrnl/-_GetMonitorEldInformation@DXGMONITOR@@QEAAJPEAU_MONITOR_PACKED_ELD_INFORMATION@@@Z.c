/*
 * XREFs of ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C00F1DE8
 * Callers:
 *     MonitorGetMonitorEldInformation @ 0x1C00EED78 (MonitorGetMonitorEldInformation.c)
 * Callees:
 *     EDIDV1_FillProductIdManufacturerName @ 0x1C000A3FC (EDIDV1_FillProductIdManufacturerName.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C007B3FC (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C00F06A0 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     MonitorLogBadEDID @ 0x1C01B07F8 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorEldInformation(
        DXGMONITOR *this,
        struct _MONITOR_PACKED_ELD_INFORMATION *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // r12d
  unsigned __int16 *v7; // rsi
  void *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  SIZE_T v15; // rax
  unsigned __int16 *v16; // rax
  __int64 v17; // rcx
  int MonitorCCDMonitorID; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned int Length; // r14d
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG HashValue; // [rsp+70h] [rbp+40h] BYREF
  __int16 v35; // [rsp+78h] [rbp+48h]
  void *v36; // [rsp+80h] [rbp+50h] BYREF

  v36 = 0LL;
  v6 = 130;
  v7 = 0LL;
  if ( !a2 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (int)DXGMONITOR::_GetHWMonitorBaseEDIDBlock(this, &v36, a3, a4) >= 0 )
  {
    v8 = v36;
    v9 = EDIDV1_FillProductIdManufacturerName(v36);
    v14 = v9;
    if ( v9 >= 0 )
    {
      *((_WORD *)a2 + 4) = HashValue;
      *((_WORD *)a2 + 5) = v35;
      goto LABEL_8;
    }
    v28 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v28 + 24) = v8;
    *(_QWORD *)(v28 + 32) = v14;
    WdLogEvent5_WdWarning(v28);
    MonitorLogBadEDID(v8, (unsigned int)v14);
  }
  *((_DWORD *)a2 + 2) = 0;
  while ( 1 )
  {
LABEL_8:
    if ( v7 )
      operator delete(v7);
    v6 *= 2;
    v15 = 2LL * v6;
    if ( !is_mul_ok(v6, 2uLL) )
      v15 = -1LL;
    v16 = (unsigned __int16 *)operator new(v15, 0x4D677844u, PagedPool);
    v7 = v16;
    if ( !v16 )
      break;
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID(this, 0, v6, v16);
    v20 = MonitorCCDMonitorID;
    if ( MonitorCCDMonitorID != -2147483643 && MonitorCCDMonitorID != -1073741789 )
    {
      if ( MonitorCCDMonitorID < 0 )
      {
        v29 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v29 + 24) = this;
        *(_QWORD *)(v29 + 32) = v20;
        WdLogEvent5_WdError(v29);
      }
      else
      {
        HashValue = 0;
        RtlInitUnicodeString(&DestinationString, v7);
        Length = DestinationString.Length;
        DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
        LODWORD(v20) = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        if ( (int)v20 < 0 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v30);
        }
        *(_QWORD *)a2 = HashValue;
        if ( Length > 2 )
        {
          DestinationString.MaximumLength -= DestinationString.Length;
          v23 = (unsigned __int64)DestinationString.Length >> 1;
          DestinationString.Length = Length - DestinationString.Length;
          DestinationString.Buffer = &v7[v23];
          LODWORD(v20) = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
          if ( (int)v20 < 0 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v24);
            WdLogEvent5_WdAssertion(v31);
          }
          *(_QWORD *)a2 |= (unsigned __int64)HashValue << 32;
        }
      }
LABEL_22:
      operator delete(v7);
      return (unsigned int)v20;
    }
    LODWORD(v20) = -1073741789;
    if ( v6 >= 0x410 )
      goto LABEL_22;
  }
  v32 = WdLogNewEntry5_WdLowResource(v17);
  WdLogEvent5_WdLowResource(v32);
  return 3221225495LL;
}
