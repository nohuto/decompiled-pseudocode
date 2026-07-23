/*
 * XREFs of HvlLpReadCpuid @ 0x1401BCDF8
 * Callers:
 *     <none>
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadCpuid(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v6; // r12d
  _DWORD *v11; // rbx
  __int64 v12; // rax
  PHYSICAL_ADDRESS v13; // r8
  _DWORD *v14; // r14
  PHYSICAL_ADDRESS v15; // rdx
  PHYSICAL_ADDRESS v17[4]; // [rsp+20h] [rbp-68h] BYREF
  PHYSICAL_ADDRESS v18[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0;
  v11 = (_DWORD *)HvlpAcquireHypercallPage(v17, 1, 0LL, 16LL);
  v12 = HvlpAcquireHypercallPage(v18, 2, 0LL, 16LL);
  v13 = v18[3];
  v14 = (_DWORD *)v12;
  v15 = v17[3];
  *v11 = a1;
  v11[1] = 0x10000;
  v11[2] = a2;
  v11[3] = 0;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           0x100000088LL,
                           (PHYSICAL_ADDRESS)v15.QuadPart,
                           (PHYSICAL_ADDRESS)v13.QuadPart) )
    v6 = -1073741823;
  *a3 = *v14;
  *a4 = v14[1];
  *a5 = v14[2];
  *a6 = v14[3];
  HvlpReleaseHypercallPage((__int64)v17);
  HvlpReleaseHypercallPage((__int64)v18);
  return v6;
}
