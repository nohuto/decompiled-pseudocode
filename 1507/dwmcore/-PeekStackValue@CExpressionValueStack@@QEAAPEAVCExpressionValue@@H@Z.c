/*
 * XREFs of ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0
 * Callers:
 *     ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x180100728 (-Absolute@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1801008E8 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?AxisAngleRotateMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180100AA8 (-AxisAngleRotateMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x180100BCC (-Clamp@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x180100CF0 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x180100FE4 (-Matrix3x2@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1801010D0 (-Matrix4x4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Max@CExpressionValueStack@@QEAAJXZ @ 0x1801011C0 (-Max@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Min@CExpressionValueStack@@QEAAJXZ @ 0x180101278 (-Min@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x180101334 (-Modulus@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180101420 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x180101658 (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180102220 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ScaleMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180102498 (-ScaleMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x180102594 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180102750 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x180102A04 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?TranslateMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180102BB8 (-TranslateMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector2@CExpressionValueStack@@QEAAJXZ @ 0x180102DA4 (-Vector2@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x180102E5C (-Vector3@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector4@CExpressionValueStack@@QEAAJXZ @ 0x180102F48 (-Vector4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010D618 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180110664 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180120F98 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180120FC4 (--1CExpressionValue@@QEAA@XZ.c)
 */

struct CExpressionValue *__fastcall CExpressionValueStack::PeekStackValue(CExpressionValueStack *this, int a2)
{
  __int64 v3; // rcx
  CExpressionValue *v4; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (unsigned int)(*((_DWORD *)this + 4) + a2 - 1);
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
    return (struct CExpressionValue *)(*((_QWORD *)this + 3) + 24 * v3);
  v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v6);
  CExpressionValueStack::s_emptyValue = *(_OWORD *)v4;
  qword_180190730 = *((_QWORD *)v4 + 2);
  CExpressionValue::~CExpressionValue((CExpressionValue *)v6);
  return (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
}
