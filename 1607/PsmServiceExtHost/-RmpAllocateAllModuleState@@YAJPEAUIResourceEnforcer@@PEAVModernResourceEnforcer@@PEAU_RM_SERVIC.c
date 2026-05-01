/*
 * XREFs of ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x18001B108 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     RmpPolicyResizeScratchBuffers @ 0x1800053B0 (RmpPolicyResizeScratchBuffers.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18001B2FC (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAUIResourceEnforcer@@PEAUIM.c)
 *     ?RmpLookupDefaultSystemManagedAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001CE48 (-RmpLookupDefaultSystemManagedAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpLookupDefAppsAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001CF00 (-RmpLookupDefAppsAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RmpMemoryMonitorAllocateState @ 0x18001CF74 (RmpMemoryMonitorAllocateState.c)
 *     RmpCpuSetManagerCreateClientContext @ 0x18001D048 (RmpCpuSetManagerCreateClientContext.c)
 *     RmpEnforcerContextAllocateState @ 0x18001D108 (RmpEnforcerContextAllocateState.c)
 *     RmpCpuSetManagerAllocateState @ 0x18001D268 (RmpCpuSetManagerAllocateState.c)
 *     RmpActivityHostAllocateModuleState @ 0x18001DD50 (RmpActivityHostAllocateModuleState.c)
 */

__int64 __fastcall RmpAllocateAllModuleState(
        struct IResourceEnforcer *a1,
        struct ModernResourceEnforcer *a2,
        struct _RM_SERVICE_GLOBALS *a3)
{
  int ModuleState; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  int ClientContext; // r9d
  int State; // eax
  __int64 v12; // r8
  DWORD CurrentProcessId; // eax
  struct ExecutionModel::ResourceManager **v15; // [rsp+20h] [rbp-18h]
  DWORD cbSid; // [rsp+58h] [rbp+20h] BYREF

  ModuleState = RmpActivityHostAllocateModuleState(a3);
  v9 = 0;
  ClientContext = ModuleState;
  if ( ModuleState >= 0 )
  {
    State = RmpCpuSetManagerAllocateState(a3, v7, v8, (unsigned int)ModuleState);
    ClientContext = State;
    if ( State >= 0 )
    {
      ClientContext = RmpEnforcerContextAllocateState(a2, a3, v12, (unsigned int)State);
      if ( ClientContext >= 0 )
      {
        CurrentProcessId = GetCurrentProcessId();
        ClientContext = RmpCpuSetManagerCreateClientContext(
                          *((_QWORD *)a3 + 365) + 1944LL,
                          CurrentProcessId,
                          (char *)a3 + 2952);
        if ( ClientContext >= 0 )
          ClientContext = 0;
        if ( ClientContext >= 0 )
        {
          ClientContext = RmpPolicyResizeScratchBuffers((__int64)a3 + 1784, 4u, 0);
          if ( ClientContext >= 0 )
            ClientContext = 0;
          if ( ClientContext >= 0 )
          {
            ClientContext = RmpMemoryMonitorAllocateState(a3);
            if ( ClientContext >= 0 )
            {
              ClientContext = TpAllocTimer((char *)a3 + 1888, RmpTelemetryTimerCallback, a3, 0LL);
              if ( ClientContext >= 0 )
                ClientContext = 0;
              if ( ClientContext >= 0 )
              {
                if ( (*((_BYTE *)a3 + 3340) & 1) == 0
                  && ((int)RmpLookupDefAppsAccount(a3) >= 0 || (int)RmpLookupDefaultSystemManagedAccount(a3) >= 0) )
                {
                  *((_DWORD *)a3 + 835) |= 1u;
                }
                cbSid = 68;
                if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)a3 + 3204, &cbSid) )
                {
                  if ( (int)ExecutionModel::CreateResourceManager(
                              a3,
                              a1,
                              a2,
                              (struct _RM_SERVICE_GLOBALS *)((char *)a3 + 3344),
                              v15) < 0 )
                    return (unsigned int)-1073741823;
                  return v9;
                }
                else
                {
                  return (unsigned int)-1073741823;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)ClientContext;
}
