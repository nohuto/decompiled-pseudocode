/*
 * XREFs of ?EmitUpdateCommands@CYCbCrSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00DDA40
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CYCbCrSurfaceMarshaler::EmitUpdateCommands(
        DirectComposition::CYCbCrSurfaceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // al
  int v4; // r8d
  char *v5; // rdx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v10);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = (char *)v10;
  *(_DWORD *)v10 = 24;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 1) = 163;
  *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 24);
  else
    v7 = 0;
  *((_DWORD *)v5 + 3) = v7;
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
    v4 = *(_DWORD *)(v8 + 24);
  *((_DWORD *)v5 + 4) = v4;
  *((_DWORD *)v5 + 5) = *((_DWORD *)this + 14);
  return 1;
}
