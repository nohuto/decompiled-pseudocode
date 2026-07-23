/*
 * XREFs of PoFxRegisterDebugger @ 0x1407B21AC
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PoFxActivateComponent @ 0x1400BEF70 (PoFxActivateComponent.c)
 *     PoFxStartDevicePowerManagement @ 0x1401420A0 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PoFxRegisterCoreDevice @ 0x140566E7C (PoFxRegisterCoreDevice.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
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

  if ( (unsigned int)off_1402F37E8() == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x4D584650u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, NumberOfBytes);
      if ( (int)off_1402F37E8() >= 0 )
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
LABEL_8:
              RtlInitUnicodeString(&DestinationString, v5);
              memset(v16, 0, sizeof(v16));
              memset(v15, 0, sizeof(v15));
              v15[0] = 0x100000001LL;
              v15[9] = v16;
              v15[3] = PopFxDebuggerPowerCriticalTransitionCallback;
              LODWORD(v15[8]) = 1;
              if ( (int)PoFxRegisterCoreDevice((__int64)&DestinationString, (__int64)v15, &BugCheckParameter2) < 0 )
                goto LABEL_13;
              *(_DWORD *)(BugCheckParameter2 + 616) |= 2u;
              v6 = BugCheckParameter2;
              v7 = *(_QWORD *)(BugCheckParameter2 + 64);
              if ( v7 )
              {
                v13 = *(_QWORD *)(BugCheckParameter2 + 72);
                (*(void (__fastcall **)(__int64, __int64 *))(v7 + 96))(21LL, &v13);
              }
              PoFxActivateComponent(v6, 0LL, 1);
              PoFxStartDevicePowerManagement(v6);
            }
            if ( (unsigned int)++v4 >= *v1 )
              goto LABEL_13;
          }
          v5 = (wchar_t *)(v3 + 3);
          goto LABEL_8;
        }
      }
LABEL_13:
      ExFreePoolWithTag(v1, 0x4D584650u);
    }
  }
}
