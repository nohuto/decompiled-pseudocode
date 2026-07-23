/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x14046D398 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiLocatePagefileSubsection @ 0x14002CBC0 (MiLocatePagefileSubsection.c)
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiCfgEliminateZeroPages @ 0x1404A2F40 (MiCfgEliminateZeroPages.c)
 *     MiChargeSegmentCommit @ 0x1404A6130 (MiChargeSegmentCommit.c)
 *     MiQueryImageRvaList @ 0x1404BAE78 (MiQueryImageRvaList.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x140508F08 (MmMapViewInSystemSpaceEx.c)
 */

__int64 MiUpdateCfgSystemWideBitmapWorker(
        __int64 a1,
        int *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        ...)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned __int64 v8; // r13
  __int64 result; // rax
  size_t v11; // rsi
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // edi
  unsigned int v17; // eax
  ULONG v18; // r8d
  int v19; // r10d
  unsigned __int8 *v20; // r9
  int v21; // r10d
  __int64 v22; // r8
  int v23; // edx
  char *AnyMultiplexedVm; // rax
  unsigned int BugCheckParameter3; // [rsp+30h] [rbp-28h] BYREF
  unsigned int BugCheckParameter3_4; // [rsp+34h] [rbp-24h]
  unsigned __int64 i; // [rsp+38h] [rbp-20h]
  _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp+40h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+60h] BYREF

  va_start(va, a5);
  v6 = a3 >> 3;
  v31 = a3 >> 3;
  v29 = a4 >> 3;
  v7 = a4;
  v8 = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  result = MmMapViewInSystemSpaceEx(a1, (unsigned int)&MappedBase, (unsigned int)&v29, (unsigned int)&v31, 0LL);
  if ( (int)result >= 0 )
  {
    v11 = v29 - (unsigned __int16)v6;
    v12 = (unsigned __int64)MappedBase | (unsigned __int16)v6;
    v13 = MiSectionControlArea(a1);
    v29 = v6 >> 12;
    v14 = MiLocatePagefileSubsection(v13 + 128, &v29);
    if ( (unsigned int)MiChargeSegmentCommit(v14, *(_QWORD *)(v14 + 8) + 8 * v29, v8, 0LL) )
    {
      if ( a2 )
      {
        BitMapHeader.Buffer = (unsigned int *)v12;
        BitMapHeader.SizeOfBitMap = v7;
        RtlClearAllBits(&BitMapHeader);
        v15 = a5;
        MiQueryImageRvaList(a2, a5, va, &v29);
        v16 = 0;
        v17 = *(_DWORD *)v29;
        BugCheckParameter3 = v17;
        BugCheckParameter3_4 = 4;
        for ( i = v29; v17; BugCheckParameter3_4 = (_DWORD)v20 - i )
        {
          v18 = 1;
          if ( (v17 & 0xF) != 0 )
            v18 = 2;
          RtlSetBits(&BitMapHeader, 2 * (v17 >> 4), v18);
          if ( v15 )
            v19 = 0;
          else
            v19 = *a2;
          v17 = BugCheckParameter3;
          v20 = (unsigned __int8 *)(i + BugCheckParameter3_4);
          v21 = v19 - BugCheckParameter3_4;
          if ( !v21 )
            break;
          do
          {
            if ( !v21 )
              KeBugCheckEx(0x1Au, 0x43666720uLL, (ULONG_PTR)a2, (ULONG_PTR)&BugCheckParameter3, v17);
            --v21;
            v22 = *v20 >> 6;
            v23 = *v20++ & 0x3F;
            v17 += v23 * MiCfgCompressionTableScales[v22];
          }
          while ( (_DWORD)v22 != 3 );
          BugCheckParameter3 = v17;
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        MiCfgEliminateZeroPages(AnyMultiplexedVm, v12 & 0xFFFFFFFFFFFFF000uLL, v8 << 12);
      }
      else
      {
        memset((void *)v12, 255, v11);
        v16 = 0;
      }
    }
    else
    {
      v16 = -1073741523;
    }
    MmUnmapViewInSystemSpace(MappedBase);
    return v16;
  }
  return result;
}
