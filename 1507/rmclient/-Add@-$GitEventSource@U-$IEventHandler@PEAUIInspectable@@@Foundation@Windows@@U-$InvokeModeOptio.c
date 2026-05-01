/*
 * XREFs of ?Add@?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000630C
 * Callers:
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180003850 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800038A0 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 * Callees:
 *     ??$CreateGitHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180002B34 (--$CreateGitHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@D.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002D54 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800060E0 (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 */

__int64 __fastcall Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 *a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v8);
  v6 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr>(
         a2,
         &v8);
  if ( v6 >= 0 )
  {
    if ( v8 )
      v6 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             a1,
             v8,
             *(_QWORD *)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v6 = -2147024809;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v8);
  return (unsigned int)v6;
}
