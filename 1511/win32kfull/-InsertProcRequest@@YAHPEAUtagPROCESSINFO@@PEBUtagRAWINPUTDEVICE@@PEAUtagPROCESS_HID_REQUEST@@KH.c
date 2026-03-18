/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0089BAC
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C0089A48 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C00071DC (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C0009718 (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     ?SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C0009F78 (-SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PostDeviceNotification @ 0x1C0089D90 (PostDeviceNotification.c)
 *     SearchHidTLCInfo @ 0x1C010243C (SearchHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C010FAFC (AllocateAndLinkHidTLCInfo.c)
 */

__int64 __fastcall InsertProcRequest(
        struct tagPROCESSINFO *a1,
        const struct tagRAWINPUTDEVICE *a2,
        struct tagPROCESS_HID_REQUEST *a3,
        int a4,
        int a5,
        struct tagWND *a6,
        int a7)
{
  __int64 *v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  unsigned int v13; // ecx
  struct DEVICEINFO *v14; // rdi
  __int64 v16; // rax
  struct tagHID_PAGEONLY_REQUEST *v17; // rax
  __int16 v18; // r10
  __int64 v19; // rax

  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 != 3 )
        goto LABEL_7;
      if ( !a5 )
      {
        v19 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
        if ( !v19 )
        {
          v19 = AllocateAndLinkHidTLCInfo();
          if ( !v19 )
            goto LABEL_27;
        }
        *((_QWORD *)a3 + 3) = v19;
        ++*(_DWORD *)(v19 + 32);
      }
      v10 = (__int64 *)(*((_QWORD *)a1 + 98) + 48LL);
      v11 = *v10;
      *(_QWORD *)a3 = *v10;
      *((_QWORD *)a3 + 1) = v10;
      if ( *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
      goto LABEL_6;
    }
    v17 = SearchHidPageOnlyRequest(*((_WORD *)a3 + 8));
    if ( v17 || (v17 = AllocateAndLinkHidPageOnlyRequest(v18)) != 0LL )
    {
      *((_QWORD *)a3 + 3) = v17;
      SetHidPOCountToTLCInfo(*((_WORD *)a3 + 8), ++*((_DWORD *)v17 + 5), 0);
      HMAssignmentLock((char *)a3 + 32, a6);
      v10 = (__int64 *)(*((_QWORD *)a1 + 98) + 32LL);
      v11 = *v10;
      *(_QWORD *)a3 = *v10;
      *((_QWORD *)a3 + 1) = v10;
      if ( *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
      goto LABEL_6;
    }
LABEL_27:
    UserSetLastError(8);
    return 0LL;
  }
  if ( !a5 )
  {
    v16 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
    if ( v16 || (v16 = AllocateAndLinkHidTLCInfo()) != 0 )
    {
      *((_QWORD *)a3 + 3) = v16;
      ++*(_DWORD *)(v16 + 24);
      goto LABEL_3;
    }
    goto LABEL_27;
  }
LABEL_3:
  if ( !a7 )
    HMAssignmentLock((char *)a3 + 32, a6);
  v10 = (__int64 *)(*((_QWORD *)a1 + 98) + 16LL);
  v11 = *v10;
  *(_QWORD *)a3 = *v10;
  *((_QWORD *)a3 + 1) = v10;
  if ( *(__int64 **)(v11 + 8) != v10 )
    __fastfail(3u);
LABEL_6:
  *(_QWORD *)(v11 + 8) = a3;
  *v10 = (__int64)a3;
LABEL_7:
  *((_DWORD *)a3 + 5) ^= (*((_DWORD *)a3 + 5) ^ (4 * ((*((_DWORD *)a2 + 1) >> 13) & 1))) & 4;
  if ( (*((_DWORD *)a2 + 1) & 0x1100) != 0 )
  {
    if ( !a5 && (*((_DWORD *)a3 + 5) & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 98) + 80LL);
      ++dword_1C0321720;
    }
    *((_DWORD *)a3 + 5) |= 1u;
    v12 = *((_DWORD *)a3 + 5);
    if ( (*((_DWORD *)a2 + 1) & 0x1000) != 0 )
      v13 = v12 | 2;
    else
      v13 = v12 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v13;
  }
  if ( aDeviceTemplate[308] )
    v14 = gpRimDevBackedDeviceInfoList;
  else
    v14 = (struct DEVICEINFO *)gpDeviceInfoList;
  while ( v14 )
  {
    PostDeviceNotification(a3, v14, 0);
    v14 = (struct DEVICEINFO *)*((_QWORD *)v14 + 7);
  }
  return 1LL;
}
