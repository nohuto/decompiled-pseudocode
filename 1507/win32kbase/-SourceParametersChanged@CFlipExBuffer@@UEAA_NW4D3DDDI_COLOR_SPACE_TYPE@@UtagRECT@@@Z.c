/*
 * XREFs of ?SourceParametersChanged@CFlipExBuffer@@UEAA_NW4D3DDDI_COLOR_SPACE_TYPE@@UtagRECT@@@Z @ 0x1C0049430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipExBuffer::SourceParametersChanged(
        CFlipExBuffer *this,
        enum D3DDDI_COLOR_SPACE_TYPE a2,
        struct tagRECT *a3)
{
  bool result; // al

  if ( a2 == *((_DWORD *)this + 110)
    && a3->left == *((_DWORD *)this + 111)
    && a3->right == *((_DWORD *)this + 113)
    && a3->top == *((_DWORD *)this + 112)
    && a3->bottom == *((_DWORD *)this + 114) )
  {
    return 0;
  }
  *((_DWORD *)this + 110) = a2;
  result = 1;
  *(struct tagRECT *)((char *)this + 444) = *a3;
  return result;
}
