/*
 * XREFs of ??_G?$InvokeHelper@U?$IEventHandler@PEAVUINavigationController@Input@Gaming@Windows@@@Foundation@Windows@@V_lambda_5d6c310c79ad0c200369a5b3f85ef648_@@$01$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180055D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::InvokeHelper<Windows::Foundation::IEventHandler<Windows::Gaming::Input::UINavigationController *>,_lambda_5d6c310c79ad0c200369a5b3f85ef648_,2,1>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
