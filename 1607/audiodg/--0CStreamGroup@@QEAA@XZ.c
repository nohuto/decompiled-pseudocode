/*
 * XREFs of ??0CStreamGroup@@QEAA@XZ @ 0x140003050
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012CF0 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 *     ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140025B40 (--0-$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400050C4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

// Hidden C++ exception states: #wind=5
CStreamGroup *__fastcall CStreamGroup::CStreamGroup(CStreamGroup *this)
{
  *((_DWORD *)this + 4) = 0;
  memset_0((char *)this + 24, 0, 0x28uLL);
  *((_BYTE *)this + 64) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 10;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CStreamGroup *)((char *)this + 160));
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_BYTE *)this + 264) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_BYTE *)this + 296) = 0;
  return this;
}
