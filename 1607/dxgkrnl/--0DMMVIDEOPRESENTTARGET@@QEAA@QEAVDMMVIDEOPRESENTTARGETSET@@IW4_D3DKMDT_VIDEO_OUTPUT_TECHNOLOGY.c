/*
 * XREFs of ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C000FD7C
 * Callers:
 *     ?AddTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C00F5CD0 (-AddTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGE.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0002044 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        struct DMMVIDEOPRESENTTARGETSET *const a2,
        int a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a4,
        enum _DXGK_CHILD_DEVICE_HPD_AWARENESS a5,
        enum _D3DKMDT_MONITOR_ORIENTATION_AWARENESS a6,
        char a7)
{
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, a3);
  v10 = 0xFFFFFFFFLL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833172996;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_WORD *)this + 194) = 0;
  *((_DWORD *)this + 98) = -1;
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 20) = a5;
  *((_DWORD *)this + 21) = a6;
  *((_DWORD *)this + 18) = a4;
  *((_DWORD *)this + 19) = a4;
  *((_BYTE *)this + 88) = a7;
  *((_DWORD *)this + 26) = 1;
  *((_DWORD *)this + 27) = -1;
  *((_DWORD *)this + 28) = -1;
  *((_BYTE *)this + 380) = 0;
  *((_DWORD *)this + 96) = -1;
  *((_BYTE *)this + 390) = 0;
  *((_WORD *)this + 198) = 256;
  if ( a7 )
  {
    if ( (unsigned int)(a4 + 1) > 0xF || (v10 = 32797LL, !_bittest((const int *)&v10, a4 + 1)) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v12);
    }
  }
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v14);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v13 + 24) = (char *)this + 32;
    *(_QWORD *)(v13 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v13);
  }
  memset((char *)this + 120, 0, 0x100uLL);
  return this;
}
