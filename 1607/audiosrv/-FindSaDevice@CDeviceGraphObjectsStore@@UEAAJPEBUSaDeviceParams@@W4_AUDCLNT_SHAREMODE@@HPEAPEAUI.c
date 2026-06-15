/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x180021D10
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180023AC0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800219A0 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x180021C00 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        struct _RTL_CRITICAL_SECTION *lpCriticalSection)
{
  struct ISaDeviceProxy **v5; // r14
  unsigned int FirstMatchingSaDevice; // ebx
  _QWORD v12[8]; // [rsp+20h] [rbp-48h] BYREF

  v5 = (struct ISaDeviceProxy **)lpCriticalSection;
  lpCriticalSection->DebugInfo = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 16, (__int64)&lpCriticalSection);
  if ( CDeviceGraphObjectsStore::SaDeviceExists(this, AUDCLNT_SHAREMODE_EXCLUSIVE) && (!a4 || a3) )
  {
    FirstMatchingSaDevice = -2005139364;
    goto LABEL_5;
  }
  if ( a3 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( CDeviceGraphObjectsStore::SaDeviceExists(this, AUDCLNT_SHAREMODE_SHARED) && !a4 )
    {
      FirstMatchingSaDevice = -2005139363;
      goto LABEL_5;
    }
LABEL_18:
    FirstMatchingSaDevice = -2005139430;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 2) == 1 )
    goto LABEL_18;
  v12[1] = a2;
  v12[0] = &std::_Func_impl<_lambda_c9062d0cc6b58ce068de574295fd0aa7_,std::allocator<int>,bool,ISaDeviceProxy *>::`vftable';
  v12[7] = v12;
  FirstMatchingSaDevice = CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)v12, v5);
LABEL_5:
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_fb4725feffd93d51989ad9d0ed5ddd21_Traceguids,
      FirstMatchingSaDevice);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return FirstMatchingSaDevice;
}
