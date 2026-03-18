/*
 * XREFs of HvWriteHivePrimaryFile @ 0x1403D1E60
 * Callers:
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvViewMapCopyToFileOffset @ 0x1401AAB98 (HvViewMapCopyToFileOffset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpFileFlushAndPurge @ 0x1403D2B0C (CmpFileFlushAndPurge.c)
 *     HvpHeaderCheckSum @ 0x1403D44F8 (HvpHeaderCheckSum.c)
 *     HvpFindNextDirtyBlock @ 0x1403ED550 (HvpFindNextDirtyBlock.c)
 *     HvpFinishPrimaryWrite @ 0x1404C16EC (HvpFinishPrimaryWrite.c)
 *     CmpTraceHiveFlushWrotePrimaryFile @ 0x1404C346C (CmpTraceHiveFlushWrotePrimaryFile.c)
 *     HvViewMapAddressForFileOffset @ 0x1405EAFC4 (HvViewMapAddressForFileOffset.c)
 *     HvViewMapPinForFileOffset @ 0x1405EB1C8 (HvViewMapPinForFileOffset.c)
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
  char *v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  char *v21; // [rsp+58h] [rbp-11h]
  int v22; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  int v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+D0h] [rbp+67h] BYREF
  char v26; // [rsp+D8h] [rbp+6Fh]
  __int64 v27; // [rsp+E0h] [rbp+77h] BYREF
  BOOL v28; // [rsp+E8h] [rbp+7Fh]

  v4 = a2;
  v26 = 0;
  v6 = 1;
  v7 = (a3 & 1) != 0;
  v28 = v7;
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
  v10 = HvpHeaderCheckSum(v8);
  v11 = CmpFailPrimarySave == 1;
  *(_DWORD *)(a4 + 508) = v10;
  if ( v11 )
    goto LABEL_31;
  v23 = a4;
  v26 = 1;
  LODWORD(v27) = 0;
  v22 = 0;
  v24 = 4096;
  if ( !(*(unsigned __int8 (__fastcall **)(ULONG_PTR, _QWORD, int *, __int64, __int64 *, BOOL))(BugCheckParameter2 + 40))(
          BugCheckParameter2,
          0LL,
          &v22,
          1LL,
          &v27,
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
    if ( *(_DWORD *)(BugCheckParameter2 + 112) )
    {
      do
      {
        if ( !(unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v25, (__int64)&v27, 0) )
          break;
        v18 = v21;
        v19 = 3LL * v14;
        PoolWithTag[6 * v14] = v27;
        if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
        {
          if ( (char *)HvViewMapAddressForFileOffset(BugCheckParameter2 + 200, (unsigned int)v27) != v21 )
          {
            v16 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, (unsigned int)v27, (unsigned int)v25);
            if ( v16 < 0 )
              goto LABEL_19;
            v16 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v27, v21, v25);
            if ( v16 < 0 )
              goto LABEL_19;
            v18 = v21;
          }
          v19 = 3LL * v14;
        }
        v20 = v25;
        if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
          v18 = 0LL;
        PoolWithTag[2 * v19 + 4] = v25;
        *(_QWORD *)&PoolWithTag[2 * v19 + 2] = v18;
        ++v14;
        LODWORD(v27) = v20 + v27;
      }
      while ( v14 < *(_DWORD *)(BugCheckParameter2 + 112) );
      v7 = v28;
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
          &v27,
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
  v26 = 0;
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
  LOBYTE(a3) = v26;
  LOBYTE(a4) = v6;
  LOBYTE(a2) = v16 >= 0;
  HvpFinishPrimaryWrite(BugCheckParameter2, a2, a3, a4);
  return (unsigned int)v16;
}
