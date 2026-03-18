/*
 * XREFs of ObGetAssociatedWaitObject @ 0x14002E2FC
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x14002DD10 (IopCancelWaitCompletionPacket.c)
 *     NtAssociateWaitCompletionPacket @ 0x14002DED0 (NtAssociateWaitCompletionPacket.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall ObGetAssociatedWaitObject(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int16 *v3; // r8
  __int16 *v4; // r8

  v1 = a1 - 48;
  v2 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v3 = *(__int16 **)(v2 + 32);
  if ( ((unsigned __int8)v3 & 1) == 0 )
  {
    if ( (__int64)v3 < 0 )
      goto LABEL_5;
    v4 = v3 + 24;
    goto LABEL_4;
  }
  if ( ((unsigned __int8)v3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(v2 + 176) & *(_DWORD *)(*(unsigned __int16 *)(v2 + 180) + a1)) != *(_DWORD *)(v2 + 176) )
    {
      v4 = (__int16 *)((char *)v3 + 45);
LABEL_4:
      v3 = (__int16 *)((char *)v4 + v1);
      goto LABEL_5;
    }
    v3 = *(__int16 **)(*(unsigned __int16 *)(v2 + 182) + a1);
  }
  else
  {
    v3 = *(__int16 **)((char *)v3 + v1 + 47);
  }
LABEL_5:
  if ( v3 == &ObpDefaultObject )
    return 0LL;
  return v3;
}
