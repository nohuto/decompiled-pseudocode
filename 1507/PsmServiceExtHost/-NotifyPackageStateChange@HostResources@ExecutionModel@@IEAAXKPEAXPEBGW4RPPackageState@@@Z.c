/*
 * XREFs of ?NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z @ 0x1800183B4
 * Callers:
 *     ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x1800184C4 (-DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x1800185B8 (-IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2@PEAX@Z @ 0x1800179F0 (-QueueWorkItem@RMExecServicesProvider@ExecutionModel@@UEAAJPEAUIRMExecServicesProviderCallback@2.c)
 *     ??$_delete@UHostResourcesWorkItem@HostResources@ExecutionModel@@@tlx@@YAXPEAUHostResourcesWorkItem@HostResources@ExecutionModel@@@Z @ 0x180019348 (--$_delete@UHostResourcesWorkItem@HostResources@ExecutionModel@@@tlx@@YAXPEAUHostResourcesWorkIt.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024DA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
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
  DWORD LengthSid; // edi
  void *v15; // rax
  __int64 (__fastcall *v16)(ExecutionModel::RMExecServicesProvider *, struct ExecutionModel::IRMExecServicesProviderCallback *, void *); // rbp
  int v17; // eax

  if ( *(_QWORD *)(a1 + 104) )
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
            v16 = *(__int64 (__fastcall **)(ExecutionModel::RMExecServicesProvider *, struct ExecutionModel::IRMExecServicesProviderCallback *, void *))(**(_QWORD **)(a1 + 104) + 40LL);
            if ( v16 == ExecutionModel::RMExecServicesProvider::QueueWorkItem )
              v17 = ExecutionModel::RMExecServicesProvider::QueueWorkItem(
                      *(ExecutionModel::RMExecServicesProvider **)(a1 + 104),
                      (struct ExecutionModel::IRMExecServicesProviderCallback *)a1,
                      v12);
            else
              v17 = v16(
                      *(ExecutionModel::RMExecServicesProvider **)(a1 + 104),
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
