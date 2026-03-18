/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006B1F0
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C0065B00 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005BA68 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C006B000 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdx
  void *v5; // rsi
  void *v6; // r10
  unsigned __int64 v8; // rbx
  int *v9; // rax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rcx
  void *v23; // rbx
  void *v24; // rax
  __int64 CurrentProcess; // rax
  struct VIDMM_RECYCLE_RANGE *i; // rax
  void *v27; // [rsp+60h] [rbp+8h] BYREF
  void *v28; // [rsp+68h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 10);
  v5 = 0LL;
  v6 = (void *)*((_QWORD *)this + 4);
  v8 = *((_QWORD *)this + 5) - (_QWORD)v6;
  v27 = 0LL;
  v9 = *(int **)(v4 + 32);
  v28 = 0LL;
  v10 = *v9;
  if ( (unsigned int)(*v9 - 3) <= 3 && (unsigned int)(v10 - 5) > 1 )
  {
    LOBYTE(a4) = ((v10 - 4) & 0xFFFFFFFD) == 0;
    v11 = VidMmRecycleHeapMapSection(*(PVOID *)(v4 + 56), (__int64)v6, v8, a4, &v27, &v28, 0, 0LL);
    v15 = v11;
    if ( v11 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
      v16[3] = v8;
      v16[4] = *((_QWORD *)this + 4);
      v16[5] = *((_QWORD *)this + 10);
      v16[6] = v15;
      WdLogEvent5_WdWarning(v16);
      return;
    }
    v6 = v27;
    v5 = v28;
  }
  memset(v6, 0, v8);
  v19 = *((_QWORD *)this + 10);
  v20 = **(_DWORD **)(v19 + 32);
  if ( (unsigned int)(v20 - 3) <= 3 && (unsigned int)(v20 - 5) > 1 )
  {
    v21 = dword_1C0027314;
    if ( (unsigned __int64)qword_1C00270F8 > 0x53333333 )
      v21 = dword_1C0027304;
    v22 = (unsigned int)(v21 << 20);
    if ( v8 <= v22 )
    {
      CurrentProcess = PsGetCurrentProcess(v22, v19, v17, v18);
      MmUnmapViewOfSection(CurrentProcess, v5);
    }
    else
    {
      v23 = *(void **)(v19 + 56);
      v24 = (void *)PsGetCurrentProcess(v22, v19, v17, v18);
      VidMmUnmapViewAsync(v24, v23, v5);
    }
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    *((_BYTE *)i + 84) = 1;
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
}
