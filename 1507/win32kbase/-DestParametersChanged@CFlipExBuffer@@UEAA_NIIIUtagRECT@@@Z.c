/*
 * XREFs of ?DestParametersChanged@CFlipExBuffer@@UEAA_NIIIUtagRECT@@@Z @ 0x1C00493B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipExBuffer::DestParametersChanged(CFlipExBuffer *this, int a2, int a3, int a4, struct tagRECT *a5)
{
  bool result; // al

  if ( a2 == *((_DWORD *)this + 103)
    && a3 == *((_DWORD *)this + 104)
    && a4 == *((_DWORD *)this + 105)
    && a5->left == *((_DWORD *)this + 106)
    && a5->right == *((_DWORD *)this + 108)
    && a5->top == *((_DWORD *)this + 107)
    && a5->bottom == *((_DWORD *)this + 109) )
  {
    return 0;
  }
  *((_DWORD *)this + 103) = a2;
  result = 1;
  *((_DWORD *)this + 104) = a3;
  *((_DWORD *)this + 105) = a4;
  *(struct tagRECT *)((char *)this + 424) = *a5;
  return result;
}
