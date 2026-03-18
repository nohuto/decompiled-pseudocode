/*
 * XREFs of DitTakeOver @ 0x1C0150074
 * Callers:
 *     WaitForRitDisEngagement @ 0x1C00F3EF4 (WaitForRitDisEngagement.c)
 * Callees:
 *     DitPrepRitTakeOver @ 0x1C0131AC0 (DitPrepRitTakeOver.c)
 *     InitDitRimIocpSupport @ 0x1C0150128 (InitDitRimIocpSupport.c)
 *     AddAndInitRimClient @ 0x1C01503F4 (AddAndInitRimClient.c)
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DDDDC (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     SetupIoCompletion @ 0x1C01E02FC (SetupIoCompletion.c)
 *     StartDeviceRead @ 0x1C01E0354 (StartDeviceRead.c)
 */

__int64 __fastcall DitTakeOver(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int64 i; // rbx

  v1 = 1;
  if ( !LODWORD(aDeviceTemplate[154]) )
  {
    EnterDeviceInfoListCrit_(a1);
    v4 = (__int64 *)gpDeviceInfoList;
    v5 = gpDeviceInfoList;
    if ( gpDeviceInfoList )
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(v5 + 96);
        if ( (v6 & 2) != 0 )
        {
          *(_DWORD *)(v5 + 96) = v6 | 0x100;
          if ( !(unsigned int)OpenDevice((struct DEVICEINFO *)v5) || !(unsigned int)SetupIoCompletion(v5) )
          {
            v1 = 0;
            DitPrepRitTakeOver();
            goto LABEL_22;
          }
          *(_DWORD *)(v5 + 96) = *(_DWORD *)(v5 + 96) & 0xFFFFFEF9 | 4;
        }
        v5 = *(_QWORD *)(v5 + 56);
        if ( !v5 )
        {
          v4 = (__int64 *)gpDeviceInfoList;
          break;
        }
      }
    }
    for ( i = *v4; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 96) & 4) != 0 )
        StartDeviceRead((PVOID)i);
    }
LABEL_22:
    LeaveDeviceInfoListCrit_(v3);
    goto LABEL_6;
  }
  if ( (_DWORD)a1 )
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
