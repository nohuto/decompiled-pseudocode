/*
 * XREFs of ?Initialize@HostResourceInfo@ExecutionModel@@QEAAJPEAVApplicationPackageInfo@2@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x180013544
 * Callers:
 *     ??0HostResourceInfo@ExecutionModel@@QEAA@PEAVApplicationPackageInfo@1@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@1@@Z @ 0x180013748 (--0HostResourceInfo@ExecutionModel@@QEAA@PEAVApplicationPackageInfo@1@AEBU_AppModelActivationId@.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x1800126D0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z @ 0x1800131D0 (-SetAffinityMask@HostResourceInfo@ExecutionModel@@QEAAJ_KW4MaskType@2@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::Initialize(
        ExecutionModel::HostResourceInfo *this,
        struct IUnknown *a2,
        const struct _AppModelActivationId *a3,
        struct IUnknown *a4)
{
  struct IUnknown **v8; // rcx
  const GUID *v9; // rdi
  unsigned __int64 v10; // r8
  __int64 v12; // r8
  __int64 v13; // r9
  OLECHAR sz[40]; // [rsp+20h] [rbp-88h] BYREF

  if ( !a4 )
    __int2c();
  if ( !a2 )
    return 2147942487LL;
  *((_OWORD *)this + 2) = *(_OWORD *)a3;
  *((_QWORD *)this + 6) = *((_QWORD *)a3 + 2);
  v8 = (struct IUnknown **)((char *)this + 16);
  if ( *v8 != a4 )
    ATL::AtlComPtrAssign(v8, a4);
  if ( *((struct IUnknown **)this + 3) != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 3, a2);
  v9 = (const GUID *)*((_QWORD *)a3 + 1);
  if ( !v9 )
    return ExecutionModel::HostResourceInfo::SetAffinityMask((__int64)this, (__int64)a4[11].lpVtbl, 0);
  if ( *((_DWORD *)this + 8) )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)&v9->Data1 + v10) );
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)this + 56,
           *((__int64 **)a3 + 1),
           v10,
           (__int64)a4) )
    {
      *((_QWORD *)this + 5) = *((_QWORD *)this + 7);
      return ExecutionModel::HostResourceInfo::SetAffinityMask((__int64)this, (__int64)a4[11].lpVtbl, 0);
    }
  }
  else
  {
    sz[0] = 0;
    memset_0(&sz[1], 0, 0x4CuLL);
    if ( !StringFromGUID2(v9, sz, 39) )
      return ExecutionModel::HostResourceInfo::SetAffinityMask((__int64)this, (__int64)a4[11].lpVtbl, 0);
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)this + 56,
           (__int64 *)sz,
           v12,
           v13) )
    {
      *((_QWORD *)this + 5) = 0LL;
      return ExecutionModel::HostResourceInfo::SetAffinityMask((__int64)this, (__int64)a4[11].lpVtbl, 0);
    }
  }
  return 2147942414LL;
}
