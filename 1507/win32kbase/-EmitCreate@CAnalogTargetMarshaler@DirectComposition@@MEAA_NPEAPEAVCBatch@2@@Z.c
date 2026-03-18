/*
 * XREFs of ?EmitCreate@CAnalogTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DB610
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnalogTargetMarshaler::EmitCreate(
        DirectComposition::CAnalogTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 28;
    *(_QWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 12) = 0LL;
    *(_QWORD *)(v3 + 20) = 0LL;
    *((_DWORD *)v3 + 1) = 115;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v3 + 4) = *((_DWORD *)this + 10);
    *((_DWORD *)v3 + 5) = *((_DWORD *)this + 11);
    *((_DWORD *)v3 + 6) = *((_DWORD *)this + 12);
    *((_DWORD *)v3 + 3) = *((_DWORD *)this + 15);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
