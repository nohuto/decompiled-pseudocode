/*
 * XREFs of MiLogTrimWs @ 0x14010C344
 * Callers:
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiFillLogProcessInfo @ 0x14010C3EC (MiFillLogProcessInfo.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rbp
  int *v8; // rbx
  __int64 v9; // r11
  const struct _TlgProvider_t *v10; // r10
  int v11; // edx
  int v12; // r9d
  __int64 v13; // r11
  char v14; // al
  const CHAR *v15; // rdx
  TraceLoggingHProvider v16; // r10
  _BYTE v17[4]; // [rsp+60h] [rbp+0h] BYREF

  v5 = (unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL;
  if ( qword_1403277E0 )
  {
    v8 = MiPartitionIdToPointer(*(_WORD *)(a1 + 164));
    MiFillLogProcessInfo(v9, v5 + 4, v5 + 16);
    if ( v10->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(v10, 1uLL) )
      {
        v14 = *(_BYTE *)(v13 + 184);
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C) = 0;
        *(_BYTE *)v5 = v14 & 7;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                     + 4);
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = *((_QWORD *)v8 + 808);
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = *((_QWORD *)v8 + 904);
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *((_QWORD *)v8 + 918);
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = a5;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v11;
        v15 = *(const CHAR **)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = (unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = a2;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = a3;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v12;
        TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v5 + 112), v15);
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C) = 0;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x9C) = 0;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xAC) = 0;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xBC) = 0;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xCC) = 0;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xDC) = 0;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xEC) = 0;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xFC) = 0;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = ((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 24;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) = ((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 32;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = ((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 40;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC0) = ((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 48;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = ((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 56;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE0) = ((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 8;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = ((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 4;
        *(_QWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0) = ((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 12;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 4;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = 8;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = 8;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = 8;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 8;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD8) = 8;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE8) = 4;
        *(_DWORD *)(((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF8) = 4;
        TlgWriteEx(v16, &unk_14027C684, 0LL, 1u, 0LL, 0LL, 0xCu, (EVENT_DATA_DESCRIPTOR *)(v5 + 64));
      }
    }
  }
}
