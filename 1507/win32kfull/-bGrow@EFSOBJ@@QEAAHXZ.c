/*
 * XREFs of ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C011EB5C
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C0030118 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ??0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z @ 0x1C00EBED8 (--0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z.c)
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C00EBFA4 (--1EFSMEMOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall EFSOBJ::bGrow(EFSOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rdi
  size_t v10; // rbx
  size_t v11; // rax
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = (*(_QWORD *)(*(_QWORD *)this + 48LL) - *(_QWORD *)this - 68LL) >> 3;
  if ( (int)v3 + 16 < (unsigned int)v3 )
    return 0LL;
  v14 = *(_DWORD *)(v1 + 24);
  EFSMEMOBJ::EFSMEMOBJ(
    (EFSMEMOBJ *)v13,
    *(struct DCOBJ **)(v1 + 32),
    v3 + 16,
    *(_DWORD *)(v1 + 8),
    *(void **)(v1 + 16),
    &v14);
  v7 = v13[0];
  v8 = 0;
  if ( v13[0] )
  {
    v9 = *(_QWORD *)this;
    v10 = 8LL * (unsigned int)((*(_QWORD *)(*(_QWORD *)this + 40LL) - *(_QWORD *)this - 68LL) >> 3);
    memmove((void *)(v13[0] + 68LL), (const void *)(*(_QWORD *)this + 68LL), v10);
    v11 = v10 + v7 + 68;
    v8 = 1;
    *(_QWORD *)(v7 + 40) = v11;
    *(_DWORD *)(v7 + 64) = *(_DWORD *)(v9 + 64);
    *(_DWORD *)(v7 + 28) = *(_DWORD *)(v9 + 28);
    v13[0] = *(_QWORD *)this;
    *(_QWORD *)this = v7;
  }
  EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v13, v4, v5, v6);
  return v8;
}
