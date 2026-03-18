/*
 * XREFs of RIMReadInput @ 0x1C00785F0
 * Callers:
 *     <none>
 * Callees:
 *     rimConvertUserToKernelEventHandle @ 0x1C0013988 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     rimCompleteReads @ 0x1C0075A68 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0075B20 (rimIssueReads.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0075FE4 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0075FF8 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00825E0 (rimHandleAnyPnpRemovePendingDevices.c)
 */

__int64 __fastcall RIMReadInput(void *a1, __int64 a2, int a3, void *a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v12; // edi
  _QWORD *v13; // rbx
  int v15; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-20h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x4Cu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v12 >= 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v17, 1);
    v13 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v13 + 73) || *((_BYTE *)v13 + 74) )
    {
      v12 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x4Eu,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      rimHandleAnyPnpRemovePendingDevices(v13);
      v12 = rimConvertUserToKernelEventHandle(a4, &Object);
      if ( v12 >= 0 )
      {
        RIMLockExclusive((__int64)(v13 + 89));
        if ( v13[95] )
          rimIssueReads((__int64)v13);
        if ( *((_BYTE *)v13 + 728) )
        {
          if ( !v13[95] )
          {
            v12 = -1073740682;
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x4Du,
              (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
          }
        }
        else
        {
          *((_BYTE *)v13 + 728) = 1;
          v13[96] = Object;
          v13[99] = a6;
          v13[98] = a7;
          v13[100] = a8;
          v13[101] = a2;
          *((_DWORD *)v13 + 204) = a3;
          *((_BYTE *)v13 + 776) = a5;
          rimIssueReads((__int64)v13);
          v12 = rimCompleteReads((__int64)v13);
        }
        RIMUnlockExclusive((__int64)(v13 + 89));
      }
    }
    RIMUnlockExclusive((__int64)(v13 + 12));
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v17);
    ObfDereferenceObject(v13);
  }
  v15 = v12;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x4Fu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v15);
  return (unsigned int)v12;
}
