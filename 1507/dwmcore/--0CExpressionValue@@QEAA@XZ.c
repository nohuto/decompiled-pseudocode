/*
 * XREFs of ??0CExpressionValue@@QEAA@XZ @ 0x180120F98
 * Callers:
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 * Callees:
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 */

CExpressionValue *__fastcall CExpressionValue::CExpressionValue(CExpressionValue *this)
{
  *(_DWORD *)this = 17;
  *((_BYTE *)this + 4) = 0;
  CExpressionValue::Reset(this, 1);
  return this;
}
