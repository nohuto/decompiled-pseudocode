/*
 * XREFs of RIMIDESetLinkCollectionUsageValues @ 0x1C00D6EF8
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x1C00D6304 (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     rimHidP_SetUsageValue @ 0x1C0005984 (rimHidP_SetUsageValue.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     rimHidP_SetUsages @ 0x1C00D2FA8 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMIDESetLinkCollectionUsageValues(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ebx
  unsigned int *v11; // rdi
  char *v12; // r15
  struct _HIDP_PREPARSED_DATA *v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned __int16 *i; // rbx
  unsigned int v20[4]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v21[16]; // [rsp+50h] [rbp-C8h] BYREF

  memset(v21, 0, 0x78uLL);
  v8 = *(_QWORD *)(a1 + 464);
  v9 = 0LL;
  v20[0] = 1;
  v10 = 0;
  v11 = (unsigned int *)(a3 + 4);
  v12 = *(char **)(v8 + 24);
  v13 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v14 = *(unsigned __int16 *)(v8 + 44);
  do
  {
    if ( rimHidP_SetUsageValue(HidP_Input, *((_WORD *)v11 - 2), a4, *((_WORD *)v11 - 1), *v11, v13, v12, v14) < 0 )
    {
      if ( *v11 == 1 && (unsigned int)v9 < 0xA )
      {
        v15 = 3 * v9;
        v16 = v11[1];
        v9 = (unsigned int)(v9 + 1);
        *(_QWORD *)((char *)v21 + 4 * v15) = *(_QWORD *)(v11 - 1);
        *((_DWORD *)&v21[1] + v15) = v16;
      }
      else if ( *v11 )
      {
        return 0LL;
      }
    }
    ++v10;
    v11 += 3;
  }
  while ( !v10 );
  if ( !(_DWORD)v9 )
    return 1LL;
  v17 = 0LL;
  for ( i = (unsigned __int16 *)v21;
        rimHidP_SetUsages(HidP_Input, *i, a4, (unsigned __int16 *)v21 + 6 * v17 + 1, v20, v13, v12, v14) >= 0;
        i += 6 )
  {
    if ( a5 && *i == 13 && i[1] == 66 )
      ++*a5;
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= (unsigned int)v9 )
      return 1LL;
  }
  return 0LL;
}
