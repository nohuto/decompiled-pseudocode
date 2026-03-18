/*
 * XREFs of RIMReadInput @ 0x1C0006150
 * Callers:
 *     <none>
 * Callees:
 *     rimConvertUserToKernelEventHandle @ 0x1C0006310 (rimConvertUserToKernelEventHandle.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00063A4 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimCompleteReads @ 0x1C000F0AC (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C000F190 (rimIssueReads.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C000FE08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00CE68C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 */

__int64 __fastcall RIMReadInput(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // r15
  __int64 v12; // r8
  int v13; // edx
  int v14; // edi
  _QWORD *v15; // rbx
  int v16; // edx
  int v17; // edx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v20[32]; // [rsp+38h] [rbp-20h] BYREF

  v10 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    79,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  LOBYTE(v12) = 1;
  v14 = RawInputManagerObjectResolveHandle(a1, 3LL, v12, &Object);
  if ( v14 >= 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v20, 1, 0);
    v15 = Object;
    RIMLockExclusive((char *)Object + 96);
    if ( *((_BYTE *)v15 + 73) || *((_BYTE *)v15 + 74) )
    {
      v14 = -1073741637;
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        3,
        81,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      rimHandleAnyPnpRemovePendingDevices(v15);
      v14 = rimConvertUserToKernelEventHandle(a4, &Object);
      if ( v14 >= 0 )
      {
        RIMLockExclusive(v15 + 93);
        if ( v15[101] )
          rimIssueReads(v15);
        if ( *((_BYTE *)v15 + 760) )
        {
          if ( !v15[101] )
          {
            v14 = -1073740682;
            LOBYTE(v17) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              3,
              80,
              (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
          }
        }
        else
        {
          *((_BYTE *)v15 + 760) = 1;
          v15[102] = Object;
          v15[105] = a6;
          v15[104] = a7;
          v15[106] = a8;
          v15[107] = v10;
          *((_DWORD *)v15 + 216) = a3;
          *((_BYTE *)v15 + 824) = a5;
          rimIssueReads(v15);
          v14 = rimCompleteReads(v15);
        }
        RIMUnlockExclusive(v15 + 93);
      }
    }
    RIMUnlockExclusive(v15 + 12);
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v20);
    ObfDereferenceObject(v15);
  }
  LOBYTE(v13) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v13,
    4,
    82,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v14);
  return (unsigned int)v14;
}
