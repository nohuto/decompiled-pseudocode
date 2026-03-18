/*
 * XREFs of ?QueryVector2@Animation@Animations@Components@@UEAAJIPEAVVector2@23@@Z @ 0x1801941C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::Animation::QueryVector2(
        Components::Animations::Animation *this,
        __int64 a2,
        struct Components::Animations::Vector2 *a3)
{
  __int64 result; // rax
  double *v4; // rdx
  unsigned int v5; // xmm0_4
  unsigned int v6; // xmm1_4

  if ( *((_DWORD *)this + 14) != 35 )
    return 2147500037LL;
  result = 0LL;
  if ( a3 )
  {
    v4 = *(double **)(*((_QWORD *)this + 1) + 232LL);
    *(float *)&v5 = *v4;
    *(float *)&v6 = v4[1];
    *(_QWORD *)a3 = __PAIR64__(v6, v5);
  }
  return result;
}
