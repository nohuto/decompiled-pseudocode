/*
 * XREFs of ?DrvDriverFailure@@YAJXZ @ 0x1C00AB514
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C007C5BC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     CollectDriverFailureData @ 0x1C00BAC60 (CollectDriverFailureData.c)
 */

__int64 DrvDriverFailure(void)
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  wchar_t *i; // rax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-B8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v14[58]; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  v0 = 0;
  memset(v14, 0, sizeof(v14));
  LOBYTE(v14[0]) = gbFullScreen;
  v14[1] = gpDispInfo;
  v14[2] = __PAIR64__(gbGDIOn, gbMDEVDisabled);
  LODWORD(v14[3]) = gnDCECount;
  v14[4] = gpvwplHungRedraw;
  v14[5] = ghrgnInvalidSum;
  v14[6] = ghrgnVisNew;
  v14[7] = ghrgnSWP1;
  v14[8] = ghrgnValid;
  v14[9] = ghrgnValidSum;
  v14[10] = ghrgnInvalid;
  v14[11] = ghrgnInv0;
  v14[12] = ghrgnInv1;
  v14[13] = ghrgnInv2;
  v14[14] = ghdcMem;
  v14[15] = ghdcMem2;
  v14[16] = ghrgnGDC;
  v14[17] = ghrgnSCR;
  v14[18] = ghrgnSPB1;
  v14[19] = ghrgnSPB2;
  v14[20] = ghrgnSW;
  v14[21] = ghrgnScrl1;
  v14[22] = ghrgnScrl2;
  v14[23] = ghrgnScrlVis;
  v14[24] = ghrgnScrlSrc;
  v14[25] = ghrgnScrlDst;
  v14[26] = ghrgnScrlValid;
  v14[27] = gpDeviceInfoList;
  v14[28] = gpresDeviceInfoList;
  v14[29] = gpWin32kDriverObject;
  LODWORD(v14[30]) = gnRetryReadInput;
  if ( gbExitInProgress )
  {
    v0 = 1;
  }
  else
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) == -1073741431 )
    {
      v0 = 1;
      v5 = WdLogNewEntry5_WdError(v2, v1, v3, v4);
      *(_QWORD *)(v5 + 24) = -1073741431LL;
      WdLogEvent5_WdError(v5);
    }
    else if ( gpLastFailedPhysDisp )
    {
      for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        if ( (wchar_t *)gpLastFailedPhysDisp == i )
        {
          v0 = 2;
          break;
        }
      }
    }
  }
  if ( gulDriverFailureReason )
    v0 = gulDriverFailureReason;
  if ( v0 != 1 )
  {
    BugCheckParameter1 = -1LL;
    BugCheckParameter2 = -1LL;
    BugCheckParameter3 = -1LL;
    if ( gpDispInfo )
    {
      *(_OWORD *)&v14[31] = *(_OWORD *)gpDispInfo;
      *(_OWORD *)&v14[33] = *(_OWORD *)(gpDispInfo + 16);
      *(_OWORD *)&v14[35] = *(_OWORD *)(gpDispInfo + 32);
      *(_OWORD *)&v14[37] = *(_OWORD *)(gpDispInfo + 48);
      *(_OWORD *)&v14[39] = *(_OWORD *)(gpDispInfo + 64);
      *(_OWORD *)&v14[41] = *(_OWORD *)(gpDispInfo + 80);
      *(_OWORD *)&v14[43] = *(_OWORD *)(gpDispInfo + 96);
      *(_OWORD *)&v14[45] = *(_OWORD *)(gpDispInfo + 112);
      *(_OWORD *)&v14[47] = *(_OWORD *)(gpDispInfo + 128);
      *(_OWORD *)&v14[49] = *(_OWORD *)(gpDispInfo + 144);
      *(_OWORD *)&v14[51] = *(_OWORD *)(gpDispInfo + 160);
      *(_OWORD *)&v14[53] = *(_OWORD *)(gpDispInfo + 176);
      *(_OWORD *)&v14[55] = *(_OWORD *)(gpDispInfo + 192);
      v14[57] = *(_QWORD *)(gpDispInfo + 208);
    }
    CollectDriverFailureData(&BugCheckParameter1, v14);
    KeBugCheckEx(0xB4u, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, v0);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 3221225865LL;
}
