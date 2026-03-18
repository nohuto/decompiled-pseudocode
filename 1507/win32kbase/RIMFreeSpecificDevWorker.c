/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C00755F8
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00754B4 (RawInputManagerObjectDelete.c)
 *     RIMCreateDev @ 0x1C0076274 (RIMCreateDev.c)
 * Callees:
 *     RIMHidTLCActive @ 0x1C001A8C4 (RIMHidTLCActive.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RIMFreeHidDesc @ 0x1C0075858 (RIMFreeHidDesc.c)
 *     RIMFreeHidTLCInfo @ 0x1C0078090 (RIMFreeHidTLCInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00782B4 (RIMReleasePointerDeviceInfo.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  _QWORD *v7; // rdi

  if ( *(_QWORD *)(a2 + 216) )
    Win32FreePool();
  if ( *(_QWORD *)(a2 + 328) )
    Win32FreePool();
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v5 = *(_QWORD *)(a2 + 408);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_DWORD **)(a2 + 408)) )
        RIMFreeHidTLCInfo();
    }
    if ( *(_QWORD *)(a2 + 400) )
    {
      if ( *(_DWORD *)(a2 + 316) )
        RIMReleasePointerDeviceInfo(a1, a2);
      if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
      {
        v7 = *(_QWORD **)(a2 + 424);
        --*(_BYTE *)(a1 + 952);
        if ( v7[43] )
        {
          Win32FreePool();
          v7[43] = 0LL;
        }
        if ( v7[49] )
        {
          Win32FreePool();
          v7[49] = 0LL;
        }
        if ( v7[51] )
        {
          Win32FreePool();
          v7[51] = 0LL;
        }
        if ( v7[55] )
        {
          Win32FreePool();
          v7[55] = 0LL;
        }
        Win32FreePool();
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
  if ( *(_QWORD *)(a2 + 360) )
    Win32FreePool();
  if ( *(_QWORD *)(a2 + 368) )
    Win32FreePool();
  return RIMIDEFreeInjectedInfo(a2);
}
