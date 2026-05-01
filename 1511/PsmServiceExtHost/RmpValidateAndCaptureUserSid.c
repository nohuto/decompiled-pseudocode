/*
 * XREFs of RmpValidateAndCaptureUserSid @ 0x180002AF4
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180001820 (-AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_K@Z @ 0x18003D260 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_K@Z.c)
 *     ?GetApplicationProperties@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAKPEA_K44@Z @ 0x180043B00 (-GetApplicationProperties@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAKPEA_K44@Z.c)
 *     ?GetResourceSetTypeFromPSMKey@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAW4Enum@ResourceSetType@2@@Z @ 0x1800440F0 (-GetResourceSetTypeFromPSMKey@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAW4Enum@Resourc.c)
 * Callees:
 *     RmpRmSidInitialize @ 0x18002015C (RmpRmSidInitialize.c)
 */

_QWORD *__fastcall RmpValidateAndCaptureUserSid(void *Src, __int64 a2, int a3, void *a4, _QWORD *a5)
{
  _QWORD *result; // rax

  if ( a3 )
  {
    if ( Src )
    {
      RmpRmSidInitialize(a4, Src);
      result = a5;
      *a5 = a4;
    }
    else
    {
      if ( !*((_BYTE *)RmSvcGlobals + 2088) )
        __fastfail(0x8000FFFF);
      result = a5;
      *a5 = (char *)RmSvcGlobals + 2020;
    }
  }
  else
  {
    result = a5;
    *a5 = 0LL;
  }
  return result;
}
