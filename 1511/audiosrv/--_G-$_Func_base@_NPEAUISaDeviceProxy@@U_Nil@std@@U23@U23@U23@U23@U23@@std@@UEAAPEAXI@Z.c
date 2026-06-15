/*
 * XREFs of ??_G?$_Func_base@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@UEAAPEAXI@Z @ 0x18008E510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Func_base<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
