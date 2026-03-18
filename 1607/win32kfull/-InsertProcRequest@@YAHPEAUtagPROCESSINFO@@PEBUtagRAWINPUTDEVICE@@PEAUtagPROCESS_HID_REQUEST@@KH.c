/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00E22D4
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00E2170 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0009F88 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C000CCCC (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     PostDeviceNotification @ 0x1C00E24AC (PostDeviceNotification.c)
 *     SearchHidTLCInfo @ 0x1C00E4A14 (SearchHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C00E5248 (AllocateAndLinkHidTLCInfo.c)
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
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  unsigned int v13; // ecx
  struct DEVICEINFO *i; // rdi
  __int64 v16; // rax
  struct tagHID_PAGEONLY_REQUEST *v17; // rax
  __int64 v18; // rax

  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 != 3 )
        goto LABEL_7;
      if ( !a5 )
      {
        v18 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
        if ( !v18 )
        {
          v18 = AllocateAndLinkHidTLCInfo();
          if ( !v18 )
            goto LABEL_28;
        }
        *((_QWORD *)a3 + 3) = v18;
        ++*(_DWORD *)(v18 + 32);
      }
      v10 = *((_QWORD *)a1 + 97) + 48LL;
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        __fastfail(3u);
      goto LABEL_6;
    }
    v17 = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[2];
    if ( v17 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
    {
LABEL_22:
      v17 = 0LL;
    }
    else
    {
      while ( *((_WORD *)v17 + 8) != *((_WORD *)a3 + 8) )
      {
        v17 = *(struct tagHID_PAGEONLY_REQUEST **)v17;
        if ( v17 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
          goto LABEL_22;
      }
    }
    if ( v17 || (v17 = AllocateAndLinkHidPageOnlyRequest(*((_WORD *)a3 + 8))) != 0LL )
    {
      *((_QWORD *)a3 + 3) = v17;
      ++*((_DWORD *)v17 + 5);
      SetHidPOCountToTLCInfo();
      HMAssignmentLock((char *)a3 + 32, a6);
      v10 = *((_QWORD *)a1 + 97) + 32LL;
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        __fastfail(3u);
      goto LABEL_6;
    }
LABEL_28:
    UserSetLastError(8LL);
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
    goto LABEL_28;
  }
LABEL_3:
  if ( !a7 )
    HMAssignmentLock((char *)a3 + 32, a6);
  v10 = *((_QWORD *)a1 + 97) + 16LL;
  v11 = *(_QWORD *)v10;
  if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
    __fastfail(3u);
LABEL_6:
  *(_QWORD *)a3 = v11;
  *((_QWORD *)a3 + 1) = v10;
  *(_QWORD *)(v11 + 8) = a3;
  *(_QWORD *)v10 = a3;
LABEL_7:
  *((_DWORD *)a3 + 5) ^= (*((_DWORD *)a3 + 5) ^ (4 * ((*((_DWORD *)a2 + 1) >> 13) & 1))) & 4;
  if ( (*((_DWORD *)a2 + 1) & 0x1100) != 0 )
  {
    if ( !a5 && (*((_DWORD *)a3 + 5) & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 97) + 80LL);
      ++dword_1C0326830;
    }
    *((_DWORD *)a3 + 5) |= 1u;
    v12 = *((_DWORD *)a3 + 5);
    if ( (*((_DWORD *)a2 + 1) & 0x1000) != 0 )
      v13 = v12 | 2;
    else
      v13 = v12 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v13;
  }
  for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    PostDeviceNotification(a3, i, 0);
  return 1LL;
}
