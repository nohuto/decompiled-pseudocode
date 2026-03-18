/*
 * XREFs of ?ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C006F7AC
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F940 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C0098EEC (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C0098FEC (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::ComputeBaseAddressAndSizeOfPageableRegion(VIDMM_SEGMENT *this)
{
  VIDMM_SEGMENT *v1; // rax
  __int64 v2; // rdx
  VIDMM_SEGMENT *v3; // r9
  unsigned __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // r10

  *((_QWORD *)this + 8) = 0LL;
  v1 = (VIDMM_SEGMENT *)*((_QWORD *)this + 10);
  v2 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 9) = v2;
  if ( v1 != (VIDMM_SEGMENT *)((char *)this + 80) )
  {
    do
    {
      v3 = v1;
      v1 = *(VIDMM_SEGMENT **)v1;
      *((_QWORD *)this + 8) = 0LL;
      v4 = *((_QWORD *)v3 + 2);
      *((_QWORD *)this + 9) = v4;
    }
    while ( v1 != (VIDMM_SEGMENT *)((char *)this + 80) );
    v5 = *((_QWORD *)v3 + 3);
    v6 = *((_QWORD *)v3 + 2);
    if ( v2 - v5 - v6 > v4 )
    {
      *((_QWORD *)this + 8) = v5 + v6;
      *((_QWORD *)this + 9) = v2 - (v5 + v6);
    }
  }
}
