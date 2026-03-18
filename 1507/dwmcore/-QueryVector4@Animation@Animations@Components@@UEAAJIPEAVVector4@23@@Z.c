/*
 * XREFs of ?QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z @ 0x180155520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVector4@Value@Animations@Components@@QEBA?AVVector4@23@XZ @ 0x18009C19C (-GetVector4@Value@Animations@Components@@QEBA-AVVector4@23@XZ.c)
 */

__int64 __fastcall Components::Animations::Animation::QueryVector4(
        Components::Animations::Animation *this,
        __int64 a2,
        struct Components::Animations::Vector4 *a3)
{
  unsigned int v4; // r8d
  _OWORD *Vector4; // rax
  _OWORD *v6; // r9
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 55) == 68 )
  {
    v4 = 0;
    if ( a3 )
    {
      Vector4 = (_OWORD *)Components::Animations::Value::GetVector4(
                            *(_QWORD *)(*((_QWORD *)this + 2) + 232LL),
                            (__int64)v8);
      *v6 = *Vector4;
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v4;
}
