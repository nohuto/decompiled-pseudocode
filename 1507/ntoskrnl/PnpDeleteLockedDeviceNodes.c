/*
 * XREFs of PnpDeleteLockedDeviceNodes @ 0x140536AEC
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1405349D8 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140026DEC (PoFxIdleDevice.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PipIsDeviceInDeviceObjectList @ 0x140535CDC (PipIsDeviceInDeviceObjectList.c)
 *     IopEnumerateRelations @ 0x140536D78 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNodes(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        __int64 a6,
        ULONG_PTR a7)
{
  unsigned int v7; // ebx
  __int64 v11; // r15
  ULONG_PTR v12; // rdi
  int v13; // eax
  __int64 v15; // r11
  unsigned int *v16; // rax
  ULONG_PTR v17; // rcx
  int v18; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+34h] [rbp-Ch]
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  int v21; // [rsp+78h] [rbp+38h] BYREF

  v7 = 0;
  if ( *(_BYTE *)(a2 + 8) )
  {
    v19 = 0;
    v18 = 1;
    while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v18, (unsigned int)&v20, (unsigned int)&v21, 0LL) )
    {
      if ( v21 || a4 )
      {
        v11 = v20;
        v12 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
        if ( a3 != 2 || (*(_DWORD *)(v12 + 704) & 2) == 0 )
        {
          v13 = PnpDeleteLockedDeviceNode(v12, a7);
          v7 = v13;
          if ( !a3 && a5 == 54 && v13 == -1073740537 )
          {
            if ( PipIsDeviceInDeviceObjectList(*(unsigned int **)a2, *(_QWORD *)(*(_QWORD *)(v12 + 16) + 32LL), 0LL) )
              *(_DWORD *)(v15 + 704) |= 2u;
            v7 = 0;
          }
          else if ( v13 < 0 )
          {
            if ( (*(_DWORD *)(v12 + 704) & 4) == 0 )
              KeBugCheckEx(0xCAu, 0xDuLL, v12, 4uLL, 0LL);
            PoFxIdleDevice(*(_QWORD *)(v12 + 32));
            *(_DWORD *)(v12 + 704) &= ~4u;
            if ( v18 == 1 && v19 )
            {
              v16 = *(unsigned int **)a2;
              v18 = 2;
              v19 = *v16 - v19;
            }
            else
            {
              v19 = 0;
              v18 = 3;
            }
            while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v18, (unsigned int)&v20, 0, 0LL) )
            {
              if ( v11 != v20 )
              {
                if ( v20 )
                  v17 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
                else
                  v17 = 0LL;
                PnpDeleteLockedDeviceNode(v17, a7);
              }
            }
            return (unsigned int)-1073741823;
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v7;
}
