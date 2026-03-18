/*
 * XREFs of GetMonitorPhysicalDimensions @ 0x1C005DB60
 * Callers:
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C0005CF4 (RIMComputeVirtualDesktopPhysicalSize.c)
 *     RIMGetPhysicalSizeFromMonitor @ 0x1C00D39B0 (RIMGetPhysicalSizeFromMonitor.c)
 * Callees:
 *     GetRegEDID @ 0x1C005EEE0 (GetRegEDID.c)
 *     UpdateMonitorDevices @ 0x1C005F930 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetMonitorPhysicalDimensions(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // r14
  wchar_t *v10; // rdi
  int v11; // ebp
  unsigned int v12; // esi
  __int64 v13; // r10
  __int64 v14; // rcx
  int v15; // eax
  PVOID v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-268h] BYREF
  PVOID Object; // [rsp+38h] [rbp-260h] BYREF
  __int64 v20; // [rsp+40h] [rbp-258h] BYREF
  _BYTE v21[512]; // [rsp+50h] [rbp-248h] BYREF

  v4 = 0;
  v18 = 0LL;
  UpdateMonitorDevices();
  if ( !a1 )
    return (unsigned int)-1073741823;
  v9 = *(_QWORD *)(a1 + 2600);
  if ( !*(_DWORD *)(v9 + 224) )
    return (unsigned int)-1073741810;
  v10 = gpGraphicsDeviceList;
  v11 = 0;
  if ( !gpGraphicsDeviceList )
    return (unsigned int)-1073741810;
  while ( v10 != (wchar_t *)v9 )
  {
LABEL_17:
    v10 = (wchar_t *)*((_QWORD *)v10 + 16);
    if ( !v10 )
      return (unsigned int)-1073741810;
  }
  v12 = 0;
  if ( !*((_DWORD *)v10 + 56) )
  {
LABEL_16:
    if ( v11 )
      return (unsigned int)-1073741823;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v13 = *((_QWORD *)v10 + 29);
    if ( (*(_BYTE *)(v13 + 20LL * v12) & 3) != 3
      || (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, __int64 *))qword_1C011B610)(
                v13 + 4 * (5LL * v12 + 2),
                *(unsigned int *)(v13 + 20LL * v12 + 4),
                &Object,
                &v20) < 0 )
    {
      goto LABEL_15;
    }
    v11 = 1;
    if ( (unsigned int)GetRegEDID(v20, v21, &v18) )
      break;
    ObfDereferenceObject(Object);
LABEL_15:
    if ( ++v12 >= *((_DWORD *)v10 + 56) )
      goto LABEL_16;
  }
  v14 = v18;
  *a2 = *(unsigned __int8 *)(v18 + 21);
  v15 = *(unsigned __int8 *)(v14 + 22);
  v16 = Object;
  *a3 = v15;
  ObfDereferenceObject(v16);
  if ( a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)v10 + 29) + 20LL * v12 + 4);
  return v4;
}
