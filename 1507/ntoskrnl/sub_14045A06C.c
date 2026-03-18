/*
 * XREFs of sub_14045A06C @ 0x14045A06C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045A06C(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( a3[4] == 1295444332
    && a3[5] == *(_DWORD *)&GUID_DEVCLASS_MEDIA.Data2
    && a3[6] == *(_DWORD *)GUID_DEVCLASS_MEDIA.Data4
    && a3[7] == *(_DWORD *)&GUID_DEVCLASS_MEDIA.Data4[4] )
  {
    return sub_1404DAD40(a3, &KSCATEGORY_AUDIO, a1);
  }
  else
  {
    return 0LL;
  }
}
