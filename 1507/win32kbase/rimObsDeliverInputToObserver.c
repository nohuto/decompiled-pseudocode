/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C00D1588
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C00D1914 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C00D1408 (rimObsCheckForExistingDeviceHandle.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // r15d
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8
  char **v8; // rsi
  unsigned int v9; // ecx
  int v10; // r8d
  SIZE_T v11; // rdx
  __int128 v12; // xmm6
  char *v13; // rcx
  char *v14; // rcx
  size_t v15; // r8
  const void *v16; // rdx
  __int128 v18; // [rsp+40h] [rbp-58h]
  __int128 v19; // [rsp+50h] [rbp-48h]
  __int128 v20; // [rsp+60h] [rbp-38h]
  HANDLE Handle; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  RIMLockExclusive(a2 + 128);
  if ( *(_DWORD *)(a2 + 80) == 1 )
  {
    Handle = (HANDLE)-1LL;
    Handle = rimObsCheckForExistingDeviceHandle(a2, *(PVOID *)(a1 + 32));
    if ( Handle == (HANDLE)-1LL )
    {
      v4 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
      if ( v4 >= 0 )
      {
        v5 = Win32AllocPoolZInit(0x18uLL);
        if ( v5 )
        {
          v5[1] = v5;
          *v5 = v5;
          v5[2] = Handle;
          v6 = a2 + 112;
          v7 = *(_QWORD **)(a2 + 120);
          if ( *(_QWORD *)(*(_QWORD *)(a2 + 112) + 8LL) != a2 + 112 || *v7 != v6 )
            __fastfail(3u);
          *v7 = v5;
          *(_QWORD *)(a2 + 120) = v5[1];
          *(_QWORD *)v5[1] = v6;
          v5[1] = v7;
        }
        else
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0xAu,
            (__int64)&WPP_a391bf47b3dad452e3102517377cfdcf_Traceguids);
          v4 = -1073741670;
          ObCloseHandle(Handle, *(_BYTE *)(a2 + 64));
        }
      }
    }
    if ( v4 >= 0 )
    {
      v8 = *(char ***)(a2 + 88);
      v9 = 48;
      v10 = *(_DWORD *)(a1 + 256);
      if ( v10 >= 0 )
      {
        if ( *(_QWORD *)(a1 + 264) > 0xFFFFFFCFuLL )
          v4 = 534;
        v9 = *(_DWORD *)(a1 + 264) + 48;
      }
      v11 = *(unsigned int *)(a2 + 96);
      if ( (unsigned int)v11 >= v9 )
      {
        LODWORD(v18) = 0;
        v12 = *(_OWORD *)(a1 + 256);
        LODWORD(v20) = *(unsigned __int8 *)(a1 + 48);
        *((_QWORD *)&v18 + 1) = Handle;
        *((_QWORD *)&v20 + 1) = 0LL;
        if ( v10 >= 0 )
          *((_QWORD *)&v20 + 1) = v8 + 6;
      }
      else
      {
        LODWORD(v18) = 1;
        DWORD2(v18) = 0;
        HIDWORD(v18) = v9;
        v12 = v19;
      }
      if ( *(_BYTE *)(a2 + 64) )
      {
        ProbeForWrite(v8, v11, 2u);
        memset(v8, 0, *(unsigned int *)(a2 + 96));
        if ( v8 + 6 > W32UserProbeAddress || v8 + 6 <= v8 )
          *(_BYTE *)W32UserProbeAddress = 0;
        *(_OWORD *)v8 = v18;
        *((_OWORD *)v8 + 1) = v12;
        *((_OWORD *)v8 + 2) = v20;
        v14 = v8[5];
        if ( v14 )
        {
          v15 = *(_QWORD *)(a1 + 264);
          v16 = *(const void **)(*(_QWORD *)(a1 + 400) + 24LL);
          if ( &v14[v15] > W32UserProbeAddress || &v14[v15] <= v14 )
            *(_BYTE *)W32UserProbeAddress = 0;
          memmove(v14, v16, v15);
        }
      }
      else
      {
        memset(v8, 0, v11);
        *(_OWORD *)v8 = v18;
        *((_OWORD *)v8 + 1) = v12;
        *((_OWORD *)v8 + 2) = v20;
        v13 = v8[5];
        if ( v13 )
          memmove(v13, *(const void **)(*(_QWORD *)(a1 + 400) + 24LL), *(_QWORD *)(a1 + 264));
      }
      *(_DWORD *)(a2 + 80) = 0;
      ZwSetEvent(*(HANDLE *)(a2 + 72), 0LL);
    }
  }
  RIMUnlockExclusive(a2 + 128);
  return (unsigned int)v4;
}
