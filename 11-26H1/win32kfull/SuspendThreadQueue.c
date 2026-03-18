/*
 * XREFs of SuspendThreadQueue @ 0x1402A7460
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxReceiverDied @ 0x140054ED4 (xxxReceiverDied.c)
 *     UnlinkSendListSms @ 0x140056568 (UnlinkSendListSms.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401EDD40 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // r14
  _QWORD *v10; // rsi
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0x1000000) != 0
    && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 1) == 0 )
  {
    v2 = *(_QWORD **)(a1 + 464);
    v3 = v2[3];
    if ( v3 )
    {
      do
      {
        v4 = *(_QWORD *)v3;
        if ( *(_DWORD *)(v3 + 96) == 9 && v3 != v2[11] && v3 != v2[10] && (*(_DWORD *)(v3 + 100) & 0x100) == 0 )
        {
          v5 = *(unsigned int *)(v3 + 24);
          if ( (unsigned int)v5 < 0x400 && (MessageTable[v5] & 0x1C00) == 0 )
          {
            CleanEventMessage((struct tagQMSG *)v3, (struct tagQMSG *)MessageTable);
            DelQEntry((__int64)(v2 + 3), v3, 1);
          }
        }
        v3 = v4;
      }
      while ( v4 );
    }
    v6 = *(_QWORD *)(a1 + 840);
    if ( v6 )
    {
      do
      {
        v7 = *(_QWORD *)v6;
        if ( v6 != v2[11] && v6 != v2[10] && (*(_DWORD *)(v6 + 100) & 0x100) == 0 )
        {
          v8 = *(unsigned int *)(v6 + 24);
          if ( (unsigned int)v8 < 0x400 && (MessageTable[v8] & 0x1C00) == 0 )
          {
            CleanInputMessage(v8, (struct tagQMSG *)v6);
            DelQEntry(a1 + 840, v6, 1);
          }
        }
        v6 = v7;
      }
      while ( v7 );
    }
    v9 = (_QWORD *)(a1 + 552);
    v10 = *(_QWORD **)(a1 + 552);
    if ( v10 != (_QWORD *)(a1 + 552) )
    {
      do
      {
        v11 = (__int64)(v10 - 2);
        v12 = v10;
        v10 = (_QWORD *)*v10;
        if ( !*(_QWORD *)(v11 + 64) )
        {
          v13 = *(_DWORD *)(v11 + 84);
          if ( (v13 & 0x4000) == 0 )
          {
            v14 = *(_QWORD *)(v11 + 32);
            if ( v14 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(a1 + 456), **(_QWORD **)(v14 + 456)) )
              {
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
                xxxReceiverDied(v11);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18);
              }
            }
            else if ( (v13 & 8) != 0 )
            {
              v15 = *(unsigned int *)(v11 + 104);
              if ( (unsigned int)v15 < 0x400 && (MessageTable[v15] & 0x1C00) == 0 )
              {
                --*(_DWORD *)(a1 + 568);
                v16 = *v12;
                if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v17 = (_QWORD *)v12[1], (_QWORD *)*v17 != v12) )
                  __fastfail(3u);
                *v17 = v16;
                *(_QWORD *)(v16 + 8) = v17;
                *v12 = 0LL;
                if ( (_QWORD *)*v9 == v9 )
                {
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 480LL) + 8LL),
                    0xFFFFFFBF);
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 480LL) + 4LL),
                    0xFFFFFFBF);
                }
                UnlinkSendListSms((__int64 *)v11, (__int64)v12);
              }
            }
          }
        }
      }
      while ( v10 != v9 );
    }
  }
}
