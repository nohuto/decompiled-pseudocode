/*
 * XREFs of dllmain_crt_process_detach @ 0x180025910
 * Callers:
 *     dllmain_crt_dispatch @ 0x180025780 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_dllmain_crt_thread_attach @ 0x18000B510 (__scrt_dllmain_crt_thread_attach.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     __scrt_acquire_startup_lock @ 0x180025C48 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180025CC0 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_release_startup_lock @ 0x180025D90 (__scrt_release_startup_lock.c)
 *     __scrt_fastfail @ 0x18002631C (__scrt_fastfail.c)
 */

__int64 dllmain_crt_process_detach()
{
  unsigned int v0; // ebx
  char v2; // di
  __int64 v3; // rcx

  v0 = 0;
  if ( dword_180037230 <= 0 )
    return 0LL;
  --dword_180037230;
  v2 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
    _scrt_fastfail(7LL);
  _scrt_dllmain_uninitialize_c();
  _scrt_current_native_startup_state = 0;
  Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk::dummy();
  LOBYTE(v3) = v2;
  _scrt_release_startup_lock(v3);
  LOBYTE(v0) = _scrt_dllmain_crt_thread_attach() != 0;
  return v0;
}
