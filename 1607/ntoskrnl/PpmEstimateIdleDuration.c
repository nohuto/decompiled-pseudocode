/*
 * XREFs of PpmEstimateIdleDuration @ 0x14013BFC0
 * Callers:
 *     PpmIdleSelectStates @ 0x14013BBF0 (PpmIdleSelectStates.c)
 *     PpmComputeIdleDurationHint @ 0x14013BF1C (PpmComputeIdleDurationHint.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeEstimateClockTickDuration @ 0x14013C120 (KeEstimateClockTickDuration.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmGetIdleConstrainedMask @ 0x1401FF830 (PpmGetIdleConstrainedMask.c)
 */

unsigned __int64 *__fastcall PpmEstimateIdleDuration(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        __int64 a7,
        int *a8)
{
  unsigned __int64 v9; // rdi
  int v13; // r8d
  char v14; // dl
  int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int i; // ecx
  unsigned __int64 v19; // rbx
  ULONG v20; // eax
  unsigned __int64 *result; // rax
  unsigned __int64 v22; // rsi
  __int64 Prcb; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v26; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v27; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v29; // [rsp+58h] [rbp-A8h]
  char v30[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v31; // [rsp+68h] [rbp-98h]

  v9 = -1LL;
  v27 = a5;
  v26 = a6;
  v13 = 8;
  v14 = *(_BYTE *)(*(_QWORD *)(a1 + 23808) + 524LL);
  v15 = 0;
  *a8 = 0;
  if ( *(_BYTE *)(a1 + 33) )
    v15 = 8;
  *a8 = v15;
  if ( a2 )
    *a8 |= 4u;
  LOBYTE(v13) = a2;
  KeEstimateClockTickDuration(a1, v14, v13, a3, (__int64)&v25, a7);
  v16 = *(_DWORD *)(a1 + 11556);
  v17 = 0;
  for ( i = v16; i; v17 += KeMaximumIncrement )
    i >>= 4;
  v19 = v17;
  if ( !a2 && v16 )
  {
    v20 = KeMaximumIncrement / (v16 + 1);
    if ( !v20 )
      v20 = 1;
    v9 = v20;
  }
  if ( v25 <= v9 )
  {
    v9 = v25;
    v19 = v25;
  }
  else
  {
    if ( v25 < v17 )
      v19 = v25;
    *a8 |= 1u;
  }
  if ( PpmIdleCheckIdleDurationExpiration && *(_BYTE *)(a1 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v30) )
  {
    v22 = 0LL;
    v28[1] = v31;
    v28[0] = (unsigned __int16 *)v30;
    v29 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v25, v28) )
    {
      Prcb = KeGetPrcb(v25);
      v24 = *(_QWORD *)(Prcb + 23848);
      if ( v24 != -1LL && v24 > v22 )
        v22 = *(_QWORD *)(Prcb + 23848);
    }
    if ( v22 && a3 + v19 > v22 )
    {
      *a8 |= 0x2000u;
      v19 = v22 > a3 ? (unsigned int)(v22 - a3) : 1LL;
      if ( v19 < v9 )
        v9 = v19;
    }
  }
  if ( v9 < a4 )
  {
    *a8 |= 0x1000u;
    v9 = a4;
    v19 = a4;
  }
  *v26 = v19;
  result = v27;
  *v27 = v9;
  return result;
}
