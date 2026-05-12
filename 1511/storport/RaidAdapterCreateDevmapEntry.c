/*
 * XREFs of RaidAdapterCreateDevmapEntry @ 0x1C000F6E0
 * Callers:
 *     RaidAdapterRegisterDeviceInterface @ 0x1C0013148 (RaidAdapterRegisterDeviceInterface.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C000B288 (RaidDriverGetName.c)
 *     PortMapBuildAdapterEntry @ 0x1C000C954 (PortMapBuildAdapterEntry.c)
 *     PortMapBuildBusEntry @ 0x1C000FAC8 (PortMapBuildBusEntry.c)
 *     PortMapOpenKey @ 0x1C00146CC (PortMapOpenKey.c)
 */

__int64 __fastcall RaidAdapterCreateDevmapEntry(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  unsigned int v4; // r14d
  unsigned __int8 v5; // cl
  int v7; // [rsp+20h] [rbp-38h]
  void *v8; // [rsp+30h] [rbp-28h]
  unsigned __int16 v9[12]; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  HANDLE v11; // [rsp+70h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  v11 = (HANDLE)-1LL;
  v2 = 0;
  if ( (int)PortMapOpenKey(&v11) >= 0 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)v9);
    if ( (int)PortMapBuildAdapterEntry(
                (__int64)v11,
                *(_DWORD *)(a1 + 56),
                *(_DWORD *)(a1 + 672),
                v3,
                v7,
                v9,
                v8,
                &Handle) >= 0 )
    {
      v4 = *(unsigned __int8 *)(a1 + 376);
      if ( *(_BYTE *)(a1 + 376) )
      {
        do
        {
          if ( v2 >= 0xFF )
            break;
          v5 = (unsigned __int8)v2 >= 8u ? -1 : *(_BYTE *)((unsigned __int8)v2 + a1 + 377);
          PortMapBuildBusEntry(Handle, v2, v5, a1 + 8 * (v2 + 270LL));
          ++v2;
        }
        while ( v2 < v4 );
      }
    }
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
  }
  if ( v11 != (HANDLE)-1LL )
    ZwClose(v11);
  return 0LL;
}
