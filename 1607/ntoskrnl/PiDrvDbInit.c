/*
 * XREFs of PiDrvDbInit @ 0x140551F4C
 * Callers:
 *     PiPnpRtlInit @ 0x140551E10 (PiPnpRtlInit.c)
 *     PnpBootPhaseComplete @ 0x140580CE0 (PnpBootPhaseComplete.c)
 * Callees:
 *     PiDrvDbRegisterNode @ 0x140552028 (PiDrvDbRegisterNode.c)
 *     DrvDbSuspendDatabase @ 0x140552338 (DrvDbSuspendDatabase.c)
 *     DrvDbOpenContext @ 0x140578EA0 (DrvDbOpenContext.c)
 */

__int64 __fastcall PiDrvDbInit(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // esi
  wchar_t **v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 j; // rdi
  __int64 i; // rdi

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 2 )
    {
      for ( i = PiDrvDbNodeList; (__int64 *)i != &PiDrvDbNodeList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 64) & 2) == 0 )
        {
          v1 = DrvDbSuspendDatabase(a1, *(_QWORD *)(i + 24), 0LL);
          if ( v1 < 0 )
            break;
        }
      }
    }
  }
  else
  {
    qword_14031E168 = (__int64)&PiDrvDbNodeList;
    PiDrvDbNodeList = (__int64)&PiDrvDbNodeList;
    v1 = DrvDbOpenContext(a1, 0LL);
    if ( v1 >= 0 )
    {
      v3 = 0;
      v4 = &PiDrvDbNodeDescriptors;
      while ( 1 )
      {
        v1 = PiDrvDbRegisterNode(*v4, *((unsigned int *)v4 + 2));
        if ( v1 < 0 )
          break;
        ++v3;
        v4 += 2;
        if ( v3 >= 2 )
        {
          for ( j = PiDrvDbNodeList; (__int64 *)j != &PiDrvDbNodeList; j = *(_QWORD *)j )
          {
            if ( (*(_DWORD *)(j + 64) & 2) == 0 )
            {
              LOBYTE(v6) = 1;
              v1 = DrvDbSuspendDatabase(v5, *(_QWORD *)(j + 24), v6);
              if ( v1 < 0 )
                break;
            }
          }
          return (unsigned int)v1;
        }
      }
    }
  }
  return (unsigned int)v1;
}
