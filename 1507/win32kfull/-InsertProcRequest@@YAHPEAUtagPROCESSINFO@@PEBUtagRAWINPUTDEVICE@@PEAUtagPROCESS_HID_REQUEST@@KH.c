/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0078ED8
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C0078D88 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PostDeviceNotification @ 0x1C00790B0 (PostDeviceNotification.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0079488 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C007953C (-SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     SearchHidTLCInfo @ 0x1C0152B08 (SearchHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C0155544 (AllocateAndLinkHidTLCInfo.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C01562D8 (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
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
  struct tagHID_PAGEONLY_REQUEST *v16; // rax
  unsigned __int16 v17; // r10
  __int64 v18; // rax
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
    v16 = SearchHidPageOnlyRequest(*((_WORD *)a3 + 8));
    if ( v16 || (v16 = AllocateAndLinkHidPageOnlyRequest(v17)) != 0LL )
    {
      *((_QWORD *)a3 + 3) = v16;
      SetHidPOCountToTLCInfo(*((_WORD *)a3 + 8), ++*((_DWORD *)v16 + 5), 0);
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
    v18 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
    if ( v18 || (v18 = AllocateAndLinkHidTLCInfo()) != 0 )
    {
      *((_QWORD *)a3 + 3) = v18;
      ++*(_DWORD *)(v18 + 24);
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
      ++dword_1C0321708;
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
