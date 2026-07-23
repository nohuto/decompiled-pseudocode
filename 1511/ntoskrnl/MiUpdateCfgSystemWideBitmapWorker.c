/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x140416800
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x1403C66C8 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiLocatePagefileSubsection @ 0x1400D5B70 (MiLocatePagefileSubsection.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x1403C7C94 (MmMapViewInSystemSpaceEx.c)
 *     MiCfgEliminateZeroPages @ 0x140493590 (MiCfgEliminateZeroPages.c)
 *     MiChargeSegmentCommit @ 0x14049C650 (MiChargeSegmentCommit.c)
 *     MiCompressedRvaListFirst @ 0x1404B4784 (MiCompressedRvaListFirst.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(__int64 a1, _DWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned int v7; // r13d
  unsigned __int64 v8; // r12
  __int64 result; // rax
  size_t v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  unsigned int *v14; // rax
  unsigned int i; // r10d
  ULONG v16; // r8d
  unsigned __int8 *v17; // rax
  unsigned int v18; // r9d
  __int64 v19; // r8
  int v20; // edx
  PVOID MappedBase; // [rsp+30h] [rbp-58h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+38h] [rbp-50h] BYREF
  unsigned int BugCheckParameter3; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int BugCheckParameter3_4; // [rsp+A4h] [rbp+1Ch]
  unsigned __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a3 >> 3;
  v25 = a4 >> 3;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = a3 >> 3;
  v5 = a4;
  v7 = 0;
  v8 = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  result = MmMapViewInSystemSpaceEx(a1, (int)&MappedBase, (int)&v25, (__int64)&BitMapHeader, 0LL);
  if ( (int)result >= 0 )
  {
    v11 = v25 - (unsigned __int16)v4;
    v12 = (unsigned __int64)MappedBase | (unsigned __int16)v4;
    v13 = MiSectionControlArea(a1);
    v25 = v4 >> 12;
    v14 = MiLocatePagefileSubsection((unsigned int *)(v13 + 120), &v25);
    if ( (unsigned int)MiChargeSegmentCommit(v14, *((_QWORD *)v14 + 1) + 8 * v25, v8, 0LL) )
    {
      if ( a2 )
      {
        BitMapHeader.Buffer = (unsigned int *)v12;
        BitMapHeader.SizeOfBitMap = v5;
        RtlClearAllBits(&BitMapHeader);
        for ( i = MiCompressedRvaListFirst(a2, &BugCheckParameter3); i; BugCheckParameter3_4 = (_DWORD)v17
                                                                                             - (_DWORD)a2
                                                                                             - 4 )
        {
          v16 = 1;
          if ( (i & 0xF) != 0 )
            v16 = 2;
          RtlSetBits(&BitMapHeader, 2 * (i >> 4), v16);
          i = BugCheckParameter3;
          v17 = (unsigned __int8 *)a2 + BugCheckParameter3_4 + 4;
          v18 = *a2 - BugCheckParameter3_4;
          if ( *a2 == BugCheckParameter3_4 )
            break;
          do
          {
            if ( !v18 )
              KeBugCheckEx(0x1Au, 0x43666720uLL, (ULONG_PTR)a2, (ULONG_PTR)&BugCheckParameter3, i);
            --v18;
            v19 = *v17 >> 6;
            v20 = *v17++ & 0x3F;
            i += v20 * MiCfgCompressionTableScales[v19];
          }
          while ( (_DWORD)v19 != 3 );
          BugCheckParameter3 = i;
        }
        MiCfgEliminateZeroPages(&dword_1402FFA80, v12 & 0xFFFFFFFFFFFFF000uLL, v8 << 12);
      }
      else
      {
        memset((void *)v12, 255, v11);
      }
    }
    else
    {
      v7 = -1073741523;
    }
    MmUnmapViewInSystemSpace(MappedBase);
    return v7;
  }
  return result;
}
