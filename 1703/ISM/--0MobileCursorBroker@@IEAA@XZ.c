/*
 * XREFs of ??0MobileCursorBroker@@IEAA@XZ @ 0x18002570C
 * Callers:
 *     ?Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z @ 0x180025C08 (-Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 */

MobileCursorBroker *__fastcall MobileCursorBroker::MobileCursorBroker(MobileCursorBroker *this)
{
  _OWORD *v1; // rdi
  _OWORD *v2; // rsi
  __int64 v4; // rax
  MobileCursorBroker *result; // rax
  unsigned __int64 v6; // [rsp+20h] [rbp-18h]

  v1 = (_OWORD *)((char *)this + 96);
  LODWORD(v6) = 0;
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  v2 = (_OWORD *)((char *)this + 1296);
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &MobileCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &MobileCursorBroker::`vftable'{for `ICursorManagerClient'};
  *((_QWORD *)this + 2) = &MobileCursorBroker::`vftable'{for `IInputDisplayOrientationListener'};
  *((_QWORD *)this + 3) = &MobileCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 4) = &MobileCursorBroker::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 11) = 0LL;
  *((_OWORD *)this + 81) = v6;
  memset((char *)this + 96, 0, 0x4B0uLL);
  v4 = 50LL;
  do
  {
    *v1 = *v2;
    v1 = (_OWORD *)((char *)v1 + 24);
    --v4;
  }
  while ( v4 );
  result = this;
  *((_QWORD *)this + 164) = 0LL;
  *((_QWORD *)this + 165) = 0LL;
  *((_QWORD *)this + 166) = 0LL;
  *((_QWORD *)this + 167) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 336) = 0;
  return result;
}
