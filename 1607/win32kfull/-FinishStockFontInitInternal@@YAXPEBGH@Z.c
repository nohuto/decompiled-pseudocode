/*
 * XREFs of ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00BAF44
 * Callers:
 *     FinishStockFontInit @ 0x1C00BC170 (FinishStockFontInit.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C005FA64 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0060C84 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GreSetLFONTOwner @ 0x1C00B9170 (GreSetLFONTOwner.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C00BB150 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00BB234 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     bDeleteFont @ 0x1C00BBA90 (bDeleteFont.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     bInitOneStockFontInternal @ 0x1C037D5F4 (bInitOneStockFontInternal.c)
 */

void __fastcall FinishStockFontInitInternal(const unsigned __int16 *a1, int a2)
{
  int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int16 *v6; // rsi
  unsigned __int16 *v7; // rdi
  unsigned int v8; // r9d
  void **v9; // rbx
  int *v10; // r14
  int v11; // r12d
  int v12; // ebp
  HANDLE *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // r8
  int v19; // edi
  HANDLE *v20; // rbx
  void **v21; // [rsp+20h] [rbp-88h]
  PCWSTR SourceString[3]; // [rsp+30h] [rbp-78h]
  _QWORD v23[3]; // [rsp+48h] [rbp-60h] BYREF

  SourceString[0] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  v2 = 0;
  SourceString[1] = a1;
  SourceString[2] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize";
  v4 = 0LL;
  v5 = 0LL;
  do
  {
    if ( !(unsigned int)bOpenKey(SourceString[v5], (PHANDLE)&v23[v4]) )
      v23[v5] = 0LL;
    ++v2;
    ++v5;
    v4 = v2;
  }
  while ( (unsigned __int64)v2 < 3 );
  v6 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v7 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  if ( a2 )
    v9 = gahStockObjects96;
  else
    v9 = gahStockObjects;
  v21 = v9;
  v10 = (int *)&unk_1C02E2E2C;
  v11 = 0;
  do
  {
    v12 = 0;
    v13 = (HANDLE *)v23;
    while ( 1 )
    {
      if ( *v13 )
      {
        if ( v6 )
        {
          if ( v7 )
          {
            if ( bGetRegString(*v13, *(const unsigned __int16 **)(v10 - 3), v6, v8)
              && (int)StringCchCopyW((char *)v7, 260LL, (char *)L"\\SystemRoot\\Fonts\\") >= 0
              && (int)StringCchCatW(v7, v14, (char *)v6) >= 0 )
            {
              LOBYTE(v15) = 10;
              v16 = (unsigned __int64)v9[*v10];
              v17 = v16 & -(__int64)((unsigned int)HmgValidHandle(v16, v15) != 0);
              if ( (unsigned int)bInitOneStockFontInternal(v7) )
                break;
            }
          }
        }
      }
      v9 = v21;
      ++v12;
      ++v13;
      if ( (unsigned __int64)v12 >= 3 )
        goto LABEL_18;
    }
    v9 = v21;
    GreSetLFONTOwner((__int64)v21[*v10], 0, v18);
    if ( v17 )
      bDeleteFont(v17, 1LL);
LABEL_18:
    ++v11;
    v10 += 4;
  }
  while ( (unsigned __int64)v11 < 3 );
  if ( v6 )
    FreeTmpBuffer(v6);
  if ( v7 )
    FreeTmpBuffer(v7);
  v19 = 0;
  v20 = (HANDLE *)v23;
  do
  {
    if ( *v20 )
      ZwClose(*v20);
    ++v19;
    ++v20;
  }
  while ( (unsigned __int64)v19 < 3 );
}
