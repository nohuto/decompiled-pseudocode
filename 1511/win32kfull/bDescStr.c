/*
 * XREFs of bDescStr @ 0x1C01035F4
 * Callers:
 *     vtfdQueryFontFile @ 0x1C010EF80 (vtfdQueryFontFile.c)
 *     bBmfdLoadFont @ 0x1C011F62C (bBmfdLoadFont.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall bDescStr(__int64 a1, unsigned __int64 a2, void *a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  char *v9; // rax
  _BYTE *v10; // rdx
  int v11; // ebx

  if ( a2 >= 0x40 && *(_WORD *)a1 == 23117 )
  {
    v5 = *(unsigned __int8 *)(a1 + 60) | (*(unsigned __int8 *)(a1 + 63) << 24) | (*(unsigned __int16 *)(a1 + 61) << 8);
    v6 = *(unsigned __int8 *)(a1 + 60) | (*(unsigned __int8 *)(a1 + 63) << 24) | (*(unsigned __int16 *)(a1 + 61) << 8);
    if ( a2 >= v6
      && a2 - v6 >= 0x40
      && (*(unsigned __int8 *)(v6 + a1) | (*(unsigned __int8 *)(v5 + a1 + 1) << 8)) == 0x454E )
    {
      v7 = *(unsigned __int8 *)(v6 + a1 + 44) | (*(unsigned __int8 *)(v6 + a1 + 47) << 24) | (*(unsigned __int16 *)(v6 + a1 + 45) << 8);
      if ( v7 <= a2 - 1 )
      {
        v8 = *(unsigned __int8 *)(v7 + a1);
        if ( *(_BYTE *)(v7 + a1) )
        {
          if ( a2 >= (unsigned int)(v8 + 1) && v7 <= a2 - v8 - 1 )
          {
            memmove(a3, (const void *)(v7 + a1 + 1), *(unsigned __int8 *)(v7 + a1));
            *((_BYTE *)a3 + v8) = 0;
            v9 = strchr((const char *)a3, 58);
            if ( !v9 )
              return 1LL;
            v10 = v9 + 1;
            v11 = (_DWORD)a3 - ((_DWORD)v9 + 1) + v8;
            if ( v11 )
            {
              do
              {
                if ( *v10 != 32 )
                  break;
                ++v10;
                --v11;
              }
              while ( v11 );
              if ( v11 )
              {
                memmove(a3, v10, (unsigned int)(v11 + 1));
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
