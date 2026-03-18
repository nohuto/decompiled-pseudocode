/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C001EEA0
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0019D50 (rimFindMonitorForDigitizerWithQDCData.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001EA00 (NtUserDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     DrvpGetDeviceInterfaceName @ 0x1C001D718 (DrvpGetDeviceInterfaceName.c)
 *     DrvIsWddmDriverPresent @ 0x1C001F080 (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C001F0AC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00BB190 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // eax
  int DeviceInterfaceName; // eax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  wchar_t *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v2 + 24) = *a1;
  WdLogEvent5_WdEvent(v2);
  if ( !(unsigned int)DrvIsWddmDriverPresent() && *a1 != -2 )
    return 3221225659LL;
  v5 = a1 + 4;
  v6 = (unsigned int)a1[4];
  if ( (_DWORD)v6 == -1
    || (result = ((__int64 (__fastcall *)(int *, __int64, int *, int *))qword_1C01016C8)(a1 + 2, v6, a1 + 2, a1 + 4),
        (int)result >= 0) )
  {
    v8 = *a1;
    if ( *a1 > 1 )
    {
      if ( v8 <= 3 )
        goto LABEL_16;
      if ( v8 != 4 )
      {
        if ( v8 <= 5 || v8 > 7 )
          goto LABEL_37;
        goto LABEL_16;
      }
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
          v13 = (wchar_t *)*((_QWORD *)v13 + 18);
          if ( v13 )
          {
            DeviceInterfaceName = DrvpGetDeviceInterfaceName(
                                    (PDEVICE_OBJECT)v13,
                                    &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                                    v4,
                                    (wchar_t *)a1 + 10);
            goto LABEL_12;
          }
        }
      }
    }
    else
    {
      if ( v8 != 1 )
      {
        if ( v8 == -7 )
        {
          if ( (unsigned int)a1[1] >= 0x21C )
          {
            if ( gProtocolType )
              return 3221225506LL;
            DeviceInterfaceName = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *))qword_1C0101368)(
                                    *((_QWORD *)a1 + 1),
                                    (unsigned int)*v5,
                                    a1);
            goto LABEL_12;
          }
          return 3221225507LL;
        }
        if ( v8 != -5 )
        {
          if ( v8 == -3 )
          {
            if ( a1[1] != 32 )
              return 3221225485LL;
            DeviceInterfaceName = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
            goto LABEL_12;
          }
          if ( v8 == -2 )
          {
            if ( (unsigned int)a1[1] >= 0x7B4 )
            {
              DeviceInterfaceName = DrvpDisplayConfigGetDisplayDeviceInfo(a1);
LABEL_12:
              LODWORD(v10) = DeviceInterfaceName;
              return (unsigned int)v10;
            }
            return 3221225507LL;
          }
LABEL_37:
          LODWORD(v10) = -1073741811;
          return (unsigned int)v10;
        }
LABEL_16:
        LOBYTE(v3) = 1;
        v11 = ((__int64 (__fastcall *)(__int64, int *))qword_1C0101358)(v3, a1);
        v10 = v11;
        if ( v11 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v12);
          *(_QWORD *)(v15 + 24) = a1;
          *(_QWORD *)(v15 + 32) = v10;
          WdLogEvent5_WdWarning(v15);
        }
        return (unsigned int)v10;
      }
      v13 = gpGraphicsDeviceList;
      if ( (unsigned int)a1[1] < 0x54 )
        return 3221225507LL;
      if ( gpGraphicsDeviceList )
      {
        do
        {
          if ( a1[2] == *((_DWORD *)v13 + 66) && a1[3] == *((_DWORD *)v13 + 67) && *((_DWORD *)v13 + 68) == *v5 )
            break;
          v13 = (wchar_t *)*((_QWORD *)v13 + 16);
        }
        while ( v13 );
        if ( v13 )
        {
          LODWORD(v10) = 0;
          *(_OWORD *)(a1 + 5) = *((_OWORD *)v13 + 4);
          *(_OWORD *)(a1 + 9) = *((_OWORD *)v13 + 5);
          *(_OWORD *)(a1 + 13) = *((_OWORD *)v13 + 6);
          *(_OWORD *)(a1 + 17) = *((_OWORD *)v13 + 7);
          return (unsigned int)v10;
        }
      }
    }
    v14 = WdLogNewEntry5_WdWarning(v13);
    WdLogEvent5_WdWarning(v14);
    return 3221226021LL;
  }
  return result;
}
