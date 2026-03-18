/*
 * XREFs of ?EmitUpdateCommands@CCompositionSurfaceBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0077310
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C001D660 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0044720 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  CompositionObject *v3; // rcx
  char *v4; // rcx
  void *v6; // [rsp+40h] [rbp+18h] BYREF
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    return 0;
  v3 = (CompositionObject *)*((_QWORD *)this + 5);
  if ( !v3 || (int)CompositionObject::OpenDwmHandle(v3, &v6) < 0 )
    v6 = 0LL;
  v4 = (char *)v7;
  *(_DWORD *)v7 = 28;
  *(_QWORD *)(v4 + 4) = 0LL;
  *(_QWORD *)(v4 + 12) = 0LL;
  *(_QWORD *)(v4 + 20) = 0LL;
  *((_DWORD *)v4 + 1) = 174;
  *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
  *(_QWORD *)(v4 + 12) = v6;
  *((_DWORD *)v4 + 5) = *((unsigned __int8 *)this + 48);
  *((_DWORD *)v4 + 6) = *((unsigned __int8 *)this + 49);
  return 1;
}
