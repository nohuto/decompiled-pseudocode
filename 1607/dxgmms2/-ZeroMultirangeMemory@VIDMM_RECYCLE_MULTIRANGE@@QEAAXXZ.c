/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005F1B4
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005F310 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0066CD0 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069B80 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *v1; // rsi
  __int64 v2; // rdx
  char *v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // rbp
  int v7; // ecx
  struct VIDMM_RECYCLE_RANGE *i; // rdi
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // ecx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  void *v17; // rbx
  void *CurrentProcess; // rax
  _QWORD *v19; // rax
  void *v20; // [rsp+60h] [rbp+8h] BYREF
  void *v21; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0LL;
  v1 = 0LL;
  v2 = *((_QWORD *)this + 10);
  v4 = (char *)*((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 5);
  v21 = 0LL;
  v6 = v5 - (_QWORD)v4;
  v7 = **(_DWORD **)(v2 + 32);
  if ( (unsigned int)(v7 - 3) <= 3 && (unsigned int)(v7 - 5) > 1 )
  {
    v11 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v2 + 56),
            (unsigned __int64)v4,
            v6,
            ((v7 - 4) & 0xFFFFFFFD) == 0,
            &v20,
            &v21,
            0,
            0LL);
    v13 = v11;
    if ( v11 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v12);
      v19[3] = v6;
      v19[4] = *((_QWORD *)this + 4);
      v19[5] = *((_QWORD *)this + 10);
      v19[6] = v13;
      WdLogEvent5_WdWarning(v19);
      return;
    }
    v4 = (char *)v20;
    v1 = v21;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( !*((_BYTE *)i + 84) )
    {
      memset(&v4[*((_QWORD *)i + 4) - *((_QWORD *)this + 4)], 0, *((_QWORD *)i + 5) - *((_QWORD *)i + 4));
      *((_BYTE *)i + 84) = 1;
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  v9 = *((_QWORD *)this + 10);
  v10 = **(_DWORD **)(v9 + 32);
  if ( (unsigned int)(v10 - 3) <= 3 && (unsigned int)(v10 - 5) > 1 )
  {
    v14 = dword_1C003534C;
    if ( (unsigned __int64)qword_1C0035148 > 0x53333333 )
      v14 = dword_1C003533C;
    v15 = (unsigned int)(v14 << 20);
    if ( v6 > v15 )
    {
      v17 = *(void **)(v9 + 56);
      CurrentProcess = (void *)PsGetCurrentProcess(v15);
      VidMmUnmapViewAsync(CurrentProcess, v17, v1);
    }
    else
    {
      v16 = PsGetCurrentProcess(v15);
      MmUnmapViewOfSection(v16, v1);
    }
  }
}
