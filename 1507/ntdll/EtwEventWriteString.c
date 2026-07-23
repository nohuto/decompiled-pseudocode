/*
 * XREFs of EtwEventWriteString @ 0x1800F3C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     EtwpReleasePrivateBuffers @ 0x180010A98 (EtwpReleasePrivateBuffers.c)
 *     EtwpWriteToPrivateBuffers @ 0x180010AEC (EtwpWriteToPrivateBuffers.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

ULONG __cdecl EtwEventWriteString(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword, PCWSTR String)
{
  ULONG v4; // edi
  REGHANDLE v5; // rbx
  UCHAR v6; // al
  bool v7; // r14
  UCHAR v8; // al
  bool v9; // si
  _GUID ActivityId; // xmm0
  __int64 v11; // rax
  NTSTATUS v12; // eax
  PCWSTR v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+5Ch] [rbp-A4h]
  _BYTE Fields[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v18; // [rsp+64h] [rbp-9Ch]
  __int128 v19; // [rsp+88h] [rbp-78h] BYREF
  _GUID v20; // [rsp+A0h] [rbp-60h] BYREF
  char v21; // [rsp+B0h] [rbp-50h]
  __int16 v22; // [rsp+B2h] [rbp-4Eh]
  int v23; // [rsp+B4h] [rbp-4Ch]
  PCWSTR *v24; // [rsp+B8h] [rbp-48h]
  _BYTE v25[144]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0;
  if ( !HIWORD(RegHandle) )
    return 6;
  v5 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (RegHandle & 1) != 0 || HIWORD(RegHandle) != *(_WORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x60) )
    return 6;
  if ( !String )
    return 87;
  v7 = *(_BYTE *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x7C)
    && ((v6 = *(_BYTE *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x7D), Level <= v6) || !v6)
    && ((*(_BYTE *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x78) & 0x40) != 0 && !Keyword
     || (Keyword & *(_QWORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x70)) != 0
     && (Keyword & *(_QWORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x68)) == *(_QWORD *)((RegHandle & 0xFFFFFFFFFFFFLL)
                                                                                    + 0x68));
  v9 = *(_BYTE *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0xF4)
    && ((v8 = *(_BYTE *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0xF5), Level <= v8) || !v8)
    && ((*(_BYTE *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0xF0) & 0x40) != 0 && !Keyword
     || (Keyword & *(_QWORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0xE8)) != 0
     && (Keyword & *(_QWORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0xE0)) == *(_QWORD *)((RegHandle & 0xFFFFFFFFFFFFLL)
                                                                                    + 0xE0));
  if ( v7 || v9 )
  {
    *((_QWORD *)&v19 + 1) = Keyword;
    *(_QWORD *)&v19 = 0LL;
    v18 = 4;
    v24 = &v14;
    BYTE4(v19) = Level;
    v23 = 1;
    ActivityId = NtCurrentTeb()->ActivityId;
    v21 = 0;
    v11 = -1LL;
    v22 = 0;
    v20 = ActivityId;
    v14 = String;
    do
      ++v11;
    while ( String[v11] );
    v16 = 0;
    v15 = 2 * v11 + 2;
    if ( v9 )
    {
      v4 = EtwpWriteToPrivateBuffers(v5, &v19, 0, 0, 4, &v20, 0LL, 1u, (__int64)&v14, (__int64)v25);
      if ( v4 )
        goto LABEL_35;
    }
    if ( v7 )
    {
      v12 = NtTraceEvent(*(HANDLE *)(v5 + 88), 0x300u, 0x78u, Fields);
      if ( v12 )
        v4 = RtlNtStatusToDosError(v12);
      else
        v4 = 0;
    }
    if ( v9 )
LABEL_35:
      EtwpReleasePrivateBuffers(v4, (__int64)v25);
  }
  return v4;
}
