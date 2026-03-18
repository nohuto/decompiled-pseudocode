/*
 * XREFs of ProcessDeviceChanges @ 0x1C01E0120
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005B640 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     ?RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z @ 0x1C01DE7CC (-RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z.c)
 * Callees:
 *     PostDeviceNotification @ 0x1C0089D90 (PostDeviceNotification.c)
 *     GatherDeviceInfoSummaryInformation @ 0x1C00953F4 (GatherDeviceInfoSummaryInformation.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C0095550 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     IsPublicPointerDevice @ 0x1C0095E60 (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C0095E7C (UpdatePointerDeviceCount.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0095EA0 (UpdatePointerDeviceSystemMetrics.c)
 *     EndAllActiveContacts @ 0x1C01CB36C (EndAllActiveContacts.c)
 *     HidTLCActive @ 0x1C01D5530 (HidTLCActive.c)
 *     FreeDeviceInfo @ 0x1C01DA0F0 (FreeDeviceInfo.c)
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DDE54 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE3E0 (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     ?QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z @ 0x1C01DE648 (-QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z.c)
 *     ?RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE710 (-RegisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 *     ?StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE8A8 (-StopDeviceRead@@YAPEAUDEVICEINFO@@PEAU1@@Z.c)
 *     ?UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE910 (-UnregisterForDeviceChangeNotifications@@YAHPEAUDEVICEINFO@@@Z.c)
 *     RegisterConfigDeviceForChangeNotifications @ 0x1C01E06E4 (RegisterConfigDeviceForChangeNotifications.c)
 *     StartDeviceRead @ 0x1C01E0968 (StartDeviceRead.c)
 */

void __fastcall ProcessDeviceChanges(unsigned int a1)
{
  unsigned int v1; // r13d
  int v2; // edi
  int v3; // esi
  int v4; // r14d
  int v5; // r15d
  int v6; // r12d
  __int64 v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // r14d
  int v11; // r15d
  int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int8 v16; // cl
  __int16 v17; // di
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 v20; // ax
  __int64 v21; // r8
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 updated; // r8
  bool v26; // zf
  void *v27; // rcx
  __int16 v28; // ax
  __int16 v29; // ax
  __int16 v30; // ax
  struct DEVICEINFO *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  int v34; // [rsp+50h] [rbp-28h] BYREF
  int v35; // [rsp+54h] [rbp-24h] BYREF
  int v36; // [rsp+58h] [rbp-20h] BYREF
  int v37; // [rsp+5Ch] [rbp-1Ch] BYREF
  int v38[6]; // [rsp+60h] [rbp-18h] BYREF
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+C8h] [rbp+50h]
  int v41; // [rsp+D0h] [rbp+58h] BYREF
  int v42; // [rsp+D8h] [rbp+60h]

  if ( !LODWORD(aDeviceTemplate[71 * a1 + 12]) )
  {
    v1 = 0;
    v41 = 0;
    v2 = 0;
    v34 = 0;
    v3 = 0;
    v35 = 0;
    v4 = 0;
    v5 = 0;
    v36 = 0;
    v6 = 0;
    v37 = 0;
    v38[0] = 0;
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(v7);
    if ( a1 == 1 )
    {
      gKeyboardInfo = gKeyboardDefaultInfo;
      dword_1C031B128 = 65536030;
      qword_1C031B120 = 0xFA00020000LL;
    }
    if ( !a1 )
      ghMouseDevice = -1LL;
    v8 = (__int64 *)gpDeviceInfoList;
    v9 = gpDeviceInfoList;
    if ( gpDeviceInfoList )
    {
      v10 = gcPointerDevices + 1;
      v11 = 0;
      while ( 1 )
      {
        if ( IsPublicPointerDevice(v9) )
          --v10;
        if ( (*(_BYTE *)(v9 + 64) & 0x40) != 0 )
        {
          v13 = *(_QWORD *)(v9 + 56);
          if ( *(_WORD *)(v9 + 66) == 8 )
          {
            EndAllActiveContacts(*(struct tagHID_POINTER_DEVICE_INFO **)(v9 + 416), (_WORD *)(v9 + 66));
            UpdatePointerDeviceCount(2);
            PostDeviceNotification(0LL, (struct DEVICEINFO *)v9, v14, v15, v10);
            if ( (*(_WORD *)(v9 + 66) & 0x4000) == 0 )
              FreeDeviceInfo(v9);
            UpdatePointerDeviceSystemMetrics(0LL);
          }
          v9 = v13;
          goto LABEL_87;
        }
        v16 = *(_BYTE *)(v9 + 48);
        if ( v16 == 3 )
        {
          if ( (unsigned int)(v12 - 2) > 1 )
            goto LABEL_86;
        }
        else if ( v16 != v12 )
        {
          if ( v12 == 2 )
          {
            if ( v16 )
            {
LABEL_86:
              v9 = *(_QWORD *)(v9 + 56);
              goto LABEL_87;
            }
            v41 = ++v1;
          }
          if ( !v12 && v16 == 2 )
          {
            v23 = *(_QWORD *)(v9 + 416);
            if ( v23 )
            {
              if ( (unsigned int)(*(_DWORD *)(v23 + 24) - 1) <= 7 )
                v41 = ++v1;
            }
          }
          goto LABEL_86;
        }
        v17 = *(_WORD *)(v9 + 66);
        if ( (v17 & 0x20) != 0 )
        {
          *(_WORD *)(v9 + 66) = v17 & 0xFFDF;
          QueryDeviceInfo((struct DEVICEINFO *)v9);
        }
        v18 = *(_WORD *)(v9 + 66);
        if ( (v18 & 2) != 0 )
        {
          *(_WORD *)(v9 + 66) = v18 & 0xFFFD;
          CloseDevice((struct DEVICEINFO *)v9);
        }
        v19 = *(_WORD *)(v9 + 66);
        if ( (v19 & 5) == 0 )
          goto LABEL_29;
        if ( (v19 & 4) != 0 )
        {
          *(_WORD *)(v9 + 66) = v19 & 0xFFFB;
          UnregisterForDeviceChangeNotifications((struct DEVICEINFO *)v9);
        }
        *(_WORD *)(v9 + 66) &= ~1u;
        if ( *(_BYTE *)(v9 + 48) == 3 )
        {
          RegisterConfigDeviceForChangeNotifications((PVOID)v9);
          goto LABEL_29;
        }
        if ( !(unsigned int)OpenDevice((struct DEVICEINFO *)v9) )
        {
          if ( *(_BYTE *)(v9 + 48) != 2 )
          {
            v24 = FreeDeviceInfo(v9);
            goto LABEL_77;
          }
          goto LABEL_29;
        }
        if ( !gProtocolType )
          RegisterForDeviceChangeNotifications((PVOID)v9);
        if ( *(_BYTE *)(v9 + 48) == 2
          && !*(_DWORD *)(v9 + 308)
          && *(_QWORD *)(v9 + 216)
          && !(unsigned int)HidTLCActive(*(_DWORD **)(v9 + 408)) )
        {
          StopDeviceRead((struct DEVICEINFO *)v9);
        }
        if ( gProtocolType && (*(_WORD *)(v9 + 66) & 0x400) != 0 )
          goto LABEL_53;
        if ( *(_QWORD *)(v9 + 216) )
          break;
LABEL_57:
        *(_WORD *)(v9 + 66) &= ~0x400u;
LABEL_29:
        v20 = *(_WORD *)(v9 + 66);
        if ( (v20 & 8) != 0 )
        {
          *(_WORD *)(v9 + 66) = v20 & 0xFFF7;
          CloseDevice((struct DEVICEINFO *)v9);
          UnregisterForDeviceChangeNotifications((struct DEVICEINFO *)v9);
          if ( IsPublicPointerDevice(v9) )
          {
            v42 = 1;
            UpdatePointerDeviceCount(2);
            v11 = v42;
          }
          else
          {
            v22 = 0;
          }
          PostDeviceNotification(0LL, (struct DEVICEINFO *)v9, v21, 2uLL, v22);
          v9 = FreeDeviceInfo(v9);
          if ( v11 )
            UpdatePointerDeviceSystemMetrics(0LL);
          goto LABEL_87;
        }
        if ( (v20 & 0x10) != 0 )
        {
          v26 = *(_BYTE *)(v9 + 48) == 1;
          *(_WORD *)(v9 + 66) = v20 & 0xFFEF;
          if ( v26 )
          {
            v27 = *(void **)(v9 + 216);
            if ( v27 )
            {
              if ( *(_BYTE *)(v9 + 400) == 7 && *(_BYTE *)(v9 + 401) == 82
                || gbRemoteSession && gRemoteClientKeyboardType[0] == 7 && gRemoteClientKeyboardType[1] == 131074 )
              {
                ZwDeviceIoControlFile(v27, 0LL, 0LL, 0LL, &giosbKbdControl, 0xB1004u, &gKbdImeStatus, 0xCu, 0LL, 0);
              }
            }
          }
        }
        v28 = *(_WORD *)(v9 + 66);
        if ( (v28 & 0x200) == 0 || (*(_WORD *)(v9 + 66) = v28 & 0xFDFF, (v24 = StartDeviceRead((PVOID)v9)) == 0) )
        {
          v29 = *(_WORD *)(v9 + 66);
          if ( (v29 & 0x800) == 0
            || (*(_WORD *)(v9 + 66) = v29 & 0xF7FF, !(unsigned int)OpenDevice((struct DEVICEINFO *)v9))
            || (v24 = StartDeviceRead((PVOID)v9)) == 0 )
          {
            v30 = *(_WORD *)(v9 + 66);
            if ( (v30 & 0x1000) != 0 )
            {
              *(_WORD *)(v9 + 66) = v30 & 0xEFFF;
              if ( *(_QWORD *)(v9 + 216) )
              {
                if ( !*(_DWORD *)(v9 + 308) )
                {
                  v31 = StopDeviceRead((struct DEVICEINFO *)v9);
                  if ( v31 )
                    v9 = (__int64)v31;
                }
              }
            }
            GatherDeviceInfoSummaryInformation(v9, &v41, &v34, &v35, (unsigned int *)&v36, &v37, v38);
            if ( (v17 & 0x100) != 0 )
              KeSetEvent(*(PRKEVENT *)(v9 + 72), 1, 0);
            v1 = v41;
            goto LABEL_86;
          }
        }
LABEL_77:
        v9 = v24;
LABEL_87:
        if ( !v9 )
        {
          v2 = v34;
          v3 = v35;
          v4 = v36;
          v5 = v37;
          v6 = v38[0];
          v8 = (__int64 *)gpDeviceInfoList;
          goto LABEL_89;
        }
      }
      v24 = StartDeviceRead((PVOID)v9);
      if ( v24 )
        goto LABEL_77;
LABEL_53:
      if ( *(_QWORD *)(v9 + 216) )
      {
        if ( IsPublicPointerDevice(v9) )
          updated = (unsigned int)UpdatePointerDeviceCount(1);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)v9, updated, 1uLL, updated);
      }
      goto LABEL_57;
    }
LABEL_89:
    v32 = *v8;
    if ( v32 )
    {
      do
      {
        v33 = *(_QWORD *)(v32 + 56);
        if ( (*(_WORD *)(v32 + 64) & 0x200) != 0 )
          FreeDeviceInfo(v32);
        v32 = v33;
      }
      while ( v33 );
    }
    if ( !IsResourceAcquiredExclusiveLite )
      LeaveDeviceInfoListCrit_(v32);
    ApplyGatheredDeviceInfoSummaryInformation(a1, v1, v4, v2, v3, v5, v6);
  }
}
