/*
 * XREFs of EtwpTraceIo @ 0x14009F1A8
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     IoGetActivityIdIrp @ 0x14008BA20 (IoGetActivityIdIrp.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpDiskProvTraceDisk @ 0x140226150 (EtwpDiskProvTraceDisk.c)
 */

__int64 __fastcall EtwpTraceIo(int a1, int a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rsi
  unsigned __int16 v6; // r14
  int v7; // eax
  int v8; // edx
  __int64 v9; // rax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  int v16; // eax
  __int128 *v17; // r9
  __int128 v18; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v19[3]; // [rsp+48h] [rbp-19h] BYREF
  int v20; // [rsp+54h] [rbp-Dh]
  __int64 v21; // [rsp+58h] [rbp-9h]
  __int64 v22; // [rsp+60h] [rbp-1h]
  __int64 v23; // [rsp+68h] [rbp+7h]
  __int64 v24; // [rsp+70h] [rbp+Fh]
  int v25; // [rsp+78h] [rbp+17h]
  _DWORD v26[2]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+88h] [rbp+27h]
  __int64 v28; // [rsp+90h] [rbp+2Fh]
  int v29; // [rsp+98h] [rbp+37h]
  _DWORD *v30; // [rsp+A0h] [rbp+3Fh] BYREF
  int v31; // [rsp+A8h] [rbp+47h]
  int v32; // [rsp+ACh] [rbp+4Bh]

  v4 = *(_QWORD *)(a3 + 184);
  v5 = *(_QWORD *)(a3 + 152);
  if ( *(_BYTE *)v4 != 9 )
  {
    v6 = 266;
    if ( *(_BYTE *)v4 != 3 )
      v6 = 267;
    v7 = *(_DWORD *)(a3 + 56);
    v19[0] = a2;
    v8 = *(_DWORD *)(a3 + 16);
    v19[1] = v8;
    v23 = a3;
    v19[2] = v7;
    v21 = *(_QWORD *)(v4 + 24);
    v9 = *(_QWORD *)(v4 + 8);
    v20 = 0;
    v24 = v9;
    if ( v5 )
      v10 = *(_DWORD *)(v5 + 1592);
    else
      v10 = -1;
    v25 = v10;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v20 = 1;
    }
    else
    {
      v11 = a1 & 0xFFFFFF;
      if ( v11 == 5460546 || v11 == 5467492 )
        v20 = 2;
    }
    if ( (v8 & 8) != 0 )
    {
      v15 = *(_QWORD *)(a3 + 24);
      if ( !v15 )
        goto LABEL_16;
      v12 = *(_QWORD *)(v15 + 192);
    }
    else
    {
      v12 = *(_QWORD *)(a3 + 192);
    }
    if ( v12 )
    {
      v22 = *(_QWORD *)(v12 + 24);
LABEL_13:
      v13 = v19;
      v31 = 52;
      goto LABEL_14;
    }
LABEL_16:
    v22 = 0LL;
    goto LABEL_13;
  }
  v6 = 270;
  v26[1] = *(_DWORD *)(a3 + 16);
  v26[0] = a2;
  v27 = *(_QWORD *)(v4 + 8);
  v28 = a3;
  if ( v5 )
    v16 = *(_DWORD *)(v5 + 1592);
  else
    v16 = -1;
  v29 = v16;
  v13 = v26;
  v31 = 28;
LABEL_14:
  v32 = 0;
  v30 = v13;
  result = EtwTraceKernelEvent((int)&v30, 1, 0x100u, v6, 4200451);
  if ( (dword_1402FD520 & 0x100) != 0 )
  {
    v18 = 0uLL;
    if ( (unsigned int)IoGetActivityIdIrp(a3, &v18) )
      v17 = 0LL;
    else
      v17 = &v18;
    return EtwpDiskProvTraceDisk(v6, &v30, v5, v17);
  }
  return result;
}
