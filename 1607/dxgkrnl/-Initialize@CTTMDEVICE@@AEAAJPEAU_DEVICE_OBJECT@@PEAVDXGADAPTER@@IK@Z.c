/*
 * XREFs of ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C00FAE30
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C00FAA64 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1C00079A0 (RtlStringCbLengthW.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     MonitorGetCCDMonitorID @ 0x1C00B62B8 (MonitorGetCCDMonitorID.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00BA4C0 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00BA610 (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00BA98C (MonitorGetMonitorDeviceInterfaceName.c)
 */

__int64 __fastcall CTTMDEVICE::Initialize(
        CTTMDEVICE *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rbp
  unsigned int v9; // eax
  bool v10; // zf
  __int64 CCDMonitorID; // rbx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  int MonitorHandle; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r9
  __int64 v19; // rcx
  size_t pcbLength; // [rsp+50h] [rbp+8h] BYREF

  v6 = a4;
  DXGADAPTER::IsCoreResourceSharedOwner(a3);
  v9 = a5;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 20) = v6;
  *((_DWORD *)this + 21) = v9;
  memset((char *)this + 88, 0, 0x208uLL);
  *((_DWORD *)this + 152) = 34078720;
  v10 = MONITOR_MGR::_UsingCCDNameForTTM == 0;
  *((_QWORD *)this + 77) = (char *)this + 88;
  if ( v10 )
    LODWORD(CCDMonitorID) = MonitorGetMonitorDeviceInterfaceName(
                              a3,
                              (unsigned int)v6,
                              0x104uLL,
                              (NTSTRSAFE_PWSTR)this + 44);
  else
    LODWORD(CCDMonitorID) = -1073741632;
  if ( (_DWORD)CCDMonitorID == -1073741632 )
  {
    MonitorHandle = MonitorGetMonitorHandle(a3, (unsigned int)v6, 0LL, this, &pcbLength);
    CCDMonitorID = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      goto LABEL_12;
    }
    CCDMonitorID = (int)MonitorGetCCDMonitorID((struct HDXGMONITOR__ *)pcbLength, 259, (unsigned __int16 *)this + 44);
    MonitorReleaseMonitorHandle(a3, (struct HDXGMONITOR__ *)pcbLength, this, v18);
    if ( (int)CCDMonitorID < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v17[6] = 0LL;
      goto LABEL_12;
    }
LABEL_5:
    v12 = RtlStringCbLengthW(*((STRSAFE_PCNZWCH *)this + 77), *((unsigned __int16 *)this + 305), &pcbLength);
    CCDMonitorID = v12;
    if ( v12 >= 0 )
    {
      *((_WORD *)this + 304) = pcbLength;
      return (unsigned int)CCDMonitorID;
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v17[6] = 1LL;
LABEL_12:
    v17[5] = CCDMonitorID;
    v17[4] = v6;
    v17[3] = a3;
    WdLogEvent5_WdError(v17);
    return (unsigned int)CCDMonitorID;
  }
  if ( (int)CCDMonitorID >= 0 )
    goto LABEL_5;
  return (unsigned int)CCDMonitorID;
}
