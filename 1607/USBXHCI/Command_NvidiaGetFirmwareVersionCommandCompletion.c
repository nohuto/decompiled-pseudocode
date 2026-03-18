/*
 * XREFs of Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C001C030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall Command_NvidiaGetFirmwareVersionCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int8 v2; // al
  __int64 v3; // rdi
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v1 = *(__int64 **)(a1 + 56);
  v2 = *((_BYTE *)v1 + 43);
  v3 = *v1;
  if ( v2 == 1 )
  {
    v7 = (unsigned __int8)*((_DWORD *)v1 + 10);
    v5 = *((unsigned __int8 *)v1 + 41);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v3 + 16),
      4u,
      6u,
      0x14u,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      v5,
      v7);
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 224LL) = ((unsigned __int64)*((unsigned __int8 *)v1 + 41) << 8) | (unsigned __int8)*((_DWORD *)v1 + 10);
  }
  else
  {
    v6 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 16),
      3u,
      6u,
      0x15u,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      v6);
  }
  return KeSetEvent((PRKEVENT)(v1 + 11), 0, 0);
}
