/*
 * XREFs of ACPIBuildProcessDevicePhaseHid @ 0x1C0020C20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHid(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r14
  unsigned int v3; // edi
  unsigned int v4; // ebp
  const char *v6; // r15
  char **v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  const char *v12; // rax
  const char *v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v6 = *(const char **)(v1 + 560);
  if ( AcpiInternalDeviceFlagTable )
  {
    v7 = &AcpiInternalDeviceFlagTable;
    while ( !strstr(v6, *v7) )
    {
      v7 = &(&AcpiInternalDeviceFlagTable)[4 * ++v4];
      if ( !*v7 )
        goto LABEL_7;
    }
    v8 = 4LL * v4;
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v8 + 1]);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 912), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v8 + 2]);
    v2 = 1;
  }
LABEL_7:
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  v9 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145652063);
  if ( !v9 || v2 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else
  {
    AMLIDereferenceHandleEx((volatile signed __int32 *)v9, v10);
    *(_DWORD *)(a1 + 32) = 9;
    v3 = ACPIGet((__int64 *)v1, 1145652063, 671613191, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  v11 = *(_QWORD *)(v1 + 8);
  v12 = (const char *)qword_1C002C340;
  v13 = (const char *)qword_1C002C340;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = *(const char **)(v1 + 560);
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x25u,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v3,
    v1,
    v12,
    v13);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return v3;
}
