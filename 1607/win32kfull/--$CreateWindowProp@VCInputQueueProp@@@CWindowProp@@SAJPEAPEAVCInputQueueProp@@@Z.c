/*
 * XREFs of ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x1C0098DBC
 * Callers:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0099E24 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CInputQueueProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi

  v2 = 0;
  v3 = (_QWORD *)Win32AllocPoolZInit(48LL, 1902736213LL);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x30uLL);
    *a1 = v4;
    *v4 = &CInputQueueProp::`vftable';
    v4[2] = 0LL;
    v4[3] = 0LL;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
