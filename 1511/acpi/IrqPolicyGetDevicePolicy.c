/*
 * XREFs of IrqPolicyGetDevicePolicy @ 0x1C00687FC
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0068F60 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     IrqPolicyGetSubKey @ 0x1C0067E80 (IrqPolicyGetSubKey.c)
 *     OSGetRegistryValue @ 0x1C0068C40 (OSGetRegistryValue.c)
 */

NTSTATUS __fastcall IrqPolicyGetDevicePolicy(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        unsigned __int64 *a3,
        int *a4,
        __int16 *a5,
        __int64 a6)
{
  unsigned __int64 v9; // r15
  int v10; // edi
  unsigned __int64 v11; // rsi
  NTSTATUS result; // eax
  int RegistryValues; // eax
  __int16 v14; // cx
  int v15; // ebx
  _BYTE *v16; // rcx
  bool v17; // zf
  int v18; // edx
  int v19; // eax
  _DWORD *v20; // rcx
  __int64 v21; // r8
  _WORD v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  BOOL v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  __int16 *v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  _QWORD v30[36]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v30, 0, 280);
  v28 = a5;
  v29 = a6;
  v22[0] = IrqMachinePolicy;
  v25 = 2;
  v23 = 0;
  v24 = 0;
  v9 = 0LL;
  Handle = 0LL;
  LOWORD(v10) = 0;
  v11 = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Affinity Policy", 0, &Handle);
  if ( result < 0 )
    return result;
  P = 0LL;
  if ( (int)OSGetRegistryValue(Handle) >= 0 )
  {
    v20 = P;
    switch ( *(_DWORD *)P )
    {
      case 3:
        if ( (unsigned int)(*((_DWORD *)P + 1) - 1) <= 7 )
        {
          LODWORD(v21) = *((_DWORD *)P + 1);
          do
          {
            v21 = (unsigned int)(v21 - 1);
            v20[1] = v21;
            v11 = *((unsigned __int8 *)v20 + v21 + 8) | (v11 << 8);
          }
          while ( (_DWORD)v21 );
        }
        break;
      case 4:
        v11 = *((unsigned int *)P + 2);
        break;
      case 0xB:
        v11 = *((_QWORD *)P + 1);
        break;
    }
    ExFreePoolWithTag(v20, 0);
  }
  LODWORD(v30[6]) = 0;
  LODWORD(v30[4]) = 0x4000000;
  LODWORD(v30[1]) = 288;
  v30[2] = L"GroupOverride";
  LODWORD(v30[8]) = 288;
  v30[3] = &v23;
  LODWORD(v30[11]) = 0x4000000;
  v30[5] = &v23;
  v30[9] = L"DevicePolicy";
  v30[10] = v22;
  v30[12] = v22;
  v30[16] = L"DevicePriority";
  v30[17] = &v25;
  v30[19] = &v25;
  v30[23] = L"GroupPolicy";
  v30[24] = &v24;
  LODWORD(v30[15]) = 288;
  LODWORD(v30[18]) = 0x4000000;
  LODWORD(v30[22]) = 288;
  LODWORD(v30[25]) = 0x4000000;
  v30[26] = &v24;
  LODWORD(v30[13]) = 0;
  LODWORD(v30[20]) = 0;
  LODWORD(v30[27]) = 0;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v30, 0LL, 0LL);
  v14 = v22[0];
  v15 = RegistryValues;
  if ( RegistryValues >= 0 )
  {
    if ( v22[0] == 5 )
    {
      v14 = 0;
      v22[0] = 0;
    }
    if ( a2 && (*(_BYTE *)(a2 + 4) & 4) != 0 )
    {
      v14 = *(_WORD *)(a2 + 16);
      v18 = *(unsigned __int16 *)(a2 + 18);
      v19 = *(_DWORD *)(a2 + 20);
      v10 = v18;
      v11 = *(_QWORD *)(a2 + 24);
      v22[0] = v14;
      v25 = v19;
      v23 = v18;
      if ( v14 == 4 )
      {
        if ( v18 != 0xFFFF )
        {
LABEL_23:
          if ( !InitSafeBootMode && v10 != 0xFFFF && v11 )
          {
            v24 = 0;
LABEL_13:
            v9 = v11;
            goto LABEL_14;
          }
          v14 = 0;
LABEL_10:
          v15 = 0;
          if ( !v14 )
            v14 = IrqMachinePolicy;
          v22[0] = v14;
          goto LABEL_13;
        }
        v10 = 0;
        v23 = 0;
      }
      else
      {
        v23 = 0;
        v10 = 0;
        v11 = 0LL;
        v24 = (_WORD)v18 == 0xFFFF;
      }
    }
    else
    {
      v10 = v23;
    }
    if ( v14 != 4 )
      goto LABEL_10;
    goto LABEL_23;
  }
LABEL_14:
  if ( Handle )
  {
    ZwClose(Handle);
    v14 = v22[0];
  }
  if ( v15 >= 0 )
  {
    *v28 = v14;
    v16 = (_BYTE *)v29;
    *a4 = v25;
    v17 = !v24;
    a3[1] = 0LL;
    *((_WORD *)a3 + 4) = v10;
    *a3 = v9;
    *v16 = !v17;
  }
  return v15;
}
