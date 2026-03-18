/*
 * XREFs of ?GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C0157710
 * Callers:
 *     ?GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C0153700 (-GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::GetPointerShapeData(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *a2)
{
  __int64 v2; // rax
  UINT v3; // r8d
  size_t BufferSizeRequired; // r8

  v2 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v2 + 40) )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(v2 + 88) + 8LL);
    a2->BufferSizeRequired = v3;
    if ( a2->BufferSizeSupplied < v3 )
      return 3221225507LL;
    BufferSizeRequired = a2->BufferSizeRequired;
    a2->ShapeInfo.Type = *(_DWORD *)(*((_QWORD *)this + 33) + 48LL);
    a2->ShapeInfo.Width = *(_DWORD *)(*((_QWORD *)this + 33) + 52LL);
    a2->ShapeInfo.Height = *(_DWORD *)(*((_QWORD *)this + 33) + 56LL);
    a2->ShapeInfo.Pitch = *(_DWORD *)(*((_QWORD *)this + 33) + 60LL);
    a2->ShapeInfo.HotSpot = *(POINT *)(*((_QWORD *)this + 33) + 80LL);
    memmove(a2->pShapeBuffer, **(const void ***)(*((_QWORD *)this + 33) + 88LL), BufferSizeRequired);
  }
  else
  {
    a2->BufferSizeRequired = 0;
  }
  return 0LL;
}
