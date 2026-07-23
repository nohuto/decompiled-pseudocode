/*
 * XREFs of HvpMapHiveImageFromSystemCache @ 0x1401B71BC
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvpViewMapAcquireLockShared @ 0x1401B66A4 (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapReleaseLockShared @ 0x1401B69DC (HvpViewMapReleaseLockShared.c)
 *     HvpInitMap @ 0x1404C5FEC (HvpInitMap.c)
 *     HvpPointMapEntriesToBuffer @ 0x1404F6EE8 (HvpPointMapEntriesToBuffer.c)
 *     HvpProtectBin @ 0x1404F71D0 (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x1404F7238 (HvpAllocateBin.c)
 *     HvpValidateLoadedBin @ 0x1404F7398 (HvpValidateLoadedBin.c)
 *     HvpFreeBin @ 0x1404F78FC (HvpFreeBin.c)
 *     HvpViewMapAddressForFileOffset @ 0x140581D34 (HvpViewMapAddressForFileOffset.c)
 *     HvpViewMapContiguousBytesAfterFileOffset @ 0x140581D6C (HvpViewMapContiguousBytesAfterFileOffset.c)
 *     HvViewMapAddressForFileOffset @ 0x14060FB1C (HvViewMapAddressForFileOffset.c)
 */

__int64 __fastcall HvpMapHiveImageFromSystemCache(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // esi
  __int64 v5; // rbx
  char *v6; // rbp
  ULONG_PTR v8; // r15
  int v9; // r14d
  int inited; // edi
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  int Bin; // eax
  unsigned int v15; // ebx
  unsigned int v16; // r15d
  char *v17; // r12
  unsigned int v18; // esi
  const void *v19; // r10
  int v21; // [rsp+40h] [rbp-68h]
  void *v22; // [rsp+48h] [rbp-60h] BYREF
  __int64 v23[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+10h]
  unsigned int v27; // [rsp+C8h] [rbp+20h]

  v3 = 0;
  v4 = 4096;
  v5 = 0LL;
  v25 = 0;
  v6 = 0LL;
  v21 = 4096;
  v23[0] = 0LL;
  v22 = 0LL;
  v8 = BugCheckParameter2;
  v9 = 0;
  inited = HvpInitMap();
  if ( inited >= 0 )
  {
    v27 = a3;
    if ( a3 )
    {
      v11 = v8 + 200;
      while ( 1 )
      {
        v12 = HvViewMapAddressForFileOffset(v11, v4);
        v9 = 4096;
        if ( (unsigned __int8)HvpValidateLoadedBin(v12, v3, a3) )
          v9 = *(_DWORD *)(v13 + 8);
        Bin = HvpAllocateBin(v8, v9, 0, v3, 825445699, (__int64)v23, (__int64)&v22);
        v6 = (char *)v22;
        inited = Bin;
        if ( Bin < 0 )
          break;
        if ( v22 )
        {
          inited = HvpProtectBin(v8, v9, 0, v3, (__int64)v22, 1);
          if ( inited < 0 )
            break;
          v15 = v4;
          HvpViewMapAcquireLockShared(v11);
          if ( v9 )
          {
            v16 = v9;
            v17 = v6;
            do
            {
              HvpViewMapAddressForFileOffset(v11, v15);
              v18 = HvpViewMapContiguousBytesAfterFileOffset(v11, v15);
              if ( v18 > v16 )
                v18 = v16;
              memmove(v17, v19, v18);
              v15 += v18;
              v17 += v18;
              v16 -= v18;
            }
            while ( v16 );
            v8 = BugCheckParameter2;
            v3 = v25;
            v4 = v21;
          }
          HvpViewMapReleaseLockShared(v11);
        }
        HvpPointMapEntriesToBuffer(v8, v3, 0LL);
        v5 = 0LL;
        v23[0] = 0LL;
        v6 = 0LL;
        v27 -= v9;
        v3 += v9;
        v22 = 0LL;
        v4 += v9;
        v25 = v3;
        v21 = v4;
        if ( !v27 )
          goto LABEL_17;
      }
      v5 = v23[0];
    }
    else
    {
LABEL_17:
      inited = 0;
    }
    if ( v5 || v6 )
      HvpFreeBin(v8, v9, 0, v5, (__int64)v6);
  }
  return (unsigned int)inited;
}
