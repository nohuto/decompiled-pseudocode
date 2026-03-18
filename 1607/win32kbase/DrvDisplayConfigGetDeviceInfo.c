/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C004A240
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0007F84 (rimFindMonitorForDigitizerWithQDCData.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0049F30 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C004A46C (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004A498 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C007DE8C (DrvpGetDeviceInterfaceName.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00C8690 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // edi
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // eax
  int DisplayDeviceInfo; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  wchar_t *v13; // rcx
  struct _DEVICE_OBJECT *v14; // rcx
  wchar_t *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v2 + 24) = *a1;
  WdLogEvent5_WdEvent(v2);
  v4 = 0;
  if ( !(unsigned int)DrvIsWddmDriverPresent() && *a1 != -2 )
    return 3221225659LL;
  v5 = a1 + 4;
  v6 = (unsigned int)a1[4];
  if ( (_DWORD)v6 == -1
    || (result = ((__int64 (__fastcall *)(int *, __int64, int *, int *))qword_1C011B830)(a1 + 2, v6, a1 + 2, a1 + 4),
        (int)result >= 0) )
  {
    v8 = *a1;
    if ( *a1 > -3 )
    {
      if ( v8 == -2 )
      {
        if ( (unsigned int)a1[1] >= 0x7B8 )
        {
          DisplayDeviceInfo = DrvpDisplayConfigGetDisplayDeviceInfo(a1);
LABEL_8:
          LODWORD(v5) = DisplayDeviceInfo;
          return (unsigned int)v5;
        }
        return 3221225507LL;
      }
      if ( v8 == 1 )
      {
        v15 = gpGraphicsDeviceList;
        if ( (unsigned int)a1[1] < 0x54 )
          return 3221225507LL;
        if ( gpGraphicsDeviceList )
        {
          do
          {
            if ( a1[2] == *((_DWORD *)v15 + 66) && a1[3] == *((_DWORD *)v15 + 67) && *((_DWORD *)v15 + 68) == *v5 )
              break;
            v15 = (wchar_t *)*((_QWORD *)v15 + 16);
          }
          while ( v15 );
          if ( v15 )
          {
            LODWORD(v5) = 0;
            *(_OWORD *)(a1 + 5) = *((_OWORD *)v15 + 4);
            *(_OWORD *)(a1 + 9) = *((_OWORD *)v15 + 5);
            *(_OWORD *)(a1 + 13) = *((_OWORD *)v15 + 6);
            *(_OWORD *)(a1 + 17) = *((_OWORD *)v15 + 7);
            return (unsigned int)v5;
          }
        }
        goto LABEL_61;
      }
      if ( v8 > 1 )
      {
        if ( v8 <= 3 )
          goto LABEL_19;
        if ( v8 == 4 )
        {
          if ( (unsigned int)a1[1] < 0x114 )
            return 3221225507LL;
          v13 = gpGraphicsDeviceList;
          if ( gpGraphicsDeviceList )
          {
            do
            {
              if ( a1[2] == *((_DWORD *)v13 + 66) && a1[3] == *((_DWORD *)v13 + 67) )
                break;
              v13 = (wchar_t *)*((_QWORD *)v13 + 16);
            }
            while ( v13 );
            if ( v13 )
            {
              v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)v13 + 18);
              if ( v14 )
              {
                DisplayDeviceInfo = DrvpGetDeviceInterfaceName(v14, &GUID_DEVINTERFACE_DISPLAY_ADAPTER);
                goto LABEL_8;
              }
            }
          }
LABEL_61:
          v17 = WdLogNewEntry5_WdWarning();
          WdLogEvent5_WdWarning(v17);
          return 3221226021LL;
        }
        if ( v8 > 5 && v8 <= 7 )
          goto LABEL_19;
      }
LABEL_40:
      LODWORD(v5) = -1073741811;
      return (unsigned int)v5;
    }
    if ( v8 == -3 )
    {
      if ( a1[1] != 32 )
        return 3221225485LL;
      DisplayDeviceInfo = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
      goto LABEL_8;
    }
    if ( v8 == -9 )
    {
      if ( (unsigned int)a1[1] >= 0x18 )
      {
        v10 = (unsigned int)*v5;
        v11 = *((_QWORD *)a1 + 1);
        v18 = 0;
        LODWORD(v5) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *, _QWORD))qword_1C011B4C8)(
                        v11,
                        v10,
                        0LL,
                        &v18,
                        0LL);
        if ( (int)v5 >= 0 )
        {
          LOBYTE(v4) = v18 == 2;
          a1[5] = v4;
        }
        return (unsigned int)v5;
      }
      return 3221225507LL;
    }
    if ( v8 != -10 )
    {
      switch ( v8 )
      {
        case -8:
          if ( (unsigned int)a1[1] < 0x218 )
            return 3221225507LL;
          if ( !gProtocolType )
          {
            DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, int *, int *))qword_1C011B938)(
                                  *((_QWORD *)a1 + 1),
                                  (unsigned int)*v5,
                                  512LL,
                                  a1 + 5,
                                  a1 + 6);
            goto LABEL_8;
          }
          break;
        case -7:
          if ( (unsigned int)a1[1] < 0x21C )
            return 3221225507LL;
          if ( !gProtocolType )
          {
            DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, _QWORD))qword_1C011B4C8)(
                                  *((_QWORD *)a1 + 1),
                                  (unsigned int)*v5,
                                  a1,
                                  0LL,
                                  0LL);
            goto LABEL_8;
          }
          break;
        case -5:
          goto LABEL_19;
        default:
          goto LABEL_40;
      }
      return 3221225506LL;
    }
LABEL_19:
    LOBYTE(v3) = 1;
    v12 = ((__int64 (__fastcall *)(__int64, int *))qword_1C011B4B8)(v3, a1);
    v5 = (_DWORD *)v12;
    if ( v12 < 0 )
    {
      v16 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v16 + 24) = a1;
      *(_QWORD *)(v16 + 32) = v5;
      WdLogEvent5_WdWarning(v16);
    }
    return (unsigned int)v5;
  }
  return result;
}
