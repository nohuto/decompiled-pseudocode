/*
 * XREFs of ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002CA30
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18002A560 (-Run@-$CTaskWrapper@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::RuntimeClassInitialize(
        CLaunchActivatedEventArgs *this,
        HSTRING a2,
        HSTRING a3)
{
  HRESULT v5; // ebx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  v5 = WindowsDuplicateString(a2, &newString);
  if ( v5 >= 0 )
  {
    v6 = (HSTRING)*((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = newString;
    WindowsDeleteString(v6);
    v5 = WindowsDuplicateString(a3, &newString);
    if ( v5 >= 0 )
    {
      v7 = (HSTRING)*((_QWORD *)this + 33);
      *((_QWORD *)this + 33) = newString;
      WindowsDeleteString(v7);
    }
  }
  return (unsigned int)v5;
}
