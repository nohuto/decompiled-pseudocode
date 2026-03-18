/*
 * XREFs of ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x1800153D4
 * Callers:
 *     ?TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z @ 0x180014F80 (-TransferVertices3D_Internal@@YAXPEBUCCommonTransferParameters@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CBaseMatrix@@KA?AV1@AEBV1@@Z @ 0x180015430 (-ComputeAdjointIgnoreZ@CBaseMatrix@@KA-AV1@AEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

_OWORD *__fastcall CMILMatrix::ComputeAdjointIgnoreZ(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  _OWORD *result; // rax
  _BYTE v5[64]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (_OWORD *)CBaseMatrix::ComputeAdjointIgnoreZ(v5);
  *a1 = *v2;
  a1[1] = v2[1];
  a1[2] = v2[2];
  v3 = v2[3];
  result = a1;
  a1[3] = v3;
  return result;
}
