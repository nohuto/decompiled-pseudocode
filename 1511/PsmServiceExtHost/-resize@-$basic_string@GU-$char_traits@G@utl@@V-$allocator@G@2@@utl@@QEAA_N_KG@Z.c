/*
 * XREFs of ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180002858
 * Callers:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002114 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18003C504 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?GetApplicationCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJKPEAW4RmCommitLevel@@@Z @ 0x18003C8F0 (-GetApplicationCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJKPEAW4RmCommitLevel@@@Z.c)
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18003CE94 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 * Callees:
 *     ?_Grow@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA_N_K@Z @ 0x1800027F4 (-_Grow@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA_N_K@Z.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::resize(
        _QWORD *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  char v4; // bp
  char *v5; // rax
  unsigned __int64 v6; // rcx
  _WORD *v7; // rdi
  char result; // al
  _WORD *v9; // rdx

  v1 = 232LL;
  v2 = (__int64)(a1[1] - *a1) >> 1;
  v4 = 1;
  if ( v2 < 0xE8 )
  {
    if ( (_QWORD *)*a1 == a1 + 2 )
      v5 = (char *)a1 + 30;
    else
      v5 = (char *)a1[2];
    if ( (unsigned __int64)((__int64)&v5[-*a1] >> 1) >= 0xE8
      || utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Grow(a1) )
    {
      v6 = 232 - v2;
      v7 = (_WORD *)a1[1];
      while ( v6 )
      {
        *v7++ = 0;
        --v6;
      }
    }
    else
    {
      v4 = 0;
      v1 = v2;
    }
  }
  result = v4;
  v9 = (_WORD *)(*a1 + 2 * v1);
  a1[1] = v9;
  *v9 = 0;
  return result;
}
