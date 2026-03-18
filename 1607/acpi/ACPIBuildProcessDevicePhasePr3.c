/*
 * XREFs of ACPIBuildProcessDevicePhasePr3 @ 0x1C000F370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C00285EC (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0029D78 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D554 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePr3(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // ebp
  __int64 v6; // rax
  ULONG_PTR v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax
  int v10; // edx
  __int64 *v11; // r8
  __int64 v13; // rcx
  unsigned int v14; // eax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  v4 = 0;
  if ( *(_QWORD *)(v2 + 440) || *(_QWORD *)(v2 + 392) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_6;
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
LABEL_27:
    FreeDataBuffs(v3, 1LL);
    goto LABEL_6;
  }
  v6 = AMLIGetNamedChild(*(_QWORD *)(v2 + 712), 861098079LL);
  *(_QWORD *)(v2 + 440) = v6;
  if ( !v6 )
    *(_QWORD *)(v2 + 440) = *(_QWORD *)(v2 + 432);
  a2 = *(_QWORD *)(a1 + 56);
  if ( a2 )
  {
    if ( *(_WORD *)(v3 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_6;
    }
    v14 = ACPIBuildDevicePowerNodes(v2, a2);
    dword_1C0074698 = 0;
    v4 = v14;
    byte_1C007469C = 0;
    goto LABEL_27;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 28) = 5;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
  if ( (*(_DWORD *)(v2 + 912) & 0x400040) == 0 )
  {
    LODWORD(a2) = 0;
    v7 = v2 + 360;
    while ( !*(_QWORD *)v7 || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) + 96LL) )
    {
      a2 = (unsigned int)(a2 + 1);
      v7 += 8LL;
      if ( (unsigned int)a2 > 4 )
        goto LABEL_11;
    }
    _InterlockedOr64((volatile signed __int64 *)(v2 + 912), 0x400000uLL);
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
LABEL_11:
  if ( (*(_BYTE *)(v2 + 8) & 2) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    if ( v13 )
      AMLIDereferenceHandleEx(v13, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 32) = 31;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 30;
  }
  v8 = *(_QWORD *)(v2 + 8);
  v9 = qword_1C002C340;
  v10 = 0;
  v11 = qword_1C002C340;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v9 = *(__int64 **)(v2 + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v11 = *(__int64 **)(v2 + 568);
  }
  LOBYTE(v10) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    6,
    39,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v4,
    v2,
    (__int64)v9,
    (__int64)v11);
  ACPIBuildCompleteMustSucceed(0LL);
  return v4;
}
