/*
 * XREFs of ACPIIsPowerNodeMissingDependencies @ 0x1C0038C2C
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001C844 (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C003C92C (ACPIInternalGetDeviceFromNSOBJ.c)
 */

char __fastcall ACPIIsPowerNodeMissingDependencies(__int64 a1)
{
  __int64 v2; // rsi
  char v3; // bl
  int v4; // ebp
  unsigned int v5; // r15d
  __int64 i; // r14
  __int64 v7; // r8
  int v8; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v9; // [rsp+68h] [rbp+10h]

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
    for ( i = 0LL; (int)AMLIGetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(v2 + 32) + i + 40)) >= 0; i += 40LL )
    {
      ACPIInternalGetDeviceFromNSOBJ(v9, 0LL, v7, &v8);
      AMLIDereferenceHandleEx(v9);
      if ( v8 != 3 )
        return 1;
      if ( ++v4 >= v5 )
        return v3;
    }
  }
  return v3;
}
