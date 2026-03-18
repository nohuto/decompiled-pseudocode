/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x1C0006D58
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00D6E88 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     RIMCmFreePointerDeviceContacts @ 0x1C0006A40 (RIMCmFreePointerDeviceContacts.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMCmAllocPointerDeviceContacts(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int i; // ecx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  __int64 **v12; // rax
  __int64 *v13; // r9

  v1 = *(unsigned int *)(a1 + 688);
  v2 = 0;
  if ( (unsigned int)v1 > 0xA )
    *(_DWORD *)(a1 + 1560) = 10;
  else
    *(_DWORD *)(a1 + 1560) = v1;
  v4 = Win32AllocPoolZInit(2760 * v1);
  *(_QWORD *)(a1 + 1528) = v4;
  if ( v4 && (v5 = Win32AllocPoolZInit(16LL * *(unsigned int *)(a1 + 1560)), (*(_QWORD *)(a1 + 1552) = v5) != 0LL) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 1560); *v8 = v8 )
    {
      v7 = i++;
      v8 = (_QWORD *)(*(_QWORD *)(a1 + 1552) + 16 * v7);
      v8[1] = v8;
    }
    v9 = a1 + 1536;
    *(_QWORD *)(a1 + 1544) = a1 + 1536;
    *(_QWORD *)(a1 + 1536) = a1 + 1536;
    v10 = *(_DWORD *)(a1 + 688);
    v11 = *(_DWORD *)(a1 + 24) == 7;
    while ( v11 < v10 )
    {
      v12 = *(__int64 ***)(a1 + 1544);
      v13 = (__int64 *)(2760LL * v11 + *(_QWORD *)(a1 + 1528) + 16LL);
      if ( *v12 != (__int64 *)v9 )
        __fastfail(3u);
      *v13 = v9;
      ++v11;
      v13[1] = (__int64)v12;
      *v12 = v13;
      *(_QWORD *)(a1 + 1544) = v13;
    }
  }
  else
  {
    v2 = -1073741670;
    RIMCmFreePointerDeviceContacts(a1);
  }
  return v2;
}
