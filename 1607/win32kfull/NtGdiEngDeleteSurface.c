/*
 * XREFs of NtGdiEngDeleteSurface @ 0x1C02AD940
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF a1)
{
  unsigned int v2; // ebx
  BOOL v3; // eax
  void *v4; // rcx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v6, a1);
  v2 = 0;
  if ( v7 && (*(_DWORD *)(v7 + 112) & 0x40000) != 0 )
  {
    if ( *(_QWORD *)(v7 + 136) )
    {
      v3 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails);
      v4 = *(void **)(v7 + 136);
      if ( v3 )
        GrepUnsecureVirtualMemory(v4);
      else
        MmUnsecureVirtualMemory(v4);
      *(_QWORD *)(v7 + 136) = 0LL;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v6);
    if ( EngDeleteSurface(a1) )
      return 1;
  }
  else
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v6);
  }
  return v2;
}
