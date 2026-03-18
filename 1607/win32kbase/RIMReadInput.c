/*
 * XREFs of RIMReadInput @ 0x1C00117E0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0010834 (rimConvertUserToKernelEventHandle.c)
 *     rimCompleteReads @ 0x1C00108C8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0010984 (rimIssueReads.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0010E6C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0010E90 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0010F40 (rimHandleAnyPnpRemovePendingDevices.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMReadInput(void *a1, __int64 a2, int a3, void *a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r15
  int v12; // edx
  int v13; // edi
  _QWORD *v14; // rbx
  int v15; // edx
  int v16; // edx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v19[32]; // [rsp+38h] [rbp-20h] BYREF

  v10 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    80,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v13 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v13 >= 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v19, 1);
    v14 = Object;
    RIMLockExclusive((char *)Object + 96);
    if ( *((_BYTE *)v14 + 73) || *((_BYTE *)v14 + 74) )
    {
      v13 = -1073741637;
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        3,
        82,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      rimHandleAnyPnpRemovePendingDevices((__int64)v14);
      v13 = rimConvertUserToKernelEventHandle(a4, &Object);
      if ( v13 >= 0 )
      {
        RIMLockExclusive(v14 + 87);
        if ( v14[95] )
          rimIssueReads((__int64)v14);
        if ( *((_BYTE *)v14 + 712) )
        {
          if ( !v14[95] )
          {
            v13 = -1073740682;
            LOBYTE(v16) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v16,
              3,
              81,
              (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
          }
        }
        else
        {
          *((_BYTE *)v14 + 712) = 1;
          v14[96] = Object;
          v14[99] = a6;
          v14[98] = a7;
          v14[100] = a8;
          v14[101] = v10;
          *((_DWORD *)v14 + 204) = a3;
          *((_BYTE *)v14 + 776) = a5;
          rimIssueReads((__int64)v14);
          v13 = rimCompleteReads((__int64)v14);
        }
        RIMUnlockExclusive(v14 + 87);
      }
    }
    RIMUnlockExclusive(v14 + 12);
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v19);
    ObfDereferenceObject(v14);
  }
  LOBYTE(v12) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v12,
    4,
    83,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v13);
  return (unsigned int)v13;
}
