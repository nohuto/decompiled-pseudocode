/*
 * XREFs of AlpcpValidateAndSetPortAttributes @ 0x14049FA94
 * Callers:
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x14049DAA8 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SeValidateSecurityQos @ 0x140412404 (SeValidateSecurityQos.c)
 */

__int64 __fastcall AlpcpValidateAndSetPortAttributes(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7)
{
  int v8; // r8d
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+28h] [rbp-29h]
  int v16; // [rsp+30h] [rbp-21h] BYREF
  __int64 v17; // [rsp+34h] [rbp-1Dh]
  int v18; // [rsp+3Ch] [rbp-15h]
  __int64 v19; // [rsp+40h] [rbp-11h]
  __int64 v20; // [rsp+48h] [rbp-9h]
  __int64 v21; // [rsp+50h] [rbp-1h]
  __int64 v22; // [rsp+58h] [rbp+7h]
  __int64 v23; // [rsp+60h] [rbp+Fh]
  __int64 v24; // [rsp+68h] [rbp+17h]
  int v25; // [rsp+70h] [rbp+1Fh]

  if ( a2 )
  {
    if ( (unsigned __int64)(*((_QWORD *)a2 + 2) - 40LL) > 0xFFD7 )
      return 3221225485LL;
    v8 = *a2;
    if ( (*a2 & 0x100000) != 0 )
    {
      if ( KeGetCurrentThread()->PreviousMode )
        return 3221225485LL;
    }
    a2[16] &= 0xFFDu;
    *a2 = v8 & 0x3FF0000;
  }
  else
  {
    a2 = &v16;
    v23 = 0LL;
    v20 = 0LL;
    v25 = 0;
    v21 = 0x4000LL;
    v22 = 0x4000LL;
    LOWORD(v15) = 257;
    v18 = v15;
    v13 = 0;
    if ( a7 )
      v13 = 4096;
    v19 = 512LL;
    v16 = v13;
    v24 = 0x20000LL;
    v17 = 12LL;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 1 )
  {
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      if ( a2 == &v16 )
        *a2 |= 0x10000u;
      if ( !a7 )
      {
        v9 = *(_QWORD *)(a3 + 272);
        if ( *((_QWORD *)a2 + 2) <= v9 )
          goto LABEL_13;
LABEL_22:
        *((_QWORD *)a2 + 2) = v9;
        goto LABEL_13;
      }
      *a2 |= 0x20000u;
      if ( a4 )
      {
        *(_QWORD *)(a2 + 1) = *(_QWORD *)a4;
        a2[3] = *(_DWORD *)(a4 + 8);
      }
    }
    else
    {
      *a2 &= ~0x20000u;
      if ( !a7 )
        goto LABEL_13;
    }
    v9 = *(_QWORD *)(a3 + 272);
    goto LABEL_22;
  }
  v14 = *a2 | 0x20000;
  *a2 = v14;
  if ( a7 )
  {
    if ( a5 > LpcLegacyMaxMessageLength )
      return 3221225485LL;
    if ( a6 )
      *a2 = v14 | 0x40000;
    *((_QWORD *)a2 + 2) = a5;
  }
LABEL_13:
  result = SeValidateSecurityQos((__int64)(a2 + 1));
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)(v12 + 256) = *(_OWORD *)v11;
    *(_OWORD *)(v12 + 272) = *(_OWORD *)(v11 + 16);
    *(_OWORD *)(v12 + 288) = *(_OWORD *)(v11 + 32);
    *(_OWORD *)(v12 + 304) = *(_OWORD *)(v11 + 48);
    *(_QWORD *)(v12 + 320) = *(_QWORD *)(v11 + 64);
  }
  return result;
}
