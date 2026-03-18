/*
 * XREFs of ?GetSourcePropertyValue@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180111690
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z @ 0x1800164B8 (-CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::GetSourcePropertyValue(
        CManipulationTransform *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // eax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            if ( *((_BYTE *)this + 120) )
              CManipulationTransform::CalculateMatrix(
                (CManipulationTransform *)((char *)this - 104),
                (CManipulationTransform *)((char *)this + 56),
                (__int64)a3);
            return (unsigned int)CExpressionValue::SetMatrix4x4Value(a3, (CManipulationTransform *)((char *)this + 56));
          }
          else
          {
            return (unsigned int)-2147024809;
          }
        }
        CExpressionValue::SetDataType(a3);
        *((_QWORD *)a3 + 1) = *(_QWORD *)((char *)this + 44);
        v10 = *((_DWORD *)this + 13);
      }
      else
      {
        CExpressionValue::SetDataType(a3);
        *((_QWORD *)a3 + 1) = *((_QWORD *)this + 4);
        v10 = *((_DWORD *)this + 10);
      }
    }
    else
    {
      CExpressionValue::SetDataType(a3);
      *((_QWORD *)a3 + 1) = *(_QWORD *)((char *)this + 20);
      v10 = *((_DWORD *)this + 7);
    }
  }
  else
  {
    CExpressionValue::SetDataType(a3);
    *((_QWORD *)a3 + 1) = *((_QWORD *)this + 1);
    v10 = *((_DWORD *)this + 4);
  }
  *((_BYTE *)a3 + 4) = 1;
  *((_DWORD *)a3 + 4) = v10;
  return v3;
}
