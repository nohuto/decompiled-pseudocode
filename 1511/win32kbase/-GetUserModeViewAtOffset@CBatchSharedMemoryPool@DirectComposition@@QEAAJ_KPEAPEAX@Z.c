/*
 * XREFs of ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C001A278
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00131C0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C001D294 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
        DirectComposition::CBatchSharedMemoryPool *this,
        __int64 a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+50h] [rbp-18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  result = 0LL;
  if ( !*((_QWORD *)this + 6) )
  {
    v9 = 0LL;
    v8 = 0LL;
    v7 = 0LL;
    result = MmMapViewOfSection(
               *((_QWORD *)this + 3),
               *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
               &v8,
               0LL,
               4096LL,
               &v7,
               &v9,
               2,
               0x400000,
               2);
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)this + 6) = v8;
  }
  *a3 = (void *)(a2 + *((_QWORD *)this + 6));
  return result;
}
