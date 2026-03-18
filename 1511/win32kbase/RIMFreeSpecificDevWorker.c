/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C000CD9C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000CC50 (RawInputManagerObjectDelete.c)
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 * Callees:
 *     RIMReleasePointerDeviceInfo @ 0x1C000ABDC (RIMReleasePointerDeviceInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C000B3B0 (RIMFreeHidTLCInfo.c)
 *     RIMFreeHidDesc @ 0x1C000EF6C (RIMFreeHidDesc.c)
 *     RIMHidTLCActive @ 0x1C00115AC (RIMHidTLCActive.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 *v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v4 = *(_QWORD *)(a2 + 208);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a2 + 320);
  if ( v5 )
    Win32FreePool(v5);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v9 = *(_QWORD *)(a2 + 408);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_QWORD *)(a2 + 408)) )
        RIMFreeHidTLCInfo(v11);
    }
    if ( *(_QWORD *)(a2 + 400) )
    {
      if ( *(_DWORD *)(a2 + 308) )
        RIMReleasePointerDeviceInfo(a1, a2);
      if ( (*(_DWORD *)(a2 + 176) & 0x1000) != 0 )
      {
        v12 = *(_QWORD **)(a2 + 424);
        --*(_BYTE *)(a1 + 1000);
        v13 = v12[43];
        if ( v13 )
        {
          Win32FreePool(v13);
          v12[43] = 0LL;
        }
        v14 = v12[49];
        if ( v14 )
        {
          Win32FreePool(v14);
          v12[49] = 0LL;
        }
        v15 = v12[51];
        if ( v15 )
        {
          Win32FreePool(v15);
          v12[51] = 0LL;
        }
        v16 = v12[55];
        if ( v16 )
        {
          Win32FreePool(v16);
          v12[55] = 0LL;
        }
        Win32FreePool(v12);
        *(_QWORD *)(a2 + 424) = 0LL;
      }
      RIMFreeHidDesc(*(_QWORD *)(a2 + 400));
      *(_QWORD *)(a2 + 400) = 0LL;
    }
  }
  if ( *(_BYTE *)(a2 + 48) == 3 && *(_QWORD *)(a2 + 408) )
  {
    RIMFreeHidDesc(*(_QWORD *)(a2 + 400));
    *(_QWORD *)(a2 + 400) = 0LL;
  }
  v6 = *(_QWORD *)(a2 + 352);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a2 + 360);
  if ( v7 )
    Win32FreePool(v7);
  return RIMIDEFreeInjectedInfo(a2);
}
