/*
 * XREFs of HvlSvmGetDeviceCapabilities @ 0x1401BE224
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1401BFEA4 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmGetDeviceCapabilities(int a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  PHYSICAL_ADDRESS v6; // r8
  _DWORD *v7; // r14
  PHYSICAL_ADDRESS v8; // rdx
  char v9; // cl
  unsigned __int16 v10; // bx
  int v11; // edx
  int v12; // ecx
  PHYSICAL_ADDRESS v14[4]; // [rsp+20h] [rbp-A8h] BYREF
  PHYSICAL_ADDRESS v15[4]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v16[32]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+80h] [rbp-48h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = HvlpAcquireHypercallPage(v14, 1, (__int64)v16, 16LL);
  v5 = HvlpAcquireHypercallPage(v15, 2, (__int64)v17, 16LL);
  v6 = v15[3];
  v7 = (_DWORD *)v5;
  v8 = v14[3];
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_QWORD *)v4 = 0LL;
  v9 = *(_BYTE *)(v4 + 4) & 0xFD;
  *(_WORD *)v4 = a1;
  *(_BYTE *)(v4 + 4) = v9 | 1;
  *(_WORD *)(v4 + 2) = HIWORD(a1);
  *(_DWORD *)(v4 + 8) = 0;
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
          170LL,
          (PHYSICAL_ADDRESS)v8.QuadPart,
          (PHYSICAL_ADDRESS)v6.QuadPart);
  if ( !v10 )
  {
    *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ *v7) & 1;
    v11 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ *v7) & 2;
    *(_DWORD *)a2 = v11;
    v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)*v7) & 4;
    *(_DWORD *)a2 = v12;
    *(_DWORD *)a2 = *v7 ^ (v12 ^ *v7) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 4) = v7[1];
    *(_DWORD *)(a2 + 8) = v7[2];
  }
  HvlpReleaseHypercallPage((__int64)v14);
  HvlpReleaseHypercallPage((__int64)v15);
  return HvlpHvToNtStatus(v10);
}
