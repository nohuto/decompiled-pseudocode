/*
 * XREFs of ??0CConnection@@AEAA@XZ @ 0x180095890
 * Callers:
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18009432C (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

CConnection *__fastcall CConnection::CConnection(CConnection *this)
{
  CBitmapOfDeviceBitmaps *v2; // rcx

  v2 = (CConnection *)((char *)this + 8);
  *((_DWORD *)v2 + 2) = 0;
  *(_QWORD *)this = &CConnection::`vftable'{for `IMilNotificationTransport'};
  *(_QWORD *)v2 = &CConnection::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 3) = &CChannelTable::`vftable';
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 8) = 24;
  *((_BYTE *)this + 104) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 168) = 0;
  CBitmapOfDeviceBitmaps::AddRef(v2);
  return this;
}
