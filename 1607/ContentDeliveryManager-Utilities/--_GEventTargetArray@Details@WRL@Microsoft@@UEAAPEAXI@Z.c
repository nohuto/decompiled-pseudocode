/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180048900
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180058BB0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
        Microsoft::WRL::Details::EventTargetArray *this,
        char a2)
{
  char *v4; // rcx
  char *v5; // rbx

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v4 = (char *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = v4 - 8;
    `eh vector destructor iterator'(
      v4,
      8uLL,
      *((_QWORD *)v4 - 1),
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClass>::~ComPtr<Windows::Foundation::IUriRuntimeClass>);
    operator delete[](v5);
  }
  operator delete[](*((void **)this + 4));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
