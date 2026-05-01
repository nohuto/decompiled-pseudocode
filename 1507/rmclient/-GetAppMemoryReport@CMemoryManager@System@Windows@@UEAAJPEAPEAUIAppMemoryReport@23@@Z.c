/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003790
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AEA_KAEA_KAEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIAppMemoryReport@System@Windows@@AEA_K111@Z @ 0x180003060 (--$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AEA_KAEA_KAEA_KAEA_K.c)
 *     ?GetAppMemoryInformation@System@Windows@@YAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180005E30 (-GetAppMemoryInformation@System@Windows@@YAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a2,
        struct _PROCESS_JOB_MEMORY_INFO *a3)
{
  NTSTATUS AppMemoryInformation; // eax
  void *v5; // rdi
  int v6; // ebx
  void *v7; // rsi
  signed int v9; // eax
  unsigned __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v13[6]; // [rsp+48h] [rbp-30h] BYREF
  void *v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0LL;
  AppMemoryInformation = Windows::System::GetAppMemoryInformation((Windows::System *)&v15, &v11, a3);
  if ( AppMemoryInformation < 0 )
  {
    v9 = RtlNtStatusToDosError(AppMemoryInformation);
    v7 = v14;
    v6 = v9;
    if ( v9 > 0 )
      v6 = (unsigned __int16)v9 | 0x80070000;
  }
  else
  {
    v5 = v14;
    v10 = v11 + v12;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CAppMemoryReport,Windows::System::IAppMemoryReport,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &>(
           &v14,
           &v12,
           v13,
           &v10,
           (unsigned __int64 *)&v15);
    if ( v6 < 0 )
    {
      v7 = v14;
    }
    else
    {
      v7 = 0LL;
      *a2 = (struct Windows::System::IAppMemoryReport *)v14;
    }
  }
  if ( v7 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v6;
}
