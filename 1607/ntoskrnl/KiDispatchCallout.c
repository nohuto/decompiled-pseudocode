/*
 * XREFs of KiDispatchCallout @ 0x1400B2D88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiDispatchCallout(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // r11d
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 *v9; // rdx
  unsigned __int64 v10; // r10
  _QWORD *v11; // rbx
  __int64 *v12; // rcx
  char v13; // al
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  char v16; // r8
  char v17; // cl
  __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // r8
  __int64 result; // rax
  __int64 v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h]
  unsigned __int64 retaddr; // [rsp+48h] [rbp+18h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp+20h]
  __int64 v26; // [rsp+50h] [rbp+20h]

  v4 = *a4;
  *(_QWORD *)(a1 + 72) = a1 ^ *a4 ^ retaddr;
  *(_QWORD *)(a1 + 56) = v4 ^ (unsigned __int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  v22 = 0xC07020D030E080BLL;
  retaddr = 0LL;
  v7 = 16LL;
  v8 = *(_QWORD *)(v4 + 32) ^ *(_QWORD *)(v4 + 64);
  v9 = &v22;
  v10 = v8 | 0xFFFF800000000000uLL;
  v23 = 0x900040A0F050106LL;
  v11 = (_QWORD *)v10;
  v12 = &v22;
  v25 = __ROR8__(v10, v10 & 0x3F);
  do
  {
    v13 = *(_BYTE *)v12;
    v12 = (__int64 *)((char *)v12 + 1);
    *(_BYTE *)v9 = v13 ^ 0xB;
    v9 = (__int64 *)((char *)v9 + 1);
    --v7;
  }
  while ( v7 );
  v14 = v25;
  v15 = 0LL;
  do
  {
    v16 = *v11 & 0x3F;
    v17 = ~(unsigned __int8)*v11 & 0x3F;
    *v11 = v15 + (KiWaitAlways ^ _byteswap_uint64(v14 ^ __ROL8__(KiWaitNever ^ *v11, KiWaitNever)));
    v18 = __ROR8__(v6 * (200 - v6), v17);
    v19 = v16;
    v20 = 16LL;
    v14 = v10 + __ROL8__(v18 ^ v14, v19);
    do
    {
      *v11 = __ROR8__(*((unsigned __int8 *)&v22 + (*(_BYTE *)v11 & 0xF)) | *v11 & 0xFFFFFFFFFFFFFFF0uLL, 4);
      --v20;
    }
    while ( v20 );
    ++v11;
    ++v6;
    v15 += v10;
  }
  while ( v6 < 0x19 );
  v26 = *(_QWORD *)v10 ^ 0x85131481131482ELL;
  *(_DWORD *)v10 = -1390710795;
  *(_DWORD *)v10 ^= 0xBC2A27DB;
  ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD, __int64, __int64))v10)(v10, v26, 0LL, 0LL, v22, v23);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
