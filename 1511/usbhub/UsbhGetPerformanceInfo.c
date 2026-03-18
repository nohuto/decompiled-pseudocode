/*
 * XREFs of UsbhGetPerformanceInfo @ 0x1C004DEFC
 * Callers:
 *     UsbhPdoQueryWmiDataBlock @ 0x1C004E080 (UsbhPdoQueryWmiDataBlock.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029180 (memset.c)
 */

__int64 __fastcall UsbhGetPerformanceInfo(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _DWORD *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax
  __int64 (__fastcall *v13)(_QWORD, __int64, _DWORD *, __int64, _DWORD *); // r10
  __int64 result; // rax
  unsigned int v15; // esi
  int v16; // ecx
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  int v19; // eax
  int v20; // ecx
  _DWORD v21[4]; // [rsp+30h] [rbp-51h] BYREF
  _DWORD v22[10]; // [rsp+40h] [rbp-41h] BYREF
  __int128 v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+80h] [rbp-1h]
  int v26; // [rsp+84h] [rbp+3h]
  int v27; // [rsp+88h] [rbp+7h]
  int v28; // [rsp+8Ch] [rbp+Bh]
  int v29; // [rsp+90h] [rbp+Fh]
  int v30; // [rsp+94h] [rbp+13h]

  v7 = PdoExt(a1, (__int64)a2, a3, (__int64)a4);
  v8 = *((_QWORD *)v7 + 147);
  v21[0] = 0;
  v22[0] = 0;
  v12 = FdoExt(v8, v9, v10, v11);
  v13 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, __int64, _DWORD *))*((_QWORD *)v12 + 555);
  if ( !v13 )
  {
    result = 3221225474LL;
LABEL_3:
    *a4 = 0;
    return result;
  }
  result = v13(*((_QWORD *)v12 + 529), a5, v22, 88LL, v21);
  v15 = result;
  if ( (int)result < 0 || v21[0] != 88 )
    goto LABEL_3;
  memset(a2, 0, 0xE4uLL);
  v16 = v22[2];
  v17 = v23;
  a2[1] = v22[4];
  v18 = v24;
  a2[5] = v22[5];
  a2[3] = v22[8];
  a2[7] = v22[9];
  a2[2] = v22[6];
  a2[6] = v22[7];
  a2[14] = v25;
  a2[15] = v26;
  a2[16] = v27;
  a2[50] = v30;
  a2[49] = v29;
  v19 = v28;
  *a2 = v16;
  v20 = v22[3];
  a2[48] = v19;
  a2[4] = v20;
  *((_OWORD *)a2 + 2) = v17;
  *((_QWORD *)a2 + 6) = v18;
  *(_OWORD *)(a2 + 17) = *(_OWORD *)((char *)v7 + 2418);
  *(_OWORD *)(a2 + 21) = *(_OWORD *)((char *)v7 + 2434);
  *(_OWORD *)(a2 + 25) = *(_OWORD *)((char *)v7 + 2450);
  *(_OWORD *)(a2 + 29) = *(_OWORD *)((char *)v7 + 2466);
  *(_OWORD *)(a2 + 33) = *(_OWORD *)((char *)v7 + 2482);
  a2[47] = v7[290];
  result = v15;
  *a4 = 228;
  return result;
}
