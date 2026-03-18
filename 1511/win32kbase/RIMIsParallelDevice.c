/*
 * XREFs of RIMIsParallelDevice @ 0x1C0008A30
 * Callers:
 *     RIMAssignTouchType @ 0x1C0007760 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMValidateAllCollectionUsages @ 0x1C0005D80 (RIMValidateAllCollectionUsages.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0007948 (RIMRetrieveAllLinkIndexUsages.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C0009E90 (rimHidP_GetLinkCollectionNodes.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned __int16 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  BOOL v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned int *v11; // rax
  int v13; // edx
  _WORD v14[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v15; // [rsp+44h] [rbp-75h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v17; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v18; // [rsp+50h] [rbp-69h]
  __int64 v19; // [rsp+58h] [rbp-61h] BYREF
  __int64 v20; // [rsp+60h] [rbp-59h] BYREF
  __int64 v21; // [rsp+68h] [rbp-51h]
  __int64 v22; // [rsp+70h] [rbp-49h]
  unsigned int *v23; // [rsp+78h] [rbp-41h]
  _BYTE v24[80]; // [rsp+80h] [rbp-39h] BYREF

  v3 = *(_QWORD *)(a1 + 712);
  v4 = 0;
  v23 = a3;
  v21 = a2;
  v22 = a1;
  v5 = 1;
  v19 = 0LL;
  v14[0] = 1;
  v6 = 0LL;
  v20 = 0LL;
  v7 = 0LL;
  v15 = 0;
  v17 = 0;
  v8 = 0;
  v16 = 0;
  v18 = 0;
  if ( (unsigned int)rimHidP_GetLinkCollectionNodes(0LL, &v16, a2) == -1072627705 && v16 > 1 )
  {
    v9 = v21;
    do
    {
      if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v5, 81, (__int64)v24, (__int64)v14, v9) == 1114112 )
      {
        ++*(_DWORD *)(v3 + 40);
        if ( v18 )
        {
          if ( v6 && !v8 )
            v8 = !RIMValidateAllCollectionUsages(v6, v15, v7, v17, v5, v9);
        }
        else
        {
          if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(v5, v9, &v15, &v19, &v17, &v20) != 1114112 )
          {
            LOBYTE(v13) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v13,
              3,
              20,
              (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
          }
          v6 = v19;
          v7 = v20;
          v18 = 1;
        }
      }
      ++v5;
      v14[0] = 1;
    }
    while ( v5 < v16 );
    v10 = v22;
    if ( v6 )
      Win32FreePool(v6);
    if ( v7 )
      Win32FreePool(v7);
    v14[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, 0, 84, (__int64)v24, (__int64)v14, v21) == 1114112 )
    {
      *(_DWORD *)(v3 + 4) |= 1u;
      *(_DWORD *)(v10 + 24) = 3;
    }
    if ( *(_DWORD *)(v3 + 40) > 1u && (*(_DWORD *)(v3 + 4) & 1) == 0 )
      *(_DWORD *)(v10 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 3) <= 1 )
    {
      v11 = v23;
      v4 = 1;
      *(_DWORD *)(v10 + 252) |= 8u;
      *v11 = v16;
    }
  }
  return v4;
}
