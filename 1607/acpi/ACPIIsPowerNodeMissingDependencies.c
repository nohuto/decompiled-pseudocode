/*
 * XREFs of ACPIIsPowerNodeMissingDependencies @ 0x1C004B088
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0027690 (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0045C24 (WPP_RECORDER_SF_sL.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0050014 (ACPIInternalGetDeviceFromNSOBJ.c)
 */

char __fastcall ACPIIsPowerNodeMissingDependencies(__int64 a1)
{
  __int64 v2; // rbp
  char v3; // bl
  int v4; // r14d
  unsigned int v5; // r15d
  __int64 i; // rsi
  __int64 v7; // r12
  int v8; // eax
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v13; // [rsp+78h] [rbp+10h]

  if ( (*(_DWORD *)(a1 + 16) & 0x1000LL) == 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  if ( !v2 )
    return 0;
  v4 = 0;
  v5 = **(_DWORD **)(v2 + 32);
  if ( v5 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v7 = *(_QWORD *)(v2 + 32);
      v8 = AMLIGetNameSpaceObject(*(_BYTE **)(v7 + i + 40));
      if ( v8 < 0 )
        break;
      ACPIInternalGetDeviceFromNSOBJ(v13, 0LL, v10, &v12);
      AMLIDereferenceHandleEx(v13, v11);
      if ( v12 != 3 )
        return 1;
      if ( ++v4 >= v5 )
        return v3;
    }
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      21,
      42,
      (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
      *(_QWORD *)(v7 + i + 40),
      v8);
  }
  return v3;
}
