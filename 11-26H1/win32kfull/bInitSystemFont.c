/*
 * XREFs of bInitSystemFont @ 0x1403FA27C
 * Callers:
 *     bInitStockFontsInternal @ 0x1403FBDC8 (bInitStockFontsInternal.c)
 * Callees:
 *     hfontCreate @ 0x140102814 (hfontCreate.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x140102B20 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x14019ACB8 (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140232C6C (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bInitSystemFont(unsigned __int16 *a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // r14
  int v8; // r11d
  __int64 v9; // rdi
  unsigned int i; // r8d
  __int64 v11; // rax
  __int64 v12; // r10
  int v13; // edx
  Gre::Base *v14; // rax
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  struct PFF *v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD Src[6]; // [rsp+60h] [rbp-A0h] BYREF
  char v20; // [rsp+7Ah] [rbp-86h]

  v4 = 0;
  v16 = 0;
  memset_0(Src, 0, 0x1A4uLL);
  if ( a1 )
  {
    if ( *a1 )
    {
      if ( a2 )
      {
        v17 = 0LL;
        v7 = *(_QWORD *)(W32GetSessionState(v6, v5) + 96);
        v18 = *(_QWORD *)(v7 + 20392);
        if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v18, a1, &v16, 2u, &v17, 0LL, 0) )
        {
          if ( v16 && v17 )
          {
            v8 = 0x7FFFFFFF;
            v9 = 0LL;
            for ( i = 0; i < v16; ++i )
            {
              v11 = *((_QWORD *)v17 + i + 28);
              if ( v11 )
              {
                v12 = *(_QWORD *)(v11 + 32);
                if ( (*(_DWORD *)(v12 + 48) & 0x3000010) != 0 )
                {
                  v9 = *((_QWORD *)v17 + i + 28);
                  goto LABEL_17;
                }
                v13 = a2 - *(__int16 *)(v12 + 62) - *(__int16 *)(v12 + 60);
                if ( v13 >= 0 && v13 < v8 )
                {
                  v8 = a2 - *(__int16 *)(v12 + 62) - *(__int16 *)(v12 + 60);
                  v9 = *((_QWORD *)v17 + i + 28);
                  if ( !v13 )
                    goto LABEL_17;
                }
              }
            }
            if ( !v9 )
              return v4;
LABEL_17:
            vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v9 + 32));
            if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 48LL) & 0x3000010) != 0 )
            {
              Src[0] = a2;
              Src[1] = 0;
            }
            *(_QWORD *)(v7 + 19688) = v9;
            v20 = 2;
            v14 = hfontCreate((unsigned __int16 *)Src, 1, 2, 0LL, 72);
            return (unsigned int)bSetStockFont(v14, 13, 0);
          }
        }
      }
    }
  }
  return v4;
}
