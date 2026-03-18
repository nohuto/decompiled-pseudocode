/*
 * XREFs of CmpCreateEmptyKey @ 0x140658120
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpCopyName @ 0x1404A1054 (CmpCopyName.c)
 *     CmpNameSize @ 0x1404A109C (CmpNameSize.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406597E0 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpCreateEmptyKey(ULONG_PTR BugCheckParameter2, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 v6; // ax
  unsigned int v7; // r11d
  unsigned int v8; // r14d
  _DWORD *v10; // rsi
  int v11; // rax^4
  _DWORD *v12; // rbx
  _DWORD *v13; // r13
  unsigned __int16 v14; // ax
  __int64 v15; // r9
  signed __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rax
  int SecurityDescriptorNode; // esi
  __int64 v22; // rdx
  signed __int64 v23; // rax
  signed __int64 v24; // rcx
  signed __int64 v25; // rtt
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+20h] [rbp-30h]
  int v29; // [rsp+30h] [rbp-20h] BYREF
  int v30; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v31; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v32; // [rsp+40h] [rbp-10h] BYREF

  v30 = -1;
  v29 = -1;
  v6 = CmpNameSize(a2);
  v8 = HvAllocateCell(BugCheckParameter2, (unsigned int)v6 + 76, v7, (__int64)&v32, &v30);
  if ( v8 == -1 )
    return 0xFFFFFFFFLL;
  v10 = v32;
  *v32 = 33581934;
  v11 = MEMORY[0xFFFFF78000000018];
  v12 = v32;
  v32[1] = MEMORY[0xFFFFF78000000014];
  v12[2] = v11;
  v12[4] = a3;
  *(_QWORD *)(v12 + 5) = 0LL;
  v12[7] = -1;
  *((_QWORD *)v12 + 4) = 0xFFFFFFFFLL;
  v12[10] = -1;
  v13 = v12 + 11;
  v12[11] = -1;
  v12[12] = -1;
  *((_WORD *)v12 + 37) = 0;
  *((_QWORD *)v12 + 7) = 0LL;
  v12[16] = 0;
  *((_WORD *)v12 + 26) = 0;
  v12[13] &= 0xFF00FFFF;
  *((_BYTE *)v12 + 55) = 0;
  v14 = CmpCopyName((_BYTE *)v12 + 76, (const void **)a2);
  *((_WORD *)v12 + 36) = v14;
  if ( v14 < *a2 )
    *((_WORD *)v10 + 1) |= 0x20u;
  if ( a3 == -1 )
    *((_WORD *)v10 + 1) |= 0xCu;
  v16 = (signed __int64 *)(BugCheckParameter2 + 2952);
  v17 = KeAbPreAcquire(BugCheckParameter2 + 2952, 0LL, 0LL, v15);
  v19 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 2952), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 2952), v17, BugCheckParameter2 + 2952, v18);
  if ( v19 )
    *(_BYTE *)(v19 + 26) |= 1u;
  v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, &v29);
  if ( v20 && CmpFindSecurityCellCacheIndex(BugCheckParameter2, *(_DWORD *)(v20 + 44), &v31) )
  {
    LOBYTE(v28) = 0;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               BugCheckParameter2,
                               v8,
                               v32,
                               *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v31 + 8) + 32LL,
                               v28,
                               v13);
  }
  else
  {
    SecurityDescriptorNode = -1073741670;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
  _m_prefetchw(v16);
  v23 = *v16;
  if ( (*v16 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v24 = 0LL;
  else
    v24 = v23 - 16;
  if ( (v23 & 2) != 0 || (v25 = *v16, v25 != _InterlockedCompareExchange64(v16, v24, v23)) )
    ExfReleasePushLock((_QWORD *)(BugCheckParameter2 + 2952), v22);
  KeAbPostRelease(BugCheckParameter2 + 2952);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v30);
  if ( SecurityDescriptorNode < 0 )
  {
    HvFreeCell(BugCheckParameter2, v8, v26, v27);
    return (unsigned int)-1;
  }
  return v8;
}
