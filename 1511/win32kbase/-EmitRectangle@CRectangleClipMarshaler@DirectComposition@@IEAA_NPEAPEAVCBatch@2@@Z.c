/*
 * XREFs of ?EmitRectangle@CRectangleClipMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0014AA0
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0014680 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitRectangle(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  _DWORD *v4; // rbx
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x40uLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 64;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x3CuLL);
  *v4 = 99;
  v4[1] = *((_DWORD *)this + 6);
  v4[2] = *((_DWORD *)this + 16);
  v4[3] = *((_DWORD *)this + 17);
  v4[4] = *((_DWORD *)this + 18);
  v4[5] = *((_DWORD *)this + 19);
  v4[6] = *((_DWORD *)this + 20);
  v4[7] = *((_DWORD *)this + 21);
  v4[8] = *((_DWORD *)this + 22);
  v4[9] = *((_DWORD *)this + 23);
  v4[10] = *((_DWORD *)this + 24);
  v4[11] = *((_DWORD *)this + 25);
  v4[12] = *((_DWORD *)this + 26);
  v4[13] = *((_DWORD *)this + 27);
  v4[14] = *((unsigned __int8 *)this + 112);
  return 1;
}
