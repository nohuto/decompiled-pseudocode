/*
 * XREFs of ACPIThermalDeviceControl @ 0x1C0008940
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0007898 (ACPIIoctlEvalControlMethod.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C0008658 (WPP_RECORDER_SF_qqssdddd.c)
 *     ACPIThermalLoopEx @ 0x1C0008DA4 (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_qDDqssdddd @ 0x1C00099F4 (WPP_RECORDER_SF_qDDqssdddd.c)
 *     WPP_RECORDER_SF_qDqssdddd @ 0x1C0009B88 (WPP_RECORDER_SF_qDqssdddd.c)
 *     ACPIIoctlEnumChildren @ 0x1C0021170 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00248B0 (ACPIIoctlEvalControlMethodEx.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0050500 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C00506A8 (ACPIIoctlAsyncEvalControlMethodEx.c)
 */

__int64 __fastcall ACPIThermalDeviceControl(ULONG_PTR a1, __int64 a2)
{
  union _LARGE_INTEGER v4; // r12
  __int64 DeviceExtension; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  int *v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // r9d
  unsigned int v18; // r13d
  KIRQL v19; // dl
  __int64 v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // rax
  unsigned __int8 *v26; // rax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // [rsp+20h] [rbp-E0h]
  unsigned int v32; // [rsp+80h] [rbp-80h]
  union _LARGE_INTEGER v33; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER v34; // [rsp+90h] [rbp-70h] BYREF
  union _LARGE_INTEGER v35; // [rsp+98h] [rbp-68h] BYREF
  union _LARGE_INTEGER v36; // [rsp+A0h] [rbp-60h] BYREF
  union _LARGE_INTEGER Time; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v38; // [rsp+B0h] [rbp-50h]
  struct _TIME_FIELDS v39; // [rsp+B8h] [rbp-48h] BYREF
  struct _TIME_FIELDS v40; // [rsp+C8h] [rbp-38h] BYREF
  struct _TIME_FIELDS v41; // [rsp+D8h] [rbp-28h] BYREF
  struct _TIME_FIELDS v42; // [rsp+E8h] [rbp-18h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+F8h] [rbp-8h] BYREF

  if ( *(_BYTE *)(a2 + 64) )
  {
    v14 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
    goto LABEL_11;
  }
  v4.QuadPart = MEMORY[0xFFFFF78000000008];
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = DeviceExtension;
  v8 = *(int **)(DeviceExtension + 200);
  v9 = *(_DWORD *)(v6 + 24);
  if ( v9 > 0x32C000 )
  {
    v28 = v9 - 3325956;
    if ( v28 )
    {
      v29 = v28 - 20;
      if ( v29 )
      {
        v30 = v29 - 4;
        if ( v30 )
        {
          if ( v30 != 4 )
            goto LABEL_9;
          return (unsigned int)ACPIIoctlEnumChildren(a1, a2, *(_QWORD *)(a2 + 184));
        }
        else
        {
          return (unsigned int)ACPIIoctlAsyncEvalControlMethodEx(a1, a2, *(_QWORD *)(a2 + 184));
        }
      }
      else
      {
        return (unsigned int)ACPIIoctlEvalControlMethodEx(a1, a2, *(_QWORD *)(a2 + 184));
      }
    }
    else
    {
      return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2);
    }
  }
  if ( v9 == 3325952 )
    return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
  v10 = v9 - 2703488;
  if ( v10 )
  {
    v11 = v10 - 24;
    if ( v11 )
    {
      v12 = v11 - 16364;
      if ( v12 )
      {
        v13 = v12 - 4;
        if ( v13 )
        {
          if ( v13 != 4 )
          {
LABEL_9:
            v14 = -1073741637;
LABEL_10:
            *(_QWORD *)(a2 + 56) = 0LL;
            *(_DWORD *)(a2 + 48) = v14;
LABEL_11:
            IofCompleteRequest((PIRP)a2, 0);
            return v14;
          }
          v26 = *(unsigned __int8 **)(a2 + 24);
          v33 = v4;
          v8[23] = *v26;
          RtlTimeToTimeFields(&v33, &v39);
          WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v39.Minute, v39.Hour, 15);
          v18 = 536871168;
        }
        else
        {
          v24 = *(unsigned __int8 **)(a2 + 24);
          v34 = v4;
          v8[22] = *v24;
          RtlTimeToTimeFields(&v34, &v40);
          WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v40.Minute, v40.Hour, 14);
          v18 = 536870913;
        }
      }
      else
      {
        v25 = *(unsigned __int8 **)(a2 + 24);
        v35 = v4;
        v8[24] = *v25;
        RtlTimeToTimeFields(&v35, &v41);
        WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v41.Minute, v41.Hour, 13);
        v18 = 536870924;
      }
    }
    else
    {
      v36 = v4;
      v18 = 0x20000000;
      RtlTimeToTimeFields(&v36, &v42);
      WPP_RECORDER_SF_qqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v42.Minute,
        (unsigned int)v42.Hour,
        0x10u,
        v31);
    }
  }
  else
  {
    v15 = *v8;
    v16 = 0;
    v38 = *(_DWORD **)(a2 + 24);
    Time = v4;
    if ( *v38 != v15 )
      v16 = 536870914;
    v32 = v16;
    RtlTimeToTimeFields(&Time, &TimeFields);
    WPP_RECORDER_SF_qDDqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Minute, TimeFields.Hour, v17);
    v18 = v32;
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  if ( *(char *)(v7 + 8) < 0 || (*(_DWORD *)(v7 + 192) & 0x8000000) != 0 )
  {
    KeReleaseSpinLock(&AcpiThermalLock, v19);
    *(_QWORD *)(a2 + 56) = 0LL;
    v14 = -1073741810;
    *(_DWORD *)(a2 + 48) = -1073741810;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v6 + 24) == 2703488 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIThermalCancelRequest);
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
      {
        KeReleaseSpinLock(&AcpiThermalLock, v19);
        v14 = -1073741536;
        goto LABEL_10;
      }
    }
  }
  v20 = *(_QWORD *)(a2 + 184);
  v21 = (_QWORD *)(a2 + 168);
  v14 = 259;
  *(_BYTE *)(v20 + 3) |= 1u;
  v22 = (_QWORD *)qword_1C00738C8;
  if ( *(__int64 **)qword_1C00738C8 != &AcpiThermalList )
    __fastfail(3u);
  *v21 = &AcpiThermalList;
  v21[1] = v22;
  *v22 = v21;
  qword_1C00738C8 = (__int64)v21;
  KeReleaseSpinLock(&AcpiThermalLock, v19);
  ACPIThermalLoopEx(v7, v18, 0LL);
  return v14;
}
