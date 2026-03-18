/*
 * XREFs of ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022E9B4
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022E6D4 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C022DFDC (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CommitRimCompleteFrame(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  struct tagPOINTERQFRAME *v7; // rax
  struct tagPOINTERINPUTFRAME *result; // rax
  unsigned __int64 v9; // rcx
  _DWORD *v10; // r8
  unsigned int v11; // r9d
  _OWORD *v12; // r10
  __int64 v13; // rax
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  __int128 v16; // xmm0
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rsi
  void *v22; // rax
  int v23; // ecx
  __int64 i; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v29; // [rsp+40h] [rbp+8h] BYREF

  v29 = 0LL;
  LOBYTE(a3) = a1[12] == 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(*((_QWORD *)a1 + 4), 3LL, a3, &v29) >= 0 )
  {
    v4 = v29 == -64 ? 0LL : *(_QWORD *)(v29 + 64);
    RawInputManagerDeviceObjectDereference(v29);
    v5 = HMValidateHandleNoSecure(v4, 19);
    EtwTraceBeginPointerFrameCommit(0LL, a1[6]);
    v6 = Win32AllocPoolZInit(96LL, 1718645589LL);
    if ( v6 )
    {
      v7 = AllocPointerQFrameList(a1[6]);
      *(_QWORD *)(v6 + 80) = v7;
      if ( v7 )
      {
        v9 = 216LL * a1[6];
        if ( v9 <= 0xFFFFFFFF )
          *(_QWORD *)(v6 + 72) = Win32AllocPoolZInit((unsigned int)v9, 1701868373LL);
        if ( *(_QWORD *)(v6 + 72) )
        {
          v10 = (_DWORD *)*((_QWORD *)a1 + 11);
          v11 = 0;
          if ( a1[6] )
          {
            v12 = v10 + 2;
            do
            {
              v13 = v11++;
              v14 = 216 * v13;
              LODWORD(v13) = *v10;
              v10 += 42;
              *(_DWORD *)(v14 + *(_QWORD *)(v6 + 72) + 44) = v13;
              v15 = (_OWORD *)(v14 + *(_QWORD *)(v6 + 72));
              v15[3] = *v12;
              v15[4] = v12[1];
              v15[5] = v12[2];
              v15[6] = v12[3];
              v15[7] = v12[4];
              v15[8] = v12[5];
              v15[9] = v12[6];
              v15[10] = v12[7];
              v16 = v12[8];
              v12 = (_OWORD *)((char *)v12 + 168);
              v15[11] = v16;
              v15[12] = *(_OWORD *)((char *)v12 - 24);
              *(_QWORD *)(v14 + *(_QWORD *)(v6 + 72) + 72) = v4;
            }
            while ( v11 < a1[6] );
          }
          v17 = dword_1C0322C10 == -1;
          v18 = dword_1C0322C10 + 1;
          *(_DWORD *)(v6 + 16) = dword_1C0322C10;
          if ( v17 )
            v18 = 1;
          v19 = 0LL;
          dword_1C0322C10 = v18;
          *(_DWORD *)(v6 + 24) = a1[6];
          *(_QWORD *)(v6 + 40) = v4;
          *(_QWORD *)(v6 + 48) = *((_QWORD *)a1 + 5);
          *(_DWORD *)(v6 + 32) = a1[7];
          v20 = *((_QWORD *)a1 + 10);
          while ( 1 )
          {
            if ( !v20 )
            {
              v23 = *(_DWORD *)(v6 + 16);
              for ( i = *(_QWORD *)(v6 + 64); i; i = *(_QWORD *)(i + 24) )
                *(_DWORD *)i = v23;
              HMAssignmentLock(v6 + 88, *(_QWORD *)(v5 + 416));
              Flink = gFrameListHead.Flink;
              *(_QWORD *)v6 = gFrameListHead.Flink;
              *(_QWORD *)(v6 + 8) = &gFrameListHead;
              if ( Flink->Blink != &gFrameListHead )
                __fastfail(3u);
              Flink->Blink = (struct _LIST_ENTRY *)v6;
              result = (struct tagPOINTERINPUTFRAME *)v6;
              gFrameListHead.Flink = (struct _LIST_ENTRY *)v6;
              return result;
            }
            v21 = Win32AllocPoolZInit(32LL, 1685222229LL);
            if ( !v21 )
              break;
            v22 = (void *)Win32AllocPool(*(unsigned int *)(v20 + 4), 1685222229LL);
            *(_QWORD *)(v21 + 16) = v22;
            *(_DWORD *)(v21 + 4) = *(_DWORD *)v20;
            *(_DWORD *)(v21 + 8) = *(_DWORD *)(v20 + 4);
            memmove(v22, *(const void **)(v20 + 8), *(unsigned int *)(v20 + 4));
            if ( v19 )
              *(_QWORD *)(v19 + 24) = v21;
            else
              *(_QWORD *)(v6 + 64) = v21;
            v20 = *(_QWORD *)(v20 + 16);
            v19 = v21;
          }
          v25 = *(_QWORD *)(v6 + 64);
          while ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 16);
            v27 = v25;
            if ( v26 )
              Win32FreePool(v26);
            v25 = *(_QWORD *)(v25 + 24);
            Win32FreePool(v27);
          }
          Win32FreePool(*(_QWORD *)(v6 + 72));
        }
        Win32FreePool(*(_QWORD *)(v6 + 80));
      }
      Win32FreePool(v6);
    }
  }
  return 0LL;
}
