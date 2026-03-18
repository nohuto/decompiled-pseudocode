/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C004C750
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000909C (rimFindMonitorForDigitizerWithQDCData.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004C340 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C004C9D8 (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004CA04 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C005016C (DrvpGetDeviceInterfaceName.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00BC9C0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 result; // rax
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  int ScaleFactorOverrides; // eax
  __int64 v10; // rsi
  wchar_t *v11; // rcx
  struct _DEVICE_OBJECT *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  wchar_t *v15; // rcx
  __int64 v16; // rax

  v2 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v2 + 24) = *a1;
  WdLogEvent5_WdEvent(v2);
  v4 = 0;
  if ( !(unsigned int)DrvIsWddmDriverPresent() && *a1 != -2 && *a1 != -8 )
    return 3221225659LL;
  v6 = a1 + 4;
  v7 = (unsigned int)a1[4];
  if ( (_DWORD)v7 == -1
    || (result = ((__int64 (__fastcall *)(int *, __int64, int *, int *))qword_1C01044E0)(a1 + 2, v7, a1 + 2, a1 + 4),
        (int)result >= 0) )
  {
    v8 = *a1;
    if ( *a1 <= -2 )
    {
      if ( v8 != -2 && v8 != -8 )
      {
        if ( v8 != -7 )
        {
          if ( v8 != -5 )
          {
            if ( v8 == -3 )
            {
              if ( a1[1] != 32 )
                return 3221225485LL;
              ScaleFactorOverrides = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
              goto LABEL_36;
            }
LABEL_27:
            LODWORD(v10) = -1073741811;
            return (unsigned int)v10;
          }
          goto LABEL_37;
        }
        if ( (unsigned int)a1[1] >= 0x21C )
        {
          if ( gProtocolType )
            return 3221225506LL;
          ScaleFactorOverrides = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, _QWORD))qword_1C0104188)(
                                   *((_QWORD *)a1 + 1),
                                   (unsigned int)*v6,
                                   a1,
                                   0LL,
                                   0LL);
          goto LABEL_36;
        }
        return 3221225507LL;
      }
      if ( (unsigned int)a1[1] < 0x7B4 )
        return 3221225507LL;
      LOBYTE(v4) = v8 == -8;
      ScaleFactorOverrides = DrvpDisplayConfigGetDisplayDeviceInfo(v4, a1);
LABEL_36:
      LODWORD(v10) = ScaleFactorOverrides;
      return (unsigned int)v10;
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
          if ( a1[2] == *((_DWORD *)v15 + 66) && a1[3] == *((_DWORD *)v15 + 67) && *((_DWORD *)v15 + 68) == *v6 )
            break;
          v15 = (wchar_t *)*((_QWORD *)v15 + 16);
        }
        while ( v15 );
        if ( v15 )
        {
          LODWORD(v10) = 0;
          *(_OWORD *)(a1 + 5) = *((_OWORD *)v15 + 4);
          *(_OWORD *)(a1 + 9) = *((_OWORD *)v15 + 5);
          *(_OWORD *)(a1 + 13) = *((_OWORD *)v15 + 6);
          *(_OWORD *)(a1 + 17) = *((_OWORD *)v15 + 7);
          return (unsigned int)v10;
        }
      }
    }
    else
    {
      if ( v8 <= 1 )
        goto LABEL_27;
      if ( v8 <= 3 )
      {
LABEL_37:
        LOBYTE(v3) = 1;
        v13 = ((__int64 (__fastcall *)(__int64, int *))qword_1C0104178)(v3, a1);
        v10 = v13;
        if ( v13 < 0 )
        {
          v14 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v14 + 24) = a1;
          *(_QWORD *)(v14 + 32) = v10;
          WdLogEvent5_WdWarning(v14);
        }
        return (unsigned int)v10;
      }
      if ( v8 != 4 )
      {
        if ( (unsigned int)(v8 - 6) > 1 )
          goto LABEL_27;
        goto LABEL_37;
      }
      if ( (unsigned int)a1[1] < 0x114 )
        return 3221225507LL;
      v11 = gpGraphicsDeviceList;
      if ( gpGraphicsDeviceList )
      {
        do
        {
          if ( a1[2] == *((_DWORD *)v11 + 66) && a1[3] == *((_DWORD *)v11 + 67) )
            break;
          v11 = (wchar_t *)*((_QWORD *)v11 + 16);
        }
        while ( v11 );
        if ( v11 )
        {
          v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)v11 + 18);
          if ( v12 )
          {
            ScaleFactorOverrides = DrvpGetDeviceInterfaceName(v12, &GUID_DEVINTERFACE_DISPLAY_ADAPTER);
            goto LABEL_36;
          }
        }
      }
    }
    v16 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v16);
    return 3221226021LL;
  }
  return result;
}
