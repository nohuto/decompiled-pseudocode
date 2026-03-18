/*
 * XREFs of ACPIDeviceRecordDependencies @ 0x1C0025914
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0011020 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C000CFF4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0025B04 (ACPIDeviceDiscoverDependencies.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0045C24 (WPP_RECORDER_SF_sL.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0050014 (ACPIInternalGetDeviceFromNSOBJ.c)
 */

void __fastcall ACPIDeviceRecordDependencies(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // r12d
  __int64 ***v6; // r13
  volatile signed __int32 *v7; // r10
  __int64 **v8; // rcx
  __int64 *v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 *v12; // r15
  __int64 v13; // rdx
  int v14; // eax
  int v15; // edx
  __int64 *v16; // rax
  int v17; // edx
  __int64 **v18; // r8
  __int64 *v19; // rdx
  _QWORD *v20; // rcx
  __int64 **v21; // rdx
  int v22; // r9d
  int v23; // eax
  int v24; // edx
  __int64 **v25; // r8
  __int64 *v26; // rdx
  __int64 *v27; // rsi
  __int64 v28; // rax
  _DWORD *v29; // rcx
  unsigned int v30; // r12d
  __int64 *v31; // r15
  int v32; // eax
  int v33; // edx
  __int64 v34; // r8
  __int64 v35; // rdx
  PVOID v36; // rdi
  __int64 v37; // rcx
  __int64 *v38; // rdi
  __int64 *v39; // r13
  __int64 v40; // rax
  __int64 v41; // rdx
  char v42; // al
  int v43; // eax
  int v44; // edx
  __int64 *v45; // rax
  int v46; // edx
  __int64 **v47; // r8
  __int64 *v48; // rdx
  __int64 **v49; // rdx
  int v50; // [rsp+48h] [rbp-39h] BYREF
  __int64 **v51; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v52; // [rsp+58h] [rbp-29h] BYREF
  volatile signed __int32 *v53; // [rsp+60h] [rbp-21h]
  __int64 DeviceExtension; // [rsp+68h] [rbp-19h]
  PVOID Object; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v56[7]; // [rsp+78h] [rbp-9h] BYREF

  v1 = (__int64 *)*a1;
  v56[0] = &AcpiPowerPhase0List;
  v3 = v1;
  v56[1] = &AcpiPowerBlockedOnDependencyList;
  v56[2] = &AcpiPowerPhase1List;
  v56[3] = &AcpiPowerPhase2List;
  v56[4] = &AcpiPowerPhase3List;
  v56[5] = &AcpiPowerPhase4List;
  for ( v56[6] = &AcpiPowerPhase5List; v3 != a1; v3 = (__int64 *)*v3 )
  {
    v4 = v3[5];
    if ( !*(_QWORD *)(v4 + 736)
      && (*(_QWORD *)(v4 + 600) || (*(_DWORD *)(v4 + 912) & 0x400000) != 0)
      && (*(_QWORD *)(v4 + 8) & 0xA00000000000LL) == 0 )
    {
      *((_DWORD *)v3 + 14) |= 0x4000000u;
    }
  }
  if ( v1 != a1 )
  {
    do
    {
      DeviceExtension = *v1;
      ACPIDeviceDiscoverDependencies(v1, a1);
      v5 = 0;
      v6 = (__int64 ***)v56;
      do
      {
        v7 = (volatile signed __int32 *)v1[5];
        v8 = *v6;
        v51 = *v6;
        v53 = v7;
        if ( *((_QWORD *)v7 + 92) )
        {
          v10 = *v8;
          while ( 1 )
          {
            if ( v10 == (__int64 *)v8 )
              goto LABEL_9;
            v11 = v10[5];
            v12 = v10;
            v10 = (__int64 *)*v10;
            if ( v1 != v12 && (v12[7] & 0x4000000) == 0 )
            {
              v13 = *(_QWORD *)(v11 + 736);
              if ( v13 )
                break;
            }
LABEL_21:
            v7 = v53;
          }
          if ( (v7[228] & 0x40) == 0 )
          {
LABEL_20:
            if ( (*(_BYTE *)(v11 + 912) & 0x40) == 0 )
              goto LABEL_21;
            v23 = IoTestDependency(*(_QWORD *)(v11 + 736), *((_QWORD *)v7 + 92), &v52, &v50);
            if ( v23 < 0 )
            {
              LOBYTE(v24) = 2;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v24,
                21,
                22,
                (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
                v23);
            }
            else if ( (v50 & 1) != 0 )
            {
              v16 = (__int64 *)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
              if ( v16 )
              {
                v25 = (__int64 **)v12[9];
                v26 = v16 + 2;
                if ( *v25 != v12 + 8 )
                  __fastfail(3u);
                *v26 = (__int64)(v12 + 8);
                v16[3] = (__int64)v25;
                *v25 = v26;
                v12[9] = (__int64)v26;
                v20 = v1 + 10;
                v21 = (__int64 **)v1[11];
                if ( *v21 != v1 + 10 )
                  __fastfail(3u);
                goto LABEL_30;
              }
              v22 = 21;
LABEL_33:
              LOBYTE(v17) = 2;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v17,
                21,
                v22,
                (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids);
            }
            goto LABEL_43;
          }
          v14 = IoTestDependency(*((_QWORD *)v7 + 92), v13, &v52, &v50);
          if ( v14 < 0 )
          {
            LOBYTE(v15) = 2;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v15,
              21,
              20,
              (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
              v14);
          }
          else if ( (v50 & 1) != 0 )
          {
            v16 = (__int64 *)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
            if ( !v16 )
            {
              v22 = 19;
              goto LABEL_33;
            }
            v18 = (__int64 **)v1[9];
            v19 = v16 + 2;
            if ( *v18 != v1 + 8 )
              __fastfail(3u);
            *v19 = (__int64)(v1 + 8);
            v16[3] = (__int64)v18;
            *v18 = v19;
            v1[9] = (__int64)v19;
            v20 = v12 + 10;
            v21 = (__int64 **)v12[11];
            if ( *v21 != v12 + 10 )
              __fastfail(3u);
LABEL_30:
            *v16 = (__int64)v20;
            v16[1] = (__int64)v21;
            *v21 = v16;
            v20[1] = v16;
LABEL_43:
            v8 = v51;
            goto LABEL_21;
          }
          v7 = v53;
          v8 = v51;
          goto LABEL_20;
        }
LABEL_9:
        ++v5;
        ++v6;
      }
      while ( v5 < 7 );
      v1 = (__int64 *)DeviceExtension;
    }
    while ( (__int64 *)DeviceExtension != a1 );
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v9 = (__int64 *)AcpiPowerNodeList;
LABEL_12:
  while ( v9 != &AcpiPowerNodeList )
  {
    v27 = v9;
    v9 = (__int64 *)*v9;
    if ( (v27[2] & 0x1000) != 0 )
    {
      v28 = v27[12];
      if ( v28 )
      {
        v29 = *(_DWORD **)(v28 + 32);
        v30 = 0;
        v52 = *v29;
        if ( v52 )
        {
          v31 = (__int64 *)(v29 + 10);
          while ( 1 )
          {
            v32 = AMLIGetNameSpaceObject((_BYTE *)*v31);
            if ( v32 >= 0 )
              break;
            WPP_RECORDER_SF_sL(
              WPP_GLOBAL_Control->DeviceExtension,
              v33,
              21,
              39,
              (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
              *v31,
              v32);
LABEL_70:
            ++v30;
            v31 += 5;
            if ( v30 >= v52 )
              goto LABEL_12;
          }
          ACPIInternalGetDeviceFromNSOBJ(v53, &Object, v34, 0LL);
          AMLIDereferenceHandleEx(v53, v35);
          v36 = Object;
          if ( !Object )
            goto LABEL_70;
          DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
          ObfDereferenceObject(v36);
          v37 = DeviceExtension;
          Object = 0LL;
          if ( !DeviceExtension )
            goto LABEL_70;
          v38 = (__int64 *)*a1;
          while ( 2 )
          {
            if ( v38 == a1 )
              goto LABEL_70;
            v39 = v38;
            v38 = (__int64 *)*v38;
            v40 = v39[5];
            if ( v40 )
            {
              v41 = *(_QWORD *)(v40 + 736);
              if ( v41 )
              {
                if ( v40 == v37 )
                {
                  v42 = 1;
                  v50 = 1;
LABEL_63:
                  if ( (v42 & 3) != 0 )
                  {
                    v45 = (__int64 *)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
                    if ( v45 )
                    {
                      v47 = (__int64 **)v27[14];
                      v48 = v45 + 2;
                      if ( *v47 != v27 + 13 )
                        __fastfail(3u);
                      *v48 = (__int64)(v27 + 13);
                      v45[3] = (__int64)v47;
                      *v47 = v48;
                      v27[14] = (__int64)v48;
                      v49 = (__int64 **)v39[11];
                      if ( *v49 != v39 + 10 )
                        __fastfail(3u);
                      *v45 = (__int64)(v39 + 10);
                      v45[1] = (__int64)v49;
                      *v49 = v45;
                      v39[11] = (__int64)v45;
                    }
                    else
                    {
                      LOBYTE(v46) = 2;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v46,
                        21,
                        41,
                        (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids);
                    }
                  }
                }
                else
                {
                  v43 = IoTestDependency(*(_QWORD *)(v37 + 736), v41, &v51, &v50);
                  if ( v43 >= 0 )
                  {
                    v42 = v50;
                    goto LABEL_63;
                  }
                  LOBYTE(v44) = 2;
                  WPP_RECORDER_SF_D(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v44,
                    21,
                    40,
                    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
                    v43);
                }
              }
            }
            v37 = DeviceExtension;
            continue;
          }
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
}
