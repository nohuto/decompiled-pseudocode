/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0061CE4
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C005C2AC (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005E694 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0061DF0 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // rdx
  void *v2; // rsi
  void *v3; // r10
  unsigned __int64 v5; // rbx
  int *v6; // rax
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  void *v14; // rbx
  void *v15; // rax
  struct VIDMM_RECYCLE_RANGE *i; // rax
  _QWORD *v17; // rax
  __int64 CurrentProcess; // rax
  void *v19; // [rsp+60h] [rbp+8h] BYREF
  void *v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 10);
  v2 = 0LL;
  v3 = (void *)*((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 5) - (_QWORD)v3;
  v19 = 0LL;
  v6 = *(int **)(v1 + 32);
  v20 = 0LL;
  v7 = *v6;
  if ( (unsigned int)(*v6 - 3) <= 3 && (unsigned int)(v7 - 5) > 1 )
  {
    v8 = VidMmRecycleHeapMapSection(
           *(PVOID *)(v1 + 56),
           (unsigned __int64)v3,
           v5,
           ((v7 - 4) & 0xFFFFFFFD) == 0,
           &v19,
           &v20,
           0,
           0LL);
    v10 = v8;
    if ( v8 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v9);
      v17[3] = v5;
      v17[4] = *((_QWORD *)this + 4);
      v17[5] = *((_QWORD *)this + 10);
      v17[6] = v10;
      WdLogEvent5_WdWarning(v17);
      return;
    }
    v3 = v19;
    v2 = v20;
  }
  memset(v3, 0, v5);
  v11 = *((_QWORD *)this + 10);
  v12 = **(_DWORD **)(v11 + 32);
  if ( (unsigned int)(v12 - 3) <= 3 && (unsigned int)(v12 - 5) > 1 )
  {
    v13 = dword_1C002F33C;
    if ( (unsigned __int64)qword_1C002F118 > 0x53333333 )
      v13 = dword_1C002F32C;
    if ( v5 <= (unsigned int)(v13 << 20) )
    {
      CurrentProcess = PsGetCurrentProcess();
      MmUnmapViewOfSection(CurrentProcess, v2);
    }
    else
    {
      v14 = *(void **)(v11 + 56);
      v15 = (void *)PsGetCurrentProcess();
      VidMmUnmapViewAsync(v15, v14, v2);
    }
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    *((_BYTE *)i + 84) = 1;
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
}
