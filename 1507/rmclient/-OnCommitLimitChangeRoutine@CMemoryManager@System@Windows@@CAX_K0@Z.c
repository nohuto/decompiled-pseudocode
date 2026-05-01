/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x18000D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000887C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ??$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x18000C188 (--$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@-$EventSource@U-$IEve.c)
 *     ??0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z @ 0x18000C618 (--0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(__int64 a1, __int64 a2)
{
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v4; // rax
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v5; // rax
  __int64 v6; // rdx
  RTL_SRWLOCK *v7; // rcx
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v8; // rbx

  v4 = (Windows::System::AppMemoryUsageLimitChangingEventArgs *)operator new(
                                                                  0x48uLL,
                                                                  (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Windows::System::AppMemoryUsageLimitChangingEventArgs::AppMemoryUsageLimitChangingEventArgs(v4, a1, a2);
    v8 = v5;
    if ( v5 )
    {
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>(
        v7,
        v6,
        (__int64)v5);
      (*(void (__fastcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
}
