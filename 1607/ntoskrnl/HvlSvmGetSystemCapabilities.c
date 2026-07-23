/*
 * XREFs of HvlSvmGetSystemCapabilities @ 0x1401BE358
 * Callers:
 *     <none>
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14014B494 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x1401C1224 (HvlpGetRegister128.c)
 *     HviGetHardwareFeatures @ 0x140231D08 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140231D6C (HviGetHypervisorVendorAndMaxFunction.c)
 */

char __fastcall HvlSvmGetSystemCapabilities(__int64 a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG LowPart; // ecx
  LONG HighPart; // eax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  PHYSICAL_ADDRESS v10; // r8
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  PHYSICAL_ADDRESS v13[4]; // [rsp+28h] [rbp-E0h] BYREF
  PHYSICAL_ADDRESS v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B8h]
  int v16; // [rsp+54h] [rbp-B4h]
  __int64 v17; // [rsp+60h] [rbp-A8h]
  _BYTE v18[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v19[2064]; // [rsp+78h] [rbp-90h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = HvlpRootFlags;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    result = HvlEnlightenments;
    if ( (HvlEnlightenments & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v14);
      if ( (v16 & 0x10000) != 0 )
      {
        result = HviGetHypervisorVendorAndMaxFunction(&v14, v3, v4, v5);
        if ( v14.LowPart >= 0x40000008 )
        {
          result = HvlpGetRegister128(517LL, &v14);
          LowPart = v14.LowPart;
          if ( (v14.LowPart & 1) != 0 )
          {
            HighPart = v14.HighPart;
            *(_DWORD *)a1 |= 1u;
            *(_DWORD *)(a1 + 4) = HighPart;
            *(_DWORD *)(a1 + 12) = v15;
            *(_DWORD *)(a1 + 8) = LowPart >> 11;
            result = HvlpFlags;
            if ( (HvlpFlags & 2) != 0 )
            {
              HviGetHardwareFeatures(&v14);
              if ( SLOBYTE(v14.QuadPart) >= 0 )
                *(_DWORD *)a1 |= 2u;
              v8 = (_QWORD *)HvlpAcquireHypercallPage(&v14, 1, (__int64)v18, 8LL);
              v9 = HvlpAcquireHypercallPage(v13, 2, (__int64)v19, 1032LL);
              v10 = v13[3];
              v11 = (_DWORD *)v9;
              v12 = v17;
              *v8 = 0LL;
              *(_DWORD *)v8 = 11;
              if ( !(unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                                        123LL,
                                        v12,
                                        (PHYSICAL_ADDRESS)v10.QuadPart) )
              {
                *(_DWORD *)(a1 + 16) = *v11;
                *(_DWORD *)(a1 + 20) = v11[1];
              }
              HvlpReleaseHypercallPage((__int64)&v14);
              return HvlpReleaseHypercallPage((__int64)v13);
            }
          }
        }
      }
    }
  }
  return result;
}
