/*
 * XREFs of ExecutionModel::MiBToB @ 0x180023950
 * Callers:
 *     ?AddMemoryPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@@6@@Z @ 0x18001CF00 (-AddMemoryPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV-$basic_st.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExecutionModel::MiBToB(unsigned int a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return (unsigned __int64)a1 << 20;
  return result;
}
