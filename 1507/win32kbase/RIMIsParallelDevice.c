/*
 * XREFs of RIMIsParallelDevice @ 0x1C0074D48
 * Callers:
 *     RIMAssignTouchType @ 0x1C0073A74 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RIMValidateAllCollectionUsages @ 0x1C0071D6C (RIMValidateAllCollectionUsages.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C00730F4 (rimHidP_GetLinkCollectionNodes.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0073C5C (RIMRetrieveAllLinkIndexUsages.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, _DWORD *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned __int16 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  BOOL v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rdi
  _DWORD *v11; // rax
  _WORD v13[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v14; // [rsp+44h] [rbp-75h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v16; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v17; // [rsp+50h] [rbp-69h]
  __int64 v18; // [rsp+58h] [rbp-61h] BYREF
  __int64 v19; // [rsp+60h] [rbp-59h] BYREF
  struct _HIDP_PREPARSED_DATA *v20; // [rsp+68h] [rbp-51h]
  __int64 v21; // [rsp+70h] [rbp-49h]
  _DWORD *v22; // [rsp+78h] [rbp-41h]
  _BYTE v23[80]; // [rsp+80h] [rbp-39h] BYREF

  v3 = *(_QWORD *)(a1 + 696);
  v4 = 0;
  v22 = a3;
  v20 = a2;
  v21 = a1;
  v5 = 1;
  v18 = 0LL;
  v13[0] = 1;
  v6 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  v14 = 0;
  v16 = 0;
  v8 = 0;
  v15 = 0;
  v17 = 0;
  if ( rimHidP_GetLinkCollectionNodes(0LL, &v15, a2) == -1072627705 && v15 > 1 )
  {
    v9 = (__int64)v20;
    do
    {
      if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v5, 81, (__int64)v23, (__int64)v13, v9) == 1114112 )
      {
        ++*(_DWORD *)(v3 + 40);
        if ( v17 )
        {
          if ( v6 && !v8 )
            v8 = !RIMValidateAllCollectionUsages(v6, v14, v7, v16, v5, v9);
        }
        else
        {
          if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(v5, v9, &v14, &v18, &v16, &v19) != 1114112 )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x14u,
              (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
          v6 = v18;
          v7 = v19;
          v17 = 1;
        }
      }
      ++v5;
      v13[0] = 1;
    }
    while ( v5 < v15 );
    v10 = v21;
    if ( v6 )
      Win32FreePool();
    if ( v7 )
      Win32FreePool();
    v13[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, 0, 84, (__int64)v23, (__int64)v13, (__int64)v20) == 1114112 )
    {
      *(_DWORD *)(v3 + 4) |= 1u;
      *(_DWORD *)(v10 + 24) = 3;
    }
    if ( *(_DWORD *)(v3 + 40) > 1u && (*(_DWORD *)(v3 + 4) & 1) == 0 )
      *(_DWORD *)(v10 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 3) <= 1 )
    {
      v11 = v22;
      v4 = 1;
      *(_DWORD *)(v10 + 236) |= 2u;
      *v11 = v15;
    }
  }
  return v4;
}
