/*
 * XREFs of ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00D10E0
 * Callers:
 *     FinishStockFontInit @ 0x1C0110A30 (FinishStockFontInit.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0018804 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001B5E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GreSetLFONTOwner @ 0x1C00CDC80 (GreSetLFONTOwner.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C00D12E8 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00D13CC (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     bDeleteFont @ 0x1C00D2FC0 (bDeleteFont.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     bInitOneStockFontInternal @ 0x1C03785D8 (bInitOneStockFontInternal.c)
 */

void __fastcall FinishStockFontInitInternal(const unsigned __int16 *a1, int a2)
{
  int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int16 *v6; // rsi
  void * near *v7; // rbx
  int *v8; // r14
  unsigned __int16 *v9; // rdi
  unsigned int v10; // r9d
  int v11; // r13d
  int v12; // ebp
  HANDLE *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  struct HOBJ__ *v17; // r12
  __int64 v18; // r8
  int v19; // edi
  HANDLE *v20; // rbx
  void **v21; // [rsp+28h] [rbp-80h]
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
  v7 = gahStockObjects96;
  v8 = (int *)&unk_1C02E232C;
  v9 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  if ( !a2 )
    v7 = gahStockObjects;
  v11 = 0;
  v21 = v7;
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
          if ( v9 )
          {
            if ( bGetRegString(*v13, *(const unsigned __int16 **)(v8 - 3), v6, v10)
              && (int)StringCchCopyW((char *)v9, 260LL, (char *)L"\\SystemRoot\\Fonts\\") >= 0
              && (int)StringCchCatW(v9, v14, (char *)v6) >= 0 )
            {
              LOBYTE(v15) = 10;
              v16 = (unsigned __int64)v7[*v8];
              v17 = (struct HOBJ__ *)(v16 & -(__int64)((unsigned int)HmgValidHandle(v16, v15) != 0));
              v7 = v21;
              if ( (unsigned int)bInitOneStockFontInternal(v9) )
                break;
            }
          }
        }
      }
      ++v12;
      ++v13;
      if ( (unsigned __int64)v12 >= 3 )
        goto LABEL_18;
    }
    GreSetLFONTOwner((__int64)v21[*v8], 0, v18);
    if ( v17 )
      bDeleteFont(v17);
LABEL_18:
    ++v11;
    v8 += 4;
  }
  while ( (unsigned __int64)v11 < 3 );
  if ( v6 )
    FreeTmpBuffer(v6);
  if ( v9 )
    FreeTmpBuffer(v9);
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
