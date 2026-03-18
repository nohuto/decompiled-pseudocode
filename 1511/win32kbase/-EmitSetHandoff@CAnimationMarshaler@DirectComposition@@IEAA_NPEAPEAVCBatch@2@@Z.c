/*
 * XREFs of ?EmitSetHandoff@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00181FC
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018540 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitSetHandoff(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // esi
  char *v5; // rax
  char *v6; // rdi
  __int64 v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 39) || (*((_DWORD *)this + 8) & 0x1000) != 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v8) )
  {
    v5 = (char *)v8;
    *(_DWORD *)v8 = 52;
    v6 = v5 + 4;
    memset(v5 + 4, 0, 0x30uLL);
    *(_DWORD *)v6 = 135;
    *((_DWORD *)v6 + 1) = *((_DWORD *)this + 10);
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 39);
    *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 20);
    v7 = *((_QWORD *)this + 21);
    if ( v7 )
      v2 = *(_DWORD *)(v7 + 40);
    *((_DWORD *)v6 + 5) = v2;
    *((_DWORD *)v6 + 6) = *((_DWORD *)this + 44);
    *((_DWORD *)v6 + 7) = *((_BYTE *)this + 200) & 1;
    *((_QWORD *)v6 + 4) = *((_QWORD *)this + 23);
    *((_QWORD *)v6 + 5) = *((_QWORD *)this + 24);
    *((_DWORD *)this + 8) |= 0x1000u;
    return 1;
  }
  return 0;
}
