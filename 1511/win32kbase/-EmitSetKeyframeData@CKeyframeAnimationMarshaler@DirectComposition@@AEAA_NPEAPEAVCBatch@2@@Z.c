/*
 * XREFs of ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D87F8
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D88E0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  char *v4; // rax
  _DWORD *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x400) == 0 && *((_QWORD *)this + 10) && *((_QWORD *)this + 12) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 48;
      v5 = v4 + 4;
      memset(v4 + 4, 0, 0x2CuLL);
      *v5 = 183;
      v5[1] = *((_DWORD *)this + 6);
      v5[2] = *((_DWORD *)this + 12);
      v5[3] = *((_DWORD *)this + 26);
      v5[4] = *(_DWORD *)(*((_QWORD *)this + 10) + 24LL);
      v5[5] = *((_DWORD *)this + 22);
      v5[6] = *((_DWORD *)this + 24);
      v5[7] = *((_DWORD *)this + 32);
      v5[8] = *((_DWORD *)this + 33);
      v5[9] = *((_DWORD *)this + 36);
      v5[10] = *((_DWORD *)this + 37);
      *((_DWORD *)this + 4) |= 0x400u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
