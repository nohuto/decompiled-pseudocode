/*
 * XREFs of ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C013DA84
 * Callers:
 *     FinishStockFontInit @ 0x1C013D0D0 (FinishStockFontInit.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0031DE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     bDeleteFont @ 0x1C00D7900 (bDeleteFont.c)
 *     GreSetLFONTOwner @ 0x1C00FCA30 (GreSetLFONTOwner.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C013DA1C (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C013DC8C (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C013F820 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     bInitOneStockFontInternal @ 0x1C0378B8C (bInitOneStockFontInternal.c)
 */

void __fastcall FinishStockFontInitInternal(const unsigned __int16 *a1, int a2)
{
  int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int16 *v6; // rsi
  void * near *v7; // rbx
  int *v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int16 *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r13d
  int v14; // ebp
  HANDLE *v15; // r15
  unsigned __int64 v16; // rbx
  struct HOBJ__ *v17; // r12
  int v18; // edi
  HANDLE *v19; // rbx
  void **v20; // [rsp+28h] [rbp-80h]
  PCWSTR SourceString[3]; // [rsp+30h] [rbp-78h]
  _QWORD v22[3]; // [rsp+48h] [rbp-60h] BYREF

  SourceString[0] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  v2 = 0;
  SourceString[1] = a1;
  SourceString[2] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize";
  v4 = 0LL;
  v5 = 0LL;
  do
  {
    if ( !bOpenKey(SourceString[v5], (PHANDLE)&v22[v4]) )
      v22[v5] = 0LL;
    ++v2;
    ++v5;
    v4 = v2;
  }
  while ( (unsigned __int64)v2 < 3 );
  v6 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v7 = gahStockObjects96;
  v8 = (int *)&unk_1C02E958C;
  v10 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  if ( !a2 )
    v7 = gahStockObjects;
  v13 = 0;
  v20 = v7;
  do
  {
    v14 = 0;
    v15 = (HANDLE *)v22;
    while ( 1 )
    {
      if ( *v15 )
      {
        if ( v6 )
        {
          if ( v10 )
          {
            if ( bGetRegString(*v15, *(const unsigned __int16 **)(v8 - 3), v6, v12)
              && (int)StringCchCopyW((char *)v10, 260LL, (char *)L"\\SystemRoot\\Fonts\\") >= 0
              && (int)StringCchCatW(v10, v9, v6) >= 0 )
            {
              LOBYTE(v9) = 10;
              v16 = (unsigned __int64)v7[*v8];
              v17 = (struct HOBJ__ *)(v16 & -(__int64)((unsigned int)HmgValidHandle(v16, v9) != 0));
              v7 = v20;
              if ( (unsigned int)bInitOneStockFontInternal(v10) )
                break;
            }
          }
        }
      }
      ++v14;
      ++v15;
      if ( (unsigned __int64)v14 >= 3 )
        goto LABEL_18;
    }
    GreSetLFONTOwner((__int64)v20[*v8], 0, v11);
    if ( v17 )
      bDeleteFont(v17, 1u, v11);
LABEL_18:
    ++v13;
    v8 += 4;
  }
  while ( (unsigned __int64)v13 < 3 );
  if ( v6 )
    FreeTmpBuffer(v6, v9, v11, v12);
  if ( v10 )
    FreeTmpBuffer(v10, v9, v11, v12);
  v18 = 0;
  v19 = (HANDLE *)v22;
  do
  {
    if ( *v19 )
      ZwClose(*v19);
    ++v18;
    ++v19;
  }
  while ( (unsigned __int64)v18 < 3 );
}
