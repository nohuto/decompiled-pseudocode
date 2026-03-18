/*
 * XREFs of HvpMapHiveImageFromSystemCache @ 0x1401E0FAC
 * Callers:
 *     HvLoadHive @ 0x1404AE98C (HvLoadHive.c)
 * Callees:
 *     HvViewMapCopyFromFileOffset @ 0x1401E06F4 (HvViewMapCopyFromFileOffset.c)
 *     HvpPointMapEntriesToBuffer @ 0x14049F18C (HvpPointMapEntriesToBuffer.c)
 *     HvpProtectBin @ 0x1404A01C4 (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x1404A022C (HvpAllocateBin.c)
 *     HvpValidateLoadedBin @ 0x1404A038C (HvpValidateLoadedBin.c)
 *     HvpFreeBin @ 0x1404A086C (HvpFreeBin.c)
 *     HvpInitMap @ 0x1405552B0 (HvpInitMap.c)
 *     HvViewMapAddressForFileOffset @ 0x1406629CC (HvViewMapAddressForFileOffset.c)
 */

__int64 __fastcall HvpMapHiveImageFromSystemCache(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rdi
  char *v5; // rbx
  unsigned int v8; // r15d
  unsigned int v9; // r13d
  unsigned int v10; // esi
  int inited; // ebp
  bool i; // zf
  __int64 v13; // rax
  __int64 v14; // rcx
  int Bin; // eax
  char *v17; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+20h]

  v19 = a4;
  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v8 = 0;
  v9 = 4096;
  v10 = 0;
  inited = HvpInitMap();
  if ( inited >= 0 )
  {
    v19 = a3;
    for ( i = a3 == 0; !i; i = v19 == 0 )
    {
      v13 = HvViewMapAddressForFileOffset(BugCheckParameter2 + 200, v9);
      v10 = 4096;
      if ( (unsigned __int8)HvpValidateLoadedBin(v13, v8, a3) )
        v10 = *(_DWORD *)(v14 + 8);
      Bin = HvpAllocateBin(BugCheckParameter2, v10, 0, v8, 825445699, (__int64)&v18, (__int64)&v17);
      v5 = v17;
      inited = Bin;
      if ( Bin < 0 )
      {
LABEL_11:
        v4 = v18;
        goto LABEL_13;
      }
      if ( v17 )
      {
        inited = HvpProtectBin(BugCheckParameter2, v10, 0, v8, (__int64)v17, 1);
        if ( inited < 0 )
          goto LABEL_11;
        HvViewMapCopyFromFileOffset(BugCheckParameter2 + 200, v5, v9, v10);
      }
      HvpPointMapEntriesToBuffer(BugCheckParameter2, v8, 0LL);
      v4 = 0LL;
      v18 = 0LL;
      v5 = 0LL;
      v19 -= v10;
      v8 += v10;
      v17 = 0LL;
      v9 += v10;
    }
    inited = 0;
LABEL_13:
    if ( v4 || v5 )
      HvpFreeBin(BugCheckParameter2, v10, 0, v4, (__int64)v5);
  }
  return (unsigned int)inited;
}
