/*
 * XREFs of HvpAddDummyBinToHive @ 0x140612454
 * Callers:
 *     HvpApplyLogEntry @ 0x1406126C4 (HvpApplyLogEntry.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     HvpPointMapEntriesToBuffer @ 0x1404F6EE8 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x1404F7238 (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1404F78FC (HvpFreeBin.c)
 */

__int64 __fastcall HvpAddDummyBinToHive(ULONG_PTR BugCheckParameter2, _OWORD *a2, int a3, _QWORD *a4)
{
  int Bin; // ebx
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  bool v13; // zf
  unsigned __int64 v14; // r9
  void *v15; // rax
  void *v17; // [rsp+40h] [rbp-28h] BYREF
  _DWORD *v18; // [rsp+48h] [rbp-20h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  Bin = HvpAllocateBin(BugCheckParameter2, 4096LL, 0, a3, 0x30334D43u, (__int64 *)&v18, (__int64 *)&v17);
  if ( Bin < 0 )
  {
    v14 = (unsigned __int64)v18;
    v15 = v17;
  }
  else
  {
    v9 = v18;
    if ( v17 )
      v9 = v17;
    if ( a2 )
    {
      v10 = 32LL;
      v11 = v9;
      do
      {
        *v11 = *a2;
        v11[1] = a2[1];
        v11[2] = a2[2];
        v11[3] = a2[3];
        v11[4] = a2[4];
        v11[5] = a2[5];
        v11[6] = a2[6];
        v11 += 8;
        v12 = a2[7];
        a2 += 8;
        *(v11 - 1) = v12;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      memset(v9, 0, 0x1000uLL);
    }
    v13 = CmpSelfHeal == 0;
    v9[1] = a3;
    v9[2] = 4096;
    if ( !v13 || (CmpBootType & 6) != 0 )
    {
      *v9 = 1852400232;
      v9[8] = 4064;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    else
    {
      *v9 = 0;
      v9[8] = -4064;
    }
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v18, (__int64)v17, 4096, a3, 0LL);
    v14 = 0LL;
    *a4 = v9;
    v15 = 0LL;
    Bin = 0;
  }
  if ( v14 || v15 )
    HvpFreeBin(BugCheckParameter2, 0x1000u, 0, v14, (unsigned __int64)v15);
  return (unsigned int)Bin;
}
