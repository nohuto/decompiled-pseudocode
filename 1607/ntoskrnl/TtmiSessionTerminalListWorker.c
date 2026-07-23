/*
 * XREFs of TtmiSessionTerminalListWorker @ 0x140677C10
 * Callers:
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     TtmiEvacuateDevices @ 0x1406770C0 (TtmiEvacuateDevices.c)
 *     TtmpUpdateTerminalState @ 0x140678460 (TtmpUpdateTerminalState.c)
 *     TtmiUpdateActiveTerminalCount @ 0x140678E18 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiWriteEventToAllQueues @ 0x140678ED4 (TtmiWriteEventToAllQueues.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14067907C (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogTerminalCleanup @ 0x14067C2E4 (TtmiLogTerminalCleanup.c)
 */

void __fastcall TtmiSessionTerminalListWorker(unsigned int *a1, _BYTE *a2, _BYTE *a3)
{
  unsigned int *v3; // r15
  _QWORD *v4; // rbx
  unsigned int *v8; // r14
  _DWORD *v9; // rsi
  int v10; // eax
  void ***v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rcx
  void **v15; // rax
  unsigned int v16; // eax
  unsigned int *i; // rcx
  __int64 v18; // rdx
  _DWORD v19[150]; // [rsp+20h] [rbp-258h] BYREF
  char v20; // [rsp+280h] [rbp+8h] BYREF
  char v21; // [rsp+288h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+290h] [rbp+18h]

  v3 = a1 + 10;
  v4 = (_QWORD *)*((_QWORD *)a1 + 5);
  *a2 = 0;
  *a3 = 0;
  while ( v4 != (_QWORD *)v3 )
  {
    v8 = (unsigned int *)(v4 + 4);
    v9 = v4;
    v10 = *((_DWORD *)v4 + 8);
    if ( (v10 & 1) != 0 )
    {
      v11 = (void ***)(v4 + 1);
      v12 = *a1;
      v13 = *((unsigned int *)v4 + 7);
      v4 = (_QWORD *)v4[1];
      v22 = v9[7];
      TtmiLogTerminalCleanup(v9, v12, v13);
      if ( (*v8 & 0x10) != 0 && (unsigned __int8)TtmiUpdateActiveTerminalCount(a1, 0LL, 26LL) )
        *a2 = 1;
      if ( TtmiEvacuateDevices((__int64)a1, (__int64)v9) )
        *a3 = 1;
      v14 = *(_QWORD **)v9;
      v15 = *v11;
      if ( *(_DWORD **)(*(_QWORD *)v9 + 8LL) != v9 || *v15 != v9 )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = v15;
      *((_QWORD *)v9 + 2) = 0LL;
      TtmpDereferenceSessionMaybeLast(a1);
      _bittestandreset(*((signed __int32 **)a1 + 8), v22);
      v16 = *v8 & 0xFFFFFFFE;
      *((_QWORD *)v9 + 2) = 0LL;
      v9[6] = 1417180244;
      *v8 = v16 | 2;
      ObfDereferenceObject(v9);
    }
    else if ( (v10 & 4) != 0 )
    {
      *v8 = v10 & 0xFFFFFFFB;
      TtmpUpdateTerminalState(a1, v4, &v21, &v20);
      if ( v20 )
      {
        for ( i = (unsigned int *)*((_QWORD *)a1 + 12); i != a1 + 24; i = *(unsigned int **)i )
        {
          if ( i[149] == *((_DWORD *)v4 + 7) )
            i[150] |= 0x40u;
        }
        memset(v19, 0, 0x21CuLL);
        v19[1] = *((_DWORD *)v4 + 7);
        v19[2] = *((_DWORD *)v4 + 67);
        v19[3] = *((_DWORD *)v4 + 68);
        v19[0] = 2;
        TtmiWriteEventToAllQueues(a1, v19);
        *a3 = 1;
      }
      if ( v21 )
      {
        v18 = *v8 >> 4;
        LOBYTE(v18) = (*v8 & 0x10) != 0;
        if ( (unsigned __int8)TtmiUpdateActiveTerminalCount(a1, v18, *((unsigned int *)v4 + 10)) )
          *a2 = 1;
      }
    }
    v4 = (_QWORD *)*v4;
  }
}
