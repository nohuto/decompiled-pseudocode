/*
 * XREFs of ?Reset@GestureSession@@UEAAJXZ @ 0x180036990
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x180036244 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::Reset(GestureSession *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  v2 = (_QWORD *)((char *)this + 824);
  v3 = 7LL;
  do
  {
    (*(void (__fastcall **)(_QWORD, GestureSession *))(*(_QWORD *)*v2 + 32LL))(*v2, this);
    ++v2;
    --v3;
  }
  while ( v3 );
  memset((char *)this + 888, 0, 0x190uLL);
  *(_QWORD *)((char *)this + 1292) = 0LL;
  *((_WORD *)this + 645) = -1;
  result = 0LL;
  *((_DWORD *)this + 221) = 0;
  *((_BYTE *)this + 880) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 25) = 0;
  return result;
}
