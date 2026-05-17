/*
 * XREFs of EtwEventWriteString @ 0x1800FD1A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     EtwpReleasePrivateBuffers @ 0x18005B200 (EtwpReleasePrivateBuffers.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005B254 (EtwpWriteToPrivateBuffers.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 __fastcall EtwEventWriteString(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned __int8 v5; // al
  bool v6; // r14
  unsigned __int8 v7; // al
  bool v8; // si
  _GUID ActivityId; // xmm0
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h]
  int v15; // [rsp+5Ch] [rbp-A4h]
  int v16; // [rsp+64h] [rbp-9Ch]
  __int128 v17; // [rsp+88h] [rbp-78h] BYREF
  _GUID v18; // [rsp+A0h] [rbp-60h] BYREF
  char v19; // [rsp+B0h] [rbp-50h]
  __int16 v20; // [rsp+B2h] [rbp-4Eh]
  int v21; // [rsp+B4h] [rbp-4Ch]
  __int64 *v22; // [rsp+B8h] [rbp-48h]
  int v23; // [rsp+D0h] [rbp-30h]
  _BYTE v24[144]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0;
  if ( HIWORD(a1) && (a1 & 1) == 0 && HIWORD(a1) == *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    if ( a4 )
    {
      v6 = *(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0x7C)
        && ((v5 = *(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0x7D), a2 <= v5) || !v5)
        && ((*(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0x78) & 0x40) != 0 && !a3
         || (a3 & *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x70)) != 0
         && (a3 & *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x68)) == *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x68));
      v8 = *(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0xF4)
        && ((v7 = *(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0xF5), a2 <= v7) || !v7)
        && ((*(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0xF0) & 0x40) != 0 && !a3
         || (a3 & *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0xE8)) != 0
         && (a3 & *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0xE0)) == *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0xE0));
      if ( v6 || v8 )
      {
        *((_QWORD *)&v17 + 1) = a3;
        *(_QWORD *)&v17 = 0LL;
        v16 = 4;
        v22 = &v13;
        BYTE4(v17) = a2;
        v21 = 1;
        ActivityId = NtCurrentTeb()->ActivityId;
        v19 = 0;
        v10 = -1LL;
        v20 = 0;
        v18 = ActivityId;
        v23 = 0;
        v13 = a4;
        do
          ++v10;
        while ( *(_WORD *)(a4 + 2 * v10) );
        v15 = 0;
        v14 = 2 * v10 + 2;
        if ( v8 )
        {
          v4 = EtwpWriteToPrivateBuffers(
                 a1 & 0xFFFFFFFFFFFFLL,
                 &v17,
                 0,
                 0,
                 4,
                 &v18,
                 0LL,
                 1u,
                 (__int64)&v13,
                 (__int64)v24);
          if ( v4 )
            goto LABEL_35;
        }
        if ( v6 )
        {
          v11 = NtTraceEvent();
          if ( v11 )
            v4 = RtlNtStatusToDosError(v11);
          else
            v4 = 0;
        }
        if ( v8 )
LABEL_35:
          EtwpReleasePrivateBuffers(v4, (__int64)v24);
      }
    }
    else
    {
      return 87;
    }
  }
  else
  {
    return 6;
  }
  return v4;
}
