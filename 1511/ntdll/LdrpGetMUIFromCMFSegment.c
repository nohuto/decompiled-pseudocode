/*
 * XREFs of LdrpGetMUIFromCMFSegment @ 0x180048A70
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x1800304C8 (LdrpInitMuiCrits.c)
 *     LdrpGetRcConfig @ 0x18003C440 (LdrpGetRcConfig.c)
 *     _ResCGetRegistryFlags @ 0x180048690 (_ResCGetRegistryFlags.c)
 *     ResCKeOpenRuntimeView @ 0x180048884 (ResCKeOpenRuntimeView.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCRuntimeGetResourceDataEx @ 0x180094738 (ResCRuntimeGetResourceDataEx.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpUnmapCMFSegment @ 0x1800D4588 (LdrpUnmapCMFSegment.c)
 *     ResCKeCreateRuntimeView @ 0x1800F6F24 (ResCKeCreateRuntimeView.c)
 *     ResCRuntimeGetCultureID @ 0x1800F7234 (ResCRuntimeGetCultureID.c)
 */

__int64 __fastcall LdrpGetMUIFromCMFSegment(
        PVOID BaseOfImage,
        unsigned __int16 a2,
        int a3,
        unsigned __int8 a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 ResourceData; // rbx
  char v9; // r12
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 RuntimeView; // rdi
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
  LONG Win32Error; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h]
  _UNICODE_STRING LocaleName; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h] BYREF
  char v34; // [rsp+80h] [rbp-80h] BYREF

  v30 = a3;
  Win32Error = NtCurrentTeb()->LastErrorValue;
  ResourceData = 0LL;
  v9 = a4 >> 7;
  v27 = 0;
  LdrpInitMuiCrits(&MuiLockInitCount, &MuiCriticalSection);
  v11 = ResRuntimeView;
  if ( !ResRuntimeView )
  {
    RtlEnterCriticalSection(&MuiCriticalSection);
    if ( !ResRuntimeView )
    {
      v28 = 0;
      RuntimeView = (__int64)ResCKeOpenRuntimeView();
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
      ResRuntimeView = (PVOID)RuntimeView;
    }
    RtlLeaveCriticalSection(&MuiCriticalSection);
    v11 = ResRuntimeView;
  }
  if ( v11 != (_QWORD *)-1LL
    && (!v11 || (v17 = v11[2]) != 0 && (v18 = *(_QWORD *)(v17 + 24)) != 0 && (*(_DWORD *)(v18 + 48) & 0x100000) == 0) )
  {
    if ( a2 == 1024 || a2 == 2048 || a2 == 3072 || a2 == 5120 )
    {
      LocaleName.Buffer = (unsigned __int16 *)&v34;
      LocaleName.MaximumLength = 170;
      if ( RtlLcidToLocaleName(a2, &LocaleName, 2u, 0) < 0 )
        goto LABEL_11;
      CultureID = ResCRuntimeGetCultureID(v20, LocaleName.Buffer);
      if ( !CultureID )
        goto LABEL_11;
    }
    else
    {
      CultureID = a2;
    }
    RcConfig = LdrpGetRcConfig(BaseOfImage, v10, 0, 1);
    if ( RcConfig && *RcConfig == -20054323 )
    {
      v23 = *(_OWORD *)(RcConfig + 7);
      v24 = v30;
      v32 = v23;
      ResourceData = ResCRuntimeGetResourceDataEx(
                       v22,
                       (unsigned int)&v32,
                       CultureID,
                       v30,
                       16,
                       (__int64)&v27,
                       (__int64)a5);
      if ( ResourceData == -2 )
      {
        if ( v9
          || (RtlEnterCriticalSection(&MuiCriticalSection),
              v33 = v23,
              ResourceData = ResCRuntimeGetResourceDataEx(
                               v25,
                               (unsigned int)&v33,
                               CultureID,
                               v24,
                               0,
                               (__int64)&v27,
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
  RtlSetLastWin32Error(Win32Error);
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
