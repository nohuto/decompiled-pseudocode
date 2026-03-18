/*
 * XREFs of ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001CD8C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001CF80 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateFlags(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 24;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *((_DWORD *)v4 + 5) = 0;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 1) = 168;
      *((_DWORD *)v4 + 3) = (*((unsigned __int8 *)this + 216) >> 1) & 1;
      *((_DWORD *)v4 + 4) = *((_BYTE *)this + 216) & 1;
      *((_DWORD *)v4 + 5) = (*((unsigned __int8 *)this + 216) >> 2) & 1;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
