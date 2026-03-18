/*
 * XREFs of RIMDiscoverCustomPTPSettings @ 0x1C00D16D4
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C0009EAC (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C0009E90 (rimHidP_GetLinkCollectionNodes.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMDiscoverCustomPTPSettings(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        UCHAR *a4,
        USAGE *a5,
        USHORT *a6)
{
  struct _HIDP_LINK_COLLECTION_NODE *v6; // rbx
  int LinkCollectionNodes; // ecx
  __int64 v11; // rax
  int SpecificValueCaps; // edx
  unsigned int v13; // r8d
  unsigned __int16 v14; // di
  unsigned __int16 LinkUsagePage; // cx
  unsigned int v17; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int16 v18[6]; // [rsp+44h] [rbp-55h] BYREF
  struct _HIDP_VALUE_CAPS v19; // [rsp+50h] [rbp-49h] BYREF

  v6 = *(struct _HIDP_LINK_COLLECTION_NODE **)(a2 + 32);
  *a4 = 0;
  v17 = 0;
  *a5 = 0;
  *a6 = 0;
  LinkCollectionNodes = rimHidP_GetLinkCollectionNodes(0LL, &v17, a3);
  if ( (int)(LinkCollectionNodes + 0x80000000) >= 0 && LinkCollectionNodes != -1072627705 || v17 <= 1 )
    return (unsigned int)-1073741823;
  if ( v6
    || (v11 = Win32AllocPool(), *(_QWORD *)(a2 + 32) = v11, (v6 = (struct _HIDP_LINK_COLLECTION_NODE *)v11) != 0LL) )
  {
    SpecificValueCaps = rimHidP_GetLinkCollectionNodes(v6, &v17, a3);
  }
  else
  {
    SpecificValueCaps = -1073741801;
  }
  if ( SpecificValueCaps >= 0 )
  {
    v13 = v17;
    v14 = 1;
    if ( v17 > 1 )
    {
      do
      {
        LinkUsagePage = v6[v14].LinkUsagePage;
        if ( LinkUsagePage >= 0xFF00u && v6[v14].LinkUsage == 224 )
        {
          v18[0] = 1;
          SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Feature, LinkUsagePage, v14, 0, &v19, v18, a3);
          if ( (int)(SpecificValueCaps + 0x80000000) < 0 || SpecificValueCaps == -1072627705 )
          {
            SpecificValueCaps = 0;
            *a4 = v19.ReportID;
            *a5 = v19.LinkUsagePage;
            *a6 = v19.LinkCollection;
            return (unsigned int)SpecificValueCaps;
          }
          v13 = v17;
        }
        ++v14;
      }
      while ( v14 < v13 );
    }
  }
  return (unsigned int)SpecificValueCaps;
}
