/*
 * XREFs of KiDumpParameterImages @ 0x1401D52BC
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     RtlStringCbPrintfA @ 0x140139F84 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckUnicodeToAnsi @ 0x1401D4B88 (KeBugCheckUnicodeToAnsi.c)
 *     KiPcToFileHeader @ 0x1401D54CC (KiPcToFileHeader.c)
 *     MmLocateUnloadedDriver @ 0x1401E5D84 (MmLocateUnloadedDriver.c)
 */

void __fastcall KiDumpParameterImages(NTSTRSAFE_PSTR pszDest, const void **a2, unsigned int a3, char a4)
{
  char v7; // r13
  __int64 v8; // r14
  unsigned int TimeDateStamp; // r15d
  const void *v10; // rbp
  __int64 UnloadedDriver; // rax
  __int64 v12; // rbx
  unsigned __int16 *v13; // rcx
  __int64 v14; // rbx
  PIMAGE_NT_HEADERS v15; // rax
  const char *v16; // r9
  _BYTE v17[8]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-D0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-C8h] BYREF

  v7 = 1;
  if ( pszDest )
    *pszDest = 0;
  if ( a3 )
  {
    v8 = a3;
    while ( 1 )
    {
      TimeDateStamp = 0;
      v10 = (const void *)KiPcToFileHeader(*a2, &v18, 1LL, v17);
      if ( v10 )
        break;
      v10 = *a2;
      UnloadedDriver = MmLocateUnloadedDriver(*a2);
      v12 = UnloadedDriver;
      if ( UnloadedDriver )
      {
        if ( a4 )
        {
          v13 = (unsigned __int16 *)UnloadedDriver;
          goto LABEL_14;
        }
        goto LABEL_15;
      }
LABEL_20:
      ++a2;
      if ( !--v8 )
        return;
    }
    v14 = v18;
    if ( MiIsAddressValid(*(_QWORD *)(v18 + 48)) )
    {
      v15 = RtlImageNtHeader(*(PVOID *)(v14 + 48));
      if ( v15 )
        TimeDateStamp = v15->FileHeader.TimeDateStamp;
    }
    v12 = v14 + 88;
    if ( a4 )
    {
      v13 = (unsigned __int16 *)v12;
LABEL_14:
      KeBugCheckUnicodeToAnsi(v13, v19);
    }
LABEL_15:
    if ( pszDest )
    {
      v16 = "\r\n*";
      if ( !v7 )
        v16 = "*";
      RtlStringCbPrintfA(
        pszDest,
        0x80uLL,
        "%s**  %12s - Address %p base at %p, DateStamp %08lx\r\n",
        v16,
        v19,
        *a2,
        v10,
        TimeDateStamp);
    }
    KiBugCheckDriver = v12;
    v7 = 0;
    goto LABEL_20;
  }
}
