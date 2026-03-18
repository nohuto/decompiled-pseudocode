/*
 * XREFs of ACPIInitStartDevice @ 0x1C0007D8C
 * Callers:
 *     ACPIEcStartDevice @ 0x1C0039C80 (ACPIEcStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1C00686B0 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0068C30 (ACPIFilterIrpStartDevice.c)
 *     ACPICMButtonStart @ 0x1C00733EC (ACPICMButtonStart.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1C0073490 (ACPIInternalDeviceClockIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C0008044 (ACPIDeviceInternalDeviceRequest.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000CB88 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     PnpCmResourcesToBiosResources @ 0x1C0072DA8 (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  int v5; // r12d
  int v6; // r13d
  __int64 DeviceExtension; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r9
  _DWORD *v16; // r12
  _DWORD *v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // ebx
  int v21; // edi
  SIZE_T v22; // rdi
  PVOID v23; // rax
  void *v24; // r15
  _OWORD *v25; // rax
  _QWORD *v26; // r13
  KIRQL v27; // al
  void *v28; // rcx
  KIRQL v29; // di
  void *v30; // rcx
  unsigned int v31; // r8d
  unsigned int v32; // edx
  _BYTE *v33; // rcx
  unsigned int v34; // r14d
  PVOID PoolWithTag; // rax
  PVOID v36; // rsi
  void *v37; // rcx
  __int128 v38; // [rsp+30h] [rbp-30h] BYREF
  __int128 v39; // [rsp+40h] [rbp-20h]
  void *Src; // [rsp+50h] [rbp-10h]
  size_t v41; // [rsp+A8h] [rbp+48h]

  v5 = a4;
  v6 = (int)a3;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v11 = 0LL;
  v12 = 0LL;
  v13 = DeviceExtension;
  v14 = *(_QWORD *)(DeviceExtension + 704);
  v15 = 1LL;
  if ( a2 )
  {
    v16 = *(_DWORD **)(a2 + 8);
    v17 = *(_DWORD **)(a2 + 16);
    if ( !v16 || *v16 != 1 )
      goto LABEL_8;
    if ( v17 && *v17 == 1 && (*(_QWORD *)(DeviceExtension + 904) & 0x100000000LL) != 0 )
    {
      v31 = v17[4];
      v32 = 0;
      if ( v31 )
      {
        v33 = v17 + 5;
        while ( *v33 != 2 || (v33[2] & 0x20) == 0 )
        {
          ++v32;
          v33 += 20;
          if ( v32 >= v31 )
            goto LABEL_39;
        }
        v34 = 20 * (v31 + 1);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v34, 0x53706341u);
        v36 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v17, v34);
          v37 = *(void **)(v13 + 624);
          if ( v37 )
            ExFreePoolWithTag(v37, 0);
          *(_QWORD *)(v13 + 624) = v36;
        }
      }
      else
      {
LABEL_39:
        _InterlockedAnd64((volatile signed __int64 *)DeviceExtension, 0xFFFFFFFFFFFEFFFFuLL);
        _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 904), 0xFFFFFFFEFFFFFFFFuLL);
        _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 904), 0xFFFFFFFFFFEFFFFFuLL);
      }
    }
    v11 = (__int64 *)AMLIGetNamedChild(v14, 1397900127LL);
    v18 = AMLIGetNamedChild(v14, 1397904223LL);
    v12 = v18;
    if ( !v11 || !v18 )
      goto LABEL_8;
    v21 = AMLIEvalNameSpaceObject(v11, &v38, 0, 0LL);
    if ( v21 < 0 )
      goto LABEL_47;
    if ( WORD1(v38) != 3 || !DWORD2(v39) || !Src )
    {
      dword_1C005A218 = 0;
      byte_1C005A21C = 0;
      FreeDataBuffs(&v38, 1LL);
      v21 = -1073741823;
      goto LABEL_47;
    }
    v22 = (unsigned int)(20 * (v16[4] + 1));
    v41 = v22;
    v23 = ExAllocatePoolWithTag(PagedPool, v22, 0x53706341u);
    v24 = v23;
    if ( v23 )
    {
      memmove(v23, v16, (unsigned int)v22);
      v25 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(DWORD2(v39) + 40), 0x4F706341u);
      v26 = v25;
      if ( v25 )
      {
        *v25 = v38;
        v25[1] = v39;
        *((_QWORD *)v25 + 4) = (char *)v25 + 40;
        memmove((char *)v25 + 40, Src, DWORD2(v39));
        dword_1C005A218 = 0;
        byte_1C005A21C = 0;
        FreeDataBuffs(&v38, 1LL);
        v21 = PnpCmResourcesToBiosResources(v13, v24, v26[4], *((unsigned int *)v26 + 6));
        if ( v21 >= 0 )
        {
          memmove(v24, v16, v41);
          v27 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v28 = *(void **)(v13 + 632);
          v29 = v27;
          if ( v28 )
            ExFreePoolWithTag(v28, 0);
          *(_QWORD *)(v13 + 632) = v26;
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v29);
          v30 = *(void **)(v13 + 616);
          if ( v30 )
            ExFreePoolWithTag(v30, 0);
          v6 = (int)a3;
          *(_QWORD *)(v13 + 616) = v24;
LABEL_8:
          v5 = a4;
          goto LABEL_9;
        }
        ExFreePoolWithTag(v24, 0);
        ExFreePoolWithTag(v26, 0);
LABEL_47:
        a3(v13, a4, (unsigned int)v21);
        if ( v11 )
          AMLIDereferenceHandleEx(v11);
        if ( v12 )
          AMLIDereferenceHandleEx(v12);
        return (unsigned int)v21;
      }
      dword_1C005A218 = 0;
      byte_1C005A21C = 0;
      FreeDataBuffs(&v38, 1LL);
      ExFreePoolWithTag(v24, 0);
    }
    else
    {
      dword_1C005A218 = 0;
      byte_1C005A21C = 0;
      FreeDataBuffs(&v38, 1LL);
    }
    v21 = -1073741670;
    goto LABEL_47;
  }
LABEL_9:
  ACPIThermalAcquireCoolingInterfaces(v13, v9, v10, v15);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (*(_DWORD *)(v13 + 904) & 0xC0000LL) == 0xC0000 && *(_DWORD *)(v13 + 328) == 1 )
  {
    v21 = 0;
    goto LABEL_47;
  }
  v19 = ACPIDeviceInternalDeviceRequest(v13, 1, v6, v5, 4);
  if ( v19 == -1073741802 )
    v19 = 259;
  if ( v11 )
    AMLIDereferenceHandleEx(v11);
  if ( v12 )
    AMLIDereferenceHandleEx(v12);
  return v19;
}
