/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x1C0029580
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C00207E0 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0009D04 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0045C24 (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v7; // r14d
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // eax
  int v12; // edx
  __int64 v13; // rdx
  int v14; // edx
  int v15; // r9d
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+48h] [rbp-30h]

  v3 = 0;
  v4 = 0;
  v16 = 0LL;
  P = 0LL;
  v7 = **(_DWORD **)(a3 + 32);
  if ( v7 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *(_QWORD *)(a3 + 32);
      v11 = AMLIGetNameSpaceObject(*(_BYTE **)(v9 + v10 + 40));
      v3 = v11;
      if ( v11 < 0 )
        break;
      v3 = ACPIAmliBuildObjectPathnameUnicode(0LL, (__int64)&v16);
      AMLIDereferenceHandleEx(0LL, v13);
      if ( v3 < 0 )
      {
        v15 = 18;
        goto LABEL_13;
      }
      v3 = IoReserveDependency(a1, &v16, 1LL);
      ExFreePoolWithTag(P, 0x53706341u);
      v16 = 0LL;
      P = 0LL;
      if ( v3 < 0 )
      {
        v15 = 19;
LABEL_13:
        WPP_RECORDER_SF_sL(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          21,
          v15,
          (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
          *(_QWORD *)(v9 + v10 + 40),
          v3);
        goto LABEL_2;
      }
      ++v4;
      v9 += 40LL;
      if ( v4 >= v7 )
        goto LABEL_2;
    }
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      21,
      17,
      (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
      *(_QWORD *)(v9 + v10 + 40),
      v11);
  }
LABEL_2:
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v3;
}
