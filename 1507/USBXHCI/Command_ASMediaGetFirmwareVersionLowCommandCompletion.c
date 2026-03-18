/*
 * XREFs of Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C0011640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 */

LONG __fastcall Command_ASMediaGetFirmwareVersionLowCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int8 v2; // al
  __int64 v3; // rdi
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+38h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 56);
  v2 = *((_BYTE *)v1 + 43);
  v3 = *v1;
  if ( v2 == 1 )
  {
    v8 = (unsigned __int8)*((_DWORD *)v1 + 10);
    v7 = *((unsigned __int8 *)v1 + 41);
    v5 = *((unsigned __int8 *)v1 + 42);
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(v3 + 16),
      4u,
      6u,
      0x16u,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      v5,
      v7,
      v8);
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 224LL) = (unsigned __int8)*((_DWORD *)v1 + 10) | ((unsigned __int64)*(unsigned __int16 *)((char *)v1 + 41) << 8);
  }
  else
  {
    v6 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 16),
      3u,
      6u,
      0x17u,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      v6);
  }
  return KeSetEvent((PRKEVENT)(v1 + 11), 0, 0);
}
