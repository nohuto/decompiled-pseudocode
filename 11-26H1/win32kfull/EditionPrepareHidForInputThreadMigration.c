/*
 * XREFs of EditionPrepareHidForInputThreadMigration @ 0x140249400
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x140249234 (MasterInputThreadPrepareForRitTakeover.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x140249308 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     EditionDeactivateMitInput @ 0x1402A9FC0 (EditionDeactivateMitInput.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x14023F42C (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 */

__int64 EditionPrepareHidForInputThreadMigration()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    ResetPointerDevices(0LL, v0);
    *(_QWORD *)(W32GetUserSessionState(v2, v1) + 18872) = 0LL;
    UserSessionState = W32GetUserSessionState(v4, v3);
    CTouchProcessor::CleanupManipulationThreadData(*(CTouchProcessor **)(UserSessionState + 3256));
    v8 = W32GetUserSessionState(v7, v6);
    CTouchProcessor::GenerateDeparturesForActivePointers(*(CTouchProcessor **)(v8 + 3256), 0LL);
  }
  else
  {
    ResetPointerDevices(0LL, v0);
    if ( *(_DWORD *)(W32GetUserSessionState(v12, v11) + 18792) && *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18872) )
    {
      v15 = W32GetUserSessionState(v14, v13);
      CTouchProcessor::CleanupManipulationThreadData(*(CTouchProcessor **)(v15 + 3256));
      *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18872) = 0LL;
    }
    v18 = W32GetUserSessionState(v14, v13);
    CTouchProcessor::CancelActivePointers(*(CTouchProcessor **)(v18 + 3256));
  }
  *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19304) = 1;
  return CleanupSensorExplicitly(2LL);
}
