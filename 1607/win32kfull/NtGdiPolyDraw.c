/*
 * XREFs of NtGdiPolyDraw @ 0x1C02A90B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrePolyDraw @ 0x1C02921B8 (GrePolyDraw.c)
 */

__int64 __fastcall NtGdiPolyDraw(HDC a1, struct _POINTL *a2, char *a3, unsigned int a4)
{
  unsigned int v7; // esi
  HANDLE v8; // rdi
  void *v9; // rbx
  __int64 v10; // rdi
  BOOL v11; // eax
  SIZE_T v12; // rdx
  HANDLE v13; // rax

  v7 = 1;
  v8 = 0LL;
  v9 = 0LL;
  if ( a4 <= 0x1FFFFFFF )
  {
    v10 = a4;
    if ( v10 * 8 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v10] > W32UserProbeAddress || &a2[v10] < a2 )
        *W32UserProbeAddress = 0;
    }
    if ( a4 && ((unsigned __int64)&a3[a4] > W32UserProbeAddress || &a3[a4] < a3) )
      *W32UserProbeAddress = 0;
    v11 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails);
    v12 = 8LL * a4;
    if ( v11 )
    {
      v8 = (HANDLE)GrepSecureVirtualMemory(a2, v12, 2LL);
      v13 = (HANDLE)GrepSecureVirtualMemory(a3, a4, 2LL);
    }
    else
    {
      v8 = MmSecureVirtualMemory(a2, v12, 2u);
      v13 = MmSecureVirtualMemory(a3, a4, 2u);
    }
    v9 = v13;
  }
  if ( !v8 || !v9 )
    v7 = 0;
  if ( v7 )
    v7 = GrePolyDraw(a1, a2, a3, a4);
  if ( v8 )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v8);
    else
      MmUnsecureVirtualMemory(v8);
  }
  if ( v9 )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v9);
    else
      MmUnsecureVirtualMemory(v9);
  }
  return v7;
}
