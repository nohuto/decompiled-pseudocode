/*
 * XREFs of ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x180159214
 * Callers:
 *     ??1CBspNode@@UEAA@XZ @ 0x180158C6C (--1CBspNode@@UEAA@XZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z @ 0x180158FB4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBspNode::ReleaseSubTree(CBspNode *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v1 + 8) + 8LL))(v1 + 8);
    *((_QWORD *)this + 3) = 0LL;
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 8LL))(v3 + 8);
    *((_QWORD *)this + 4) = 0LL;
  }
}
