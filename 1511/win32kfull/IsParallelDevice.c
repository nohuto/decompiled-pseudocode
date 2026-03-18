/*
 * XREFs of IsParallelDevice @ 0x1C01CDC10
 * Callers:
 *     AssignTouchType @ 0x1C01C9090 (AssignTouchType.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?RetrieveAllLinkIndexUsages@@YAJGPEAXPEAGPEAPEAU_HIDP_VALUE_CAPS@@1PEAPEAU_HIDP_BUTTON_CAPS@@@Z @ 0x1C01C7C1C (-RetrieveAllLinkIndexUsages@@YAJGPEAXPEAGPEAPEAU_HIDP_VALUE_CAPS@@1PEAPEAU_HIDP_BUTTON_CAPS@@@Z.c)
 *     ?ValidateAllCollectionUsages@@YAHPEAU_HIDP_VALUE_CAPS@@GPEAU_HIDP_BUTTON_CAPS@@GGPEAX@Z @ 0x1C01C8664 (-ValidateAllCollectionUsages@@YAHPEAU_HIDP_VALUE_CAPS@@GPEAU_HIDP_BUTTON_CAPS@@GGPEAX@Z.c)
 */

__int64 __fastcall IsParallelDevice(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, ULONG *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  USHORT v5; // r14
  struct _HIDP_VALUE_CAPS *v6; // r15
  struct _HIDP_BUTTON_CAPS *v7; // r12
  BOOL v8; // r13d
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  __int64 v10; // rsi
  ULONG *v11; // rax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v14; // [rsp+44h] [rbp-75h] BYREF
  ULONG LinkCollectionNodesLength; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v16; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v17; // [rsp+50h] [rbp-69h]
  struct _HIDP_VALUE_CAPS *v18; // [rsp+58h] [rbp-61h] BYREF
  struct _HIDP_BUTTON_CAPS *v19; // [rsp+60h] [rbp-59h] BYREF
  PHIDP_PREPARSED_DATA v20; // [rsp+68h] [rbp-51h]
  __int64 v21; // [rsp+70h] [rbp-49h]
  ULONG *v22; // [rsp+78h] [rbp-41h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+80h] [rbp-39h] BYREF

  v3 = *(_QWORD *)(a1 + 712);
  v4 = 0;
  v22 = a3;
  v20 = a2;
  v21 = a1;
  v5 = 1;
  v18 = 0LL;
  ValueCapsLength[0] = 1;
  v6 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  v14 = 0;
  v16 = 0;
  v8 = 0;
  LinkCollectionNodesLength = 0;
  v17 = 0;
  if ( HidP_GetLinkCollectionNodes(0LL, &LinkCollectionNodesLength, a2) == -1072627705 && LinkCollectionNodesLength > 1 )
  {
    PreparsedData = v20;
    do
    {
      if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, v5, 0x51u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
      {
        ++*(_DWORD *)(v3 + 40);
        if ( v17 )
        {
          if ( v6 && !v8 )
            v8 = ValidateAllCollectionUsages(v6, v14, v7, v16, v5, PreparsedData) == 0;
        }
        else
        {
          RetrieveAllLinkIndexUsages(v5, PreparsedData, &v14, &v18, &v16, &v19);
          v6 = v18;
          v7 = v19;
          v17 = 1;
        }
      }
      ++v5;
      ValueCapsLength[0] = 1;
    }
    while ( v5 < LinkCollectionNodesLength );
    v10 = v21;
    if ( v6 )
      Win32FreePool(v6);
    if ( v7 )
      Win32FreePool(v7);
    ValueCapsLength[0] = 1;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x54u, &ValueCaps, ValueCapsLength, v20) == 1114112 )
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
      *(_DWORD *)(v10 + 252) |= 8u;
      *v11 = LinkCollectionNodesLength;
    }
  }
  return v4;
}
