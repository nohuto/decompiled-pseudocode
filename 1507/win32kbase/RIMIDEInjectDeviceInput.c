/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C00C5D18
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C00AC530 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00C5F7C (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C00C4A24 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C00C6900 (RIMIDESetLinkCollectionUsageValues.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00C6E5C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(void *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v5; // r13d
  int v6; // esi
  char *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // eax
  int v11; // ecx
  _WORD *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // cl
  int v18; // [rsp+40h] [rbp-58h]
  int v19; // [rsp+44h] [rbp-54h] BYREF
  int *v20; // [rsp+48h] [rbp-50h]
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v24; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v18 = 1;
  v24 = 0;
  v19 = 0;
  v20 = 0LL;
  v5 = 1;
  v6 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v6 >= 0 )
  {
    v7 = (char *)Object;
    v8 = *((_QWORD *)Object + 55);
    v9 = *((_QWORD *)Object + 51);
    if ( !*(_DWORD *)(v8 + 16) )
      *(_DWORD *)(v8 + 16) = 1;
    RIMLockExclusive(v9 + 96);
    if ( *(_BYTE *)(v9 + 73) )
    {
      v6 = -1073741637;
    }
    else
    {
      v10 = *((_DWORD *)v7 + 66);
      if ( (v10 & 4) != 0 || (v10 & 2) != 0 )
        v20 = &v19;
      memset(*(void **)(*((_QWORD *)v7 + 58) + 24LL), 0, *(unsigned __int16 *)(*((_QWORD *)v7 + 58) + 44LL));
      if ( !a3 )
        goto LABEL_33;
      v11 = 1;
      v12 = (_WORD *)(a2 + 8);
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex(
                              (struct RIMDEV *)(v7 + 64),
                              (unsigned __int16)*v12,
                              &v24,
                              v11) )
      {
        v13 = *((_DWORD *)v7 + 66);
        if ( ((v13 & 4) != 0 || (v13 & 2) != 0) && *(v12 - 4) == 13 && *(v12 - 3) == 84 )
          v5 = *((_DWORD *)v12 - 1);
        v14 = RIMIDESetLinkCollectionUsageValues((int)v7 + 64, 0, (unsigned int)a2 + 12 * v3, v24, (__int64)v20);
        if ( !v14 )
          goto LABEL_33;
        if ( *v12 )
        {
          v11 = 0;
          v18 = 0;
        }
        else
        {
          v11 = v18;
        }
        ++v3;
        v12 += 6;
        if ( v3 >= a3 )
          goto LABEL_23;
      }
      v14 = 0;
LABEL_23:
      if ( v14 )
      {
        v15 = *((_DWORD *)v7 + 66);
        if ( (v15 & 2) != 0 || (v15 & 4) != 0 )
        {
          v16 = v19;
          if ( v5 == v19 )
          {
            *((_DWORD *)v7 + 66) = v15 & 0xFFFFFFFD;
          }
          else
          {
            v6 = -1073741668;
            *((_DWORD *)v7 + 66) = v15 | 2;
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              5,
              16,
              (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids,
              v5,
              v16);
          }
          *((_DWORD *)v7 + 66) &= ~4u;
        }
        if ( v6 < 0 )
        {
          v6 = -1073741811;
        }
        else
        {
          RIMLockExclusive(v9 + 712);
          *((_DWORD *)v7 + 80) = 0;
          *((_QWORD *)v7 + 41) = *(unsigned __int16 *)(*((_QWORD *)v7 + 58) + 44LL);
          rimProcessDeviceBufferAndStartRead(v9, (__int64)(v7 + 64));
          RIMUnlockExclusive(v9 + 712);
        }
      }
      else
      {
LABEL_33:
        v6 = -1073741668;
      }
    }
    RIMUnlockExclusive(v9 + 96);
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v6;
}
