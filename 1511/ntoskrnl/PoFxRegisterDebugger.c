/*
 * XREFs of PoFxRegisterDebugger @ 0x140766334
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     PoFxActivateComponent @ 0x1400DADFC (PoFxActivateComponent.c)
 *     PoFxStartDevicePowerManagement @ 0x14013D034 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PoFxRegisterCoreDevice @ 0x14051B710 (PoFxRegisterCoreDevice.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 */

void PoFxRegisterDebugger()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v1; // rdi
  unsigned int v2; // r15d
  _DWORD *v3; // rbx
  int v4; // r14d
  wchar_t *v5; // rdx
  ULONG_PTR v6; // rsi
  __int64 v7; // r8
  __int64 v8; // [rsp+28h] [rbp-E0h]
  __int64 v9; // [rsp+30h] [rbp-D8h]
  __int64 v10; // [rsp+38h] [rbp-D0h]
  unsigned int NumberOfBytes; // [rsp+48h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v15[10]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v16[3]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t pszDest[24]; // [rsp+E0h] [rbp-28h] BYREF

  if ( (unsigned int)off_1402D29C8() == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x4D584650u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, NumberOfBytes);
      if ( (int)off_1402D29C8() >= 0 )
      {
        v2 = 0;
        v3 = v1 + 1;
        v4 = 0;
        if ( *v1 )
        {
          while ( 1 )
          {
            v3 = (_DWORD *)((char *)v3 + v2);
            v2 = v3[1];
            if ( *v3 == 1 )
            {
              if ( v3[2] )
                break;
            }
            if ( !*v3 )
            {
              LODWORD(v10) = (v3[4] >> 5) & 7;
              LODWORD(v9) = v3[4] & 0x1F;
              LODWORD(v8) = v3[3];
              RtlStringCbPrintfW(
                pszDest,
                0x30uLL,
                L"PCI_DEBUG_%04X_%02X_%02X_%02X",
                *((unsigned __int16 *)v3 + 4),
                v8,
                v9,
                v10);
              v5 = pszDest;
              goto LABEL_11;
            }
LABEL_15:
            if ( (unsigned int)++v4 >= *v1 )
              goto LABEL_16;
          }
          v5 = (wchar_t *)(v3 + 3);
LABEL_11:
          RtlInitUnicodeString(&DestinationString, v5);
          memset(v16, 0, sizeof(v16));
          memset(v15, 0, sizeof(v15));
          v15[0] = 0x100000001LL;
          v15[9] = v16;
          v15[3] = PopFxDebuggerPowerCriticalTransitionCallback;
          LODWORD(v15[8]) = 1;
          if ( (int)PoFxRegisterCoreDevice((__int64)&DestinationString, (__int64)v15, (ULONG_PTR **)&BugCheckParameter2) < 0 )
            goto LABEL_16;
          *(_DWORD *)(BugCheckParameter2 + 616) |= 2u;
          v6 = BugCheckParameter2;
          v7 = *(_QWORD *)(BugCheckParameter2 + 64);
          if ( v7 )
          {
            v13 = *(_QWORD *)(BugCheckParameter2 + 72);
            (*(void (__fastcall **)(__int64, __int64 *))(v7 + 96))(21LL, &v13);
          }
          PoFxActivateComponent(v6, 0LL, 1LL);
          PoFxStartDevicePowerManagement(v6);
          goto LABEL_15;
        }
      }
LABEL_16:
      ExFreePoolWithTag(v1, 0x4D584650u);
    }
  }
}
