/*
 * XREFs of ?Initialize@ApplicationPackageInfo@ExecutionModel@@QEAAJPEBGKPEAX@Z @ 0x18001B948
 * Callers:
 *     ?CreateInstance@ApplicationPackageInfo@ExecutionModel@@SAJKPEAXPEBGPEAPEAUIUnknown@@@Z @ 0x18001D83C (-CreateInstance@ApplicationPackageInfo@ExecutionModel@@SAJKPEAXPEBGPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ApplicationPackageInfo::Initialize(
        ExecutionModel::ApplicationPackageInfo *this,
        unsigned __int16 *a2,
        __int64 a3,
        void *a4)
{
  signed int v4; // ebx
  int v6; // r15d
  DWORD LengthSid; // r14d
  void *v9; // rax
  void *v10; // rdi
  signed int LastError; // eax

  v4 = 0;
  v6 = a3;
  if ( a4 && a2 )
  {
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)this + 16,
           (__int64 *)a2,
           a3,
           (__int64)a4)
      && (LengthSid = GetLengthSid(a4),
          v9 = operator new[](LengthSid, (const struct std::nothrow_t *)&std::nothrow),
          (v10 = v9) != 0LL) )
    {
      if ( CopySid(LengthSid, v9, a4) )
        goto LABEL_6;
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      operator delete(v10);
      if ( v4 >= 0 )
      {
LABEL_6:
        *((_QWORD *)this + 7) = v10;
        *((_DWORD *)this + 12) = v6;
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v4;
}
