/*
 * XREFs of ?QueryVector4@Animation@Animations@Components@@UEAAJIPEAVVector4@23@@Z @ 0x1801631E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800BF57C (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 */

__int64 __fastcall Components::Animations::Animation::QueryVector4(
        Components::Animations::Animation *this,
        __int64 a2,
        struct Components::Animations::Vector4 *a3)
{
  unsigned int v4; // r8d
  _OWORD *Color; // rax
  _OWORD *v6; // r9
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 55) == 69 )
  {
    v4 = 0;
    if ( a3 )
    {
      Color = (_OWORD *)Components::Animations::Value::GetColor(*(_QWORD *)(*((_QWORD *)this + 2) + 232LL), (__int64)v8);
      *v6 = *Color;
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v4;
}
