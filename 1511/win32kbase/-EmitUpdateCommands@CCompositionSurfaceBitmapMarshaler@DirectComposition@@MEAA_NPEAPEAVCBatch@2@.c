/*
 * XREFs of ?EmitUpdateCommands@CCompositionSurfaceBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0048CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019520 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0045F80 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CompositionObject *v5; // rcx
  char *v6; // rcx
  void *v8; // [rsp+40h] [rbp+18h] BYREF
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v9) )
    return 0;
  v5 = (CompositionObject *)*((_QWORD *)this + 5);
  if ( !v5 || (int)CompositionObject::OpenDwmHandle(v5, &v8, v3, v4) < 0 )
    v8 = 0LL;
  v6 = (char *)v9;
  *(_DWORD *)v9 = 24;
  *(_QWORD *)(v6 + 4) = 0LL;
  *(_QWORD *)(v6 + 12) = 0LL;
  *((_DWORD *)v6 + 5) = 0;
  *((_DWORD *)v6 + 1) = 154;
  *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
  *(_QWORD *)(v6 + 12) = v8;
  *((_DWORD *)v6 + 5) = *((unsigned __int8 *)this + 48);
  return 1;
}
