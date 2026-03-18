/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJIQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@@Z @ 0x1C0031590
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x1C0003880 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005E90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00061D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        const unsigned int *const a3,
        unsigned int a4,
        struct _VIDMM_PRIMARIES_REFERENCES *a5)
{
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  struct DXGPROCESS *v15; // r15
  unsigned int v16; // esi
  DXGPUSHLOCK *v17; // rdi
  unsigned int v18; // r10d
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // r9
  int v23; // r8d
  __int64 v24; // rdx
  volatile signed __int32 *v25; // rdx
  __int64 v26; // r11
  unsigned int v27; // r8d
  __int64 v28; // rcx
  bool v29; // r9
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // ebp
  _BYTE v34[8]; // [rsp+20h] [rbp-48h] BYREF
  char *v35; // [rsp+28h] [rbp-40h]
  int v36; // [rsp+30h] [rbp-38h]

  Current = DXGPROCESS::GetCurrent();
  v14 = 0;
  v15 = Current;
  v16 = 0;
  v17 = (struct DXGPROCESS *)((char *)Current + 192);
  v35 = (char *)Current + 192;
  if ( Current != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)Current + 25) == KeGetCurrentThread() )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v20 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v20);
  }
  DXGPUSHLOCK::AcquireShared(v17);
  v18 = 0;
  v36 = 1;
  *(_QWORD *)a5 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  while ( 1 )
  {
    v21 = (*a3 >> 6) & 0xFFFFFF;
    if ( v21 >= *((_DWORD *)v15 + 58) )
      break;
    v22 = *((_QWORD *)v15 + 27);
    v23 = *(_DWORD *)(v22 + 16LL * v21 + 8);
    if ( ((*a3 >> 26) & 0x30) != (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x30) )
      break;
    if ( (v23 & 0x1000) != 0 )
      break;
    if ( (v23 & 0xF) == 0 )
      break;
    if ( (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0xF) != 5 )
      break;
    v24 = *(_QWORD *)(v22 + 16LL * v21);
    if ( !v24 )
      break;
    v25 = *(volatile signed __int32 **)(v24 + 24);
    v26 = **(_QWORD **)v25;
    v27 = **(_DWORD **)(v26 + 472);
    v28 = (v27 >> 6) & 0x80000 | (v27 | ((v27 | (v27 >> 1)) >> 11)) & 0x80000;
    v29 = ((v27 >> 6) & 0x80000 | (v27 | ((v27 | (v27 >> 1)) >> 11)) & 0x80000) != 0;
    v30 = v27 >> 20;
    LOBYTE(v30) = v30 & 1;
    if ( (**(_DWORD **)(v26 + 472) & 0x200000) != 0 )
    {
      *((_DWORD *)a5 + 34) |= 1u;
      if ( !v29 )
        goto LABEL_21;
LABEL_17:
      if ( *(_BYTE *)(v26 + 93) )
      {
        v32 = WdLogNewEntry5_WdWarning(v28, v25, v30);
        WdLogEvent5_WdWarning(v32);
        v16 = -1071775482;
        goto LABEL_26;
      }
      _InterlockedExchangeAdd(v25 + 26, a4);
      *((_QWORD *)a5 + *(unsigned int *)a5 + 1) = v25;
      if ( *(_DWORD *)a5 >= 0x10u )
        ++*((_DWORD *)this + 1794);
      ++*(_DWORD *)a5;
      *((_DWORD *)a5 + 1) |= 1 << ((*(_DWORD *)(*(_QWORD *)(v26 + 40) + 4LL) >> 6) & 0xF);
      goto LABEL_21;
    }
    if ( v29 )
      goto LABEL_17;
    if ( !(_BYTE)v30 )
    {
      v31 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v31 + 24) = 19206LL;
      goto LABEL_25;
    }
LABEL_21:
    ++v18;
    ++a3;
    if ( v18 >= a2 )
      goto LABEL_5;
  }
  v31 = ((__int64 (*)(void))WdLogNewEntry5_WdError)();
  *(_QWORD *)(v31 + 24) = 19182LL;
LABEL_25:
  WdLogEvent5_WdError(v31);
  v16 = -1073741811;
LABEL_26:
  if ( *(_DWORD *)a5 )
  {
    v33 = -a4;
    do
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a5 + ++v14) + 104LL), v33);
    while ( v14 < *(_DWORD *)a5 );
  }
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  return v16;
}
