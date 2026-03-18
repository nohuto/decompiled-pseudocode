/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1C0067DC4
 * Callers:
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C000684C (PnpDeviceBiosResourcesToNtResources.c)
 *     TranslateBindMutexResources @ 0x1C0037768 (TranslateBindMutexResources.c)
 *     TranslateEjectInterface @ 0x1C0066F0C (TranslateEjectInterface.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C007B31C (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C007C09C (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C007FFF8 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C0066DE0 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C0066E94 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C006706C (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C00671B4 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C006766C (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0067BF4 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C00681B8 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiUpdateResourceList @ 0x1C006823C (PnpiUpdateResourceList.c)
 *     PnpiClearAllocatedMemory @ 0x1C0068358 (PnpiClearAllocatedMemory.c)
 *     PnpiGrowResourceList @ 0x1C00683B0 (PnpiGrowResourceList.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C007A608 (AcpiExternalTranslateBiosToNtResources.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C007D868 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C007DB40 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C007DDE8 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C007DE44 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosSerialBusToIoDescriptor @ 0x1C007DF94 (PnpiBiosSerialBusToIoDescriptor.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, char **a4)
{
  unsigned int v5; // r13d
  unsigned int v6; // r14d
  int v7; // r15d
  __int64 result; // rax
  int v9; // r8d
  int updated; // ebx
  char *v11; // rsi
  unsigned int v12; // r12d
  unsigned __int8 v13; // cl
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // r15d
  unsigned int v23; // ecx
  int v24; // eax
  char *PoolWithTag; // rdi
  char *v26; // r14
  unsigned int i; // r12d
  unsigned __int16 v28; // r14
  unsigned __int16 v29; // r15
  __int16 v30; // r12
  unsigned __int8 v31; // r14
  unsigned __int8 v32; // r15
  __int16 v33; // r12
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // r8
  int v37; // eax
  size_t v38; // rbx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  char v42; // r14
  unsigned __int8 v43; // r14
  unsigned __int8 v44; // r15
  int DeviceExtension; // r12d
  unsigned __int16 v46; // [rsp+30h] [rbp-30h]
  unsigned int v47; // [rsp+34h] [rbp-2Ch]
  int v48; // [rsp+38h] [rbp-28h] BYREF
  int v49; // [rsp+3Ch] [rbp-24h]
  int v50; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  __int64 v52; // [rsp+50h] [rbp-10h] BYREF

  P = 0LL;
  v48 = 0;
  v5 = 0;
  v47 = 0;
  v6 = 0;
  v50 = 0;
  v7 = 0;
  result = PnpiGrowResourceList(&P, &v48);
  updated = result;
  if ( (int)result < 0 )
    return result;
  v11 = (char *)P;
  v12 = 32;
  while ( 1 )
  {
    v13 = *(_BYTE *)a2;
    if ( *(char *)a2 < 0 )
    {
      v14 = *(_WORD *)(a2 + 1) + 3;
    }
    else
    {
      v14 = (v13 & 7) + 1;
      v13 &= 0x78u;
    }
    v46 = v14;
    if ( v13 == 120 )
      break;
    v49 = ++v7;
    if ( v13 > 0x84u )
    {
      if ( v13 <= 0x86u )
        goto LABEL_39;
      if ( v13 == 135 )
      {
        v20 = PnpiBiosAddressDoubleToIoDescriptor((unsigned __int8 *)a2, (__int64)v11, v5, a3);
        goto LABEL_14;
      }
      if ( v13 == 136 )
      {
        v20 = PnpiBiosAddressToIoDescriptor((unsigned __int8 *)a2, (__int64)v11, v5, a3);
        goto LABEL_14;
      }
      if ( v13 != 137 )
      {
        switch ( v13 )
        {
          case 0x8Au:
            v20 = PnpiBiosAddressQuadToIoDescriptor(a2);
            goto LABEL_14;
          case 0x8Bu:
            v20 = PnpiBiosAddressExtendedToIoDescriptor(a2);
            goto LABEL_14;
          case 0x8Cu:
            v42 = 0;
            if ( a1 )
            {
              while ( updated >= 0 )
              {
                updated = PnpiUpdateResourceList(&v11[8 * v5], &v52);
                if ( updated >= 0 )
                  updated = AcpiExternalTranslateBiosToNtResources(
                              a1,
                              a2,
                              (unsigned int)*(unsigned __int16 *)(a2 + 1) + 3,
                              a3,
                              v52);
                if ( ++v42 )
                  goto LABEL_46;
              }
            }
            else
            {
LABEL_100:
              updated = -1073741637;
            }
LABEL_36:
            PnpiClearAllocatedMemory(v11);
            return (unsigned int)updated;
          case 0x8Eu:
            if ( !a1 )
              goto LABEL_100;
            v20 = PnpiBiosSerialBusToIoDescriptor(a1, a2, v9, (_DWORD)v11, v5, a3);
            goto LABEL_14;
        }
LABEL_75:
        --v7;
        updated = 0;
        goto LABEL_15;
      }
      v43 = 0;
      v44 = *(_BYTE *)(a2 + 4);
      DeviceExtension = 0;
      if ( gAcpiHonorBiosPolarities && a1 )
        DeviceExtension = ACPIInternalGetDeviceExtension(a1);
      if ( v44 )
      {
        while ( updated >= 0 )
        {
          LOBYTE(v9) = v43++;
          updated = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, a2, v9, (_DWORD)v11, v5);
          if ( v43 >= v44 )
            goto LABEL_45;
        }
        goto LABEL_36;
      }
      goto LABEL_45;
    }
    if ( v13 == 132 )
      goto LABEL_77;
    v15 = v13 - 32;
    if ( !v15 )
    {
      v28 = *(_WORD *)(a2 + 1);
      v29 = 0;
      v30 = 0;
      if ( v28 )
      {
        while ( updated >= 0 )
        {
          if ( (v28 & 1) != 0 )
            updated = PnpiBiosIrqToIoDescriptor((_BYTE *)a2, v29, (__int64)v11, v5, v30++);
          ++v29;
          v28 >>= 1;
          if ( !v28 )
            goto LABEL_45;
        }
        goto LABEL_36;
      }
      goto LABEL_45;
    }
    v16 = v15 - 8;
    if ( !v16 )
    {
      v31 = *(_BYTE *)(a2 + 1);
      v32 = 0;
      v33 = 0;
      if ( v31 )
      {
        while ( updated >= 0 )
        {
          if ( (v31 & 1) != 0 )
            updated = PnpiBiosDmaToIoDescriptor(a2, v32, (__int64)v11, v5, v33++);
          ++v32;
          v31 >>= 1;
          if ( !v31 )
            goto LABEL_45;
        }
        goto LABEL_36;
      }
LABEL_45:
      v7 = v49;
      v12 = 32;
LABEL_46:
      v6 = v47;
      goto LABEL_15;
    }
    v17 = v16 - 8;
    if ( v17 )
    {
      v18 = v17 - 8;
      if ( !v18 )
      {
        v5 = 0;
        goto LABEL_15;
      }
      v19 = v18 - 8;
      if ( !v19 )
      {
        v20 = PnpiBiosPortToIoDescriptor(a2, v11, v5, a3);
LABEL_14:
        updated = v20;
        goto LABEL_15;
      }
      v39 = v19 - 8;
      if ( !v39 )
      {
        v20 = PnpiBiosPortFixedToIoDescriptor(a2, (__int64)v11, v5, a3);
        goto LABEL_14;
      }
      v40 = v39 - 8;
      if ( !v40 )
      {
        v20 = PnpiBiosDmaToIoDescriptorV3(a2, v11, v5, 0LL);
        goto LABEL_14;
      }
      v41 = v40 - 32;
      if ( !v41 )
      {
LABEL_77:
        ++v50;
        updated = 0;
        goto LABEL_16;
      }
      if ( v41 == 17 )
      {
LABEL_39:
        v20 = PnpiBiosMemoryToIoDescriptor((unsigned __int8 *)a2, (__int64)v11, v5);
        goto LABEL_14;
      }
      goto LABEL_75;
    }
    v5 = ++v6;
    v47 = v6;
    if ( v6 == v48 )
    {
      v20 = PnpiGrowResourceList(&P, &v48);
      v11 = (char *)P;
      goto LABEL_14;
    }
LABEL_15:
    if ( updated < 0 )
      goto LABEL_36;
LABEL_16:
    a2 += v46;
  }
  if ( !v7 || v50 == v7 )
  {
    PnpiClearAllocatedMemory(v11);
    *a4 = 0LL;
    return (unsigned int)updated;
  }
  v21 = *(_QWORD *)v11;
  if ( *(_QWORD *)v11 )
    v22 = *(_DWORD *)(v21 + 4);
  else
    v22 = 0;
  v23 = 1;
  if ( v6 )
  {
    while ( 1 )
    {
      v34 = *(_QWORD *)&v11[8 * v23];
      if ( !v34 )
        break;
      v35 = *(_DWORD *)(v34 + 4);
      if ( v35 )
        v12 += 32 * (v22 + v35 - 1) + 40;
      if ( ++v23 > v6 )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    if ( v6 )
    {
LABEL_30:
      if ( v12 >= 0x48 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x52706341u);
        *a4 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v12);
          v26 = PoolWithTag + 32;
          *((_DWORD *)PoolWithTag + 1) = 15;
          *((_DWORD *)PoolWithTag + 2) = 0;
          *(_DWORD *)PoolWithTag = v12;
          for ( i = 1; i <= v47; ++i )
          {
            v36 = *(_QWORD *)&v11[8 * i];
            v37 = *(_DWORD *)(v36 + 4);
            if ( v37 )
            {
              *(_DWORD *)(v36 + 4) = v22 + v37;
              v38 = (unsigned int)(32 * (v37 - 1) + 40);
              memmove(v26, *(const void **)&v11[8 * i], v38);
              v26 += v38;
              if ( v22 )
              {
                memmove(v26, (const void *)(*(_QWORD *)v11 + 8LL), 32LL * v22);
                v26 += 32 * v22;
              }
              ++*((_DWORD *)PoolWithTag + 7);
            }
          }
          if ( !v47 )
          {
            memmove(v26, *(const void **)v11, 32 * (v22 - 1) + 40);
            ++*((_DWORD *)PoolWithTag + 7);
          }
          updated = 0;
        }
        else
        {
          updated = -1073741670;
        }
        goto LABEL_36;
      }
    }
    else if ( v21 )
    {
      v24 = *(_DWORD *)(v21 + 4);
      if ( v24 )
      {
        v12 += 32 * (v24 - 1) + 40;
        goto LABEL_30;
      }
    }
  }
  PnpiClearAllocatedMemory(v11);
  *a4 = 0LL;
  return 3221225473LL;
}
