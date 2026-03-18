/*
 * XREFs of ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C009C7B4
 * Callers:
 *     ??_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z @ 0x1C0020840 (--_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001CF54 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::~VIDMM_PROCESS_HEAP(VIDMM_PROCESS_HEAP *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGFASTMUTEX *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  *(_QWORD *)this = &VIDMM_PROCESS_HEAP::`vftable';
  v5 = (DXGFASTMUTEX *)*((_QWORD *)this + 2);
  if ( v5 )
    DXGFASTMUTEX::`scalar deleting destructor'(v5, a2);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((VIDMM_PROCESS_HEAP **)this + 26) != (VIDMM_PROCESS_HEAP *)((char *)this + 208) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3, a4);
    v6[3] = 270LL;
    v6[4] = 2LL;
    v6[5] = 0LL;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 24) != (VIDMM_PROCESS_HEAP *)((char *)this + 192) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3, a4);
    v7[3] = 270LL;
    v7[4] = 2LL;
    v7[5] = 1LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 28) != (VIDMM_PROCESS_HEAP *)((char *)this + 224) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3, a4);
    v8[3] = 270LL;
    v8[4] = 2LL;
    v8[5] = 2LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 30) != (VIDMM_PROCESS_HEAP *)((char *)this + 240) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3, a4);
    v10 = 2LL;
    v11 = 2LL;
    v9[3] = 270LL;
    v12 = v9 + 4;
    do
    {
      *v12++ = v10++;
      --v11;
    }
    while ( v11 );
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 32) != (VIDMM_PROCESS_HEAP *)((char *)this + 256) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3, a4);
    v13[3] = 270LL;
    v13[4] = 2LL;
    v13[5] = 4LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( *((VIDMM_PROCESS_HEAP **)this + 34) != (VIDMM_PROCESS_HEAP *)((char *)this + 272) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3, a4);
    v14[3] = 270LL;
    v14[4] = 2LL;
    v14[5] = 5LL;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
