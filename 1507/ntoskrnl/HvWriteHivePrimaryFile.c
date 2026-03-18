/*
 * XREFs of HvWriteHivePrimaryFile @ 0x1404AFC20
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0820 (HvViewMapCopyToFileOffset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     HvpFindNextDirtyBlock @ 0x1404A0C4C (HvpFindNextDirtyBlock.c)
 *     HvpFinishPrimaryWrite @ 0x1404AFDC0 (HvpFinishPrimaryWrite.c)
 *     CmpTraceHiveFlushWrotePrimaryFile @ 0x1404AFE60 (CmpTraceHiveFlushWrotePrimaryFile.c)
 *     HvpHeaderCheckSum @ 0x1404AFFCC (HvpHeaderCheckSum.c)
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 *     HvViewMapAddressForFileOffset @ 0x1406629CC (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x140663004 (HvViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvWriteHivePrimaryFile(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  char v6; // r14
  BOOL v7; // edi
  _DWORD *v8; // r9
  int v9; // eax
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  _DWORD *PoolWithTag; // r15
  unsigned int v14; // r13d
  ULONG v15; // eax
  int v16; // edi
  unsigned int *v18; // rax
  char *v19; // rdi
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // [rsp+40h] [rbp-29h] BYREF
  char *v23; // [rsp+48h] [rbp-21h]
  __int64 v24; // [rsp+50h] [rbp-19h]
  char *v25; // [rsp+58h] [rbp-11h] BYREF
  int v26; // [rsp+60h] [rbp-9h] BYREF
  __int64 v27; // [rsp+68h] [rbp-1h]
  int v28; // [rsp+70h] [rbp+7h]
  __int64 v29; // [rsp+D0h] [rbp+67h] BYREF
  char v30; // [rsp+D8h] [rbp+6Fh]
  __int64 v31; // [rsp+E0h] [rbp+77h] BYREF
  BOOL v32; // [rsp+E8h] [rbp+7Fh]

  v4 = a2;
  v30 = 0;
  v6 = 1;
  LOBYTE(a3) = a3 & 1;
  v7 = (_BYTE)a3 != 0;
  v32 = v7;
  if ( (_BYTE)a2 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 2928) )
    {
      v16 = 0;
      goto LABEL_25;
    }
    v8 = *(_DWORD **)(BugCheckParameter2 + 2944);
  }
  else
  {
    if ( !*(_DWORD *)(BugCheckParameter2 + 112) )
    {
      v16 = 0;
      goto LABEL_22;
    }
    v8 = *(_DWORD **)(BugCheckParameter2 + 64);
    v8[10] = *(_DWORD *)(BugCheckParameter2 + 1400);
    v8[11] = 1;
  }
  v9 = *(_DWORD *)(BugCheckParameter2 + 164);
  v8[2] = v9;
  v8[1] = v9 + 1;
  v10 = HvpHeaderCheckSum(v8, a2, a3);
  v11 = CmpFailPrimarySave == 1;
  *(_DWORD *)(a4 + 508) = v10;
  if ( v11 )
    goto LABEL_31;
  v27 = a4;
  v30 = 1;
  LODWORD(v31) = 0;
  v26 = 0;
  v28 = 4096;
  if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, _QWORD, int *, __int64, __int64 *, BOOL))(BugCheckParameter2 + 40))(
          BugCheckParameter2,
          0LL,
          &v26,
          1LL,
          &v31,
          v7) )
  {
    v16 = -1073741491;
    goto LABEL_25;
  }
  v12 = CmpFailPrimarySave;
  if ( CmpFailPrimarySave == 2 )
  {
LABEL_31:
    v16 = -1073741823;
    goto LABEL_25;
  }
  if ( v4 )
  {
    PoolWithTag = *(_DWORD **)(BugCheckParameter2 + 2928);
    v14 = *(_DWORD *)(BugCheckParameter2 + 2936);
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * *(unsigned int *)(BugCheckParameter2 + 112), 0x62534D43u);
    if ( !PoolWithTag )
    {
      v16 = -1073741801;
      goto LABEL_22;
    }
    v14 = 0;
    v22 = 0;
    if ( *(_DWORD *)(BugCheckParameter2 + 112) )
    {
      v18 = (unsigned int *)(BugCheckParameter2 + 96);
      do
      {
        if ( !HvpFindNextDirtyBlock(BugCheckParameter2, v18, &v22, &v25, (unsigned int *)&v29, (unsigned int *)&v31, 0) )
          break;
        v19 = v25;
        v23 = v25;
        v20 = 3LL * v14;
        PoolWithTag[6 * v14] = v31;
        v11 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
        v24 = v20;
        if ( !v11 )
        {
          if ( (char *)HvViewMapAddressForFileOffset(BugCheckParameter2 + 200, (unsigned int)v31) != v19 )
          {
            v16 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, (unsigned int)v31, (unsigned int)v29);
            if ( v16 < 0 )
              goto LABEL_19;
            v16 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v31, v23, v29);
            if ( v16 < 0 )
              goto LABEL_19;
            v19 = v23;
          }
          v20 = v24;
        }
        v21 = v29;
        if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
          v19 = 0LL;
        PoolWithTag[2 * v20 + 4] = v29;
        *(_QWORD *)&PoolWithTag[2 * v20 + 2] = v19;
        ++v14;
        LODWORD(v31) = v21 + v31;
        v18 = (unsigned int *)(BugCheckParameter2 + 96);
      }
      while ( v14 < *(_DWORD *)(BugCheckParameter2 + 112) );
      v7 = v32;
    }
    v12 = CmpFailPrimarySave;
  }
  if ( v12 == 3 )
    goto LABEL_23;
  if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *, _QWORD, __int64 *, BOOL))(BugCheckParameter2 + 40))(
          BugCheckParameter2,
          0LL,
          PoolWithTag,
          v14,
          &v31,
          v7) )
  {
    v16 = -1073741491;
    goto LABEL_19;
  }
  if ( CmpFailPrimarySave == 4
    || !(unsigned __int8)CmpFileFlushAndPurge(BugCheckParameter2, 0LL)
    || CmpFailPrimarySave == 5 )
  {
LABEL_23:
    v16 = -1073741823;
    goto LABEL_19;
  }
  if ( v4 )
    v15 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 2904));
  else
    v15 = *(_DWORD *)(BugCheckParameter2 + 112);
  CmpTraceHiveFlushWrotePrimaryFile(v15, v15 << 9);
  v30 = 0;
  if ( !v4 )
    HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 0, PoolWithTag, v14, 0);
  v16 = 0;
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
  LOBYTE(a2) = v16 >= 0;
  HvpFinishPrimaryWrite(BugCheckParameter2, a2, a3, a4);
  return (unsigned int)v16;
}
