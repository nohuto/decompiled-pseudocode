/*
 * XREFs of ?Initialize@HostResourceInfo@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x1800140B4
 * Callers:
 *     ??0HostResourceInfo@ExecutionModel@@QEAA@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@1@@Z @ 0x1800141C4 (--0HostResourceInfo@ExecutionModel@@QEAA@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngin.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180016900 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024DA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::Initialize(
        ExecutionModel::HostResourceInfo *this,
        int a2,
        void *a3,
        const struct _AppModelActivationId *a4,
        struct IUnknown *a5)
{
  DWORD LastError; // ebx
  struct IUnknown **v10; // rcx
  unsigned __int64 LengthSid; // rbp
  void *v12; // rax
  const GUID *v13; // rsi
  __int64 v14; // r8
  OLECHAR sz; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v17[78]; // [rsp+22h] [rbp-96h] BYREF

  LastError = 0;
  if ( !a5 )
    __int2c();
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)a4;
  *((_QWORD *)this + 5) = *((_QWORD *)a4 + 2);
  v10 = (struct IUnknown **)((char *)this + 16);
  if ( *v10 != a5 )
    ATL::AtlComPtrAssign(v10, a5);
  LengthSid = GetLengthSid(a3);
  v12 = operator new[](LengthSid, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 23) = v12;
  if ( !v12 )
    return (DWORD)-2147024882;
  if ( CopySid(LengthSid, v12, a3) || (LastError = GetLastError(), (LastError & 0x80000000) == 0) )
  {
    *((_DWORD *)this + 44) = a2;
    v13 = (const GUID *)*((_QWORD *)a4 + 1);
    if ( v13 )
    {
      if ( *((_DWORD *)this + 6) )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)&v13->Data1 + v14) );
        if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                                (char *)this + 48,
                                v13) )
        {
          *((_QWORD *)this + 4) = *((_QWORD *)this + 6);
          return LastError;
        }
      }
      else
      {
        sz = 0;
        memset_0(v17, 0, 0x4CuLL);
        if ( !StringFromGUID2(v13, &sz, 39) )
          return LastError;
        if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                                (char *)this + 48,
                                &sz) )
        {
          *((_QWORD *)this + 4) = 0LL;
          return LastError;
        }
      }
      return (DWORD)-2147024882;
    }
  }
  return LastError;
}
