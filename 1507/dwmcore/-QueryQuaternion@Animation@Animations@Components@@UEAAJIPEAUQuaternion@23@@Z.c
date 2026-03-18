/*
 * XREFs of ?QueryQuaternion@Animation@Animations@Components@@UEAAJIPEAUQuaternion@23@@Z @ 0x180155400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x180154F24 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 */

__int64 __fastcall Components::Animations::Animation::QueryQuaternion(
        Components::Animations::Animation *this,
        __int64 a2,
        __m128 *a3)
{
  unsigned int v3; // ebx
  __m128 v5; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 55) == 69 )
  {
    v3 = 0;
    if ( a3 )
      *a3 = *Components::Animations::Value::GetQuaternion(*(double **)(*((_QWORD *)this + 2) + 232LL), &v5);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v3;
}
