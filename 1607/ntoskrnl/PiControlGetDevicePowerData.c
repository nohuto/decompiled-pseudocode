/*
 * XREFs of PiControlGetDevicePowerData @ 0x14064A2E8
 * Callers:
 *     PiControlGetPropertyData @ 0x1403F2E48 (PiControlGetPropertyData.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14000932C (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PopLockGetDoDevicePowerState @ 0x140205B08 (PopLockGetDoDevicePowerState.c)
 *     PpIrpQueryCapabilities @ 0x140512E24 (PpIrpQueryCapabilities.c)
 */

__int64 __fastcall PiControlGetDevicePowerData(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  size_t v6; // r15
  __int64 result; // rax
  int DoDevicePowerState; // eax
  int v11; // ecx
  int v12; // r9d
  __int64 v13; // r10
  int v14; // edx
  int i; // r8d
  int v16; // edx
  int v17; // edx
  int v18; // edx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 Src; // [rsp+20h] [rbp-71h] BYREF
  __m256i v22; // [rsp+30h] [rbp-61h]
  __int64 v23; // [rsp+50h] [rbp-41h]
  int v24; // [rsp+60h] [rbp-31h] BYREF
  int v25; // [rsp+64h] [rbp-2Dh]
  __int128 v26; // [rsp+70h] [rbp-21h]
  __int64 v27; // [rsp+80h] [rbp-11h]
  int v28; // [rsp+88h] [rbp-9h]
  int v29; // [rsp+8Ch] [rbp-5h]
  int v30; // [rsp+90h] [rbp-1h]
  int v31; // [rsp+94h] [rbp+3h]
  __int64 v32; // [rsp+98h] [rbp+7h]

  v5 = 0;
  v6 = a3;
  LODWORD(Src) = 56;
  *a5 = 0;
  if ( a3 < 4 )
  {
    result = 2147483653LL;
    goto LABEL_57;
  }
  if ( (int)PpIrpQueryCapabilities(*(struct _DEVICE_OBJECT **)(a1 + 32), &v24) < 0 )
    return 3221225486LL;
  if ( PipIsDevNodeDNStarted(a1) )
  {
    DoDevicePowerState = PopLockGetDoDevicePowerState(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 312LL));
    if ( !DoDevicePowerState )
      DoDevicePowerState = 1;
    DWORD1(Src) = DoDevicePowerState;
  }
  else
  {
    DWORD1(Src) = 4;
  }
  v11 = 9;
  if ( (v25 & 1) != 0 )
    v11 = 11;
  v12 = 2;
  DWORD2(Src) = v11;
  if ( (v25 & 2) != 0 )
  {
    v11 |= 4u;
    DWORD2(Src) = v11;
  }
  if ( (v25 & 0x400) != 0 )
  {
    v11 |= 0x10u;
    DWORD2(Src) = v11;
  }
  if ( (v25 & 0x800) != 0 )
  {
    v11 |= 0x20u;
    DWORD2(Src) = v11;
  }
  if ( (v25 & 0x1000) != 0 )
  {
    v11 |= 0x40u;
    DWORD2(Src) = v11;
  }
  if ( (v25 & 0x2000) != 0 )
  {
    v11 |= 0x80u;
    DWORD2(Src) = v11;
  }
  if ( (v25 & 0x10000) != 0 )
  {
    v11 |= 0x100u;
    DWORD2(Src) = v11;
  }
  v13 = 2LL;
  v14 = v30;
  i = v29;
  LODWORD(v23) = v28;
  HIDWORD(Src) = v31;
  v22.m256i_i64[0] = v32;
  *(_OWORD *)&v22.m256i_u64[1] = v26;
  v22.m256i_i64[3] = v27;
  do
  {
    v16 = v14 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            goto LABEL_34;
          v11 |= 0x80u;
        }
        else
        {
          v11 |= 0x44u;
        }
      }
      else
      {
        v11 |= 0x22u;
      }
    }
    else
    {
      v11 |= 0x10u;
    }
    DWORD2(Src) = v11;
LABEL_34:
    if ( v29 )
      v14 = *((_DWORD *)&v26 + v29);
    else
      v14 = 0;
    --v13;
  }
  while ( v13 );
  if ( (v11 & 0x80) != 0 )
  {
    v12 = 4;
  }
  else if ( (v11 & 0x40) != 0 )
  {
    v12 = 3;
  }
  else if ( (v11 & 0x20) == 0 )
  {
    v12 = (BYTE8(Src) >> 4) & 1;
  }
  if ( !v29 && v12 )
  {
    for ( i = 4; i >= 1; --i )
    {
      if ( DWORD2(v26) && SDWORD2(v26) <= (__int64)v12 )
        break;
    }
  }
  HIDWORD(v23) = i;
  if ( (unsigned int)v6 >= 0x38 )
  {
    if ( a4 )
    {
      v19 = *(_OWORD *)v22.m256i_i8;
      *a4 = Src;
      v20 = *(_OWORD *)&v22.m256i_u64[2];
      a4[1] = v19;
      *(_QWORD *)&v19 = v23;
      a4[2] = v20;
      *((_QWORD *)a4 + 6) = v19;
    }
  }
  else
  {
    if ( a4 )
      memmove(a4, &Src, v6);
    v5 = -2147483643;
  }
  result = v5;
LABEL_57:
  *a5 = 56;
  return result;
}
