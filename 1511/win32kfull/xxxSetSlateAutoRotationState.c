/*
 * XREFs of xxxSetSlateAutoRotationState @ 0x1C01D2AFC
 * Callers:
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D2260 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     NtUserSetAutoRotation @ 0x1C021F660 (NtUserSetAutoRotation.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C009DFF4 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 */

__int64 __fastcall xxxSetSlateAutoRotationState(int a1)
{
  __int64 result; // rax

  result = UpdateAutoRotationRegistrySetting(
             a1,
             L"SlateEnable",
             0,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( (int)result >= 0 )
    dword_1C0323D98 = a1;
  return result;
}
