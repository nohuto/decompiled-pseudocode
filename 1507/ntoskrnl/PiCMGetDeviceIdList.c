/*
 * XREFs of PiCMGetDeviceIdList @ 0x140550A70
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     Template_q @ 0x1401FD3F0 (Template_q.c)
 *     Template_zzt @ 0x1401FD500 (Template_zzt.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x140441124 (PiCMReturnBufferResultData.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140550CA8 (_CmGetMatchingFilteredDeviceList.c)
 *     PiCMConvertDeviceListFilters @ 0x140550DA4 (PiCMConvertDeviceListFilters.c)
 *     PiCMCaptureDeviceListInputData @ 0x140550E44 (PiCMCaptureDeviceListInputData.c)
 *     _CmGetDeviceRelationsList @ 0x14071648C (_CmGetDeviceRelationsList.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  _WORD *PoolWithTag; // rsi
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  unsigned int v13; // r14d
  unsigned int v14; // edi
  signed int DeviceRelationsList; // ebx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  const wchar_t *v20; // rdx
  int v21; // [rsp+58h] [rbp-9h] BYREF
  int v22; // [rsp+5Ch] [rbp-5h] BYREF
  _BYTE v23[4]; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v24; // [rsp+64h] [rbp+3h]
  PVOID P; // [rsp+68h] [rbp+7h]
  int v26; // [rsp+74h] [rbp+13h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+17h] BYREF

  v6 = a6;
  v21 = 0;
  v22 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  v11 = PiCMCaptureDeviceListInputData(a1, a2, a5, v23);
  if ( v11 < 0 )
    goto LABEL_22;
  v13 = v24;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
  {
    if ( (_WORD)v24 )
    {
      switch ( (unsigned __int16)v24 )
      {
        case 1u:
          v20 = L"Enum";
          break;
        case 2u:
          v20 = L"Service";
          break;
        case 4u:
          v20 = L"EjectRelations";
          break;
        case 8u:
          v20 = L"RemovalRelations";
          break;
        case 0x10u:
          v20 = L"PowerRelations";
          break;
        case 0x20u:
          v20 = L"BusRelations";
          break;
        case 0x40u:
          v20 = L"TransportRelations";
          break;
        case 0x80u:
          v20 = L"Class";
          break;
        default:
          v20 = L"Unknown";
          break;
      }
    }
    else
    {
      v20 = L"None";
    }
    Template_zzt((v24 & 0x10000) != 0, (__int64)v20, v12, (const wchar_t *)P, v20, (v24 & 0x10000) != 0);
  }
  if ( !a3 || a4 < 0x14 )
  {
    DeviceRelationsList = -1073741811;
LABEL_18:
    if ( DeviceRelationsList >= 0 )
    {
      v18 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v21, 0, PoolWithTag, 2 * v21, v26, a3, a4, v6);
      goto LABEL_20;
    }
    goto LABEL_29;
  }
  v14 = a4 - 20;
  if ( a4 - 20 < 2 )
    v14 = 0;
  if ( v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x34706E50u);
    if ( !PoolWithTag )
    {
      DeviceRelationsList = -1073741670;
      goto LABEL_29;
    }
    v21 = v14 >> 1;
  }
  else
  {
    PoolWithTag = 0LL;
    v21 = 0;
  }
  DeviceRelationsList = PiCMConvertDeviceListFilters(v13, &v22);
  if ( DeviceRelationsList >= 0 )
  {
    v16 = (unsigned int)(unsigned __int16)v13 - 4;
    if ( (unsigned int)v16 <= 0x3C && (v17 = 0x1000000010001011LL, _bittest64(&v17, v16)) )
    {
      if ( !P )
      {
        DeviceRelationsList = -1073741811;
        goto LABEL_29;
      }
      DeviceRelationsList = CmGetDeviceRelationsList(
                              PiPnpRtlCtx,
                              (_DWORD)P,
                              v22 & 0xFFFFFEFF,
                              (_DWORD)PoolWithTag,
                              v21,
                              (__int64)&v21);
      if ( DeviceRelationsList < 0 )
        goto LABEL_29;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                              PiPnpRtlCtx,
                              (_DWORD)P,
                              v22,
                              (unsigned int)&PiCMMandatoryFilterCallback,
                              (__int64)&SubjectContext,
                              (__int64)PoolWithTag,
                              v21,
                              (__int64)&v21);
      SeReleaseSubjectContext(&SubjectContext);
      if ( DeviceRelationsList < 0 )
      {
LABEL_17:
        v6 = a6;
        goto LABEL_18;
      }
    }
    if ( !v21 )
    {
      v21 = 1;
      if ( v14 < 2 )
      {
        DeviceRelationsList = -1073741789;
        goto LABEL_29;
      }
      *PoolWithTag = 0;
    }
    goto LABEL_17;
  }
LABEL_29:
  v18 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v21, 0, 0LL, 0, v26, a3, a4, a6);
LABEL_20:
  v11 = v18;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_22:
  if ( P && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(P, 0);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
    Template_q(v10, &KMPnPEvt_CfgMgr_DeviceList_Stop, v12, v11);
  return (unsigned int)v11;
}
