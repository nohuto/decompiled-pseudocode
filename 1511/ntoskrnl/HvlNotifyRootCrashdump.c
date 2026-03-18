/*
 * XREFs of HvlNotifyRootCrashdump @ 0x1401B0CAC
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x1401B0D54 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1401B0EDC (HvlResumeFromRootCrashdump.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401AEBD8 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlNotifyRootCrashdump(int a1)
{
  char result; // al
  _DWORD *v3; // rax
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  result = HvlpRootFlags;
  if ( (HvlpRootFlags & 4) != 0 )
  {
    v3 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 8LL);
    *v3 = 2;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v3[1] = 2;
      }
      else
      {
        if ( a1 != 2 )
          return HvlpReleaseHypercallPage((__int64)v4);
        v3[1] = 3;
      }
    }
    else
    {
      v3[1] = 1;
    }
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(135LL, (PHYSICAL_ADDRESS)v4[3].QuadPart, 0LL);
    return HvlpReleaseHypercallPage((__int64)v4);
  }
  return result;
}
