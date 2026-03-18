/*
 * XREFs of ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x1801119C4
 * Callers:
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1800026A0 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1800026A0 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008F40 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CFilterEffect::CheckInputsForOpacity(CFilterEffect *this, const struct CVisual *a2)
{
  int v2; // eax
  char v5; // si
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdi
  char IsOpaque; // al

  v2 = *((_DWORD *)this + 34);
  v5 = 1;
  if ( v2 )
  {
    v6 = 0LL;
    v7 = *((int *)this + 34);
    if ( v2 > 0 )
    {
      do
      {
        if ( !v5 )
          return v5;
        v8 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v6);
        v9 = *(_QWORD *)(v8 + 48);
        if ( v9 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 48LL))(*(_QWORD *)(v8 + 48), 9LL) )
          {
            IsOpaque = CFilterEffect::IsOpaque(*(CFilterEffect **)(v8 + 48), a2);
LABEL_9:
            v5 = IsOpaque;
            goto LABEL_10;
          }
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v8 + 48) + 48LL))(
                 *(_QWORD *)(v8 + 48),
                 79LL) )
          {
            IsOpaque = CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(*(_QWORD *)(v8 + 48) + 40LL));
            goto LABEL_9;
          }
        }
LABEL_10:
        ++v6;
      }
      while ( v6 < v7 );
    }
  }
  return v5;
}
