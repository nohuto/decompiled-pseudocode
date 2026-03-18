/*
 * XREFs of ?GetChildAt@CVisual@@UEAAPEAVIGraphNode@@I@Z @ 0x180037770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IGraphNode *__fastcall CVisual::GetChildAt(CVisual *this, unsigned int a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v2 = *((_QWORD *)this + 1);
  if ( (v2 & 2) != 0 )
    v3 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *((_QWORD *)this + 1) & 1LL;
  v4 = a2;
  if ( v3 <= a2 )
    return 0LL;
  v5 = *((_QWORD *)this + 1);
  v6 = (v5 & 2) != 0 ? *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)this + 1) & 1LL;
  if ( v4 >= v6 )
    return 0LL;
  v7 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v6 != 1 )
    v7 = *(_QWORD *)(v7 + 8 * v4 + 16);
  if ( v7 )
    return (struct IGraphNode *)(v7 + 64);
  else
    return 0LL;
}
