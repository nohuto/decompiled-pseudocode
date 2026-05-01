/*
 * XREFs of ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180016764
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x1800355D4 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     ?GetApplicationCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJKPEAW4RmCommitLevel@@@Z @ 0x1800359C0 (-GetApplicationCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJKPEAW4RmCommitLevel@@@Z.c)
 *     ?GetApplicationCommitMemoryLimit@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180035B50 (-GetApplicationCommitMemoryLimit@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x1800364B0 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180037F90 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x18003E3A0 (-GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z.c)
 * Callees:
 *     ?assign@?$_CharTraitsBase@GGG@utl@@SAPEAGPEAG_KG@Z @ 0x180004A94 (-assign@-$_CharTraitsBase@GGG@utl@@SAPEAGPEAG_KG@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA_N_K@Z @ 0x180016700 (-_Grow@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA_N_K@Z.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::resize(
        _QWORD *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rsi
  char v4; // bp
  char *v5; // rax
  char result; // al
  _WORD *v7; // rdx

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
      utl::_CharTraitsBase<unsigned short,unsigned short,unsigned short>::assign((_WORD *)a1[1], 232 - v2, 0);
    }
    else
    {
      v4 = 0;
      v1 = v2;
    }
  }
  result = v4;
  v7 = (_WORD *)(*a1 + 2 * v1);
  a1[1] = v7;
  *v7 = 0;
  return result;
}
