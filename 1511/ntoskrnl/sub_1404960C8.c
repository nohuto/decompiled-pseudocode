/*
 * XREFs of sub_1404960C8 @ 0x1404960C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404960C8(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a3 + 16) == 1295444332
    && *(_DWORD *)(a3 + 20) == *(_DWORD *)&GUID_DEVCLASS_MEDIA.Data2
    && *(_DWORD *)(a3 + 24) == *(_DWORD *)GUID_DEVCLASS_MEDIA.Data4
    && *(_DWORD *)(a3 + 28) == *(_DWORD *)&GUID_DEVCLASS_MEDIA.Data4[4] )
  {
    return sub_14045768C((unsigned __int16 *)a3, (__int128 *)&KSCATEGORY_AUDIO, a1);
  }
  else
  {
    return 0LL;
  }
}
