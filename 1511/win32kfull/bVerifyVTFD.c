/*
 * XREFs of bVerifyVTFD @ 0x1C0114FF4
 * Callers:
 *     bVtfdLoadFont @ 0x1C0115284 (bVtfdLoadFont.c)
 * Callees:
 *     bMappedViewStrlen @ 0x1C011FC50 (bMappedViewStrlen.c)
 */

__int64 __fastcall bVerifyVTFD(unsigned __int16 **a1)
{
  __int64 v1; // r14
  unsigned __int16 *v2; // r10
  char v3; // r8
  unsigned __int8 v4; // cl
  unsigned int v5; // edx
  unsigned int v6; // r9d
  int v7; // edi
  int v8; // r13d
  unsigned int v9; // edi
  __int16 v10; // r11
  int v11; // r8d
  __int16 v12; // ax
  int v13; // r8d
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // ecx
  unsigned int v20; // ebx
  unsigned int v21; // ebp
  __int64 v22; // r11
  unsigned __int16 v23; // cx
  _BYTE *v24; // rax
  int v26; // [rsp+60h] [rbp+8h] BYREF
  __int64 v27; // [rsp+68h] [rbp+10h]

  v1 = *((unsigned int *)a1 + 3);
  v2 = *a1;
  if ( (unsigned int)v1 >= 0x76 )
  {
    v3 = *((_BYTE *)v2 + 66);
    if ( (v3 & 1) != 0 && ((*v2 - 256) & 0xFFFFFEFF) == 0 )
    {
      v4 = *((_BYTE *)v2 + 113);
      if ( (v4 & 1) == 0 )
      {
        v5 = *((unsigned __int8 *)v2 + 2) | (*((unsigned __int8 *)v2 + 5) << 24) | (*(unsigned __int16 *)((char *)v2 + 3) << 8);
        if ( v5 <= (unsigned int)v1 )
        {
          v6 = v4 | (*((unsigned __int8 *)v2 + 116) << 24) | (v2[57] << 8);
          if ( v6 <= v5 )
          {
            v7 = v2[53];
            v26 = *((unsigned __int8 *)v2 + 105);
            v8 = *((unsigned __int8 *)v2 + 108) << 24;
            v9 = v7 << 8;
            if ( (v9 | v26 | v8) <= v5 && !(v3 & 0x7A | (*((unsigned __int8 *)v2 + 67) << 8)) )
            {
              v10 = v2[37];
              v11 = *((unsigned __int8 *)v2 + 74);
              v12 = *((unsigned __int8 *)v2 + 75) << 8;
              v13 = v10 < 0 ? -(v12 | v11) : v12 | v11;
              if ( v13 <= (*((unsigned __int8 *)v2 + 88) | (__int16)(*((unsigned __int8 *)v2 + 89) << 8))
                && (__int16)v2[38] <= v10 )
              {
                v14 = *((_BYTE *)v2 + 95);
                v15 = *((_BYTE *)v2 + 96);
                if ( v14 <= v15 )
                {
                  v16 = v15 - v14;
                  if ( *((unsigned __int8 *)v2 + 97) <= v16 && *((unsigned __int8 *)v2 + 98) <= v16 )
                  {
                    v17 = v16 + 1;
                    if ( v2[43] )
                    {
                      v18 = 2 * v17;
                      v19 = 2;
                    }
                    else
                    {
                      v18 = 4 * v17;
                      v19 = 4;
                    }
                    if ( v18 * v19 + 117 <= (unsigned int)v1 )
                    {
                      v20 = 0;
                      v21 = 0;
                      v22 = 0LL;
                      if ( v18 < 0 )
                      {
LABEL_28:
                        LOBYTE(v20) = (unsigned int)bMappedViewStrlen(
                                                      v2,
                                                      v1,
                                                      (char *)v2
                                                    + (v9 | (unsigned __int8)v26 | (unsigned __int64)(v8 & 0xFF000000)),
                                                      &v26) != 0;
                        return v20;
                      }
                      v27 = v19;
                      while ( 1 )
                      {
                        v23 = *(unsigned __int16 *)((char *)v2 + v22 + 117);
                        if ( v23 < v21 || v23 + v6 < v23 || v23 + v6 > v5 )
                          break;
                        if ( v22 == v18 )
                          goto LABEL_28;
                        v24 = (char *)v2 + v6 + v23;
                        if ( v24 >= (_BYTE *)v2 + v5 || *v24 != 0x80 )
                          break;
                        v22 += v27;
                        v21 = v23;
                        if ( v22 > v18 )
                          goto LABEL_28;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
