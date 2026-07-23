/*
 * XREFs of HvlpAddPhysicalMemory @ 0x14023CD50
 * Callers:
 *     KeConfigureDynamicMemory @ 0x1401D1DE8 (KeConfigureDynamicMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1401BFEA4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAddPhysicalMemory(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _QWORD *v5; // r14
  _QWORD *i; // r15
  PHYSICAL_ADDRESS v7; // r8
  PHYSICAL_ADDRESS v8; // rdx
  unsigned __int16 v9; // ax
  PHYSICAL_ADDRESS v11[4]; // [rsp+20h] [rbp-98h] BYREF
  PHYSICAL_ADDRESS v12[4]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v14; // [rsp+70h] [rbp-48h] BYREF

  v4 = 0;
  v5 = (_QWORD *)HvlpAcquireHypercallPage(v11, 1, (__int64)&v14, 16LL);
  for ( i = (_QWORD *)HvlpAcquireHypercallPage(v12, 2, (__int64)v13, 8LL); a2; a2 -= *i )
  {
    v7 = v12[3];
    v8 = v11[3];
    *v5 = a1;
    v5[1] = a2;
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
           188LL,
           (PHYSICAL_ADDRESS)v8.QuadPart,
           (PHYSICAL_ADDRESS)v7.QuadPart);
    if ( v9 == 11 )
    {
      v4 = HvlpDepositPages(0);
      if ( v4 < 0 )
      {
        v4 = -1073741670;
        break;
      }
    }
    else if ( v9 )
    {
      v4 = HvlpHvToNtStatus(v9);
      break;
    }
    a1 += *i;
  }
  HvlpReleaseHypercallPage((__int64)v11);
  HvlpReleaseHypercallPage((__int64)v12);
  return (unsigned int)v4;
}
