/*
 * XREFs of DitTakeOver @ 0x1C00A0698
 * Callers:
 *     WaitForRitDisEngagement @ 0x1C009FBB8 (WaitForRitDisEngagement.c)
 * Callees:
 *     DitPrepRitTakeOver @ 0x1C009EBF4 (DitPrepRitTakeOver.c)
 *     InitDitRimIocpSupport @ 0x1C00A074C (InitDitRimIocpSupport.c)
 *     AddAndInitRimClient @ 0x1C00A0A18 (AddAndInitRimClient.c)
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE3E0 (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     SetupIoCompletion @ 0x1C01E0910 (SetupIoCompletion.c)
 *     StartDeviceRead @ 0x1C01E0968 (StartDeviceRead.c)
 */

__int64 __fastcall DitTakeOver(int a1)
{
  unsigned int v1; // edi
  __int64 *v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  __int64 i; // rbx

  v1 = 1;
  if ( !LODWORD(aDeviceTemplate[154]) )
  {
    EnterDeviceInfoListCrit_();
    v3 = (__int64 *)gpDeviceInfoList;
    v4 = gpDeviceInfoList;
    if ( gpDeviceInfoList )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(v4 + 88);
        if ( (v5 & 2) != 0 )
        {
          *(_DWORD *)(v4 + 88) = v5 | 0x100;
          if ( !(unsigned int)OpenDevice((struct DEVICEINFO *)v4) || !(unsigned int)SetupIoCompletion(v4) )
          {
            v1 = 0;
            DitPrepRitTakeOver();
            goto LABEL_22;
          }
          *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 88) & 0xFFFFFEF9 | 4;
        }
        v4 = *(_QWORD *)(v4 + 56);
        if ( !v4 )
        {
          v3 = (__int64 *)gpDeviceInfoList;
          break;
        }
      }
    }
    for ( i = *v3; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 88) & 4) != 0 )
        StartDeviceRead((PVOID)i);
    }
LABEL_22:
    LeaveDeviceInfoListCrit_();
    goto LABEL_6;
  }
  if ( a1 )
    return v1;
  if ( (int)AddAndInitRimClient() >= 0 && (int)InitDitRimIocpSupport() >= 0 )
  {
    HIDWORD(aDeviceTemplate[198]) = 64;
    RIMReadInput(
      aDeviceTemplate[155],
      &aDeviceTemplate[204],
      HIDWORD(aDeviceTemplate[198]),
      aDeviceTemplate[162],
      0,
      &aDeviceTemplate[201],
      &aDeviceTemplate[198],
      &aDeviceTemplate[199]);
LABEL_6:
    EtwTraceDitEngaged();
    return v1;
  }
  return 0LL;
}
