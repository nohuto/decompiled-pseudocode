/*
 * XREFs of ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z @ 0x180027CF8
 * Callers:
 *     ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610 (-GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z.c)
 *     ?GetTierInfo@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@IAEAVStringBuffer@4@PEAK2@Z @ 0x1800260A0 (-GetTierInfo@Internal@ExecutionModel@@YA_NAEAVRegistryKey@Common@@IAEAVStringBuffer@4@PEAK2@Z.c)
 *     ?AddIoPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@2@@6@@Z @ 0x1800269C0 (-AddIoPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV-$basic_string.c)
 *     ?AddMemoryPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@@6@@Z @ 0x180026A98 (-AddMemoryPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV-$basic_st.c)
 *     ?AddCpuPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@@6@@Z @ 0x180026BDC (-AddCpuPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV-$basic_strin.c)
 *     ?AddImportancePolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@@6@@Z @ 0x180026D30 (-AddImportancePolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV-$basi.c)
 *     ?DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameConfig@2@PEAI@Z @ 0x180048BF8 (-DeserializeFromPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAUGameC.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall Common::RegistryKey::GetUInt32Value(HKEY *this, const unsigned __int16 *a2, BYTE *lpData)
{
  HKEY v3; // rcx
  LSTATUS result; // eax
  DWORD cbData; // [rsp+58h] [rbp+20h] BYREF

  v3 = *this;
  cbData = 4;
  result = RegQueryValueExW(v3, a2, 0LL, 0LL, lpData, &cbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
