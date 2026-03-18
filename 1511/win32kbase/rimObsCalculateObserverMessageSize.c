/*
 * XREFs of rimObsCalculateObserverMessageSize @ 0x1C00D2F44
 * Callers:
 *     rimObsCopyMessage @ 0x1C00D3138 (rimObsCopyMessage.c)
 *     rimObsPopInputMessage @ 0x1C00D360C (rimObsPopInputMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimObsCalculateObserverMessageSize(_DWORD *a1)
{
  __int64 result; // rax

  result = 48LL;
  if ( !*a1 )
    return (unsigned int)(a1[6] + 48);
  return result;
}
