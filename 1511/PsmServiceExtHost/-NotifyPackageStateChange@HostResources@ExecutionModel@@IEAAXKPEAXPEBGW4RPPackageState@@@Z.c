/*
 * XREFs of ?NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z @ 0x18001A2E4
 * Callers:
 *     ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A404 (-DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A4F8 (-IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 * Callees:
 *     ?QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2@PEAX@Z @ 0x180009C00 (-QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ??$_delete@UHostResourcesWorkItem@HostResources@ExecutionModel@@@tlx@@YAXPEAUHostResourcesWorkItem@HostResources@ExecutionModel@@@Z @ 0x18001CAD8 (--$_delete@UHostResourcesWorkItem@HostResources@ExecutionModel@@@tlx@@YAXPEAUHostResourcesWorkIt.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::HostResources::NotifyPackageStateChange(
        __int64 a1,
        int a2,
        void *a3,
        __int64 *a4,
        int a5)
{
  _WORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  _WORD *v13; // rax
  DWORD LengthSid; // esi
  void *v15; // rax
  __int64 (__fastcall *v16)(ExecutionModel::RMExecServicesProvider *, struct ExecutionModel::IRMExecServicesProviderCallback *, void *); // rbp
  int v17; // eax

  if ( *(_QWORD *)(a1 + 128) && *(_QWORD *)(a1 + 120) )
  {
    v9 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v9;
    if ( v9 )
    {
      v13 = v9 + 8;
      *v12 = v13;
      v12[1] = v13;
      *v13 = 0;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      *((_DWORD *)v12 + 11) = a5;
      *((_DWORD *)v12 + 10) = a2;
      if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
             (__int64)v12,
             a4,
             v10,
             v11) )
      {
        LengthSid = GetLengthSid(a3);
        v15 = operator new[](LengthSid, (const struct std::nothrow_t *)&std::nothrow);
        v12[4] = v15;
        if ( v15 )
        {
          if ( CopySid(LengthSid, v15, a3) )
          {
            v16 = *(__int64 (__fastcall **)(ExecutionModel::RMExecServicesProvider *, struct ExecutionModel::IRMExecServicesProviderCallback *, void *))(**(_QWORD **)(a1 + 128) + 40LL);
            if ( v16 == ExecutionModel::RMExecServicesProvider::QueueWorkItem )
              v17 = ExecutionModel::RMExecServicesProvider::QueueWorkItem(
                      *(ExecutionModel::RMExecServicesProvider **)(a1 + 128),
                      (struct ExecutionModel::IRMExecServicesProviderCallback *)a1,
                      v12);
            else
              v17 = v16(
                      *(ExecutionModel::RMExecServicesProvider **)(a1 + 128),
                      (struct ExecutionModel::IRMExecServicesProviderCallback *)a1,
                      v12);
            if ( v17 >= 0 )
              v12 = 0LL;
          }
        }
      }
      if ( v12 )
        tlx::_delete<ExecutionModel::HostResources::HostResourcesWorkItem>(v12);
    }
  }
}
