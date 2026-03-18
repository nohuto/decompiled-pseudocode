/*
 * XREFs of ?SetFloatProperty@CAnalogTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00DB920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnalogTargetMarshaler::SetFloatProperty(
        DirectComposition::CAnalogTargetMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 7 )
    return 3221225485LL;
  *((_DWORD *)this + 4) |= 0x200u;
  *((float *)this + 14) = a3;
  *a4 = 1;
  return result;
}
