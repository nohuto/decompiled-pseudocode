/*
 * XREFs of RIMRetrieveLinkCollection @ 0x1C00097F0
 * Callers:
 *     RIMAssignTouchType @ 0x1C0007A34 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMCacheAxisChildIndex @ 0x1C00060D0 (RIMCacheAxisChildIndex.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C00062C0 (rimHidP_GetLinkCollectionNodes.c)
 *     RIMGetPropertyCount @ 0x1C0008AB8 (RIMGetPropertyCount.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  struct _HIDP_LINK_COLLECTION_NODE *v8; // rax
  struct _HIDP_LINK_COLLECTION_NODE *v9; // rsi
  int v10; // edx
  USHORT FirstChild; // r14
  int v12; // r9d
  _WORD v14[2]; // [rsp+40h] [rbp-59h] BYREF
  __int16 v15; // [rsp+44h] [rbp-55h]
  unsigned int v16; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v17[8]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v18[20]; // [rsp+60h] [rbp-39h] BYREF
  __int16 v19; // [rsp+74h] [rbp-25h]

  v3 = *(_QWORD *)(a1 + 680);
  v16 = a3;
  v17[0] = 0;
  v6 = 0;
  v7 = 1;
  *(_WORD *)(v3 + 8) = 0;
  if ( v16 <= 1 )
    return v6;
  v8 = (struct _HIDP_LINK_COLLECTION_NODE *)Win32AllocPool(24LL * v16, 1701016402LL);
  v9 = v8;
  if ( !v8 )
    return v6;
  *(_QWORD *)(v3 + 16) = v8;
  if ( rimHidP_GetLinkCollectionNodes(v8, &v16, a2) != 1114112 )
    return v6;
  v15 = 0;
  v14[0] = 0;
  FirstChild = v9->FirstChild;
  if ( !v16 )
    goto LABEL_23;
  while ( 1 )
  {
    v14[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, FirstChild, 81, (__int64)v18, (__int64)v14, (__int64)a2) == 1114112 )
      break;
    FirstChild = v9[FirstChild].NextSibling;
    if ( (unsigned __int16)++v15 >= v16 )
      goto LABEL_23;
  }
  v14[0] = 1;
  *(_WORD *)(v3 + 4) = FirstChild;
  *(_WORD *)(a1 + 700) = FirstChild;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, FirstChild, 48, (__int64)v18, (__int64)v14, (__int64)a2) == 1114112 )
  {
    v15 = v19;
    v14[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, FirstChild, 49, (__int64)v18, (__int64)v14, (__int64)a2) == 1114112 )
    {
      v7 = 0;
      if ( v15 == 2 && v19 == 2 )
        *(_DWORD *)(a1 + 252) |= 0x800u;
    }
  }
  if ( !v9[FirstChild].FirstChild )
  {
    if ( !v7 )
      goto LABEL_13;
LABEL_23:
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      3,
      27,
      (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
    goto LABEL_15;
  }
  if ( v7 )
  {
    v12 = 1;
    goto LABEL_14;
  }
LABEL_13:
  v12 = 0;
LABEL_14:
  v6 = RIMCacheAxisChildIndex(a1, (__int64)a2, v16, v12);
LABEL_15:
  if ( v6
    && (unsigned int)rimHidP_GetSpecificValueCaps(
                       0,
                       0,
                       *(unsigned __int16 *)(v3 + 4),
                       0,
                       0LL,
                       (__int64)v17,
                       (__int64)a2) == -1072627705 )
  {
    RIMGetPropertyCount(a1, *(_WORD *)(v3 + 4), v17[0], (__int64)a2);
  }
  return v6;
}
