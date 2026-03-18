/*
 * XREFs of ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01C011C
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01BFE30 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C01BF714 (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CommitRimCompleteFrame(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // rbx
  struct tagPOINTERQFRAME *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v14; // rcx
  _DWORD *v15; // r8
  unsigned int v16; // r9d
  _OWORD *v17; // r10
  __int64 v18; // rax
  __int64 v19; // rdx
  _OWORD *v20; // rcx
  __int128 v21; // xmm0
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r8
  void *v29; // rax
  int v30; // edx
  __int64 i; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rsi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v36; // [rsp+40h] [rbp+8h] BYREF

  v36 = 0LL;
  LOBYTE(a3) = a1[12] == 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(*((_QWORD *)a1 + 4), 3LL, a3, &v36) >= 0 )
  {
    v4 = v36 == -64 ? 0LL : *(_QWORD *)(v36 + 64);
    RawInputManagerDeviceObjectDereference(v36);
    LOBYTE(v5) = 19;
    v8 = HMValidateHandleNoSecure(v4, v5, v6, v7);
    EtwTraceBeginPointerFrameCommit(0LL, a1[6]);
    v9 = Win32AllocPoolZInit(112LL, 1718645589LL);
    if ( v9 )
    {
      v10 = AllocPointerQFrameList(a1[6]);
      *(_QWORD *)(v9 + 96) = v10;
      if ( v10 )
      {
        v14 = 216LL * a1[6];
        if ( v14 <= 0xFFFFFFFF )
          *(_QWORD *)(v9 + 88) = Win32AllocPoolZInit((unsigned int)v14, 1701868373LL);
        if ( *(_QWORD *)(v9 + 88) )
        {
          v15 = (_DWORD *)*((_QWORD *)a1 + 11);
          v16 = 0;
          if ( a1[6] )
          {
            v17 = v15 + 2;
            do
            {
              v18 = v16++;
              v19 = 216 * v18;
              LODWORD(v18) = *v15;
              v15 += 42;
              *(_DWORD *)(v19 + *(_QWORD *)(v9 + 88) + 44) = v18;
              v20 = (_OWORD *)(v19 + *(_QWORD *)(v9 + 88));
              v20[3] = *v17;
              v20[4] = v17[1];
              v20[5] = v17[2];
              v20[6] = v17[3];
              v20[7] = v17[4];
              v20[8] = v17[5];
              v20[9] = v17[6];
              v20[10] = v17[7];
              v21 = v17[8];
              v17 = (_OWORD *)((char *)v17 + 168);
              v20[11] = v21;
              v20[12] = *(_OWORD *)((char *)v17 - 24);
              *(_QWORD *)(v19 + *(_QWORD *)(v9 + 88) + 72) = v4;
            }
            while ( v16 < a1[6] );
          }
          v22 = dword_1C0328B98 == -1;
          v23 = dword_1C0328B98 + 1;
          *(_DWORD *)(v9 + 32) = dword_1C0328B98;
          if ( v22 )
            v23 = 1;
          v24 = 0LL;
          dword_1C0328B98 = v23;
          *(_DWORD *)(v9 + 40) = a1[6];
          *(_QWORD *)(v9 + 56) = v4;
          *(_QWORD *)(v9 + 64) = *((_QWORD *)a1 + 5);
          *(_DWORD *)(v9 + 48) = a1[7];
          v25 = *((_QWORD *)a1 + 10);
          while ( 1 )
          {
            if ( !v25 )
            {
              v30 = *(_DWORD *)(v9 + 32);
              for ( i = *(_QWORD *)(v9 + 80); i; i = *(_QWORD *)(i + 24) )
                *(_DWORD *)i = v30;
              HMAssignmentLock(v9 + 104, *(_QWORD *)(v8 + 480));
              Flink = gFrameListHead.Flink;
              if ( gFrameListHead.Flink->Blink != &gFrameListHead )
                __fastfail(3u);
              *(_QWORD *)v9 = gFrameListHead.Flink;
              *(_QWORD *)(v9 + 8) = &gFrameListHead;
              Flink->Blink = (struct _LIST_ENTRY *)v9;
              gFrameListHead.Flink = (struct _LIST_ENTRY *)v9;
              *(_QWORD *)(v9 + 24) = v9 + 16;
              *(_QWORD *)(v9 + 16) = v9 + 16;
              return (struct tagPOINTERINPUTFRAME *)v9;
            }
            v27 = Win32AllocPoolZInit(32LL, 1685222229LL);
            if ( !v27 )
              break;
            v29 = (void *)Win32AllocPool(*(unsigned int *)(v25 + 4), 1685222229LL);
            *(_QWORD *)(v27 + 16) = v29;
            *(_DWORD *)(v27 + 4) = *(_DWORD *)v25;
            *(_DWORD *)(v27 + 8) = *(_DWORD *)(v25 + 4);
            memmove(v29, *(const void **)(v25 + 8), *(unsigned int *)(v25 + 4));
            if ( v24 )
              *(_QWORD *)(v24 + 24) = v27;
            else
              *(_QWORD *)(v9 + 80) = v27;
            v25 = *(_QWORD *)(v25 + 16);
            v24 = v27;
          }
          v32 = *(_QWORD *)(v9 + 80);
          while ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 16);
            v34 = v32;
            if ( v33 )
              Win32FreePool(v33, v26, v28);
            v32 = *(_QWORD *)(v32 + 24);
            Win32FreePool(v34, v26, v28);
          }
          Win32FreePool(*(_QWORD *)(v9 + 88), v26, v28);
        }
        Win32FreePool(*(_QWORD *)(v9 + 96), v11, v12);
      }
      Win32FreePool(v9, v11, v12);
    }
  }
  return 0LL;
}
