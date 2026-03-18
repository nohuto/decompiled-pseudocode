/*
 * XREFs of ?QueryFloat@Animation@Animations@Components@@UEAAJIPEAM@Z @ 0x180163080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Animation::QueryFloat(
        Components::Animations::Animation *this,
        __int64 a2,
        float *a3)
{
  __int64 result; // rax

  if ( *((_DWORD *)this + 55) != 18 )
    return 2147500037LL;
  result = 0LL;
  if ( a3 )
    *a3 = **(double **)(*((_QWORD *)this + 2) + 232LL);
  return result;
}
