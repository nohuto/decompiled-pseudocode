/*
 * XREFs of HvlpLpCpuid @ 0x1407CE184
 * Callers:
 *     HvlpDiscoverTopologyAmd @ 0x1407CDD80 (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x1407CE00C (HvlpDiscoverTopologyIntel.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpLpCpuid(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  _DWORD *v13; // rbx
  __int64 v14; // rax
  PHYSICAL_ADDRESS v15; // r8
  _DWORD *v16; // rdi
  PHYSICAL_ADDRESS v17; // rdx
  PHYSICAL_ADDRESS v19[4]; // [rsp+28h] [rbp-60h] BYREF
  PHYSICAL_ADDRESS v20[5]; // [rsp+48h] [rbp-40h] BYREF

  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a4 = _RAX;
    a4[1] = _RBX;
    a4[2] = _RCX;
    a4[3] = _RDX;
  }
  else
  {
    v13 = (_DWORD *)HvlpAcquireHypercallPage(v20, 1, 0LL, 16LL);
    v14 = HvlpAcquireHypercallPage(v19, 2, 0LL, 16LL);
    v15 = v19[3];
    v16 = (_DWORD *)v14;
    v17 = v20[3];
    *v13 = a1;
    v13[1] = 0x10000;
    v13[2] = a2;
    v13[3] = a3;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
      0x100000088LL,
      (PHYSICAL_ADDRESS)v17.QuadPart,
      (PHYSICAL_ADDRESS)v15.QuadPart);
    *a4 = *v16;
    a4[1] = v16[1];
    a4[2] = v16[2];
    a4[3] = v16[3];
    HvlpReleaseHypercallPage((__int64)v19);
    LOBYTE(_RAX) = HvlpReleaseHypercallPage((__int64)v20);
  }
  return _RAX;
}
