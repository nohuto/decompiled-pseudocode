/*
 * XREFs of PiCMGetRelatedDeviceInstance @ 0x1404F1C44
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x140099968 (RtlStringCbCopyExW.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14043AC34 (PiCMReturnBufferResultData.c)
 *     _CmValidateDeviceName @ 0x14043BC80 (_CmValidateDeviceName.c)
 *     PiCMReleaseObjectInputData @ 0x140443254 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140443494 (PiCMCaptureObjectInputData.c)
 *     _CmIsRootDevice @ 0x1404B1458 (_CmIsRootDevice.c)
 *     _CmGetDeviceParent @ 0x1404F1E6C (_CmGetDeviceParent.c)
 *     PiGetRelatedDevice @ 0x1404F2758 (PiGetRelatedDevice.c)
 */

__int64 __fastcall PiCMGetRelatedDeviceInstance(
        ULONG64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v6; // edi
  _DWORD *v7; // r12
  wchar_t *PoolWithTag; // rsi
  int v9; // r13d
  wchar_t *v10; // r15
  __int64 v11; // rcx
  signed int inited; // ebx
  const wchar_t *v13; // r14
  unsigned int v14; // edi
  unsigned int v15; // r12d
  signed int DeviceParent; // eax
  signed int v17; // eax
  wchar_t *v19; // rax
  unsigned int v20; // [rsp+58h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  char v22[4]; // [rsp+70h] [rbp-11h] BYREF
  int v23; // [rsp+74h] [rbp-Dh]
  int v24; // [rsp+78h] [rbp-9h]
  PCWSTR SourceString; // [rsp+80h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+Bh]
  int v27; // [rsp+90h] [rbp+Fh]

  v6 = a4;
  v7 = a3;
  PoolWithTag = 0LL;
  v9 = 0;
  *a6 = 0;
  v10 = 0LL;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, v22);
  if ( inited < 0 )
    goto LABEL_23;
  v13 = SourceString;
  if ( SourceString && !v23 && v24 == 1 )
  {
    if ( v7 && v6 >= 0x14 )
    {
      v14 = v6 - 20;
      v15 = 2;
      if ( v14 < 2 )
        v14 = 0;
      if ( v14 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14, 0x34706E50u);
        if ( !PoolWithTag )
          inited = -1073741670;
      }
      if ( inited < 0 )
        goto LABEL_28;
      inited = CmValidateDeviceName(v11, v13);
      if ( inited < 0 )
        goto LABEL_28;
      switch ( v26 )
      {
        case 1:
          v20 = v14 >> 1;
          DeviceParent = CmGetDeviceParent(*(_QWORD *)&PiPnpRtlCtx, v13, PoolWithTag, &v20);
          v9 = v20;
          inited = DeviceParent;
LABEL_16:
          v6 = a4;
          v7 = a3;
          goto LABEL_17;
        case 2:
LABEL_25:
          inited = RtlInitUnicodeStringEx(&DestinationString, v13);
          if ( inited < 0 )
            goto LABEL_28;
          v20 = 400;
          v19 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
          v10 = v19;
          if ( !v19 )
          {
            inited = -1073741670;
            goto LABEL_28;
          }
          inited = PiGetRelatedDevice(&DestinationString, v19, &v20, v15);
          if ( inited < 0 )
          {
LABEL_28:
            v17 = PiCMReturnBufferResultData(inited, 2 * v9, 0, 0LL, 0, v27, a3, a4, a6);
            goto LABEL_19;
          }
          inited = RtlStringCbCopyExW(PoolWithTag, v14, v10, 0LL, 0LL, 0x800u);
          if ( inited == -2147483643 )
            inited = -1073741789;
          v9 = (v20 >> 1) + 1;
          goto LABEL_16;
        case 3:
          if ( CmIsRootDevice(v13) )
          {
            inited = -1073741810;
            goto LABEL_28;
          }
          v15 = 3;
          goto LABEL_25;
      }
    }
    inited = -1073741811;
    goto LABEL_28;
  }
  inited = -1073741811;
LABEL_17:
  if ( inited < 0 )
    goto LABEL_28;
  v17 = PiCMReturnBufferResultData(inited, 2 * v9, 0, PoolWithTag, 2 * v9, v27, v7, v6, a6);
LABEL_19:
  inited = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_23:
  PiCMReleaseObjectInputData((__int64)v22);
  return (unsigned int)inited;
}
