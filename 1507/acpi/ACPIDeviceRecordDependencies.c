/*
 * XREFs of ACPIDeviceRecordDependencies @ 0x1C001C5E4
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001BE00 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001720C (ExAllocateFromNPagedLookasideList.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C001C7EC (ACPIDeviceDiscoverDependencies.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C003C92C (ACPIInternalGetDeviceFromNSOBJ.c)
 */

void __fastcall ACPIDeviceRecordDependencies(PVOID *a1)
{
  PVOID *v1; // rbx
  PVOID *v3; // rcx
  _QWORD *v4; // rdx
  unsigned int v5; // r12d
  PVOID ***v6; // r13
  volatile signed __int32 *v7; // r10
  PVOID **v8; // rcx
  __int64 *v9; // rbx
  PVOID *v10; // rsi
  _QWORD *v11; // r14
  PVOID *v12; // r15
  __int64 v13; // rdx
  _QWORD *v14; // rax
  PVOID *v15; // r8
  _QWORD *v16; // rdx
  char *v17; // rcx
  PVOID *v18; // rdx
  PVOID **v19; // r8
  PVOID *v20; // rdx
  __int64 *v21; // r14
  __int64 v22; // rax
  _DWORD *v23; // rcx
  unsigned int v24; // r15d
  _BYTE **v25; // r12
  __int64 v26; // r8
  PVOID v27; // rsi
  __int64 DeviceExtension; // r13
  PVOID *v29; // rsi
  PVOID *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  char v33; // al
  __int64 *v34; // rax
  __int64 **v35; // r8
  __int64 *v36; // rdx
  PVOID *v37; // rcx
  PVOID **v38; // rdx
  int v39; // [rsp+38h] [rbp-39h] BYREF
  PVOID **v40; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-29h] BYREF
  volatile signed __int32 *v42; // [rsp+50h] [rbp-21h]
  PVOID Object; // [rsp+58h] [rbp-19h] BYREF
  PVOID *v44; // [rsp+60h] [rbp-11h]
  _QWORD v45[7]; // [rsp+68h] [rbp-9h] BYREF

  v1 = (PVOID *)*a1;
  v45[0] = &AcpiPowerPhase0List;
  v3 = v1;
  v45[1] = &AcpiPowerBlockedOnDependencyList;
  v45[2] = &AcpiPowerPhase1List;
  v45[3] = &AcpiPowerPhase2List;
  v45[4] = &AcpiPowerPhase3List;
  v45[5] = &AcpiPowerPhase4List;
  v45[6] = &AcpiPowerPhase5List;
  if ( v1 != a1 )
  {
    do
    {
      v4 = v3[5];
      if ( !v4[91] && (v4[74] || (v4[113] & 0x400000) != 0) && (*v4 & 0xA00000000000LL) == 0 )
        *((_DWORD *)v3 + 14) |= 0x4000000u;
      v3 = (PVOID *)*v3;
    }
    while ( v3 != a1 );
LABEL_11:
    if ( v1 != a1 )
    {
      Object = *v1;
      ACPIDeviceDiscoverDependencies(v1, a1);
      v5 = 0;
      v6 = (PVOID ***)v45;
      while ( 1 )
      {
        v7 = (volatile signed __int32 *)v1[5];
        v8 = *v6;
        v40 = *v6;
        v42 = v7;
        if ( *((_QWORD *)v7 + 91) )
          break;
LABEL_9:
        ++v5;
        ++v6;
        if ( v5 >= 7 )
        {
          v1 = (PVOID *)Object;
          goto LABEL_11;
        }
      }
      v10 = *v8;
      while ( 1 )
      {
        if ( v10 == (PVOID *)v8 )
          goto LABEL_9;
        v11 = v10[5];
        v12 = v10;
        v10 = (PVOID *)*v10;
        if ( v1 != v12 && ((_DWORD)v12[7] & 0x4000000) == 0 )
        {
          v13 = v11[91];
          if ( v13 )
            break;
        }
LABEL_25:
        v7 = v42;
      }
      if ( (v7[226] & 0x40) != 0 )
      {
        if ( (int)IoTestDependency(*((_QWORD *)v7 + 91), v13, &v41, &v39) >= 0 && (v39 & 1) != 0 )
        {
          v14 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( !v14 )
          {
LABEL_24:
            v8 = v40;
            goto LABEL_25;
          }
          v15 = (PVOID *)v1[9];
          v16 = v14 + 2;
          v14[2] = v1 + 8;
          v14[3] = v15;
          if ( *v15 != v1 + 8 )
            __fastfail(3u);
          *v15 = v16;
          v1[9] = v16;
          v17 = (char *)(v12 + 10);
          v18 = (PVOID *)v12[11];
          *v14 = v12 + 10;
          v14[1] = v18;
          if ( *v18 != v12 + 10 )
            __fastfail(3u);
LABEL_39:
          *v18 = v14;
          *((_QWORD *)v17 + 1) = v14;
          goto LABEL_24;
        }
        v7 = v42;
        v8 = v40;
      }
      if ( (v11[113] & 0x40) == 0 )
        goto LABEL_25;
      if ( (int)IoTestDependency(v11[91], *((_QWORD *)v7 + 91), &v41, &v39) < 0 )
        goto LABEL_24;
      if ( (v39 & 1) == 0 )
        goto LABEL_24;
      v14 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
      if ( !v14 )
        goto LABEL_24;
      v19 = (PVOID **)v12[9];
      v20 = (PVOID *)(v14 + 2);
      v14[2] = v12 + 8;
      v14[3] = v19;
      if ( *v19 != v12 + 8 )
        __fastfail(3u);
      *v19 = v20;
      v12[9] = v20;
      v17 = (char *)(v1 + 10);
      v18 = (PVOID *)v1[11];
      *v14 = v1 + 10;
      v14[1] = v18;
      if ( *v18 != v1 + 10 )
        __fastfail(3u);
      goto LABEL_39;
    }
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v9 = (__int64 *)AcpiPowerNodeList;
LABEL_13:
  while ( v9 != &AcpiPowerNodeList )
  {
    v21 = v9;
    v9 = (__int64 *)*v9;
    if ( (v21[2] & 0x1000) != 0 )
    {
      v22 = v21[12];
      if ( v22 )
      {
        v23 = *(_DWORD **)(v22 + 32);
        v24 = 0;
        v41 = *v23;
        if ( v41 )
        {
          v25 = (_BYTE **)(v23 + 10);
          while ( 1 )
          {
            if ( (int)AMLIGetNameSpaceObject(*v25) >= 0 )
            {
              ACPIInternalGetDeviceFromNSOBJ(v42, &Object, v26, 0LL);
              AMLIDereferenceHandleEx(v42);
              v27 = Object;
              if ( Object )
              {
                DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
                ObfDereferenceObject(v27);
                Object = 0LL;
                if ( DeviceExtension )
                  break;
              }
            }
LABEL_62:
            ++v24;
            v25 += 5;
            if ( v24 >= v41 )
              goto LABEL_13;
          }
          v29 = (PVOID *)*a1;
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_61:
              if ( v29 == a1 )
                goto LABEL_62;
              v30 = v29;
              v29 = (PVOID *)*v29;
              v44 = v30;
              v31 = v30[5];
              if ( v31 )
              {
                v32 = v31[91];
                if ( v32 )
                  break;
              }
            }
            if ( v31 == (_QWORD *)DeviceExtension )
            {
              v33 = 1;
              v39 = 1;
            }
            else
            {
              if ( (int)IoTestDependency(*(_QWORD *)(DeviceExtension + 728), v32, &v40, &v39) < 0 )
                goto LABEL_61;
              v33 = v39;
            }
            if ( (v33 & 3) != 0 )
            {
              v34 = (__int64 *)ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
              if ( v34 )
              {
                v35 = (__int64 **)v21[14];
                v36 = v34 + 2;
                v34[2] = (__int64)(v21 + 13);
                v34[3] = (__int64)v35;
                if ( *v35 != v21 + 13 )
                  __fastfail(3u);
                *v35 = v36;
                v21[14] = (__int64)v36;
                v37 = v44 + 10;
                v38 = (PVOID **)v44[11];
                *v34 = (__int64)(v44 + 10);
                v34[1] = (__int64)v38;
                if ( *v38 != v37 )
                  __fastfail(3u);
                *v38 = (PVOID *)v34;
                v37[1] = v34;
              }
            }
          }
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
}
