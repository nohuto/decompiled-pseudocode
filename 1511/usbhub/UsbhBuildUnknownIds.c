/*
 * XREFs of UsbhBuildUnknownIds @ 0x1C0051BBC
 * Callers:
 *     UsbhSetEnumerationFailed @ 0x1C0051920 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhFreeID @ 0x1C00058A4 (UsbhFreeID.c)
 *     UsbhMakeId @ 0x1C00084B0 (UsbhMakeId.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 */

void __fastcall UsbhBuildUnknownIds(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rdi
  wchar_t *v6; // rbx
  unsigned __int16 v7; // si
  char *Id; // rbp
  char *v9; // rbx
  char *v10; // rcx
  char *v11; // rax
  char *v12; // rsi
  _DWORD v13[4]; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+90h] [rbp+18h] BYREF
  int v15; // [rsp+98h] [rbp+20h] BYREF

  Log(a1, 4096, 1970161988, a2, 0LL);
  v5 = PdoExt(v4, v2, v3, v4);
  switch ( v5[699] )
  {
    case 0x40010000:
      v6 = L"USB\\DEVICE_DESCRIPTOR_FAILURE";
      v7 = 2;
      break;
    case 0x40010001:
      v6 = L"USB\\SET_ADDRESS_FAILURE";
      v7 = 4;
      break;
    case 0x40010002:
      v6 = L"USB\\RESET_FAILURE";
      v7 = 1;
      break;
    case 0x40010004:
      v6 = L"USB\\CONFIGURATION_DESCRIPTOR_VALIDATION_FAILURE";
      v7 = 6;
      break;
    case 0x40010005:
      v6 = L"USB\\DEVICE_DESCRIPTOR_VALIDATION_FAILURE";
      v7 = 5;
      break;
    case 0x40010007:
      v6 = L"USB\\CONFIG_DESCRIPTOR_FAILURE";
      v7 = 3;
      break;
    default:
      return;
  }
  v14 = 0;
  v13[0] = 0;
  v15 = 0;
  Id = UsbhMakeId(0, v6, 0LL, v13, 2u, 0, 0, 0LL);
  if ( Id )
  {
    v9 = UsbhMakeId(0, v6, 0LL, &v15, 2u, 0, 0, 0LL);
    if ( !v9 )
    {
      v10 = Id;
LABEL_16:
      ExFreePoolWithTag(v10, 0);
      return;
    }
    v11 = UsbhMakeId(0, L"USB\\VID_nnnn", 0LL, &v14, 0, 4, 0, 0LL);
    if ( !v11 || (v12 = UsbhMakeId(0, L"&PID_nnnn", v11, &v14, 2u, 4, v7, 0LL)) == 0LL )
    {
      ExFreePoolWithTag(Id, 0);
      v10 = v9;
      goto LABEL_16;
    }
    UsbhFreeID((__int64)(v5 + 526));
    v5[527] = v15;
    *((_QWORD *)v5 + 264) = v9;
    UsbhFreeID((__int64)(v5 + 522));
    v5[523] = v13[0];
    *((_QWORD *)v5 + 262) = Id;
    UsbhFreeID((__int64)(v5 + 518));
    v5[519] = v14;
    *((_QWORD *)v5 + 260) = v12;
  }
}
