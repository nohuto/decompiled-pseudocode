/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001D40
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180004BF4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z @ 0x180029E44 (-Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x18002A030 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ?Boolean_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B0E0 (-Boolean_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Byte_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B150 (-Byte_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?WideString_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B1B0 (-WideString_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Double_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B200 (-Double_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int16_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B2D0 (-Int16_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int32_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B330 (-Int32_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int64_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B390 (-Int64_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Single_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B3F0 (-Single_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt16_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B460 (-UInt16_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt32_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B4C0 (-UInt32_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt64_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B520 (-UInt64_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Void_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B580 (-Void_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18002F41C (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180042FB4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z @ 0x180057D04 (-Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEBGPEAGK@Z @ 0x18006BAAC (-GetDesktopUniqueName@@YAXPEBGPEAGK@Z.c)
 *     ?RuntimeClassInitialize@InputQueue@@UEAAJPEAUIInputQueueHost@@I@Z @ 0x18006C190 (-RuntimeClassInitialize@InputQueue@@UEAAJPEAUIInputQueueHost@@I@Z.c)
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x18009EBD2 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x18009EC99 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x18009ED6E (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x18009EDBC (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 * Callees:
 *     _vsnwprintf @ 0x18009D838 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
