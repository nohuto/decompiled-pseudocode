/*
 * XREFs of LdrpGetMUIFromCMFSegment @ 0x18000EF20
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     _ResCGetRegistryFlags @ 0x18000EB40 (_ResCGetRegistryFlags.c)
 *     ResCKeOpenRuntimeView @ 0x18000ED34 (ResCKeOpenRuntimeView.c)
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     LdrpGetRcConfig @ 0x180018978 (LdrpGetRcConfig.c)
 *     RtlLcidToLocaleName @ 0x18001F420 (RtlLcidToLocaleName.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x18003823C (LdrpInitMuiCrits.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpUnmapCMFSegment @ 0x1800CBD4C (LdrpUnmapCMFSegment.c)
 *     ResCKeCreateRuntimeView @ 0x1800F7138 (ResCKeCreateRuntimeView.c)
 *     ResCRuntimeGetCultureID @ 0x1800F7448 (ResCRuntimeGetCultureID.c)
 *     ResCRuntimeGetResourceDataEx @ 0x1800F74FC (ResCRuntimeGetResourceDataEx.c)
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
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 RuntimeView; // rdi
  BOOL v16; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  int CultureID; // edi
  __int64 v21; // rcx
  __int64 RcConfig; // rax
  int v23; // ecx
  __int128 v24; // xmm6
  int v25; // esi
  int v26; // ecx
  unsigned int i; // ebx
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int LastErrorValue; // [rsp+48h] [rbp-B8h]
  int v31; // [rsp+4Ch] [rbp-B4h]
  char v32[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v33; // [rsp+52h] [rbp-AEh]
  char *v34; // [rsp+58h] [rbp-A8h]
  __int128 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  char v37; // [rsp+80h] [rbp-80h] BYREF

  v31 = a3;
  LastErrorValue = NtCurrentTeb()->LastErrorValue;
  ResourceData = 0LL;
  v9 = a4 >> 7;
  v28 = 0;
  LdrpInitMuiCrits(&MuiLockInitCount, &MuiCriticalSection);
  v12 = ResRuntimeView;
  if ( !ResRuntimeView )
  {
    RtlEnterCriticalSection(&MuiCriticalSection);
    if ( !ResRuntimeView )
    {
      v29 = 0;
      RuntimeView = ResCKeOpenRuntimeView();
      if ( !RuntimeView )
      {
        v16 = -ResCGetRegistryFlags(v14, v13, (__int64)&v29);
        if ( ((unsigned __int8)v29 & (unsigned __int8)-v16 & 1) != 0 )
          RuntimeView = ResCKeCreateRuntimeView(
                          v29 & (unsigned int)-v16,
                          ((unsigned __int8)(v16 ? v29 : 0) >> 1) & 1,
                          ((unsigned __int8)(v16 ? v29 : 0) >> 2) & 1);
      }
      if ( !RuntimeView )
        RuntimeView = -1LL;
      ResRuntimeView = RuntimeView;
    }
    RtlLeaveCriticalSection(&MuiCriticalSection);
    v12 = ResRuntimeView;
  }
  if ( v12 != -1
    && (!v12
     || (v18 = *(_QWORD *)(v12 + 16)) != 0
     && (v19 = *(_QWORD *)(v18 + 24)) != 0
     && (*(_DWORD *)(v19 + 48) & 0x100000) == 0) )
  {
    if ( a2 == 1024 || a2 == 2048 || a2 == 3072 || a2 == 5120 )
    {
      v34 = &v37;
      v33 = 170;
      if ( (int)RtlLcidToLocaleName(a2, v32, 2LL) < 0 )
        goto LABEL_11;
      CultureID = ResCRuntimeGetCultureID(v21, v34);
      if ( !CultureID )
        goto LABEL_11;
    }
    else
    {
      CultureID = a2;
    }
    LOBYTE(v11) = 1;
    RcConfig = LdrpGetRcConfig(a1, v10, 0LL, v11);
    if ( RcConfig && *(_DWORD *)RcConfig == -20054323 )
    {
      v24 = *(_OWORD *)(RcConfig + 28);
      v25 = v31;
      v35 = v24;
      ResourceData = ResCRuntimeGetResourceDataEx(
                       v23,
                       (unsigned int)&v35,
                       CultureID,
                       v31,
                       16,
                       (__int64)&v28,
                       (__int64)a5);
      if ( ResourceData == -2 )
      {
        if ( v9
          || (RtlEnterCriticalSection(&MuiCriticalSection),
              v36 = v24,
              ResourceData = ResCRuntimeGetResourceDataEx(
                               v26,
                               (unsigned int)&v36,
                               CultureID,
                               v25,
                               0,
                               (__int64)&v28,
                               (__int64)a5),
              RtlLeaveCriticalSection(&MuiCriticalSection),
              ResourceData == -2) )
        {
          ResourceData = 0LL;
        }
      }
      if ( ((ResourceData + 3) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      {
        if ( CMFQueueRear )
        {
          RtlEnterCriticalSection(&MuiCriticalSection);
          for ( i = 0; i < (unsigned __int16)CMFQueueRear; LdrpUnmapCMFSegment((unsigned int)CMFStandbyQueue[i++]) )
            ;
          CMFQueueRear = 0;
          RtlLeaveCriticalSection(&MuiCriticalSection);
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
      *a6 = v28;
  }
  else if ( a5 )
  {
    *a5 = -1;
  }
  return ResourceData;
}
