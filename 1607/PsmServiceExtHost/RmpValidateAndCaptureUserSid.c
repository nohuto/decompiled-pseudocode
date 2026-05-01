/*
 * XREFs of RmpValidateAndCaptureUserSid @ 0x180015F50
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x1800136B0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x18002B810 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSet.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x18002BA20 (-AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@.c)
 * Callees:
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpValidateAndCaptureUserSid(void *Src, int a2, int a3, void *a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  ULONG v8; // eax

  v5 = 0;
  if ( !a3 )
  {
    if ( !a2 )
    {
      *a5 = 0LL;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 2 && a3 != 4 && a3 != 8 || !Src || RtlLengthSid(Src) > 0x44 )
    return (unsigned int)-1073741811;
  memset_0(a4, 0, 0x44uLL);
  v8 = RtlLengthSid(Src);
  memcpy_0(a4, Src, v8);
  *a5 = a4;
  return v5;
}
