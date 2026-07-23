/*
 * XREFs of IopLiveDumpPopulateBitmapForDump @ 0x1403FFB28
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403FEF9C (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400653BC (RtlSetBitsEx.c)
 *     RtlFindSetBitsEx @ 0x14014CF00 (RtlFindSetBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x14014D2A0 (RtlFindNextForwardRunClearEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmRemoveSystemCacheFromDump @ 0x140218A3C (MmRemoveSystemCacheFromDump.c)
 */

__int64 __fastcall IopLiveDumpPopulateBitmapForDump(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int64 v2; // rsi
  __int64 result; // rax
  _RTL_BITMAP_EX *v5; // r14
  ULONG64 SetBits; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG64 v16; // [rsp+B0h] [rbp+48h] BYREF
  unsigned __int64 v17; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 NextForwardRunClear; // [rsp+C0h] [rbp+58h]
  ULONG64 v19; // [rsp+C8h] [rbp+60h]

  v1 = a1 + 368;
  v2 = *(_QWORD *)(a1 + 368);
  v19 = v2;
  memset(&v15[1], 0, 0x20uLL);
  v15[3] = 0LL;
  v15[0] = 0LL;
  LODWORD(v15[4]) |= 1u;
  v15[1] = IoFreeDumpRange;
  v15[2] = a1 + 424;
  result = MmRemoveSystemCacheFromDump((__int64)v15);
  v5 = (_RTL_BITMAP_EX *)(a1 + 424);
  if ( a1 != -424 )
  {
    do
    {
      SetBits = RtlFindSetBitsEx(v5, 1uLL, 0LL);
      if ( SetBits != -1LL )
      {
        do
        {
          NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v5, SetBits, &v17);
          if ( NextForwardRunClear )
            v2 = v17;
          v7 = v2 - SetBits;
          if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
          {
            RtlSetBitsEx(v1, SetBits, v7);
          }
          else
          {
            v8 = *(_QWORD *)(a1 + 376);
            v14[0] = v7 + SetBits;
            v9 = SetBits;
            v14[1] = v8;
            v16 = SetBits;
            do
            {
              v10 = RtlFindNextForwardRunClearEx((__int64)v14, v9, &v16);
              if ( !v10 )
                break;
              v11 = *(_QWORD *)(a1 + 480);
              if ( v10 > v11 )
              {
                *(_DWORD *)(a1 + 80) |= 2u;
                v10 = v11;
              }
              v12 = v16;
              if ( v10 )
              {
                RtlSetBitsEx((__int64)v14, v16, v10);
                *(_QWORD *)(a1 + 480) -= v10;
              }
              result = *(unsigned int *)(a1 + 80);
              if ( (result & 2) != 0 )
                return result;
              v9 = v10 + v12;
              v16 = v9;
            }
            while ( v9 < v7 + SetBits );
            v1 = a1 + 368;
          }
          v13 = v7 + NextForwardRunClear;
          v2 = v19;
          SetBits += v13;
        }
        while ( SetBits < v19 );
      }
      result = a1 + 424;
      if ( v5 == (_RTL_BITMAP_EX *)(a1 + 424) && (result = *(unsigned int *)(a1 + 40), (result & 4) != 0) )
        v5 = (_RTL_BITMAP_EX *)(a1 + 448);
      else
        v5 = 0LL;
    }
    while ( v5 );
  }
  return result;
}
