/*
 * XREFs of HvlSetHpetConfig @ 0x1401BDA48
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetHpetConfig(__int64 a1, int a2, __int64 a3, char a4, _OWORD *a5)
{
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int16 v12; // bx
  __int64 result; // rax
  _DWORD *v14; // rbx
  __int64 v15; // rax
  PHYSICAL_ADDRESS v16; // r8
  __int64 v17; // rdx
  _OWORD *v18; // rdi
  PHYSICAL_ADDRESS v19[3]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h]
  PHYSICAL_ADDRESS v21[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v23[2064]; // [rsp+78h] [rbp-90h] BYREF

  v9 = 0;
  while ( 1 )
  {
    v10 = HvlpAcquireHypercallPage(v19, 1, (__int64)v22, 40LL);
    v11 = v20;
    *(_DWORD *)v10 = 6;
    *(_QWORD *)(v10 + 8) = a1;
    *(_DWORD *)(v10 + 16) = a2;
    *(_QWORD *)(v10 + 24) = a3;
    *(_BYTE *)(v10 + 32) = a4;
    v12 = HvcallCodeVa(111LL, v11, 0LL);
    HvlpReleaseHypercallPage((__int64)v19);
    if ( v12 != 11 )
      break;
    result = HvlpDepositPages(0);
    if ( (int)result < 0 )
      goto LABEL_8;
  }
  if ( v12 )
    return 3221225473LL;
  result = 0LL;
LABEL_8:
  if ( (int)result >= 0 )
  {
    v14 = (_DWORD *)HvlpAcquireHypercallPage(v19, 1, (__int64)v22, 8LL);
    v15 = HvlpAcquireHypercallPage(v21, 2, (__int64)v23, 1032LL);
    v16 = v21[3];
    v17 = v20;
    v18 = (_OWORD *)v15;
    *v14 = 7;
    if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                             123LL,
                             v17,
                             (PHYSICAL_ADDRESS)v16.QuadPart) )
      v9 = -1073741823;
    else
      *a5 = *v18;
    HvlpReleaseHypercallPage((__int64)v19);
    HvlpReleaseHypercallPage((__int64)v21);
    return v9;
  }
  return result;
}
