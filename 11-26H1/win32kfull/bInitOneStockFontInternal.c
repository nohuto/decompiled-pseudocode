/*
 * XREFs of bInitOneStockFontInternal @ 0x1403FB108
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXW4GreRegKey@@H@Z @ 0x14010FDF8 (-FinishStockFontInitInternal@@YAXW4GreRegKey@@H@Z.c)
 *     bInitOneStockFont @ 0x1403FC234 (bInitOneStockFont.c)
 * Callees:
 *     hfontCreate @ 0x140102814 (hfontCreate.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x140102B20 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x14019ACB8 (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140232C6C (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bInitOneStockFontInternal(unsigned __int16 *a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // edi
  int v7; // r12d
  __int64 v9; // rsi
  Gre::Base *v10; // rcx
  __int64 v11; // rbx
  char v12; // al
  Gre::Base *v13; // rax
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  struct PFF *v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 Src[11]; // [rsp+60h] [rbp-A0h] BYREF
  char v19; // [rsp+77h] [rbp-89h]
  char v20; // [rsp+7Ah] [rbp-86h]

  v4 = 0;
  v15 = 0;
  v16 = 0LL;
  v7 = a2;
  v9 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  v17 = *(_QWORD *)(v9 + 20392);
  Gre::Base::Globals(v10);
  memset_0(Src, 0, 0x1A4uLL);
  if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v17, a1, &v15, 2u, &v16, 0LL, 0) )
  {
    if ( v15 )
    {
      if ( v16 )
      {
        v11 = *((_QWORD *)v16 + 28);
        if ( v11 )
        {
          vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v11 + 32));
          if ( a3 == 13 )
          {
            v12 = *(_BYTE *)(v9 + 20352);
            *(_QWORD *)(v9 + 19688) = v11;
            v19 = v12;
          }
          v20 = 2;
          v13 = hfontCreate(Src, v7, 2, 0LL, 72);
          return (unsigned int)bSetStockFont(v13, a3, a4);
        }
      }
    }
  }
  return v4;
}
