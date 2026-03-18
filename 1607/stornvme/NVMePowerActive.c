/*
 * XREFs of NVMePowerActive @ 0x1C0002AA8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMePerfStateTransition @ 0x1C0002B60 (NVMePerfStateTransition.c)
 */

__int64 __fastcall NVMePowerActive(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rbx

  v3 = "ACTIVE";
  if ( !*(_BYTE *)(a2 + 20) )
    v3 = "IDLE";
  StorPortDebugPrint(3LL, "StorNVMe - POWER: %s\n", v3);
  *(_DWORD *)(a1 + 1120) ^= (*(_DWORD *)(a1 + 1120) ^ (4 * *(unsigned __int8 *)(a2 + 20))) & 4;
  result = *(unsigned int *)(a1 + 1120);
  if ( *(_BYTE *)(a2 + 20) )
  {
    if ( (result & 0x20) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 1152);
      *(_DWORD *)(a1 + 1120) = result & 0xFFFFFFDF;
      StorPortExtendedFunction(33LL, a1, v6);
    }
    StorPortExtendedFunction(51LL, a1, 0LL);
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1160), 0) )
    {
      return StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State transition already in progress!\n");
    }
    else
    {
      result = NVMePerfStateTransition(a1);
      if ( !(_BYTE)result )
        *(_DWORD *)(a1 + 1160) &= ~1u;
    }
  }
  else if ( *(_BYTE *)(a1 + 1129) > 1u )
  {
    if ( *(_DWORD *)(a1 + 1132) == 1 )
    {
      v7 = *(unsigned int *)(a1 + 68);
    }
    else
    {
      result = *(unsigned int *)(a1 + 64);
      v7 = (unsigned int)result;
      if ( (_DWORD)result == -1 )
        v7 = *(unsigned int *)(a1 + 1144);
    }
    if ( v7 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v7);
      *(_DWORD *)(a1 + 1120) |= 0x20u;
      return StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1152));
    }
  }
  return result;
}
