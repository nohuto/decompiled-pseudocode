/*
 * XREFs of ?TsSessionLogonConnectTime@@YA_JPEAVTSSession@@@Z @ 0x1800410BC
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180040BD4 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionLogonConnectTime(struct TSSession *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 5);
  v2 = *(_QWORD *)(v1 + 200);
  if ( !v2 )
    return 0LL;
  result = *(_QWORD *)(v1 + 176);
  if ( !result )
    return 0LL;
  if ( v2 > result )
    return v2;
  return result;
}
