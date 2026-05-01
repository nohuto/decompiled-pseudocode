/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::_dynamic_initializer_for__appCategoryString__ @ 0x180001250
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800112B0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

int __fastcall Windows::Gaming::Preview::GamesEnumeration::_dynamic_initializer_for__appCategoryString__(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rax
  HRESULT StringReference; // eax
  int v5; // edx
  unsigned int v6; // r8d

  v3 = -1LL;
  do
    ++v3;
  while ( aAppcategory[v3] );
  if ( v3 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, -1, a3);
    __debugbreak();
  }
  StringReference = WindowsCreateStringReference(L"AppCategory", v3, &hstringHeader, &string);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference, v5, v6);
    JUMPOUT(0x1800012BDLL);
  }
  return atexit((void (__cdecl *)())Windows::Gaming::Preview::GamesEnumeration::_dynamic_atexit_destructor_for__appCategoryString__);
}
