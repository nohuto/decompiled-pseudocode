/*
 * XREFs of Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C001AFA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008EC4 (WPP_RECORDER_SF_DDD.c)
 */

LONG __fastcall Command_ASMediaGetFirmwareVersionHighCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 56);
  v2 = *v1;
  if ( *((_BYTE *)v1 + 43) == 1 )
  {
    v7 = (unsigned __int8)*((_DWORD *)v1 + 10);
    v6 = *((unsigned __int8 *)v1 + 41);
    v4 = *((unsigned __int8 *)v1 + 42);
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(v2 + 16),
      4u,
      6u,
      0x18u,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      v4,
      v6,
      v7);
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 224LL) |= ((unsigned __int8)*((_DWORD *)v1 + 10) | ((unsigned __int64)*(unsigned __int16 *)((char *)v1 + 41) << 8)) << 24;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 224LL) = -1LL;
    v5 = *((unsigned __int8 *)v1 + 43);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 16),
      3u,
      6u,
      0x19u,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      v5);
  }
  return KeSetEvent((PRKEVENT)(v1 + 11), 0, 0);
}
