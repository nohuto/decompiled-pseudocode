/*
 * XREFs of RIMIsParallelDevice @ 0x1C0009A3C
 * Callers:
 *     RIMAssignTouchType @ 0x1C0007A34 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMValidateAllCollectionUsages @ 0x1C0005F50 (RIMValidateAllCollectionUsages.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C00062C0 (rimHidP_GetLinkCollectionNodes.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0008928 (RIMRetrieveAllLinkIndexUsages.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, _DWORD *a3)
{
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  unsigned __int16 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  BOOL v8; // r13d
  int v9; // esi
  __int64 v10; // rsi
  _DWORD *v11; // rax
  int v13; // edx
  _WORD v14[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v15; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v16[2]; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-6Dh] BYREF
  struct _HIDP_PREPARSED_DATA *v18; // [rsp+50h] [rbp-69h]
  __int64 v19; // [rsp+60h] [rbp-59h] BYREF
  __int64 v20; // [rsp+68h] [rbp-51h] BYREF
  __int64 v21; // [rsp+70h] [rbp-49h]
  _DWORD *v22; // [rsp+78h] [rbp-41h]
  _BYTE v23[80]; // [rsp+80h] [rbp-39h] BYREF

  v3 = *(_DWORD **)(a1 + 680);
  v4 = 0;
  v22 = a3;
  v18 = a2;
  v21 = a1;
  v5 = 1;
  v19 = 0LL;
  v14[0] = 1;
  v6 = 0LL;
  v20 = 0LL;
  v7 = 0LL;
  v16[0] = 0;
  v15 = 0;
  v8 = 0;
  v17 = 0;
  if ( rimHidP_GetLinkCollectionNodes(0LL, &v17, a2) == -1072627705 && v17 > 1 )
  {
    v9 = 0;
    do
    {
      if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v5, 81, (__int64)v23, (__int64)v14, (__int64)v18) == 1114112 )
      {
        ++*v3;
        if ( v9 )
        {
          if ( v6 && !v8 )
            v8 = !RIMValidateAllCollectionUsages(v6, v16[0], v7, v15, v5, (__int64)v18);
        }
        else
        {
          if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(v5, (__int64)v18, v16, &v19, &v15, &v20) != 1114112 )
          {
            LOBYTE(v13) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v13,
              3,
              24,
              (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
          }
          v6 = v19;
          v9 = 1;
          v7 = v20;
        }
      }
      ++v5;
      v14[0] = 1;
    }
    while ( v5 < v17 );
    v10 = v21;
    if ( v6 )
      Win32FreePool(v6);
    if ( v7 )
      Win32FreePool(v7);
    v14[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, 0, 84, (__int64)v23, (__int64)v14, (__int64)v18) == 1114112 )
    {
      v3[8] |= 1u;
      *(_DWORD *)(v10 + 24) = 3;
    }
    if ( *v3 > 1u && (v3[8] & 1) == 0 )
      *(_DWORD *)(v10 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 3) <= 1 )
    {
      v11 = v22;
      v4 = 1;
      *(_DWORD *)(v10 + 252) |= 8u;
      *v11 = v17;
    }
  }
  return v4;
}
