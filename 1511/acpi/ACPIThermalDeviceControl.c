/*
 * XREFs of ACPIThermalDeviceControl @ 0x1C0019E90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000C0CC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000C810 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x1C0018F24 (ACPIIoctlEnumChildren.c)
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003CFA0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D148 (ACPIIoctlAsyncEvalControlMethodEx.c)
 */

__int64 __fastcall ACPIThermalDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  _DWORD *v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ebp
  KIRQL v15; // dl
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 **v18; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax

  if ( *(_BYTE *)(a2 + 64) )
  {
    v13 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
    goto LABEL_11;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = DeviceExtension;
  v7 = *(_DWORD **)(DeviceExtension + 192);
  v8 = *(_DWORD *)(v5 + 24);
  if ( v8 > 0x32C000 )
  {
    v21 = v8 - 3325956;
    if ( v21 )
    {
      v22 = v21 - 20;
      if ( v22 )
      {
        v23 = v22 - 4;
        if ( v23 )
        {
          if ( v23 != 4 )
            goto LABEL_9;
          return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        }
        else
        {
          return (unsigned int)ACPIIoctlAsyncEvalControlMethodEx(a1, a2, *(_QWORD *)(a2 + 184));
        }
      }
      else
      {
        return (unsigned int)ACPIIoctlEvalControlMethodEx(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
      }
    }
    else
    {
      return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2);
    }
  }
  if ( v8 == 3325952 )
    return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
  v9 = v8 - 2703488;
  if ( v9 )
  {
    v10 = v9 - 24;
    if ( v10 )
    {
      v11 = v10 - 16364;
      if ( v11 )
      {
        v12 = v11 - 4;
        if ( v12 )
        {
          if ( v12 != 4 )
          {
LABEL_9:
            v13 = -1073741637;
LABEL_10:
            *(_QWORD *)(a2 + 56) = 0LL;
            *(_DWORD *)(a2 + 48) = v13;
LABEL_11:
            IofCompleteRequest((PIRP)a2, 0);
            return v13;
          }
          v14 = 536871168;
          v7[23] = **(unsigned __int8 **)(a2 + 24);
        }
        else
        {
          v14 = 536870913;
          v7[22] = **(unsigned __int8 **)(a2 + 24);
        }
      }
      else
      {
        v14 = 536870924;
        v7[24] = **(unsigned __int8 **)(a2 + 24);
      }
    }
    else
    {
      v14 = 0x20000000;
    }
  }
  else
  {
    v14 = 0;
    if ( **(_DWORD **)(a2 + 24) != *v7 )
      v14 = 536870914;
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  if ( *(char *)v6 < 0 || (*(_DWORD *)(v6 + 184) & 0x8000000) != 0 )
  {
    KeReleaseSpinLock(&AcpiThermalLock, v15);
    *(_QWORD *)(a2 + 56) = 0LL;
    v13 = -1073741810;
    *(_DWORD *)(a2 + 48) = -1073741810;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v5 + 24) == 2703488 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIThermalCancelRequest);
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
      {
        KeReleaseSpinLock(&AcpiThermalLock, v15);
        v13 = -1073741536;
        goto LABEL_10;
      }
    }
  }
  v16 = *(_QWORD *)(a2 + 184);
  v17 = (__int64 *)(a2 + 168);
  v13 = 259;
  *(_BYTE *)(v16 + 3) |= 1u;
  v18 = (__int64 **)qword_1C00594E8;
  *v17 = (__int64)&AcpiThermalList;
  v17[1] = (__int64)v18;
  if ( *v18 != &AcpiThermalList )
    __fastfail(3u);
  *v18 = v17;
  qword_1C00594E8 = (__int64)v17;
  KeReleaseSpinLock(&AcpiThermalLock, v15);
  ACPIThermalLoopEx(v6, v14, 0LL);
  return v13;
}
