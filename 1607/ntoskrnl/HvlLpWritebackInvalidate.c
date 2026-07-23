/*
 * XREFs of HvlLpWritebackInvalidate @ 0x1401BD0FC
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWritebackInvalidate(int a1)
{
  unsigned int v1; // esi
  _DWORD *v3; // rbx
  PHYSICAL_ADDRESS v4; // rdx
  PHYSICAL_ADDRESS v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = (_DWORD *)HvlpAcquireHypercallPage(v6, 1, 0LL, 32LL);
  memset(v3, 0, 0x20uLL);
  v4 = v6[3];
  *v3 = a1;
  v3[1] = 65538;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           0x100000089LL,
                           (PHYSICAL_ADDRESS)v4.QuadPart,
                           0LL) )
    v1 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v6);
  return v1;
}
