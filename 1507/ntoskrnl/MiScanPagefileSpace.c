/*
 * XREFs of MiScanPagefileSpace @ 0x1406A5284
 * Callers:
 *     <none>
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     MiUnlockPage @ 0x14017E538 (MiUnlockPage.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiLockPage @ 0x140226160 (MiLockPage.c)
 */

void __fastcall MiScanPagefileSpace(struct _KEVENT *a1)
{
  unsigned __int16 Lock; // bx
  int v2; // r12d
  _DWORD *v4; // r13
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbp
  char v11; // r14
  __int64 v12; // rbx
  BOOL v13; // eax
  __int16 v14; // r9
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  char v17; // r9
  unsigned __int8 v18; // bp
  __int64 v19; // rax
  _DWORD *v20; // [rsp+20h] [rbp-58h]
  unsigned __int16 v21; // [rsp+80h] [rbp+8h]
  int v22; // [rsp+88h] [rbp+10h]
  BOOL v23; // [rsp+90h] [rbp+18h]
  __int64 v24; // [rsp+98h] [rbp+20h]

  Lock = a1->Header.Lock;
  v21 = a1->Header.Lock;
  v2 = 0;
  v22 = 0;
  v4 = (_DWORD *)MiReferencePageRuns((__int64)a1, 0);
  v20 = v4;
  do
  {
    v5 = *(_QWORD *)&v4[4 * v2 + 6];
    v6 = 48LL * *(_QWORD *)&v4[4 * v2 + 4] - 0x58000000000LL;
    if ( v6 < v6 + 48 * v5 )
    {
      v7 = Lock;
      v8 = v6 + 16;
      v24 = Lock;
      v9 = v6 + 48 * v5;
      do
      {
        v10 = *(_QWORD *)(v8 + 24);
        if ( ((v10 >> 40) & 0x3FF) == v7 )
        {
          v11 = *(_BYTE *)(v8 + 18);
          if ( (((v11 & 7) - 2) & 0xFA) == 0 && (v11 & 7) != 6 )
          {
            v12 = *(_QWORD *)v8;
            if ( (*(_QWORD *)v8 & 0x400LL) == 0 )
            {
              v13 = MiPteInShadowRange(v8);
              v14 = 0;
              v23 = v13;
              if ( v13 )
                LOBYTE(v12) = MiReadPteShadow(v8, v12);
              if ( (v12 & 4) != 0
                && (v10 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
                && *(_WORD *)(v8 + 16) != v14
                && (v11 & 0x28) == 0
                && (*(_BYTE *)(v8 + 19) & 0x10) == 0 )
              {
                v15 = 0LL;
                v16 = MiLockPage(v6);
                v17 = *(_BYTE *)(v8 + 18);
                v18 = v16;
                if ( (((v17 & 7) - 2) & 0xFA) == 0 && (v17 & 7) != 6 )
                {
                  v19 = *(_QWORD *)v8;
                  if ( (*(_QWORD *)v8 & 0x400LL) == 0 )
                  {
                    if ( v23 )
                      LOBYTE(v19) = MiReadPteShadow(v8, *(_QWORD *)v8);
                    if ( (v19 & 4) != 0
                      && (*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
                      && *(_WORD *)(v8 + 16)
                      && (v17 & 0x28) == 0
                      && (*(_BYTE *)(v8 + 19) & 0x10) == 0 )
                    {
                      v15 = MiCaptureDirtyBitToPfn(v6);
                    }
                  }
                }
                MiUnlockPage(v6, v18);
                if ( v15 )
                  MiReleasePageFileInfo(a1, v15, 0);
              }
            }
          }
          v7 = v24;
        }
        v6 += 48LL;
        v8 += 48LL;
      }
      while ( v6 < v9 );
      v2 = v22;
      v4 = v20;
      Lock = v21;
    }
    v22 = ++v2;
  }
  while ( v2 != *v4 );
  MiDereferencePageRuns((__int64)v4);
  a1[37].Header.WaitListHead.Flink = 0LL;
}
