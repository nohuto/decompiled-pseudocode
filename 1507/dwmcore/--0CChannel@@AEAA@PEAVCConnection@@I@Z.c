/*
 * XREFs of ??0CChannel@@AEAA@PEAVCConnection@@I@Z @ 0x180095B28
 * Callers:
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x180095A38 (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

CChannel *__fastcall CChannel::CChannel(CChannel *this, struct CConnection *a2, int a3)
{
  CChannel *result; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CChannel::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = &HANDLE_TABLE::`vftable';
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 8) = 12;
  *((_BYTE *)this + 136) = 0;
  *((_BYTE *)this + 224) = 0;
  *((_QWORD *)this + 7) = a2;
  if ( a2 )
    CBitmapOfDeviceBitmaps::AddRef((struct CConnection *)((char *)a2 + 8));
  *((_DWORD *)this + 16) = a3;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  result = this;
  *((_DWORD *)this + 2) = 1;
  return result;
}
