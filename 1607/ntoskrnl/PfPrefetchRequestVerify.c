/*
 * XREFs of PfPrefetchRequestVerify @ 0x1403EF4D8
 * Callers:
 *     PfpPrefetchRequest @ 0x1403EE3C8 (PfpPrefetchRequest.c)
 * Callees:
 *     PfPrefetchRequestVerifyRanges @ 0x1403EF3F8 (PfPrefetchRequestVerifyRanges.c)
 *     PfPrefetchRequestVerifyPath @ 0x1403EF734 (PfPrefetchRequestVerifyPath.c)
 *     PfRequestRangeCheck @ 0x1403EF7BC (PfRequestRangeCheck.c)
 *     PfPrefetchRequestPrepareForVerify @ 0x1403EF7F4 (PfPrefetchRequestPrepareForVerify.c)
 */

__int64 __fastcall PfPrefetchRequestVerify(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned int v7; // r11d
  __int64 v8; // rsi
  int v9; // r11d
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // r11d
  __int64 v15; // rsi
  __int64 v16; // rdi
  _DWORD v17[4]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v18[12]; // [rsp+40h] [rbp-40h] BYREF
  char v19; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-2Ch]
  char v21; // [rsp+64h] [rbp-1Ch] BYREF

  if ( (unsigned int)a2 < 0x80 )
    return 1000LL;
  if ( *(_DWORD *)a1 != 13 )
    return 1500LL;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)a2 != (_DWORD)v3 )
    return 2000LL;
  if ( a1 + v3 < a1 )
    return 2500LL;
  if ( (unsigned __int16)*(_DWORD *)(a1 + 28) >= 8u )
    return 3000LL;
  if ( *(_WORD *)(a1 + 30) >= 8u )
    return 3200LL;
  if ( (*(_DWORD *)(a1 + 80) & 0xC0) != 0 )
    return 3400LL;
  if ( *(_BYTE *)(a1 + 81) >= 6u )
    return 3600LL;
  result = PfPrefetchRequestPrepareForVerify(a1, a2, v18);
  if ( !(_DWORD)result )
  {
    if ( (unsigned __int8)PfRequestRangeCheck((unsigned int)v18, *(_DWORD *)(a1 + 32), 40 * *(_DWORD *)(a1 + 8), 8, 1) )
    {
      _mm_lfence();
      v5 = 0LL;
      v6 = a1 + *(unsigned int *)(a1 + 32);
      if ( *(_DWORD *)(a1 + 8) )
      {
        while ( 1 )
        {
          v17[0] = *(_DWORD *)(v6 + 40 * v5 + 32);
          v17[2] = *(_DWORD *)(v6 + 40 * v5 + 24);
          result = PfPrefetchRequestVerifyPath(a1, v18, v17);
          if ( (_DWORD)result )
            break;
          v7 = *(_DWORD *)(v6 + 40 * v5 + 12) >> 1;
          if ( !v7 )
            return 13000LL;
          if ( v7 > v20 )
            return 14000LL;
          v8 = *(unsigned int *)(v6 + 40 * v5 + 16);
          if ( !(unsigned __int8)PfRequestRangeCheck((unsigned int)&v19, *(_DWORD *)(v6 + 40 * v5 + 16), 48 * v7, 8, 1) )
            return 15000LL;
          v10 = 0LL;
          v11 = a1 + v8;
          if ( v9 )
          {
            do
            {
              v12 = v11 + 48 * v10;
              if ( *(_DWORD *)(v12 + 32) || *(_DWORD *)(v12 + 40) )
              {
                result = PfPrefetchRequestVerifyPath(a1, v18, v12 + 32);
                if ( (_DWORD)result )
                  return result;
              }
              result = PfPrefetchRequestVerifyRanges(
                         a1,
                         (__int64)v18,
                         (unsigned int *)(v12 + 16),
                         (*(_BYTE *)v12 & 1) != 0 ? 512 : 4096);
              if ( (_DWORD)result )
                return result;
              v10 = (unsigned int)(v10 + 1);
            }
            while ( (unsigned int)v10 < *(_DWORD *)(v6 + 40 * v5 + 12) >> 1 );
          }
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 8) )
            goto LABEL_22;
        }
      }
      else
      {
LABEL_22:
        v13 = *(unsigned int *)(a1 + 56);
        if ( (unsigned __int8)PfRequestRangeCheck(
                                (unsigned int)&v21,
                                *(_DWORD *)(a1 + 56),
                                40 * *(_DWORD *)(a1 + 20),
                                8,
                                1) )
        {
          v15 = a1 + v13;
          v16 = 0LL;
          if ( v14 )
          {
            while ( 1 )
            {
              result = PfPrefetchRequestVerifyRanges(
                         a1,
                         (__int64)v18,
                         (unsigned int *)(v15 + 8 * ((unsigned int)v16 + 3LL + 4 * v16)),
                         4096);
              if ( (_DWORD)result )
                break;
              v16 = (unsigned int)(v16 + 1);
              if ( (unsigned int)v16 >= *(_DWORD *)(a1 + 20) )
                return 0LL;
            }
          }
          else
          {
            return 0LL;
          }
        }
        else
        {
          return 40000LL;
        }
      }
    }
    else
    {
      return 12500LL;
    }
  }
  return result;
}
