/*
 * XREFs of ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x180054628
 * Callers:
 *     ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x18001C7A0 (-GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180048950 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x1800492B0 (-GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z.c)
 *     ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x180049430 (-GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x18004A370 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 *     ?RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@@Z @ 0x18004AA70 (-RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@@Z.c)
 *     ?SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x18004AF90 (-SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAEKPEAK@Z @ 0x180054420 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAEKPEAK@Z.c)
 */

__int64 __fastcall Common::Guid::Encode(const struct _GUID *a1, unsigned __int16 *a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned __int8 *v7; // rcx
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  unsigned int v10; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v11[40]; // [rsp+28h] [rbp-40h] BYREF

  if ( (unsigned int)a3 < 0x24 )
    return 2147943683LL;
  result = Common::Guid::Encode(a1, v11, a3, &v10);
  if ( (int)result >= 0 )
  {
    if ( v10 )
    {
      v7 = v11;
      v8 = v10;
      do
      {
        v9 = *v7++;
        *a2++ = v9;
        --v8;
      }
      while ( v8 );
    }
    *a4 = 36;
    return 0LL;
  }
  return result;
}
