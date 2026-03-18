/*
 * XREFs of IrqPolicyGetDevicePolicy @ 0x1C008AD3C
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0089060 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     IrqPolicyGetSubKey @ 0x1C0087C78 (IrqPolicyGetSubKey.c)
 *     OSGetRegistryValue @ 0x1C008B150 (OSGetRegistryValue.c)
 */

NTSTATUS __fastcall IrqPolicyGetDevicePolicy(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        unsigned __int64 *a3,
        int *a4,
        __int16 *a5,
        __int64 a6)
{
  unsigned __int64 v10; // r15
  int v11; // edi
  unsigned __int64 v12; // rsi
  NTSTATUS result; // eax
  int RegistryValues; // eax
  __int16 v15; // dx
  int v16; // ebx
  _BYTE *v17; // rcx
  bool v18; // zf
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // rcx
  __int64 v22; // r8
  _WORD v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  BOOL v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  __int16 *v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  _QWORD v31[36]; // [rsp+60h] [rbp-A0h] BYREF

  v29 = a5;
  v30 = a6;
  memset(v31, 0, 0x118uLL);
  v23[0] = IrqMachinePolicy;
  v26 = 2;
  v24 = 0;
  v25 = 0;
  v10 = 0LL;
  Handle = 0LL;
  LOWORD(v11) = 0;
  v12 = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Affinity Policy", 0, &Handle);
  if ( result < 0 )
    return result;
  P = 0LL;
  if ( (int)OSGetRegistryValue(Handle) >= 0 )
  {
    v21 = P;
    switch ( *(_DWORD *)P )
    {
      case 3:
        if ( (unsigned int)(*((_DWORD *)P + 1) - 1) <= 7 )
        {
          LODWORD(v22) = *((_DWORD *)P + 1);
          do
          {
            v22 = (unsigned int)(v22 - 1);
            v21[1] = v22;
            v12 = *((unsigned __int8 *)v21 + v22 + 8) | (v12 << 8);
          }
          while ( (_DWORD)v22 );
        }
        break;
      case 4:
        v12 = *((unsigned int *)P + 2);
        break;
      case 0xB:
        v12 = *((_QWORD *)P + 1);
        break;
    }
    ExFreePoolWithTag(v21, 0);
  }
  LODWORD(v31[6]) = 0;
  LODWORD(v31[4]) = 67108868;
  LODWORD(v31[1]) = 288;
  v31[2] = L"GroupOverride";
  LODWORD(v31[8]) = 288;
  v31[3] = &v24;
  LODWORD(v31[11]) = 67108868;
  v31[5] = &v24;
  v31[9] = L"DevicePolicy";
  v31[10] = v23;
  v31[12] = v23;
  v31[16] = L"DevicePriority";
  v31[17] = &v26;
  v31[19] = &v26;
  v31[23] = L"GroupPolicy";
  v31[24] = &v25;
  LODWORD(v31[15]) = 288;
  LODWORD(v31[18]) = 67108868;
  LODWORD(v31[22]) = 288;
  LODWORD(v31[25]) = 67108868;
  v31[26] = &v25;
  LODWORD(v31[13]) = 0;
  LODWORD(v31[20]) = 0;
  LODWORD(v31[27]) = 0;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v31, 0LL, 0LL);
  v15 = v23[0];
  v16 = RegistryValues;
  if ( RegistryValues >= 0 )
  {
    if ( (unsigned __int16)(v23[0] - 5) <= 1u )
    {
      v15 = 0;
      v23[0] = 0;
    }
    if ( a2 && (*(_BYTE *)(a2 + 4) & 4) != 0 )
    {
      v15 = *(_WORD *)(a2 + 16);
      v19 = *(unsigned __int16 *)(a2 + 18);
      v20 = *(_DWORD *)(a2 + 20);
      v11 = v19;
      v12 = *(_QWORD *)(a2 + 24);
      v23[0] = v15;
      v26 = v20;
      v24 = v19;
      if ( v15 == 4 )
      {
        if ( v19 != 0xFFFF )
        {
LABEL_33:
          if ( !InitSafeBootMode && v11 != 0xFFFF && v12 )
          {
            v25 = 0;
LABEL_13:
            v10 = v12;
            goto LABEL_14;
          }
          v15 = 0;
LABEL_10:
          v16 = 0;
          if ( !v15 )
            v15 = IrqMachinePolicy;
          v23[0] = v15;
          goto LABEL_13;
        }
        v11 = 0;
        v24 = 0;
      }
      else
      {
        v24 = 0;
        v11 = 0;
        v12 = 0LL;
        v25 = (_WORD)v19 == 0xFFFF;
      }
    }
    else
    {
      v11 = v24;
    }
    if ( v15 != 4 )
      goto LABEL_10;
    goto LABEL_33;
  }
LABEL_14:
  if ( Handle )
  {
    ZwClose(Handle);
    v15 = v23[0];
  }
  if ( v16 >= 0 )
  {
    v17 = (_BYTE *)v30;
    *v29 = v15;
    *a4 = v26;
    v18 = !v25;
    a3[1] = 0LL;
    *((_WORD *)a3 + 4) = v11;
    *a3 = v10;
    *v17 = !v18;
  }
  return v16;
}
