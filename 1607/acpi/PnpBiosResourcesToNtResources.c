/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1C008614C
 * Callers:
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C000BC48 (PnpDeviceBiosResourcesToNtResources.c)
 *     TranslateBindMutexResources @ 0x1C0048E18 (TranslateBindMutexResources.c)
 *     TranslateEjectInterface @ 0x1C0084078 (TranslateEjectInterface.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C009C754 (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C009D54C (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A1D18 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_dqLD @ 0x1C000AD04 (WPP_RECORDER_SF_dqLD.c)
 *     WPP_RECORDER_SF_dL @ 0x1C000C10C (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_LL @ 0x1C000C27C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00554D8 (WPP_RECORDER_SF_d.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C0083F4C (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C0083FC4 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00843F0 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C0084774 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C0085664 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C0085C9C (PnpiGrowResourceList.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0085F40 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C008670C (PnpiBiosPortToIoDescriptor.c)
 *     PnpiUpdateResourceList @ 0x1C0086790 (PnpiUpdateResourceList.c)
 *     PnpiClearAllocatedMemory @ 0x1C0086848 (PnpiClearAllocatedMemory.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C009B508 (AcpiExternalTranslateBiosToNtResources.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C009EFF0 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C009F3C4 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C009F76C (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C009F7C8 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosSerialBusToIoDescriptor @ 0x1C009F918 (PnpiBiosSerialBusToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C009F96C (PnpiBiosVendorToNtIoDescriptor.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, unsigned int **a4)
{
  unsigned int v5; // r15d
  int v6; // eax
  int v7; // edx
  int updated; // ebx
  char *v9; // r14
  unsigned int v10; // r12d
  unsigned __int8 v11; // cl
  int v12; // edx
  int v13; // r9d
  __int16 v14; // ax
  int v15; // edi
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  int v19; // eax
  int v20; // r9d
  int v21; // edx
  int v22; // edx
  unsigned int v23; // r15d
  unsigned int v24; // r13d
  unsigned int v25; // ebx
  int v26; // eax
  unsigned int *PoolWithTag; // rax
  int v28; // edx
  int v29; // edx
  unsigned int *v30; // rdi
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  char *v34; // rdi
  unsigned int i; // esi
  __int64 result; // rax
  unsigned __int16 v37; // di
  unsigned __int16 v38; // r15
  __int16 v39; // r12
  unsigned int v40; // esi
  int v41; // r9d
  char v42; // al
  int v43; // eax
  unsigned __int8 v44; // di
  unsigned __int8 v45; // r15
  unsigned int v46; // edi
  int v47; // r8d
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rbx
  unsigned int v53; // esi
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // edx
  char v58; // di
  unsigned __int8 v59; // r15
  unsigned __int8 v60; // di
  int DeviceExtension; // r12d
  unsigned int v62; // esi
  int v63; // r9d
  int v64; // [rsp+20h] [rbp-60h]
  char v65; // [rsp+28h] [rbp-58h]
  unsigned __int8 v66; // [rsp+50h] [rbp-30h]
  char v67[3]; // [rsp+51h] [rbp-2Fh] BYREF
  unsigned int v68; // [rsp+54h] [rbp-2Ch]
  int v69; // [rsp+58h] [rbp-28h] BYREF
  int v70; // [rsp+5Ch] [rbp-24h]
  unsigned __int16 v71; // [rsp+60h] [rbp-20h]
  int v72; // [rsp+64h] [rbp-1Ch]
  unsigned int v73; // [rsp+68h] [rbp-18h]
  PVOID P; // [rsp+70h] [rbp-10h] BYREF
  __int64 v75; // [rsp+78h] [rbp-8h] BYREF

  P = 0LL;
  v69 = 0;
  v5 = 0;
  v68 = 0;
  v73 = 0;
  v67[0] = 0;
  v72 = 0;
  v70 = 0;
  v6 = PnpiGrowResourceList((const void **)&P, &v69, a3);
  updated = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      13,
      33,
      (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
      v6);
    return (unsigned int)updated;
  }
  v9 = (char *)P;
  v10 = 32;
  while ( 1 )
  {
    v11 = *(_BYTE *)a2;
    v66 = *(_BYTE *)a2;
    v12 = 1;
    if ( *(char *)a2 < 0 )
    {
      v13 = 35;
      v14 = *(_WORD *)(a2 + 1) + 3;
    }
    else
    {
      v13 = 34;
      v14 = (v11 & 7) + 1;
      v11 &= 0x78u;
      v66 = v11;
    }
    v71 = v14;
    v15 = v11;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_LL(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      14,
      v13,
      (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
      v11,
      v14);
    if ( v66 == 120 )
      break;
    v18 = 1;
    ++v72;
    if ( v15 > 132 )
    {
      if ( v15 <= 134 )
        goto LABEL_38;
      switch ( v15 )
      {
        case 135:
          v19 = PnpiBiosAddressDoubleToIoDescriptor((unsigned __int8 *)a2, (__int64)v9, v5, a3);
          updated = v19;
          v20 = 47;
          goto LABEL_14;
        case 136:
          v19 = PnpiBiosAddressToIoDescriptor((unsigned __int8 *)a2, (__int64)v9, v5, a3);
          updated = v19;
          v20 = 46;
          goto LABEL_14;
        case 137:
          v59 = *(_BYTE *)(a2 + 4);
          v60 = 0;
          DeviceExtension = 0;
          if ( gAcpiHonorBiosPolarities && a1 )
            DeviceExtension = ACPIInternalGetDeviceExtension(a1);
          if ( v59 )
          {
            v62 = v68;
            do
            {
              if ( updated < 0 )
                break;
              LOBYTE(v17) = v60++;
              updated = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, a2, v17, (_DWORD)v9, v62);
            }
            while ( v60 < v59 );
          }
          v42 = v60;
          v41 = 38;
          goto LABEL_47;
        case 138:
          v19 = PnpiBiosAddressQuadToIoDescriptor(a2);
          updated = v19;
          v20 = 48;
          goto LABEL_14;
        case 139:
          v19 = PnpiBiosAddressExtendedToIoDescriptor(a2);
          updated = v19;
          v20 = 49;
LABEL_14:
          v65 = v19;
LABEL_15:
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            14,
            v20,
            (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
            v65);
          goto LABEL_16;
      }
      if ( v15 != 140 )
      {
        if ( v15 == 142 )
        {
          if ( a1 )
            updated = PnpiBiosSerialBusToIoDescriptor(a1, a2, v17, (_DWORD)v9, v5, a3);
          else
            updated = -1073741637;
          v20 = 52;
          v65 = updated;
          goto LABEL_15;
        }
LABEL_79:
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          13,
          54,
          (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
          v15);
        --v72;
        updated = 0;
        goto LABEL_16;
      }
      v58 = 0;
      if ( a1 )
      {
        do
        {
          if ( updated < 0 )
            break;
          updated = PnpiUpdateResourceList(&v9[8 * v5], &v75);
          if ( updated >= 0 )
            updated = AcpiExternalTranslateBiosToNtResources(
                        a1,
                        a2,
                        (unsigned int)*(unsigned __int16 *)(a2 + 1) + 3,
                        a3,
                        v75);
          v18 = 1;
          ++v58;
        }
        while ( !v58 );
        v10 = 32;
      }
      else
      {
        updated = -1073741637;
      }
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_LL(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        14,
        51,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
        v58,
        updated);
    }
    else
    {
      switch ( v15 )
      {
        case 132:
          updated = 0;
          if ( a1 )
          {
            v56 = PnpiBiosVendorToNtIoDescriptor(a1, a2, v17, (_DWORD)v9, v5, a3, (__int64)v67);
            if ( v56 < 0 || !v67[0] )
              ++v70;
            LOBYTE(v57) = 4;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v57,
              14,
              53,
              (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
              v56);
          }
          else
          {
            ++v70;
          }
          goto LABEL_17;
        case 32:
          v37 = *(_WORD *)(a2 + 1);
          v38 = 0;
          v39 = 0;
          if ( v37 )
          {
            v40 = v68;
            do
            {
              if ( updated < 0 )
                break;
              if ( (v37 & 1) != 0 )
              {
                v43 = PnpiBiosIrqToIoDescriptor((_BYTE *)a2, v38, (__int64)v9, v40, v39);
                v18 = 1;
                updated = v43;
                ++v39;
              }
              ++v38;
              v37 >>= 1;
            }
            while ( v37 );
          }
          v41 = 37;
          goto LABEL_46;
        case 40:
          v44 = *(_BYTE *)(a2 + 1);
          v45 = 0;
          v39 = 0;
          if ( v44 )
          {
            v53 = v68;
            do
            {
              if ( updated < 0 )
                break;
              if ( (v44 & 1) != 0 )
              {
                v54 = PnpiBiosDmaToIoDescriptor(a2, v45, (__int64)v9, v53, v39);
                v18 = 1;
                updated = v54;
                ++v39;
              }
              ++v45;
              v44 >>= 1;
            }
            while ( v44 );
          }
          v41 = 39;
LABEL_46:
          v42 = v39;
LABEL_47:
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_LL(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            14,
            v41,
            (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
            v42,
            updated);
          v5 = v68;
          v10 = 32;
          goto LABEL_16;
      }
      if ( v15 != 48 )
      {
        switch ( v15 )
        {
          case 56:
            LOBYTE(v18) = 4;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v18,
              14,
              42,
              (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
              v5);
            v5 = 0;
            v68 = 0;
            goto LABEL_16;
          case 64:
            v19 = PnpiBiosPortToIoDescriptor(a2, v9, v5, a3);
            updated = v19;
            v20 = 43;
            goto LABEL_14;
          case 72:
            v19 = PnpiBiosPortFixedToIoDescriptor(a2, (__int64)v9, v5, a3);
            updated = v19;
            v20 = 44;
            goto LABEL_14;
          case 80:
            v19 = PnpiBiosDmaToIoDescriptorV3(a2, v9, v5);
            updated = v19;
            v20 = 40;
            goto LABEL_14;
          case 112:
            ++v70;
            updated = 0;
            goto LABEL_17;
          case 129:
LABEL_38:
            v19 = PnpiBiosMemoryToIoDescriptor((unsigned __int8 *)a2, (__int64)v9, v5);
            updated = v19;
            v20 = 45;
            goto LABEL_14;
        }
        goto LABEL_79;
      }
      v46 = v73 + 1;
      v73 = v46;
      v5 = v46;
      v68 = v46;
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        14,
        41,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
        v46);
      if ( v46 == v69 )
      {
        v55 = PnpiGrowResourceList((const void **)&P, &v69, v47);
        v9 = (char *)P;
        updated = v55;
      }
    }
LABEL_16:
    if ( updated < 0 )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v21, 13, 56);
LABEL_36:
      PnpiClearAllocatedMemory(v9);
      return (unsigned int)updated;
    }
LABEL_17:
    a2 += v71;
  }
  LOBYTE(v16) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v16,
    14,
    36,
    (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
  if ( !v72 || v70 == v72 )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      14,
      55,
      (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
    PnpiClearAllocatedMemory(v9);
    *a4 = 0LL;
    return (unsigned int)updated;
  }
  if ( *(_QWORD *)v9 )
    v23 = *(_DWORD *)(*(_QWORD *)v9 + 4LL);
  else
    v23 = 0;
  v24 = v73;
  v25 = 1;
  if ( v73 )
  {
    while ( 1 )
    {
      v48 = *(_QWORD *)&v9[8 * v25];
      if ( !v48 )
        break;
      v49 = *(_DWORD *)(v48 + 4);
      if ( v49 )
      {
        v10 += 32 * (v23 + v49 - 1) + 40;
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v22, 14, 58);
      }
      if ( ++v25 > v24 )
        goto LABEL_27;
    }
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      13,
      57,
      (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
      v25);
  }
  else
  {
LABEL_27:
    if ( v24 )
      goto LABEL_31;
    if ( *(_QWORD *)v9 && (v26 = *(_DWORD *)(*(_QWORD *)v9 + 4LL)) != 0 )
    {
      v10 += 32 * (v26 - 1) + 40;
LABEL_31:
      if ( v10 >= 0x48 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x52706341u);
        *a4 = PoolWithTag;
        LOBYTE(v28) = 4;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v28,
          14,
          61,
          (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
          (char)PoolWithTag,
          v10);
        v30 = *a4;
        if ( *a4 )
        {
          memset(v30, 0, v10);
          updated = 0;
          *(_QWORD *)(v30 + 1) = 15LL;
          *v30 = v10;
          v34 = (char *)(v30 + 8);
          for ( i = 1; i <= v24; ++i )
          {
            v50 = *(_QWORD *)&v9[8 * i];
            v51 = *(_DWORD *)(v50 + 4);
            if ( v51 )
            {
              v52 = (unsigned int)(32 * (v51 - 1) + 40);
              *(_DWORD *)(v50 + 4) = v23 + v51;
              WPP_RECORDER_SF_dqLD(
                WPP_GLOBAL_Control->DeviceExtension,
                v31,
                v32,
                v33,
                v64,
                i,
                (char)v34,
                32 * (v51 - 1) + 40,
                *(_DWORD *)(*(_QWORD *)&v9[8 * i] + 4LL));
              memmove(v34, *(const void **)&v9[8 * i], (unsigned int)v52);
              v34 += v52;
              updated = 0;
              if ( v23 )
              {
                memmove(v34, (const void *)(*(_QWORD *)v9 + 8LL), 32LL * v23);
                v34 += 32 * v23;
                updated = 0;
              }
              ++(*a4)[7];
            }
          }
          if ( !v24 )
          {
            memmove(v34, *(const void **)v9, 32 * (v23 - 1) + 40);
            ++(*a4)[7];
          }
        }
        else
        {
          LOBYTE(v29) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v29,
            13,
            62,
            (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
          updated = -1073741670;
        }
        goto LABEL_36;
      }
      v63 = 60;
    }
    else
    {
      v63 = 59;
    }
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      13,
      v63,
      (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
  }
  PnpiClearAllocatedMemory(v9);
  result = 3221225473LL;
  *a4 = 0LL;
  return result;
}
