/*
 * XREFs of ??0CInputSink@@QEAA@XZ @ 0x1C0021FB8
 * Callers:
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0024AB0 (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C0085E40 (memset.c)
 */

CInputSink *__fastcall CInputSink::CInputSink(CInputSink *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rax

  *((_QWORD *)this + 1) = &CPushLock::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  v2 = (_DWORD *)((char *)this + 88);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &CInputSink::`vftable'{for `ICompositionObject'};
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 1) = &CInputSink::`vftable'{for `CPushLock'};
  memset((char *)this + 88, 0, 0x40uLL);
  v3 = 4LL;
  do
  {
    *v2 = 1065353216;
    v2 += 5;
    --v3;
  }
  while ( v3 );
  return this;
}
