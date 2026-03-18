/*
 * XREFs of ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x180166B0C
 * Callers:
 *     ??1CBspNode@@UEAA@XZ @ 0x180166660 (--1CBspNode@@UEAA@XZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016681C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CBspNode::ReleaseSubTree(CBspNode *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
}
