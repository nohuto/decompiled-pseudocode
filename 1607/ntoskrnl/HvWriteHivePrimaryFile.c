/*
 * XREFs of HvWriteHivePrimaryFile @ 0x1404827F8
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvViewMapCopyToFileOffset @ 0x1401B6568 (HvViewMapCopyToFileOffset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvpFindNextDirtyBlock @ 0x14048031C (HvpFindNextDirtyBlock.c)
 *     HvpHeaderCheckSum @ 0x140480C14 (HvpHeaderCheckSum.c)
 *     HvpFinishPrimaryWrite @ 0x14048299C (HvpFinishPrimaryWrite.c)
 *     CmpTraceHiveFlushWrotePrimaryFile @ 0x140482A3C (CmpTraceHiveFlushWrotePrimaryFile.c)
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 *     HvViewMapAddressForFileOffset @ 0x14060FB1C (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x14060FD20 (HvViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvWriteHivePrimaryFile(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  char v6; // r14
  BOOL v7; // ebx
  _DWORD *v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *PoolWithTag; // r15
  unsigned int v13; // r13d
  ULONG v14; // eax
  int v15; // ebx
  __int64 v17; // rax
  char *v18; // rbx
  __int64 v19; // rcx
  bool v20; // zf
  int v21; // eax
  struct _EX_RUNDOWN_REF v22; // [rsp+40h] [rbp-29h] BYREF
  char *v23; // [rsp+48h] [rbp-21h]
  __int64 v24; // [rsp+50h] [rbp-19h]
  char *v25; // [rsp+58h] [rbp-11h] BYREF
  int v26; // [rsp+60h] [rbp-9h] BYREF
  __int64 v27; // [rsp+68h] [rbp-1h]
  int v28; // [rsp+70h] [rbp+7h]
  int v29; // [rsp+D0h] [rbp+67h] BYREF
  char v30; // [rsp+D8h] [rbp+6Fh]
  unsigned int v31; // [rsp+E0h] [rbp+77h] BYREF
  BOOL v32; // [rsp+E8h] [rbp+7Fh]

  v4 = a2;
  v30 = 0;
  v6 = 1;
  v7 = (a3 & 1) != 0;
  v32 = v7;
  if ( (_BYTE)a2 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 2928) )
    {
      v15 = 0;
      goto LABEL_25;
    }
    v8 = *(_DWORD **)(BugCheckParameter2 + 2944);
  }
  else
  {
    if ( !*(_DWORD *)(BugCheckParameter2 + 112) )
    {
      v15 = 0;
      goto LABEL_22;
    }
    v8 = *(_DWORD **)(BugCheckParameter2 + 64);
    v8[10] = *(_DWORD *)(BugCheckParameter2 + 1400);
    v8[11] = 1;
  }
  v9 = *(_DWORD *)(BugCheckParameter2 + 164);
  v8[2] = v9;
  v8[1] = v9 + 1;
  v10 = HvpHeaderCheckSum(v8);
  v20 = CmpFailPrimarySave == 1;
  *(_DWORD *)(a4 + 508) = v10;
  if ( v20 )
    goto LABEL_31;
  v27 = a4;
  v30 = 1;
  v31 = 0;
  v26 = 0;
  v28 = 4096;
  if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, _QWORD, int *, __int64, unsigned int *, BOOL))(BugCheckParameter2 + 40))(
          BugCheckParameter2,
          0LL,
          &v26,
          1LL,
          &v31,
          v7) )
  {
    v15 = -1073741491;
    goto LABEL_25;
  }
  v11 = CmpFailPrimarySave;
  if ( CmpFailPrimarySave == 2 )
  {
LABEL_31:
    v15 = -1073741823;
    goto LABEL_25;
  }
  if ( v4 )
  {
    PoolWithTag = *(_DWORD **)(BugCheckParameter2 + 2928);
    v13 = *(_DWORD *)(BugCheckParameter2 + 2936);
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * *(unsigned int *)(BugCheckParameter2 + 112), 0x62534D43u);
    if ( !PoolWithTag )
    {
      v15 = -1073741801;
      goto LABEL_22;
    }
    v13 = 0;
    LODWORD(v22.Count) = 0;
    if ( *(_DWORD *)(BugCheckParameter2 + 112) )
    {
      v17 = BugCheckParameter2 + 96;
      do
      {
        if ( !HvpFindNextDirtyBlock(BugCheckParameter2, v17, &v22, &v25, (unsigned int *)&v29, &v31, 0) )
          break;
        v18 = v25;
        v23 = v25;
        v19 = 3LL * v13;
        PoolWithTag[6 * v13] = v31;
        v20 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
        v24 = v19;
        if ( !v20 )
        {
          if ( (char *)HvViewMapAddressForFileOffset(BugCheckParameter2 + 200, v31) != v18 )
          {
            v15 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, v31, (unsigned int)v29);
            if ( v15 < 0 )
              goto LABEL_19;
            v15 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v31, v23, v29);
            if ( v15 < 0 )
              goto LABEL_19;
            v18 = v23;
          }
          v19 = v24;
          v20 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
        }
        v21 = v29;
        if ( !v20 )
          v18 = 0LL;
        PoolWithTag[2 * v19 + 4] = v29;
        ++v13;
        *(_QWORD *)&PoolWithTag[2 * v19 + 2] = v18;
        v31 += v21;
        v17 = BugCheckParameter2 + 96;
      }
      while ( v13 < *(_DWORD *)(BugCheckParameter2 + 112) );
      v7 = v32;
    }
    v11 = CmpFailPrimarySave;
  }
  if ( v11 == 3 )
    goto LABEL_23;
  if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *, _QWORD, unsigned int *, BOOL))(BugCheckParameter2 + 40))(
          BugCheckParameter2,
          0LL,
          PoolWithTag,
          v13,
          &v31,
          v7) )
  {
    v15 = -1073741491;
    goto LABEL_19;
  }
  if ( CmpFailPrimarySave == 4
    || !(unsigned __int8)CmpFileFlushAndPurge(BugCheckParameter2, 0LL)
    || CmpFailPrimarySave == 5 )
  {
LABEL_23:
    v15 = -1073741823;
    goto LABEL_19;
  }
  if ( v4 )
    v14 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 2904));
  else
    v14 = *(_DWORD *)(BugCheckParameter2 + 112);
  CmpTraceHiveFlushWrotePrimaryFile(v14, v14 << 9);
  v30 = 0;
  if ( !v4 )
    HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 0, PoolWithTag, v13, 0);
  v15 = 0;
LABEL_19:
  if ( !PoolWithTag )
    goto LABEL_25;
  if ( !v4 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_25:
    if ( !v4 )
      goto LABEL_22;
  }
  v6 = 0;
LABEL_22:
  LOBYTE(a3) = v30;
  LOBYTE(a4) = v6;
  LOBYTE(a2) = v15 >= 0;
  HvpFinishPrimaryWrite(BugCheckParameter2, a2, a3, a4);
  return (unsigned int)v15;
}
