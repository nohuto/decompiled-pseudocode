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
        PVOID BaseOfImage,
        unsigned __int16 a2,
        int a3,
        unsigned __int8 a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 ResourceData; // rbx
  char v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 RuntimeView; // rdi
  BOOL v14; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  int CultureID; // edi
  __int64 v19; // rcx
  __int64 RcConfig; // rax
  int v21; // ecx
  __int128 v22; // xmm6
  int v23; // esi
  int v24; // ecx
  unsigned int i; // ebx
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  LONG Win32Error; // [rsp+48h] [rbp-B8h]
  int v29; // [rsp+4Ch] [rbp-B4h]
  _UNICODE_STRING LocaleName; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  char v33; // [rsp+80h] [rbp-80h] BYREF

  v29 = a3;
  Win32Error = NtCurrentTeb()->LastErrorValue;
  ResourceData = 0LL;
  v9 = a4 >> 7;
  v26 = 0;
  LdrpInitMuiCrits(&MuiLockInitCount, &MuiCriticalSection);
  v10 = ResRuntimeView;
  if ( !ResRuntimeView )
  {
    RtlEnterCriticalSection(&MuiCriticalSection);
    if ( !ResRuntimeView )
    {
      v27 = 0;
      RuntimeView = (__int64)ResCKeOpenRuntimeView();
      if ( !RuntimeView )
      {
        v14 = -ResCGetRegistryFlags(v12, v11, (__int64)&v27);
        if ( ((unsigned __int8)v27 & (unsigned __int8)-v14 & 1) != 0 )
          RuntimeView = ResCKeCreateRuntimeView(
                          v27 & (unsigned int)-v14,
                          ((unsigned __int8)(v14 ? v27 : 0) >> 1) & 1,
                          ((unsigned __int8)(v14 ? v27 : 0) >> 2) & 1);
      }
      if ( !RuntimeView )
        RuntimeView = -1LL;
      ResRuntimeView = (PVOID)RuntimeView;
    }
    RtlLeaveCriticalSection(&MuiCriticalSection);
    v10 = ResRuntimeView;
  }
  if ( v10 != (_QWORD *)-1LL
    && (!v10 || (v16 = v10[2]) != 0 && (v17 = *(_QWORD *)(v16 + 24)) != 0 && (*(_DWORD *)(v17 + 48) & 0x100000) == 0) )
  {
    if ( a2 == 1024 || a2 == 2048 || a2 == 3072 || a2 == 5120 )
    {
      LocaleName.Buffer = (unsigned __int16 *)&v33;
      LocaleName.MaximumLength = 170;
      if ( RtlLcidToLocaleName(a2, &LocaleName, 2u, 0) < 0 )
        goto LABEL_11;
      CultureID = ResCRuntimeGetCultureID(v19, LocaleName.Buffer);
      if ( !CultureID )
        goto LABEL_11;
    }
    else
    {
      CultureID = a2;
    }
    RcConfig = LdrpGetRcConfig(BaseOfImage);
    if ( RcConfig && *(_DWORD *)RcConfig == -20054323 )
    {
      v22 = *(_OWORD *)(RcConfig + 28);
      v23 = v29;
      v31 = v22;
      ResourceData = ResCRuntimeGetResourceDataEx(
                       v21,
                       (unsigned int)&v31,
                       CultureID,
                       v29,
                       16,
                       (__int64)&v26,
                       (__int64)a5);
      if ( ResourceData == -2 )
      {
        if ( v9
          || (RtlEnterCriticalSection(&MuiCriticalSection),
              v32 = v22,
              ResourceData = ResCRuntimeGetResourceDataEx(
                               v24,
                               (unsigned int)&v32,
                               CultureID,
                               v23,
                               0,
                               (__int64)&v26,
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
      *a6 = v26;
  }
  else if ( a5 )
  {
    *a5 = -1;
  }
  return ResourceData;
}
