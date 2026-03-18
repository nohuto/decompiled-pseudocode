/*
 * XREFs of RIMOnPowerNotification @ 0x1C0086BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00105A4 (WPP_RECORDER_SF_qq.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     RIMDoOnPowerNotification @ 0x1C0086D18 (RIMDoOnPowerNotification.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C00CE90C (RIMDoMobileKeyboardInvalidation.c)
 */

__int64 __fastcall RIMOnPowerNotification(void *a1, __int64 a2)
{
  __int64 v2; // r12
  int v4; // esi
  _QWORD *v5; // rdi
  int v6; // edx
  __int64 v7; // rbp
  int v8; // eax
  __int64 *v10; // r14
  unsigned int v11; // edi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v14; // r8
  __int64 v15; // rax
  __int64 *v16; // r15
  __int64 v17; // r12
  __int64 v18; // rdi
  int v19; // edx
  __int64 v20; // rdx
  __int64 j; // rsi
  int v22; // eax
  __int64 v23; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    75,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  if ( a1 == (void *)-1LL )
  {
    if ( v2 == 2 )
    {
      v10 = 0LL;
      Object = 0LL;
      v11 = 0;
      RIMLockExclusive((__int64)&gObListLock);
      Flink = gObRimList.Flink;
      if ( gObRimList.Flink != &gObRimList )
      {
        do
        {
          if ( (HIDWORD(Flink[3].Blink) & 0x20) != 0 && !BYTE1(Flink[3].Blink) && !LOBYTE(Flink[3].Blink) )
            ++v11;
          Flink = Flink->Flink;
        }
        while ( Flink != &gObRimList );
        if ( v11 )
        {
          Object = (PVOID)Win32AllocPool();
          v10 = (__int64 *)Object;
          v11 = 0;
          if ( Object )
          {
            for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
            {
              v14 = i - 1;
              if ( (HIDWORD(i[3].Blink) & 0x20) != 0 && !BYTE1(v14[4].Blink) && !LOBYTE(v14[4].Blink) )
              {
                v15 = v11++;
                v10[v15] = (__int64)v14;
              }
            }
          }
        }
      }
      RIMUnlockExclusive((__int64)&gObListLock);
      if ( v11 )
      {
        v16 = v10;
        v17 = v11;
        do
        {
          v18 = *v16;
          RIMLockExclusive(*v16 + 96);
          if ( *(_BYTE *)(v18 + 73) || *(_BYTE *)(v18 + 74) )
          {
            LOBYTE(v19) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v19,
              3,
              78,
              (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
          }
          else
          {
            RIMLockExclusive(v18 + 696);
            for ( j = *(_QWORD *)(v18 + 552); j; j = *(_QWORD *)(j + 40) )
            {
              v22 = *(_DWORD *)(j + 184);
              if ( (v22 & 0x1000) != 0 && (v22 & 0x2000) != 0 )
              {
                RIMDoMobileKeyboardInvalidation(v18, j);
              }
              else
              {
                WPP_RECORDER_SF_qq(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  v20,
                  5u,
                  0x4Du,
                  (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
                  v18,
                  j);
                DbgPrintRIMAlways("pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys skipped as it is paused!\n");
              }
            }
            RIMUnlockExclusive(v18 + 696);
          }
          RIMUnlockExclusive(v18 + 96);
          ++v16;
          --v17;
        }
        while ( v17 );
        v10 = (__int64 *)Object;
      }
      if ( v10 )
        Win32FreePool();
    }
    v4 = (int)Object;
  }
  else
  {
    v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
    if ( v4 >= 0 )
    {
      v5 = Object;
      RIMLockExclusive((__int64)Object + 96);
      if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
      {
        v4 = -1073741637;
        LOBYTE(v6) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          3,
          76,
          (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
      }
      else
      {
        RIMLockExclusive((__int64)(v5 + 87));
        v7 = v5[69];
        while ( v7 )
        {
          v8 = RIMDoOnPowerNotification(v5, v7, v2);
          v7 = *(_QWORD *)(v7 + 40);
          v4 = v8;
        }
        RIMUnlockExclusive((__int64)(v5 + 87));
      }
      RIMUnlockExclusive((__int64)(v5 + 12));
      ObfDereferenceObject(v5);
    }
  }
  LODWORD(v23) = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x4Fu,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v23);
  return (unsigned int)v4;
}
