/*
 * XREFs of ?IsReadyToDraw@CNineGridBrush@@UEBA_NXZ @ 0x18013FC40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18014EADC (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 */

bool __fastcall CNineGridBrush::IsReadyToDraw(CNineGridBrush *this)
{
  __int64 v2; // rcx
  CComponentTransform2D *v3; // rcx
  bool result; // al

  v2 = *((_QWORD *)this + 16);
  result = 0;
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 176LL))(v2) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 48LL))(
              *((_QWORD *)this + 16),
              80LL) )
        return 1;
      v3 = *(CComponentTransform2D **)(*((_QWORD *)this + 16) + 168LL);
      if ( !v3 || CComponentTransform2D::IsIdentity(v3) )
        return 1;
    }
  }
  return result;
}
