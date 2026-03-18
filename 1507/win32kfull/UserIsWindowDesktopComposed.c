/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C0113230
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowDesktopComposed(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  v1 = 0;
  v2 = HMValidateHandleNoSecure(a1, 1);
  if ( v2 )
    return (unsigned int)IsWindowDesktopComposed(v2);
  return v1;
}
