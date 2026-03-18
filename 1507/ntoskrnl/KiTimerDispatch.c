/*
 * XREFs of KiTimerDispatch @ 0x140286F88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTimerDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 *v3; // rdx
  unsigned __int64 v4; // r10
  _QWORD *v5; // r11
  __int64 *v6; // rcx
  unsigned int v7; // r9d
  __int64 v8; // r8
  char v9; // al
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  char v12; // r8
  char v13; // cl
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h]
  unsigned __int64 v21; // [rsp+48h] [rbp+10h]

  v2 = a2 ^ *(_QWORD *)(a1 + 64);
  v3 = &v19;
  v19 = 0x70C090608050300LL;
  v4 = v2 | 0xFFFF800000000000uLL;
  v20 = 0x20B0F01040E0A0DLL;
  v5 = (_QWORD *)v4;
  v6 = &v19;
  v7 = 0;
  v21 = __ROR8__(v4, v4 & 0x3F);
  v8 = 16LL;
  do
  {
    v9 = *(_BYTE *)v6;
    v6 = (__int64 *)((char *)v6 + 1);
    *(_BYTE *)v3 = v9;
    v3 = (__int64 *)((char *)v3 + 1);
    --v8;
  }
  while ( v8 );
  v10 = v21;
  v11 = 0LL;
  do
  {
    v12 = *v5 & 0x3F;
    v13 = ~(unsigned __int8)*v5 & 0x3F;
    *v5 = v11 + (v10 ^ *v5);
    v14 = __ROR8__(v7 * (200 - v7), v13);
    v15 = v12;
    v16 = 16LL;
    v10 = v4 + __ROL8__(v14 ^ v10, v15);
    do
    {
      *v5 = __ROR8__(*((unsigned __int8 *)&v19 + (*(_BYTE *)v5 & 0xF)) | *v5 & 0xFFFFFFFFFFFFFFF0uLL, 4);
      --v16;
    }
    while ( v16 );
    ++v5;
    ++v7;
    v11 += v4;
  }
  while ( v7 < 0x19 );
  v17 = *(_QWORD *)v4 ^ 0x85131481131482ELL;
  *(_DWORD *)v4 = 288442414;
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD, __int64, __int64))v4)(
           v4,
           v17,
           0LL,
           0LL,
           v19,
           v20);
}
