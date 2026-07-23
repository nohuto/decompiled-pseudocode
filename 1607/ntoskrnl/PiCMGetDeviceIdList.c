/*
 * XREFs of PiCMGetDeviceIdList @ 0x1404C0670
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     Template_q @ 0x1401D0B78 (Template_q.c)
 *     Template_zzt @ 0x1401D0C88 (Template_zzt.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1404C08A4 (_CmGetMatchingFilteredDeviceList.c)
 *     PiCMConvertDeviceListFilters @ 0x1404C09A0 (PiCMConvertDeviceListFilters.c)
 *     PiCMCaptureDeviceListInputData @ 0x1404C0A40 (PiCMCaptureDeviceListInputData.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRelationsList @ 0x1406DB9B8 (_CmGetDeviceRelationsList.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  _WORD *PoolWithTag; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // r14d
  unsigned int v15; // edi
  int DeviceRelationsList; // ebx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  const wchar_t *v21; // rcx
  int v22; // [rsp+58h] [rbp-9h] BYREF
  int v23; // [rsp+5Ch] [rbp-5h] BYREF
  _BYTE v24[4]; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v25; // [rsp+64h] [rbp+3h]
  wchar_t *v26; // [rsp+68h] [rbp+7h]
  int v27; // [rsp+74h] [rbp+13h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+17h] BYREF

  v6 = a6;
  v22 = 0;
  v23 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  v12 = PiCMCaptureDeviceListInputData(a1, a2, a5, v24);
  if ( v12 < 0 )
    goto LABEL_22;
  v14 = v25;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
  {
    if ( (_WORD)v25 )
    {
      switch ( (unsigned __int16)v25 )
      {
        case 1u:
          v21 = L"Enum";
          break;
        case 2u:
          v21 = L"Service";
          break;
        case 4u:
          v21 = L"EjectRelations";
          break;
        case 8u:
          v21 = L"RemovalRelations";
          break;
        case 0x10u:
          v21 = L"PowerRelations";
          break;
        case 0x20u:
          v21 = L"BusRelations";
          break;
        case 0x40u:
          v21 = L"TransportRelations";
          break;
        case 0x80u:
          v21 = L"Class";
          break;
        default:
          v21 = L"Unknown";
          break;
      }
    }
    else
    {
      v21 = L"None";
    }
    Template_zzt((__int64)v21, v10, v13, v26, v21, (v25 & 0x10000) != 0);
  }
  if ( !a3 || a4 < 0x14 )
  {
    DeviceRelationsList = -1073741811;
LABEL_18:
    if ( DeviceRelationsList >= 0 )
    {
      v19 = PiCMReturnBufferResultData(
              (unsigned int)DeviceRelationsList,
              (unsigned int)(2 * v22),
              0LL,
              PoolWithTag,
              2 * v22,
              v27,
              a3,
              a4,
              v6);
      goto LABEL_20;
    }
    goto LABEL_28;
  }
  v15 = a4 - 20;
  if ( a4 - 20 < 2 )
    v15 = 0;
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
    if ( !PoolWithTag )
    {
      DeviceRelationsList = -1073741670;
      goto LABEL_28;
    }
    v22 = v15 >> 1;
  }
  else
  {
    PoolWithTag = 0LL;
    v22 = 0;
  }
  DeviceRelationsList = PiCMConvertDeviceListFilters(v14, &v23);
  if ( DeviceRelationsList >= 0 )
  {
    v17 = (unsigned int)(unsigned __int16)v14 - 4;
    if ( (unsigned int)v17 <= 0x3C && (v18 = 0x1000000010001011LL, _bittest64(&v18, v17)) )
    {
      if ( !v26 )
      {
        DeviceRelationsList = -1073741811;
        goto LABEL_28;
      }
      DeviceRelationsList = CmGetDeviceRelationsList(
                              PiPnpRtlCtx,
                              (_DWORD)v26,
                              v23 & 0xFFFFFEFF,
                              (_DWORD)PoolWithTag,
                              v22,
                              (__int64)&v22);
      if ( DeviceRelationsList < 0 )
        goto LABEL_28;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                              PiPnpRtlCtx,
                              (_DWORD)v26,
                              v23,
                              (unsigned int)&PiCMMandatoryFilterCallback,
                              (__int64)&SubjectContext,
                              (__int64)PoolWithTag,
                              v22,
                              (__int64)&v22);
      SeReleaseSubjectContext(&SubjectContext);
      if ( DeviceRelationsList < 0 )
      {
LABEL_17:
        v6 = a6;
        goto LABEL_18;
      }
    }
    if ( !v22 )
    {
      v22 = 1;
      if ( v15 < 2 )
      {
        DeviceRelationsList = -1073741789;
        goto LABEL_28;
      }
      *PoolWithTag = 0;
    }
    goto LABEL_17;
  }
LABEL_28:
  v19 = PiCMReturnBufferResultData(
          (unsigned int)DeviceRelationsList,
          (unsigned int)(2 * v22),
          0LL,
          0LL,
          0,
          v27,
          a3,
          a4,
          a6);
LABEL_20:
  v12 = v19;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_22:
  if ( v26 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v26);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_q(v11, &KMPnPEvt_CfgMgr_DeviceList_Stop, v13, v12);
  return (unsigned int)v12;
}
