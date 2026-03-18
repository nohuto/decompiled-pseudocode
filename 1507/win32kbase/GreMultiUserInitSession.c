/*
 * XREFs of GreMultiUserInitSession @ 0x1C0079280
 * Callers:
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C000BDD8 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 */

__int64 __fastcall GreMultiUserInitSession(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned __int16 *a9,
        int a10,
        unsigned __int16 *a11)
{
  unsigned int v12; // esi
  char *v13; // rax
  char *v14; // rax

  *(_DWORD *)(a1 + 4) = a5;
  v12 = 0;
  *(_QWORD *)(a1 + 8) = a6;
  *(_QWORD *)(a1 + 16) = a7;
  *(_DWORD *)a1 = a4;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 24) = a2;
  if ( *(_QWORD *)(a1 + 40) )
    Win32FreePool();
  v13 = (char *)Win32AllocPool();
  *(_QWORD *)(a1 + 40) = v13;
  if ( v13 )
  {
    StringCchCopyNW(v13, (unsigned int)(a8 + 1), (char *)a9, (unsigned int)(a8 + 1));
    *(_DWORD *)(a1 + 48) = a8 + 1;
    v12 = 1;
  }
  if ( *(_QWORD *)(a1 + 56) )
    Win32FreePool();
  v14 = (char *)Win32AllocPool();
  *(_QWORD *)(a1 + 56) = v14;
  if ( v14 )
  {
    StringCchCopyNW(v14, (unsigned int)(a10 + 1), (char *)a11, (unsigned int)(a10 + 1));
    return 1;
  }
  return v12;
}
