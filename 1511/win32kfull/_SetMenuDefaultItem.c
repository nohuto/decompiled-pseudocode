/*
 * XREFs of _SetMenuDefaultItem @ 0x1C00F27DC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxSetSysMenu @ 0x1C0072F20 (xxxSetSysMenu.c)
 *     NtUserSetMenuDefaultItem @ 0x1C00F2740 (NtUserSetMenuDefaultItem.c)
 *     ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C00F27B8 (-_SetCloseDefault@@YAXPEAUtagMENU@@@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
 */

__int64 __fastcall SetMenuDefaultItem(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r10
  _DWORD *v5; // rax
  unsigned int v6; // edx
  _DWORD *v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  int v10; // ecx
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  if ( a2 == -1 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = (_DWORD *)MNLookUpItem(a1, a2, a3, &v12);
    if ( !v5 || v12 != v4 || (*v5 & 0x800) != 0 )
      return 0LL;
  }
  v6 = *(_DWORD *)(v4 + 52);
  v7 = *(_DWORD **)(v4 + 80);
  if ( v6 )
  {
    v8 = v6;
    do
    {
      v9 = v7[1];
      if ( (v9 & 0x1000) != 0 && v7 != v5 )
      {
        v7[23] = 0x7FFFFFFF;
        v7[24] = 0;
        v7[1] = v9 & 0xFFFFEFFF;
      }
      v7 += 38;
      --v8;
    }
    while ( v8 );
  }
  if ( v3 != -1 )
  {
    v10 = v5[1];
    if ( (v10 & 0x1000) == 0 )
    {
      v5[24] = 0;
      v5[1] = v10 | 0x1000;
      v5[23] = 0x7FFFFFFF;
      *(_DWORD *)(v4 + 40) |= 0x400u;
    }
  }
  return 1LL;
}
