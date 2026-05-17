/*
 * XREFs of LdrpGetMUIFromCMFSegment @ 0x18005A1F8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A78 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180030344 (LdrpInitMuiCrits.c)
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 *     RtlLcidToLocaleName @ 0x180042E80 (RtlLcidToLocaleName.c)
 *     _ResCGetRegistryFlags @ 0x180059E20 (_ResCGetRegistryFlags.c)
 *     ResCKeOpenRuntimeView @ 0x18005A014 (ResCKeOpenRuntimeView.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     ResCRuntimeGetResourceDataEx @ 0x180095F1C (ResCRuntimeGetResourceDataEx.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     LdrpUnmapCMFSegment @ 0x1800DC948 (LdrpUnmapCMFSegment.c)
 *     ResCKeCreateRuntimeView @ 0x1800FF07C (ResCKeCreateRuntimeView.c)
 *     ResCRuntimeGetCultureID @ 0x1800FF388 (ResCRuntimeGetCultureID.c)
 */

__int64 __fastcall LdrpGetMUIFromCMFSegment(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        unsigned __int8 a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 ResourceData; // rbx
  char v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 RuntimeView; // rdi
  BOOL v15; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  int CultureID; // edi
  __int64 v20; // rcx
  _DWORD *RcConfig; // rax
  int v22; // ecx
  __int128 v23; // xmm6
  int v24; // esi
  int v25; // ecx
  unsigned int i; // ebx
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h]
  unsigned int LastErrorValue; // [rsp+4Ch] [rbp-B4h]
  char v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v32; // [rsp+52h] [rbp-AEh]
  char *v33; // [rsp+58h] [rbp-A8h]
  __int128 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  char v36; // [rsp+80h] [rbp-80h] BYREF

  v29 = a3;
  LastErrorValue = NtCurrentTeb()->LastErrorValue;
  ResourceData = 0LL;
  v9 = a4 >> 7;
  v27 = 0;
  LdrpInitMuiCrits(&MuiLockInitCount, (__int64)&MuiCriticalSection);
  v11 = ResRuntimeView;
  if ( !ResRuntimeView )
  {
    RtlEnterCriticalSection((__int64)&MuiCriticalSection);
    if ( !ResRuntimeView )
    {
      v28 = 0;
      RuntimeView = ResCKeOpenRuntimeView();
      if ( !RuntimeView )
      {
        v15 = -ResCGetRegistryFlags(v13, v12, (__int64)&v28);
        if ( ((unsigned __int8)v28 & (unsigned __int8)-v15 & 1) != 0 )
          RuntimeView = ResCKeCreateRuntimeView(
                          v28 & (unsigned int)-v15,
                          ((unsigned __int8)(v15 ? v28 : 0) >> 1) & 1,
                          ((unsigned __int8)(v15 ? v28 : 0) >> 2) & 1);
      }
      if ( !RuntimeView )
        RuntimeView = -1LL;
      ResRuntimeView = RuntimeView;
    }
    RtlLeaveCriticalSection((__int64)&MuiCriticalSection);
    v11 = ResRuntimeView;
  }
  if ( v11 != -1
    && (!v11
     || (v17 = *(_QWORD *)(v11 + 16)) != 0
     && (v18 = *(_QWORD *)(v17 + 24)) != 0
     && (*(_DWORD *)(v18 + 48) & 0x100000) == 0) )
  {
    if ( a2 == 1024 || a2 == 2048 || a2 == 3072 || a2 == 5120 )
    {
      v33 = &v36;
      v32 = 170;
      if ( (int)RtlLcidToLocaleName(a2, (__int64)v31, 2, 0) < 0 )
        goto LABEL_11;
      CultureID = ResCRuntimeGetCultureID(v20, v33);
      if ( !CultureID )
        goto LABEL_11;
    }
    else
    {
      CultureID = a2;
    }
    RcConfig = LdrpGetRcConfig(a1, v10, 0, 1);
    if ( RcConfig && *RcConfig == -20054323 )
    {
      v23 = *(_OWORD *)(RcConfig + 7);
      v24 = v29;
      v34 = v23;
      ResourceData = ResCRuntimeGetResourceDataEx(
                       v22,
                       (unsigned int)&v34,
                       CultureID,
                       v29,
                       16,
                       (__int64)&v27,
                       (__int64)a5);
      if ( ResourceData == -2 )
      {
        if ( v9
          || (RtlEnterCriticalSection((__int64)&MuiCriticalSection),
              v35 = v23,
              ResourceData = ResCRuntimeGetResourceDataEx(
                               v25,
                               (unsigned int)&v35,
                               CultureID,
                               v24,
                               0,
                               (__int64)&v27,
                               (__int64)a5),
              RtlLeaveCriticalSection((__int64)&MuiCriticalSection),
              ResourceData == -2) )
        {
          ResourceData = 0LL;
        }
      }
      if ( ((ResourceData + 3) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      {
        if ( CMFQueueRear )
        {
          RtlEnterCriticalSection((__int64)&MuiCriticalSection);
          for ( i = 0; i < (unsigned __int16)CMFQueueRear; LdrpUnmapCMFSegment((unsigned int)CMFStandbyQueue[i++]) )
            ;
          CMFQueueRear = 0;
          RtlLeaveCriticalSection((__int64)&MuiCriticalSection);
        }
        ResourceData = 0LL;
      }
    }
  }
LABEL_11:
  RtlSetLastWin32Error(LastErrorValue);
  if ( ResourceData )
  {
    if ( a6 )
      *a6 = v27;
  }
  else if ( a5 )
  {
    *a5 = -1;
  }
  return ResourceData;
}
