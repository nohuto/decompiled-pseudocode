/*
 * XREFs of RetrieveLinkCollection @ 0x1C01CC58C
 * Callers:
 *     AssignTouchType @ 0x1C01C74C0 (AssignTouchType.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DEB78 (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?GetPropertyCount@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@GGPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C01C5448 (-GetPropertyCount@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@GGPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     CacheAxisChildIndex @ 0x1C01C76C0 (CacheAxisChildIndex.c)
 */

__int64 __fastcall RetrieveLinkCollection(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct _HIDP_PREPARSED_DATA *a2,
        ULONG a3)
{
  __int64 v3; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  struct _HIDP_LINK_COLLECTION_NODE *v8; // rax
  struct _HIDP_LINK_COLLECTION_NODE *v9; // rsi
  USHORT FirstChild; // r14
  int v11; // r9d
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-59h] BYREF
  USHORT ReportCount; // [rsp+44h] [rbp-55h]
  ULONG LinkCollectionNodesLength; // [rsp+48h] [rbp-51h] BYREF
  USHORT v16[8]; // [rsp+50h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+60h] [rbp-39h] BYREF

  v3 = *((_QWORD *)a1 + 87);
  LinkCollectionNodesLength = a3;
  v16[0] = 0;
  v6 = 0;
  v7 = 1;
  *(_WORD *)(v3 + 14) = 0;
  if ( LinkCollectionNodesLength <= 1 )
    return v6;
  v8 = (struct _HIDP_LINK_COLLECTION_NODE *)Win32AllocPool(24LL * LinkCollectionNodesLength, 1701016405LL);
  v9 = v8;
  if ( !v8 )
    return v6;
  *(_QWORD *)(v3 + 32) = v8;
  if ( HidP_GetLinkCollectionNodes(v8, &LinkCollectionNodesLength, a2) != 1114112 )
    return v6;
  ReportCount = 0;
  FirstChild = v9->FirstChild;
  if ( !LinkCollectionNodesLength )
    return v6;
  while ( 1 )
  {
    ValueCapsLength[0] = 1;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, FirstChild, 0x51u, &ValueCaps, ValueCapsLength, a2) == 1114112 )
      break;
    FirstChild = v9[FirstChild].NextSibling;
    if ( ++ReportCount >= LinkCollectionNodesLength )
      return v6;
  }
  ValueCapsLength[0] = 1;
  *(_WORD *)(v3 + 12) = FirstChild;
  *((_WORD *)a1 + 358) = FirstChild;
  if ( HidP_GetSpecificValueCaps(HidP_Input, 1u, FirstChild, 0x30u, &ValueCaps, ValueCapsLength, a2) == 1114112 )
  {
    ReportCount = ValueCaps.ReportCount;
    ValueCapsLength[0] = 1;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 1u, FirstChild, 0x31u, &ValueCaps, ValueCapsLength, a2) == 1114112 )
    {
      v7 = 0;
      if ( ReportCount == ValueCaps.ReportCount && ReportCount == 2 )
        *((_DWORD *)a1 + 59) |= 0x200u;
    }
  }
  if ( !v9[FirstChild].FirstChild )
  {
    if ( v7 )
      return v6;
    goto LABEL_17;
  }
  if ( !v7 )
  {
LABEL_17:
    v11 = 0;
    goto LABEL_18;
  }
  v11 = 1;
LABEL_18:
  v6 = CacheAxisChildIndex((__int64)a1, a2, LinkCollectionNodesLength, v11);
  if ( v6 && HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v3 + 12), 0, 0LL, v16, a2) == -1072627705 )
    GetPropertyCount(a1, *(_WORD *)(v3 + 12), v16[0], a2);
  return v6;
}
