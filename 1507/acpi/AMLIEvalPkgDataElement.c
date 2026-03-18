/*
 * XREFs of AMLIEvalPkgDataElement @ 0x1C001634C
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C00163F8 (LinkNodeCrackPrt.c)
 *     ACPIFanFSTCallback @ 0x1C003B100 (ACPIFanFSTCallback.c)
 *     ACPIThermalBuildConstraints @ 0x1C0066214 (ACPIThermalBuildConstraints.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0069EBC (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall AMLIEvalPkgDataElement(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v5; // rbx
  _DWORD *v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int ObjectTypeName; // eax

  dword_1C005A218 = 0;
  v5 = a2;
  byte_1C005A21C = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v10, v9, v11, v12);
  }
  memset(a3, 0, 0x28uLL);
  if ( (gDebugger & 8) != 0 )
    PrintDebugMessage(49, (unsigned int)KeGetCurrentThread(), a1, v5, 0LL);
  if ( *(_WORD *)(a1 + 2) == 4 )
  {
    v6 = *(_DWORD **)(a1 + 32);
    if ( (unsigned int)v5 >= *v6 )
    {
      return (unsigned int)-1072431100;
    }
    else
    {
      v7 = DupObjData(gpheapGlobal, (__int64)a3, (__int64)&v6[8 * v5 + 2 + 2 * v5]);
      if ( v7 == 32772 )
        return 259;
    }
  }
  else
  {
    v7 = -1072431095;
    LogError(3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
    PrintDebugMessage(50, ObjectTypeName, 0, 0, 0LL);
  }
  return v7;
}
