/*
 * XREFs of RegisterHvCStates @ 0x1C001A260
 * Callers:
 *     RegisterHvIdleStates @ 0x1C001A1F0 (RegisterHvIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     DecodeAcpi2CState @ 0x1C0015380 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHvCStates(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v3; // rdi
  __int64 *PoolWithTag; // rax
  int v5; // ebx
  unsigned __int8 v6; // r15
  unsigned int v7; // edx
  unsigned int i; // ebx
  __int64 v9; // r10
  char v10; // cl
  __int64 j; // r8
  char v12; // cl
  unsigned int *v13; // r8
  __int64 v14; // rdx
  _DWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-28h]
  __int64 v18[2]; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+50h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 472);
  v3 = 0LL;
  if ( !v1 || !*(_DWORD *)v1 )
    goto LABEL_33;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x188uLL, 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x188uLL);
  v6 = 1;
  v16[1] = *(_DWORD *)(a1 + 48);
  v16[0] = 42;
  v17 = v3;
  if ( *(_BYTE *)(v1 + 16) != 1 )
  {
    *(__int64 *)((char *)v3 + 20) = 0LL;
    *((_DWORD *)v3 + 4) = 1;
    v18[1] = 0x100000000LL;
    v18[0] = 127LL;
    v19 = 0;
    DecodeAcpi2CState(a1, v18, v3 + 1, 0LL, 0LL);
    ++*(_DWORD *)v3;
  }
  v7 = *(_DWORD *)v1;
  for ( i = 0; i < *(_DWORD *)v1; ++v6 )
  {
    if ( v6 > 3u )
      break;
    v9 = *(unsigned int *)v3;
    if ( (unsigned int)v9 >= 0x10 )
      break;
    v10 = *(_BYTE *)(v1 + 20LL * i + 16);
    if ( (unsigned __int8)v10 > 3u )
      v10 = 3;
    if ( v10 == v6 )
    {
      for ( j = i + 1; (unsigned int)j < v7; j = (unsigned int)(j + 1) )
      {
        v12 = *(_BYTE *)(v1 + 20 * j + 16);
        if ( (unsigned __int8)v12 > 3u )
          v12 = 3;
        if ( v12 != v6 || *(_DWORD *)(v1 + 20 * j + 20) >= *(_DWORD *)(v1 + 20 * (i + 1LL)) )
          break;
        ++i;
      }
      v13 = (unsigned int *)&v3[2 * v9 + 1 + v9];
      v13[2] = v6;
      v14 = v1 + 4 * (i + 4LL * i + 1);
      v13[3] = *(unsigned __int16 *)(v14 + 14);
      v13[4] = *(_DWORD *)(v14 + 16);
      if ( (int)DecodeAcpi2CState(a1, (__int64 *)v14, (__int64 *)v13, 0LL, 0LL) < 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 8u);
      else
        ++*(_DWORD *)v3;
    }
    else
    {
      --i;
    }
    v7 = *(_DWORD *)v1;
    ++i;
  }
  if ( *(_DWORD *)v3 )
  {
    if ( qword_1C0009578 )
      v5 = ((__int64 (__fastcall *)(_DWORD *))qword_1C00095E0)(v16);
    else
      v5 = -1073741822;
    if ( v5 == -1073741637 )
      v5 = 0;
    if ( v5 >= 0 )
      v5 = 0;
  }
  else
  {
LABEL_33:
    v5 = -1073741823;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)v5;
}
