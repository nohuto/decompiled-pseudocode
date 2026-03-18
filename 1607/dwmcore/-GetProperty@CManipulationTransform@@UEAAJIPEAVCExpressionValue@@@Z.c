/*
 * XREFs of ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180022330
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001ADC0 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::GetProperty(
        CManipulationTransform *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int128 v9; // xmm1
  int v11; // eax

  v3 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v6 = a2 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              if ( *((_BYTE *)this + 328) )
              {
                CManipulationTransform::CalculateMatrixFromDelta(
                  (CManipulationTransform *)((char *)this + 216),
                  (CManipulationTransform *)((char *)this + 240),
                  (CManipulationTransform *)((char *)this + 252),
                  (CManipulationTransform *)((char *)this + 264));
                *((_BYTE *)this + 328) = 0;
              }
              *((_DWORD *)a3 + 16) = 265;
              *(_OWORD *)a3 = *(_OWORD *)((char *)this + 264);
              *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 280);
              *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 296);
              v9 = *(_OWORD *)((char *)this + 312);
              *((_BYTE *)a3 + 68) = 1;
              *((_OWORD *)a3 + 3) = v9;
            }
            else
            {
              return (unsigned int)-2147024809;
            }
            return v3;
          }
          *((_DWORD *)a3 + 16) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + 252);
          v11 = *((_DWORD *)this + 65);
        }
        else
        {
          *((_DWORD *)a3 + 16) = 52;
          *(_QWORD *)a3 = *((_QWORD *)this + 30);
          v11 = *((_DWORD *)this + 62);
        }
      }
      else
      {
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + 228);
        v11 = *((_DWORD *)this + 59);
      }
      *((_DWORD *)a3 + 2) = v11;
    }
    else
    {
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 27);
      *((_DWORD *)a3 + 2) = *((_DWORD *)this + 56);
    }
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  return 2147942487LL;
}
