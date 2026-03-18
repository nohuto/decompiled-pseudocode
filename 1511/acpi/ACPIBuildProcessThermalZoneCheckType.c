/*
 * XREFs of ACPIBuildProcessThermalZoneCheckType @ 0x1C0022E90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001F350 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0022CC8 (ACPIBuildDelayedDependencyRequest.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneCheckType(__int64 a1)
{
  __int64 v1; // rbp
  volatile signed __int32 *v2; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  char *PoolWithTag; // rax
  _DWORD *v7; // rax
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rax
  volatile signed __int32 *v13; // rcx
  unsigned int v14; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0LL;
  v4 = *(_QWORD *)(v1 + 904);
  if ( (v4 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 592) && (v4 & 0x40) == 0 )
      *(_DWORD *)(a1 + 20) |= 0x20u;
  }
  else
  {
    v10 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 704), a1 + 80, (_QWORD *)(v1 + 592));
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    v11 = v10;
    FreeDataBuffs(a1 + 80, 1u);
    if ( v11 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x20uLL);
      *(_DWORD *)(a1 + 20) |= 0x20u;
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)v1, 0x200000000000uLL);
    return (unsigned int)ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildThermalZoneList);
  }
  v5 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1145653343);
  if ( !v5 )
  {
    _InterlockedOr64((volatile signed __int64 *)v1, 0x20000uLL);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x11uLL, 0x53706341u);
    *(_QWORD *)(v1 + 552) = PoolWithTag;
    if ( PoolWithTag
      && (strcpy(PoolWithTag, "ACPI\\ThermalZone"),
          v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 5uLL, 0x53706341u),
          (*(_QWORD *)(v1 + 560) = v7) != 0LL) )
    {
      *v7 = *(_DWORD *)(**(_QWORD **)(v1 + 704) + 32LL);
      *(_BYTE *)(*(_QWORD *)(v1 + 560) + 4LL) = 0;
      _InterlockedOr64((volatile signed __int64 *)v1, 0x1E00000000000uLL);
      *(_DWORD *)(a1 + 32) = 0;
      v8 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
LABEL_8:
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v2, v8, 0LL, a1);
    goto LABEL_9;
  }
  v12 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1145656671);
  v13 = *(volatile signed __int32 **)(a1 + 56);
  v2 = (volatile signed __int32 *)v12;
  if ( v12 )
  {
    *(_DWORD *)(a1 + 32) = 6;
    if ( v13 )
    {
      AMLIDereferenceHandleEx(v13);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v2;
    AMLIReferenceHandleEx((__int64)v2);
    v14 = ACPIGet((_QWORD *)v1, 1145656671, 671613062, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 560, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 7;
    if ( v13 )
    {
      AMLIDereferenceHandleEx(v13);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v5;
    AMLIReferenceHandleEx(v5);
    v2 = (volatile signed __int32 *)v5;
    v14 = ACPIGet((_QWORD *)v1, 1145653343, 671612966, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 552, 0LL);
  }
  v8 = v14;
  if ( v14 != 259 )
    goto LABEL_8;
  v8 = 0;
LABEL_9:
  if ( v2 )
    AMLIDereferenceHandleEx(v2);
  return v8;
}
