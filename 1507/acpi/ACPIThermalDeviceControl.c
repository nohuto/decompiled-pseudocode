/*
 * XREFs of ACPIThermalDeviceControl @ 0x1C0019C40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000BBBC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000C300 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x1C0018FF0 (ACPIIoctlEnumChildren.c)
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003D3B0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D558 (ACPIIoctlAsyncEvalControlMethodEx.c)
 */

__int64 __fastcall ACPIThermalDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  _DWORD *v7; // rdx
  unsigned int v8; // edi
  unsigned int v9; // ebp
  KIRQL v10; // al
  KIRQL v11; // r8
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 **v14; // rax

  if ( *(_BYTE *)(a2 + 64) )
  {
    v8 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
    goto LABEL_13;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = DeviceExtension;
  v7 = *(_DWORD **)(DeviceExtension + 192);
  switch ( *(_DWORD *)(v5 + 24) )
  {
    case 0x294080:
      v9 = 0;
      if ( **(_DWORD **)(a2 + 24) != *v7 )
        v9 = 536870914;
      break;
    case 0x298084:
      v9 = 536870924;
      v7[24] = **(unsigned __int8 **)(a2 + 24);
      break;
    case 0x298088:
      v9 = 536870913;
      v7[22] = **(unsigned __int8 **)(a2 + 24);
      break;
    case 0x29808C:
      v9 = 536871168;
      v7[23] = **(unsigned __int8 **)(a2 + 24);
      break;
    case 0x32C000:
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, a2, *(_QWORD *)(a2 + 184));
    case 0x32C004:
      return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2);
    case 0x32C018:
      return (unsigned int)ACPIIoctlEvalControlMethodEx(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    case 0x32C01C:
      return (unsigned int)ACPIIoctlAsyncEvalControlMethodEx(a1, a2, *(_QWORD *)(a2 + 184));
    case 0x32C020:
      return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    default:
      v8 = -1073741637;
LABEL_12:
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_DWORD *)(a2 + 48) = v8;
LABEL_13:
      IofCompleteRequest((PIRP)a2, 0);
      return v8;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  v11 = v10;
  if ( *(char *)v6 < 0 || (*(_DWORD *)(v6 + 184) & 0x8000000) != 0 )
  {
    KeReleaseSpinLock(&AcpiThermalLock, v10);
    v8 = -1073741810;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v5 + 24) == 2703488 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIThermalCancelRequest);
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
      {
        KeReleaseSpinLock(&AcpiThermalLock, v10);
        v8 = -1073741536;
        goto LABEL_12;
      }
    }
  }
  v12 = *(_QWORD *)(a2 + 184);
  v13 = (__int64 *)(a2 + 168);
  v8 = 259;
  *(_BYTE *)(v12 + 3) |= 1u;
  v14 = (__int64 **)qword_1C00594E8;
  *v13 = (__int64)&AcpiThermalList;
  v13[1] = (__int64)v14;
  if ( *v14 != &AcpiThermalList )
    __fastfail(3u);
  *v14 = v13;
  qword_1C00594E8 = (__int64)v13;
  KeReleaseSpinLock(&AcpiThermalLock, v11);
  ACPIThermalLoopEx(v6, v9, 0LL);
  return v8;
}
