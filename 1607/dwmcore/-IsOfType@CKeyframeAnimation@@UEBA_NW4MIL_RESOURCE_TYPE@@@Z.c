/*
 * XREFs of ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180086880
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CKeyframeAnimation::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  _BOOL8 result; // rax

  v2 = a2 - 104;
  result = 0;
  if ( v2 <= 5 )
  {
    v3 = 37;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
