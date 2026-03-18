/*
 * XREFs of ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800769A0
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ??0Iterator@CPrimitiveBuffer@@QEAA@AEBUD2D1_COMPOSITOR_DRAWING_STATE@@PEBV1@@Z @ 0x18009A50C (--0Iterator@CPrimitiveBuffer@@QEAA@AEBUD2D1_COMPOSITOR_DRAWING_STATE@@PEBV1@@Z.c)
 */

CPrimitiveBuffer::Iterator *__fastcall CPrimitiveGroupDrawListGenerator::GetIteratorForState(
        __int64 a1,
        CPrimitiveBuffer::Iterator *a2,
        unsigned int a3)
{
  __int64 v3; // rax
  const struct CPrimitiveBuffer *v5; // r8
  _OWORD *v6; // r9
  _OWORD v8[9]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a3;
  v5 = *(const struct CPrimitiveBuffer **)(a1 + 24);
  v6 = (_OWORD *)(**(_QWORD **)(a1 + 16) + 144 * v3);
  v8[0] = *v6;
  v8[1] = v6[1];
  v8[2] = v6[2];
  v8[3] = v6[3];
  v8[4] = v6[4];
  v8[5] = v6[5];
  v8[6] = v6[6];
  v8[7] = v6[7];
  v8[8] = v6[8];
  CPrimitiveBuffer::Iterator::Iterator(a2, (const struct D2D1_COMPOSITOR_DRAWING_STATE *)v8, v5);
  return a2;
}
