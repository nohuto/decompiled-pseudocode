/*
 * XREFs of HvlHvDebuggerPowerHandler @ 0x1401BCCF8
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1401BFEA4 (HvlpHvToNtStatus.c)
 *     HvcallInitiateHypercall @ 0x140231E94 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlHvDebuggerPowerHandler(char a1)
{
  __int64 v2; // rax
  PHYSICAL_ADDRESS v3; // rdx
  unsigned __int16 v4; // bx
  PHYSICAL_ADDRESS v6[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  v2 = HvlpAcquireHypercallPage(v6, 1, (__int64)v7, 40LL);
  v3 = v6[3];
  *(_DWORD *)v2 = 10;
  *(_BYTE *)(v2 + 8) = a1;
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallInitiateHypercall)(
         111LL,
         (PHYSICAL_ADDRESS)v3.QuadPart,
         0LL);
  HvlpReleaseHypercallPage((__int64)v6);
  return HvlpHvToNtStatus(v4);
}
