/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C000A37C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000A230 (RawInputManagerObjectDelete.c)
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00CD874 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 * Callees:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C000539C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C00067A0 (RIMReleasePointerDeviceInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0007A00 (RIMFreeHidTLCInfo.c)
 *     RIMFreeHidDesc @ 0x1C000A6BC (RIMFreeHidDesc.c)
 *     RIMHidTLCActive @ 0x1C0010254 (RIMHidTLCActive.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 *v11; // rcx
  DeadzonePalmTelemetry ***v12; // rdi
  __int64 v13; // rbp
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v3 = *(_QWORD *)(a2 + 216);
  if ( v3 )
    Win32FreePool(v3);
  v5 = *(_QWORD *)(a2 + 336);
  if ( v5 )
    Win32FreePool(v5);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v9 = *(_QWORD *)(a2 + 472);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_QWORD *)(a2 + 472)) )
        RIMFreeHidTLCInfo(v11);
    }
    if ( *(_QWORD *)(a2 + 464) )
    {
      if ( *(_DWORD *)(a2 + 316) )
      {
        if ( *(_DWORD *)(a2 + 456) )
        {
          v12 = (DeadzonePalmTelemetry ***)(a2 + 416);
          v13 = 5LL;
          do
          {
            if ( *v12 )
            {
              RIMDeadzone::Release(*v12);
              Win32FreePool(*v12);
              *v12 = 0LL;
              --*(_DWORD *)(a2 + 456);
            }
            ++v12;
            --v13;
          }
          while ( v13 );
        }
        RIMReleasePointerDeviceInfo(a1, a2);
      }
      if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
      {
        v14 = *(_QWORD **)(a2 + 488);
        --*(_BYTE *)(a1 + 952);
        v15 = v14[43];
        if ( v15 )
        {
          Win32FreePool(v15);
          v14[43] = 0LL;
        }
        v16 = v14[49];
        if ( v16 )
        {
          Win32FreePool(v16);
          v14[49] = 0LL;
        }
        v17 = v14[51];
        if ( v17 )
        {
          Win32FreePool(v17);
          v14[51] = 0LL;
        }
        v18 = v14[55];
        if ( v18 )
        {
          Win32FreePool(v18);
          v14[55] = 0LL;
        }
        Win32FreePool(v14);
        *(_QWORD *)(a2 + 488) = 0LL;
      }
      RIMFreeHidDesc(*(_QWORD *)(a2 + 464));
      *(_QWORD *)(a2 + 464) = 0LL;
    }
  }
  if ( *(_BYTE *)(a2 + 48) == 3 && *(_QWORD *)(a2 + 472) )
  {
    RIMFreeHidDesc(*(_QWORD *)(a2 + 464));
    *(_QWORD *)(a2 + 464) = 0LL;
  }
  v6 = *(_QWORD *)(a2 + 368);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a2 + 376);
  if ( v7 )
    Win32FreePool(v7);
  return RIMIDEFreeInjectedInfo(a2);
}
