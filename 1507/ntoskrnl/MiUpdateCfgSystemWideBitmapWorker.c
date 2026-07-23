/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x14046B6E4 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     MiLocatePagefileSubsection @ 0x140089C20 (MiLocatePagefileSubsection.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiChargeSegmentCommit @ 0x14051AD20 (MiChargeSegmentCommit.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x14051BF38 (MmMapViewInSystemSpaceEx.c)
 *     MiCfgEliminateZeroPages @ 0x140520CD0 (MiCfgEliminateZeroPages.c)
 *     MiCompressedRvaListFirst @ 0x140547800 (MiCompressedRvaListFirst.c)
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
  result = MmMapViewInSystemSpaceEx(a1, (unsigned int)&MappedBase, (unsigned int)&v25, (unsigned int)&BitMapHeader, 0LL);
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
        MiCfgEliminateZeroPages(dword_14034FF40, v12 & 0xFFFFFFFFFFFFF000uLL, v8 << 12);
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
