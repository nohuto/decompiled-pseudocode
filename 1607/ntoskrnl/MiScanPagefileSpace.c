/*
 * XREFs of MiScanPagefileSpace @ 0x14065B208
 * Callers:
 *     <none>
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiLockPage @ 0x140159948 (MiLockPage.c)
 *     MiUnlockPage @ 0x1401F29AC (MiUnlockPage.c)
 */

__int64 __fastcall MiScanPagefileSpace(struct _KEVENT *a1)
{
  __int16 Lock; // bx
  int v2; // ebp
  _DWORD *v4; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  char v8; // cl
  __int64 v9; // r9
  char v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // r13
  char v14; // dl
  char v15; // r9
  __int64 result; // rax
  __int16 v17; // [rsp+60h] [rbp+8h]
  _DWORD *v18; // [rsp+68h] [rbp+10h]

  Lock = a1->Header.Lock;
  v17 = a1->Header.Lock;
  v2 = 0;
  v4 = (_DWORD *)MiReferencePageRuns((__int64)a1, 0);
  v18 = v4;
  do
  {
    v5 = 48LL * *(_QWORD *)&v4[4 * v2 + 4] - 0x58000000000LL;
    v6 = v5 + 48LL * *(_QWORD *)&v4[4 * v2 + 6];
    if ( v5 < v6 )
    {
      v7 = v5 + 16;
      do
      {
        if ( (((unsigned int)HIDWORD(*(_QWORD *)(v7 + 24)) >> 8) & 0x3FF) == Lock )
        {
          v8 = *(_BYTE *)(v7 + 18) & 7;
          if ( ((v8 - 2) & 0xFA) == 0
            && v8 != 6
            && (*(_DWORD *)v7 & 0x400LL) == 0
            && (unsigned int)MiGetPagingFileOffset(v7)
            && (v11 & v9) != 0xFFFFFFFFDLL
            && *(_WORD *)(v7 + 16)
            && (v10 & 0x28) == 0
            && (*(_BYTE *)(v7 + 19) & 0x10) == 0 )
          {
            v12 = 0LL;
            v13 = MiLockPage(v5);
            v14 = *(_BYTE *)(v7 + 18) & 7;
            if ( ((v14 - 2) & 0xFA) == 0
              && v14 != 6
              && (*(_DWORD *)v7 & 0x400LL) == 0
              && (unsigned int)MiGetPagingFileOffset(v7)
              && (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
              && *(_WORD *)(v7 + 16)
              && ((unsigned __int8)~(*(_BYTE *)(v7 + 19) >> 4) & ((v15 & 0x28) == 0)) != 0 )
            {
              v12 = MiCaptureDirtyBitToPfn(v5);
            }
            MiUnlockPage(v5, v13);
            if ( v12 )
              MiReleasePageFileInfo(a1, v12, 0);
            Lock = v17;
          }
        }
        v5 += 48LL;
        v7 += 48LL;
      }
      while ( v5 < v6 );
      v4 = v18;
    }
    ++v2;
  }
  while ( v2 != *v4 );
  MiDereferencePageRuns((__int64)v4);
  result = 0LL;
  a1[37].Header.WaitListHead.Flink = 0LL;
  return result;
}
