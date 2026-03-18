/*
 * XREFs of RIMRetrieveLinkCollection @ 0x1C0074AFC
 * Callers:
 *     RIMAssignTouchType @ 0x1C0073A74 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     RIMCacheAxisChildIndex @ 0x1C0071EEC (RIMCacheAxisChildIndex.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C00730F4 (rimHidP_GetLinkCollectionNodes.c)
 *     RIMGetPropertyCount @ 0x1C0073DEC (RIMGetPropertyCount.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  struct _HIDP_LINK_COLLECTION_NODE *v8; // rax
  struct _HIDP_LINK_COLLECTION_NODE *v9; // rsi
  USHORT FirstChild; // r14
  int v11; // r9d
  _WORD v13[2]; // [rsp+40h] [rbp-59h] BYREF
  __int16 v14; // [rsp+44h] [rbp-55h]
  unsigned int v15; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v16[8]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v17[20]; // [rsp+60h] [rbp-39h] BYREF
  __int16 v18; // [rsp+74h] [rbp-25h]

  v3 = *(_QWORD *)(a1 + 696);
  v15 = a3;
  v16[0] = 0;
  v6 = 0;
  v7 = 1;
  *(_WORD *)(v3 + 14) = 0;
  if ( v15 <= 1 )
    return v6;
  v8 = (struct _HIDP_LINK_COLLECTION_NODE *)Win32AllocPool();
  v9 = v8;
  if ( !v8 )
    return v6;
  *(_QWORD *)(v3 + 32) = v8;
  if ( rimHidP_GetLinkCollectionNodes(v8, &v15, a2) != 1114112 )
    return v6;
  v14 = 0;
  v13[0] = 0;
  FirstChild = v9->FirstChild;
  if ( !v15 )
    goto LABEL_23;
  while ( 1 )
  {
    v13[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, FirstChild, 81, (__int64)v17, (__int64)v13, (__int64)a2) == 1114112 )
      break;
    FirstChild = v9[FirstChild].NextSibling;
    if ( (unsigned __int16)++v14 >= v15 )
      goto LABEL_23;
  }
  v13[0] = 1;
  *(_WORD *)(v3 + 12) = FirstChild;
  *(_WORD *)(a1 + 716) = FirstChild;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, FirstChild, 48, (__int64)v17, (__int64)v13, (__int64)a2) == 1114112 )
  {
    v14 = v18;
    v13[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, FirstChild, 49, (__int64)v17, (__int64)v13, (__int64)a2) == 1114112 )
    {
      v7 = 0;
      if ( v14 == 2 && v18 == 2 )
        *(_DWORD *)(a1 + 236) |= 0x200u;
    }
  }
  if ( !v9[FirstChild].FirstChild )
  {
    if ( !v7 )
      goto LABEL_13;
LABEL_23:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x17u,
      (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
    goto LABEL_15;
  }
  if ( v7 )
  {
    v11 = 1;
    goto LABEL_14;
  }
LABEL_13:
  v11 = 0;
LABEL_14:
  v6 = RIMCacheAxisChildIndex(a1, (__int64)a2, v15, v11);
LABEL_15:
  if ( v6
    && (unsigned int)rimHidP_GetSpecificValueCaps(
                       0,
                       0,
                       *(unsigned __int16 *)(v3 + 12),
                       0,
                       0LL,
                       (__int64)v16,
                       (__int64)a2) == -1072627705 )
  {
    RIMGetPropertyCount(a1, *(_WORD *)(v3 + 12), v16[0], (__int64)a2);
  }
  return v6;
}
