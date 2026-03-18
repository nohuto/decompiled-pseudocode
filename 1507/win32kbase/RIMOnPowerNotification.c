/*
 * XREFs of RIMOnPowerNotification @ 0x1C006E310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMDoOnPowerNotification @ 0x1C006E438 (RIMDoOnPowerNotification.c)
 *     rimSignalReadComplete @ 0x1C006EEB4 (rimSignalReadComplete.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00761AC (WPP_RECORDER_SF_qq.c)
 *     DbgPrintRIMAlways @ 0x1C00B3870 (DbgPrintRIMAlways.c)
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C00CF69C (rimInvalidateHidKeyboardDeviceKeys.c)
 */

__int64 __fastcall RIMOnPowerNotification(void *a1, __int64 a2)
{
  int v4; // esi
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  int v7; // eax
  __int64 *v9; // r14
  unsigned int v10; // edi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v13; // r8
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // r12
  __int64 v17; // rsi
  int v18; // edx
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // r8
  int v22; // edx
  const CHAR *v23; // rcx
  __int64 v24; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x46u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  if ( a1 == (void *)-1LL )
  {
    if ( a2 == 2 )
    {
      v9 = 0LL;
      Object = 0LL;
      v10 = 0;
      RIMLockExclusive((__int64)&gObListLock);
      Flink = gObRimList.Flink;
      if ( gObRimList.Flink != &gObRimList )
      {
        do
        {
          if ( (HIDWORD(Flink[3].Blink) & 0x20) != 0 && !BYTE1(Flink[3].Blink) && !LOBYTE(Flink[3].Blink) )
            ++v10;
          Flink = Flink->Flink;
        }
        while ( Flink != &gObRimList );
        if ( v10 )
        {
          Object = (PVOID)Win32AllocPool();
          v9 = (__int64 *)Object;
          v10 = 0;
          if ( Object )
          {
            for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
            {
              v13 = i - 1;
              if ( (HIDWORD(i[3].Blink) & 0x20) != 0 && !BYTE1(v13[4].Blink) && !LOBYTE(v13[4].Blink) )
              {
                v14 = v10++;
                v9[v14] = (__int64)v13;
              }
            }
          }
        }
      }
      RIMUnlockExclusive((__int64)&gObListLock);
      if ( v10 )
      {
        v15 = v9;
        v16 = v10;
        do
        {
          v17 = *v15;
          RIMLockExclusive(*v15 + 96);
          if ( *(_BYTE *)(v17 + 73) || *(_BYTE *)(v17 + 74) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x4Au,
              (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
          }
          else
          {
            RIMLockExclusive(v17 + 712);
            v19 = *(_QWORD *)(v17 + 512);
            if ( v19 )
            {
              while ( 1 )
              {
                v20 = *(_DWORD *)(v19 + 184);
                if ( (v20 & 0x1000) == 0 || (v20 & 0x2000) == 0 )
                  goto LABEL_43;
                if ( (v20 & 0x80u) != 0 )
                  break;
                v21 = *(_QWORD *)(v19 + 424);
                if ( !*(_DWORD *)(v21 + 292) || !*(_BYTE *)(v17 + 728) )
                  goto LABEL_43;
                *(_QWORD *)(v19 + 264) = *(unsigned __int16 *)(*(_QWORD *)(v19 + 400) + 44LL);
                *(_DWORD *)(v19 + 256) = 0;
                rimInvalidateHidKeyboardDeviceKeys(v17, v19, v21, 0LL);
                if ( *(_BYTE *)(v17 + 728) )
                {
                  WPP_RECORDER_SF_qq(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v22,
                    5,
                    72,
                    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
                    v17,
                    v19);
                  v23 = "pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys failed!\n";
LABEL_42:
                  DbgPrintRIMAlways(v23);
                  goto LABEL_43;
                }
                rimSignalReadComplete(v17, v19);
LABEL_43:
                v19 = *(_QWORD *)(v19 + 40);
                if ( !v19 )
                  goto LABEL_44;
              }
              WPP_RECORDER_SF_qq(
                WPP_GLOBAL_Control->DeviceExtension,
                v18,
                5,
                73,
                (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
                v17,
                v19);
              v23 = "pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys skipped as it is paused!\n";
              goto LABEL_42;
            }
LABEL_44:
            RIMUnlockExclusive(v17 + 712);
          }
          RIMUnlockExclusive(v17 + 96);
          ++v15;
          --v16;
        }
        while ( v16 );
        v9 = (__int64 *)Object;
      }
      if ( v9 )
        Win32FreePool();
    }
    v4 = (int)Object;
    goto LABEL_10;
  }
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x47u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 89));
      v6 = v5[64];
      while ( v6 )
      {
        v7 = RIMDoOnPowerNotification(v5, v6, a2);
        v6 = *(_QWORD *)(v6 + 40);
        v4 = v7;
      }
      RIMUnlockExclusive((__int64)(v5 + 89));
    }
    RIMUnlockExclusive((__int64)(v5 + 12));
    ObfDereferenceObject(v5);
  }
LABEL_10:
  LODWORD(v24) = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x4Bu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v24);
  return (unsigned int)v4;
}
