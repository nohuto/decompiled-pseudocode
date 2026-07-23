/*
 * XREFs of HvlpDetectHypervisorSchedulerType @ 0x1401C1170
 * Callers:
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x140231E94 (HvcallInitiateHypercall.c)
 */

char HvlpDetectHypervisorSchedulerType()
{
  _DWORD *v0; // rbx
  __int64 v1; // rax
  PHYSICAL_ADDRESS v2; // r8
  PHYSICAL_ADDRESS v3; // rdx
  int *v4; // rdi
  PHYSICAL_ADDRESS v6[4]; // [rsp+20h] [rbp-878h] BYREF
  PHYSICAL_ADDRESS v7[4]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v8[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v9[2064]; // [rsp+70h] [rbp-828h] BYREF

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v7, 1, (__int64)v8, 8LL);
  v1 = HvlpAcquireHypercallPage(v6, 2, (__int64)v9, 1032LL);
  v2 = v6[3];
  v3 = v7[3];
  v4 = (int *)v1;
  *v0 = 15;
  if ( !(unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallInitiateHypercall)(
                            123LL,
                            (PHYSICAL_ADDRESS)v3.QuadPart,
                            (PHYSICAL_ADDRESS)v2.QuadPart) )
    HvlpSchedulerType = *v4;
  HvlpReleaseHypercallPage((__int64)v6);
  return HvlpReleaseHypercallPage((__int64)v7);
}
