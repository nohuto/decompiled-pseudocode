/*
 * XREFs of NtGdiCheckBitmapBits @ 0x1C02B2670
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B1D1C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(
        HDC a1,
        void *a2,
        char *a3,
        int a4,
        unsigned int Size,
        int a6,
        int a7,
        char *Address)
{
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  char *v13; // rdx
  HANDLE v14; // rsi
  HANDLE v15; // rax
  void *v16; // rdi
  ULONG v18; // ecx
  int v19; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+4Ch] [rbp-5Ch]
  __int128 v21; // [rsp+54h] [rbp-54h]
  int v22; // [rsp+64h] [rbp-44h]

  v19 = 0;
  v20 = 0LL;
  v21 = 0uLL;
  v22 = 0;
  v10 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_31;
  v11 = 3LL * Size;
  if ( v11 > 0xFFFFFFFF || (int)v11 + 3 < (unsigned int)v11 )
  {
    v18 = 534;
LABEL_32:
    EngSetLastError(v18);
    return 0LL;
  }
  v12 = (v11 + 3) & 0xFFFFFFFC;
  if ( a7 != v12 )
  {
LABEL_31:
    v18 = 87;
    goto LABEL_32;
  }
  v19 = 5;
  v20 = Size | 0x100000000LL;
  LODWORD(v21) = (v11 + 3) & 0xFFFFFFFC;
  *(_QWORD *)((char *)&v21 + 4) = 0LL;
  HIDWORD(v21) = 0;
  if ( v12 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = &a3[v12];
    if ( (unsigned __int64)v13 > W32UserProbeAddress || v13 < a3 )
      *W32UserProbeAddress = 0;
  }
  if ( Size && ((unsigned __int64)&Address[Size] > W32UserProbeAddress || &Address[Size] < Address) )
    *W32UserProbeAddress = 0;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
  {
    v14 = (HANDLE)GrepSecureVirtualMemory(a3, v12, 2LL);
    v15 = (HANDLE)GrepSecureVirtualMemory(Address, Size, 4LL);
  }
  else
  {
    v14 = MmSecureVirtualMemory(a3, v12, 2u);
    v15 = MmSecureVirtualMemory(Address, Size, 4u);
  }
  v16 = v15;
  if ( v14 )
  {
    if ( v15 )
      v10 = GreCheckBitmapBits(a1, a2, (struct _DEVBITMAPINFO *)&v19, a3, (unsigned __int8 *)Address);
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v14);
    else
      MmUnsecureVirtualMemory(v14);
  }
  if ( v16 )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
      GrepUnsecureVirtualMemory(v16);
    else
      MmUnsecureVirtualMemory(v16);
  }
  return v10;
}
