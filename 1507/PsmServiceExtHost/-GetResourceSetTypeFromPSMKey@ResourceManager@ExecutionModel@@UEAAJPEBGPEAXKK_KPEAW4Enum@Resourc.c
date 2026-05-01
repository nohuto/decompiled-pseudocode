/*
 * XREFs of ?GetResourceSetTypeFromPSMKey@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAW4Enum@ResourceSetType@2@@Z @ 0x18003EC30
 * Callers:
 *     <none>
 * Callees:
 *     RmpValidateAndCaptureUserSid @ 0x180002244 (RmpValidateAndCaptureUserSid.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18003BBE4 (RmpActivityHostFindPsmResourceSets.c)
 *     ?GetLastResourceSetTypeApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAJPEAW4Enum@ResourceSetType@2@@Z @ 0x18003E7FC (-GetLastResourceSetTypeApplied@ModernActivationResourceInfo@ExecutionModel@@QEBAJPEAW4Enum@Resou.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetResourceSetTypeFromPSMKey(
        ExecutionModel::ResourceManager *this,
        unsigned __int16 *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6,
        enum ExecutionModel::ResourceSetType::Enum *a7)
{
  int v7; // r14d
  unsigned int v9; // ebx
  __int64 v10; // rdx
  ExecutionModel::ModernActivationResourceInfo *PsmResourceSets; // rax
  int LastResourceSetTypeApplied; // eax
  void *v14[2]; // [rsp+30h] [rbp-81h] BYREF
  _WORD v15[8]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v16; // [rsp+50h] [rbp-61h] BYREF
  _BYTE v17[80]; // [rsp+60h] [rbp-51h] BYREF

  v7 = a4;
  v14[0] = v15;
  v14[1] = v15;
  v15[0] = 0;
  if ( a7
    && utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
         (__int64)v14,
         (__int64 *)a2,
         (__int64)a3,
         a4)
    && (RmpValidateAndCaptureUserSid(a3, v10, a5, v17, &v16),
        (PsmResourceSets = (ExecutionModel::ModernActivationResourceInfo *)RmpActivityHostFindPsmResourceSets(
                                                                             (wchar_t **)v14,
                                                                             (void *)v16,
                                                                             v7,
                                                                             a5,
                                                                             a6)) != 0LL) )
  {
    LastResourceSetTypeApplied = ExecutionModel::ModernActivationResourceInfo::GetLastResourceSetTypeApplied(
                                   PsmResourceSets,
                                   a7);
    v9 = LastResourceSetTypeApplied;
    if ( LastResourceSetTypeApplied >= 0 )
    {
      if ( *(_DWORD *)a7 == -1 )
        LastResourceSetTypeApplied = -2147024809;
      v9 = LastResourceSetTypeApplied;
    }
  }
  else
  {
    v9 = -2147024809;
  }
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v14);
  return v9;
}
