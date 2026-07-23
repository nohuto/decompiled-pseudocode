/*
 * XREFs of PnpFixupID @ 0x140511778
 * Callers:
 *     PnpQueryID @ 0x140511600 (PnpQueryID.c)
 * Callees:
 *     PnpLogEvent @ 0x14062DB4C (PnpLogEvent.c)
 */

__int64 __fastcall PnpFixupID(int *a1, unsigned int a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned int v7; // r10d
  int *v8; // rdi
  int *v9; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int16 v12; // cx
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  int v16; // [rsp+20h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-10h] BYREF
  const wchar_t *v18; // [rsp+38h] [rbp-8h]
  int v19; // [rsp+68h] [rbp+28h] BYREF

  v7 = 0;
  v8 = 0LL;
  v9 = a1;
  v10 = 2LL * a2;
  v11 = (unsigned __int64)a1 + v10;
  if ( a1 < (int *)((char *)a1 + v10) )
  {
    while ( 1 )
    {
      v12 = *(_WORD *)v9;
      if ( *(_WORD *)v9 )
      {
        if ( v12 == 32 )
        {
          *(_WORD *)v9 = 95;
        }
        else
        {
          if ( (unsigned __int16)(v12 - 32) > 0x5Fu || v12 == 44 )
          {
            v14 = a5;
            if ( !a5 )
              return 0LL;
            v17 = 2359330;
            v15 = L"invalid character";
            v16 = 2;
LABEL_25:
            v18 = v15;
            PnpLogEvent(v14, &v17, 3221487672LL, v9, v16);
            return 0LL;
          }
          if ( v12 == 92 )
          {
            v19 = ++v7;
            if ( v7 > a4 )
            {
              v14 = a5;
              if ( !a5 )
                return 0LL;
              v17 = 2621478;
              v15 = L"too many separators";
              v16 = 4;
              v9 = &v19;
              goto LABEL_25;
            }
          }
        }
      }
      else
      {
        if ( !a3 || v8 && v9 == (int *)((char *)v8 + 2) )
        {
LABEL_8:
          if ( (unsigned __int64)v9 < v11 && (a4 == -1 || v7 == a4) )
            return (unsigned int)(((char *)v9 - (char *)a1) >> 1) + 1;
          break;
        }
        v11 += v10;
        v8 = v9;
      }
      v9 = (int *)((char *)v9 + 2);
      if ( (unsigned __int64)v9 >= v11 )
        goto LABEL_8;
    }
  }
  v14 = a5;
  if ( a5 )
  {
    v17 = 7471216;
    v15 = L"not terminated, too long or invalid number of separators";
    v16 = 0;
    v9 = 0LL;
    goto LABEL_25;
  }
  return 0LL;
}
