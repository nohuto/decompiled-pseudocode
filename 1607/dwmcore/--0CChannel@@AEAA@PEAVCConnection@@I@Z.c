/*
 * XREFs of ??0CChannel@@AEAA@PEAVCConnection@@I@Z @ 0x18004AB98
 * Callers:
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1800A89CC (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CChannel *__fastcall CChannel::CChannel(CChannel *this, struct CConnection *a2, int a3)
{
  CChannel *result; // rax

  *(_QWORD *)this = &CChannel::`vftable';
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 6) = 12;
  *((_DWORD *)this + 8) = 1;
  *((_BYTE *)this + 128) = 0;
  *((_BYTE *)this + 216) = 0;
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
  *((_DWORD *)this + 14) = a3;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  result = this;
  *((_DWORD *)this + 2) = 1;
  return result;
}
