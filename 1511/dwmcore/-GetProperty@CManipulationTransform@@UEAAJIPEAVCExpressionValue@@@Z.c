/*
 * XREFs of ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18012C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z @ 0x1800680F8 (-CalculateMatrix@CManipulationTransform@@IEAAXPEAUD2DMatrix@@@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::GetProperty(
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
            if ( *((_BYTE *)this + 232) )
              CManipulationTransform::CalculateMatrix(this, (CManipulationTransform *)((char *)this + 168), (__int64)a3);
            return (unsigned int)CExpressionValue::SetMatrix4x4Value(a3, (CManipulationTransform *)((char *)this + 168));
          }
          else
          {
            return (unsigned int)-2147024809;
          }
        }
        CExpressionValue::SetDataType(a3);
        *((_QWORD *)a3 + 1) = *(_QWORD *)((char *)this + 156);
        v10 = *((_DWORD *)this + 41);
      }
      else
      {
        CExpressionValue::SetDataType(a3);
        *((_QWORD *)a3 + 1) = *((_QWORD *)this + 18);
        v10 = *((_DWORD *)this + 38);
      }
    }
    else
    {
      CExpressionValue::SetDataType(a3);
      *((_QWORD *)a3 + 1) = *(_QWORD *)((char *)this + 132);
      v10 = *((_DWORD *)this + 35);
    }
  }
  else
  {
    CExpressionValue::SetDataType(a3);
    *((_QWORD *)a3 + 1) = *((_QWORD *)this + 15);
    v10 = *((_DWORD *)this + 32);
  }
  *((_BYTE *)a3 + 4) = 1;
  *((_DWORD *)a3 + 4) = v10;
  return v3;
}
