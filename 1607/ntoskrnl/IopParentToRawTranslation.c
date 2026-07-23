/*
 * XREFs of IopParentToRawTranslation @ 0x140556F24
 * Callers:
 *     PnpBuildCmResourceList @ 0x14055690C (PnpBuildCmResourceList.c)
 *     IopParentToRawTranslation @ 0x140556F24 (IopParentToRawTranslation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopParentToRawTranslation(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  while ( 1 )
  {
    result = 0LL;
    if ( !*(_DWORD *)(a1 + 56) || *(_BYTE *)(a1 + 136) == 8 )
      break;
    if ( *(_QWORD *)(a1 + 16) )
      return result;
    v2 = *(_QWORD *)(a1 + 32);
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 24LL)
                                                                                                + 32LL))(
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 24LL) + 8LL),
               *(_QWORD *)(a1 + 112),
               1LL,
               *(unsigned int *)(v2 + 56),
               *(_QWORD *)(v2 + 64),
               *(_QWORD *)(v2 + 72),
               *(_QWORD *)(v2 + 112));
    if ( (int)result < 0 )
      return result;
    a1 = v2;
  }
  return 3221225485LL;
}
