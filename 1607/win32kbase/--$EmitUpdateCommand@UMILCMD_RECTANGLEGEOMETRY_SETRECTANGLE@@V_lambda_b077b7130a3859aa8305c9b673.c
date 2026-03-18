/*
 * XREFs of ??$EmitUpdateCommand@UMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@V_lambda_b077b7130a3859aa8305c9b673db2541_@@@CResourceMarshaler@DirectComposition@@KA_NPEAPEAVCBatch@1@AEBV_lambda_b077b7130a3859aa8305c9b673db2541_@@@Z @ 0x1C00796A8
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0044D50 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand<MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE,_lambda_b077b7130a3859aa8305c9b673db2541_>(
        struct DirectComposition::CBatch **a1,
        __int64 a2)
{
  char *v3; // rax
  _DWORD *v4; // rbx
  char result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a1, 0x30uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 48;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x2CuLL);
  *v4 = 113;
  v4[1] = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  v4[2] = *(_DWORD *)(*(_QWORD *)a2 + 80LL);
  v4[3] = *(_DWORD *)(*(_QWORD *)a2 + 84LL);
  v4[4] = *(_DWORD *)(*(_QWORD *)a2 + 88LL);
  v4[5] = *(_DWORD *)(*(_QWORD *)a2 + 92LL);
  v4[6] = *(_DWORD *)(*(_QWORD *)a2 + 96LL);
  v4[7] = *(_DWORD *)(*(_QWORD *)a2 + 100LL);
  v4[8] = *(_DWORD *)(*(_QWORD *)a2 + 104LL);
  v4[9] = *(_DWORD *)(*(_QWORD *)a2 + 108LL);
  result = 1;
  v4[10] = *(unsigned __int8 *)(*(_QWORD *)a2 + 112LL);
  return result;
}
