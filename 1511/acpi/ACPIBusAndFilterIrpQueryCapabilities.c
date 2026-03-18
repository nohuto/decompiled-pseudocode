/*
 * XREFs of ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0067750
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C0003814 (AMLIGetNSObjectType.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     ACPIGetD3Policy @ 0x1C000D400 (ACPIGetD3Policy.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C000DC00 (AMLIIsNamedChildPresent.c)
 *     ACPIDockIsDockDevice @ 0x1C000DE9C (ACPIDockIsDockDevice.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00674BC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0067B28 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryCapabilities(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbx
  __int64 DeviceExtension; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  volatile signed __int32 *v12; // r14
  __int64 result; // rax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  bool v17; // [rsp+50h] [rbp-39h] BYREF
  int v18; // [rsp+54h] [rbp-35h] BYREF
  __int64 v19; // [rsp+58h] [rbp-31h] BYREF
  __int64 v20; // [rsp+60h] [rbp-29h] BYREF
  __int64 v21; // [rsp+68h] [rbp-21h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp-19h] BYREF
  _QWORD *v23; // [rsp+78h] [rbp-11h] BYREF
  int v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h] BYREF
  int v26; // [rsp+90h] [rbp+7h]

  v4 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = (_QWORD *)DeviceExtension;
  if ( !DeviceExtension )
    return 3221225473LL;
  v9 = *(_QWORD *)(DeviceExtension + 704);
  if ( (*(_DWORD *)(DeviceExtension + 904) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v17) >= 0 && v17 )
    *v8 &= ~0x800uLL;
  v10 = *(_QWORD *)(v4 + 8);
  if ( (*v8 & 0x8000000000LL) == 0 )
  {
    v11 = AMLIGetNamedChild(v9, 1447907935);
    v12 = (volatile signed __int32 *)v11;
    if ( v11 )
    {
      if ( (unsigned int)AMLIGetNSObjectType(v11) == 8 )
      {
        v20 = 0LL;
        if ( (int)ACPIGet(v8, 1447907935, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v20, 0LL) < 0 )
          *(_DWORD *)(v10 + 4) |= 0x10u;
        else
          *(_DWORD *)(v10 + 4) ^= (*(_DWORD *)(v10 + 4) ^ (16 * (v20 != 0))) & 0x10;
        AMLIDereferenceHandleEx(v12);
      }
      else
      {
        *(_DWORD *)(v10 + 4) |= 0x10u;
      }
    }
    if ( !ACPIDockIsDockDevice() )
    {
      if ( AMLIIsNamedChildPresent(v9, 810173791) )
      {
        v15 = *(_DWORD *)(v10 + 4);
        if ( (v15 & 0x10) == 0 )
          *(_DWORD *)(v10 + 4) = v15 | 0x40000;
        *(_DWORD *)(v10 + 4) |= 0x18u;
      }
      if ( AMLIIsNamedChildPresent(v9, 826951007)
        || AMLIIsNamedChildPresent(v9, 843728223)
        || AMLIIsNamedChildPresent(v9, 860505439)
        || AMLIIsNamedChildPresent(v9, 877282655) )
      {
        v16 = *(_DWORD *)(v10 + 4);
        if ( (v16 & 0x10) == 0 )
          *(_DWORD *)(v10 + 4) = v16 | 0x40000;
        *(_DWORD *)(v10 + 4) |= 0x10010u;
      }
    }
  }
  if ( AMLIIsNamedChildPresent(v9, 1129466207) )
    *(_DWORD *)(a1 + 48) |= 0x4000u;
  v19 = 0LL;
  result = ACPIGet(v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v19, 0LL);
  if ( (int)result >= 0 )
  {
    v23 = v8;
    v22 = &v23;
    v24 = 8;
    if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v22, 1LL, &v18) >= 0 && v18 == 2 )
      goto LABEL_17;
    if ( (*v8 & 0x40000000000000LL) != 0 )
    {
      if ( a4 )
        goto LABEL_18;
      if ( (AcpiOverrideAttributes & 2) == 0 )
      {
LABEL_17:
        *(_DWORD *)(v10 + 4) &= ~0x4000u;
LABEL_18:
        if ( (v19 & 4) == 0 )
          *(_DWORD *)(v10 + 4) |= 0x20000u;
        if ( AMLIIsNamedChildPresent(v9, 1314214751) )
        {
          v21 = 0LL;
          if ( (int)ACPIGet(v8, 1314214751, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v21, 0LL) >= 0 )
            *(_DWORD *)(v10 + 12) = v21;
        }
        if ( !AMLIIsNamedChildPresent(v9, 1380204895)
          || (result = ACPIGet(v8, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, v10 + 8, 0LL), (int)result >= 0) )
        {
          result = ACPISystemPowerQueryDeviceCapabilities((ULONG_PTR)v8);
          if ( (int)result >= 0 )
          {
            if ( !a4 )
            {
              *(_DWORD *)(v10 + 4) |= 0x80u;
              v14 = *(_DWORD *)(v10 + 4) ^ (*(_DWORD *)(v10 + 4) ^ (((*(_DWORD *)v8 >> 17) & 1) << 8)) & 0x100;
              *(_DWORD *)(v10 + 4) = v14;
              *(_DWORD *)(v10 + 4) = v14 ^ ((unsigned __int8)v14 ^ ((v8[70] != 0LL) << 6)) & 0x40;
            }
            if ( (int)ACPIProcessPhysicalDeviceLocation(v8, &v25) >= 0 && (v25 & 0x7F) != 0 )
            {
              if ( (v26 & 1) == 0 )
                *(_DWORD *)(v10 + 4) |= 0x40000u;
              if ( v26 < 0 )
                *(_DWORD *)(v10 + 4) |= 0x40000u;
            }
            return 0LL;
          }
        }
        return result;
      }
    }
    else if ( !AMLIIsNamedChildPresent(v9, 1397900127) || AMLIIsNamedChildPresent(v9, 1397904223) )
    {
      if ( !a4 )
        goto LABEL_18;
      goto LABEL_17;
    }
    *(_DWORD *)(v10 + 4) |= 0x4000u;
    goto LABEL_18;
  }
  return result;
}
