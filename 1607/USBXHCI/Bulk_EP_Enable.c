/*
 * XREFs of Bulk_EP_Enable @ 0x1C002DDA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C002846C (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall Bulk_EP_Enable(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int v4; // edx
  unsigned int v5; // r11d
  int v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  unsigned int v10; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(v2 + 20) == 3 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    v4 = *(_DWORD *)(a1 + 4) % ((*(unsigned __int8 *)(v3 + 105) + 1) * (*(_WORD *)(v3 + 100) & 0x7FFu));
    if ( v4 )
    {
      v5 = *(_DWORD *)(a1 + 4) - v4;
      *(_DWORD *)(a1 + 4) = v5;
      *(_DWORD *)(a1 + 8) = (v5 + 4095) >> 12;
      v10 = v5;
      v9 = *(_DWORD *)(a1 + 64);
      v8 = *(_DWORD *)(v3 + 144);
      v7 = *(unsigned __int8 *)(v2 + 135);
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL),
        4u,
        0xDu,
        0xBu,
        (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
        v7,
        v8,
        v9,
        v10);
    }
  }
  return 0LL;
}
