/*
 * XREFs of HvViewMapFlush @ 0x14060FBD8
 * Callers:
 *     CmpDoSystemCacheWrite @ 0x140604110 (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605DC8 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     CcFlushCache @ 0x14008EB94 (CcFlushCache.c)
 *     HvpViewMapAcquireLockShared @ 0x1401B66A4 (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapReleaseLockShared @ 0x1401B69DC (HvpViewMapReleaseLockShared.c)
 *     CcPinRead @ 0x1404A8820 (CcPinRead.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
 */

__int64 __fastcall HvViewMapFlush(__int64 a1, unsigned int a2, ULONG a3)
{
  __int64 v4; // r13
  ULONG v6; // esi
  unsigned int v7; // r15d
  ULONG v8; // r14d
  unsigned int Status; // esi
  PVOID BcbVoid; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+38h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK Buffer; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  HvpViewMapAcquireLockShared(a1);
  v6 = a3;
  v7 = v4;
  while ( v6 )
  {
    v8 = *(_DWORD *)(32LL * ((v7 >> 18) & 0x3F) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(v7) & 0x7F)) + 24)
       - (v7 & 0x3FFFF);
    if ( v8 > v6 )
      v8 = v6;
    FileOffset.QuadPart = v7;
    CcPinRead(*(PFILE_OBJECT *)(a1 + 16), &FileOffset, v8, 1u, &BcbVoid, (PVOID *)&Buffer);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinData(BcbVoid);
    v7 += v8;
    v6 -= v8;
  }
  HvpViewMapReleaseLockShared(a1);
  v14 = v4;
  CcFlushCache(
    *(PSECTION_OBJECT_POINTERS *)(*(_QWORD *)(a1 + 16) + 40LL),
    (PLARGE_INTEGER)((char *)&v14 + 1),
    a3,
    &Buffer);
  Status = Buffer.Status;
  if ( Buffer.Status >= 0 )
    return 0;
  return Status;
}
