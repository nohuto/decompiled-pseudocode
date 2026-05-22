/*
 * XREFs of ?NullValue_ToString@Input@@YA_NPEBXPEAGK@Z @ 0x18002B0B4
 * Callers:
 *     ?Boolean_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B0E0 (-Boolean_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Byte_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B150 (-Byte_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?WideString_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B1B0 (-WideString_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Double_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B200 (-Double_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Guid_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B270 (-Guid_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int16_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B2D0 (-Int16_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int32_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B330 (-Int32_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int64_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B390 (-Int64_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Single_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B3F0 (-Single_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt16_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B460 (-UInt16_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt32_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B4C0 (-UInt32_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt64_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B520 (-UInt64_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Void_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x18002B580 (-Void_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001BF8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

char __fastcall Input::NullValue_ToString(Input *this, char *a2, unsigned __int16 *a3)
{
  if ( this )
    return 0;
  StringCchCopyW(a2, (unsigned int)a3, (char *)L"(null)");
  return 1;
}
