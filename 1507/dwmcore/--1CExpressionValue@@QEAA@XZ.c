/*
 * XREFs of ??1CExpressionValue@@QEAA@XZ @ 0x180120FC4
 * Callers:
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValue::~CExpressionValue(CExpressionValue *this)
{
  CExpressionValue::Reset(this, 0);
}
