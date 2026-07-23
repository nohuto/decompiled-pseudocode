/*
 * XREFs of CcCopyWriteEx @ 0x1400E9C50
 * Callers:
 *     CcCopyWrite @ 0x1401B18CC (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x1401B19C0 (CcFastCopyWrite.c)
 * Callees:
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     PsGetBaseIoPriorityThread @ 0x1400E9DA0 (PsGetBaseIoPriorityThread.c)
 */

char __fastcall CcCopyWriteEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, struct _KTHREAD *a6)
{
  struct _KTHREAD *CurrentThread; // rbx
  int BaseIoPriorityThread; // eax
  __int64 *v8; // rdx
  unsigned int v9; // r8d
  unsigned __int8 v10; // r9
  __int64 v11; // r11
  int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(CurrentThread);
  if ( ((BaseIoPriorityThread >= 2 || CurrentThread != KeGetCurrentThread() || !CurrentThread[1].Timer.DueTime.LowPart)
     && BaseIoPriorityThread <= 0
     || (*(_DWORD *)(v11 + 80) & 0x10) != 0)
    && !v10 )
  {
    return 0;
  }
  v12 = 2;
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 40) + 8LL);
  v14 = *v8;
  v18[0] = v14;
  if ( (v14 & 0xFFF) == 0 && v9 >= 0x1000 )
    v12 = 3;
  if ( (((_WORD)v14 + (_WORD)v9) & 0xFFF) == 0 )
    v12 |= 4u;
  v17 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 40LL);
  v15 = v17 - (v14 & 0xFFFFFFFFFFFFF000uLL);
  if ( v15 <= 0 )
  {
    v12 |= 7u;
  }
  else if ( (unsigned __int64)v15 <= 0x1000 )
  {
    v12 |= 6u;
  }
  return CcMapAndCopyInToCache(v13, a5, v18, v9, v12, v11, &v17, v10, a6);
}
