/*
 * XREFs of ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18003F0F4
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003EDE8 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(
        CDWMDisplay *this,
        struct CDWMDXGIAdapter *a2,
        const struct DXGIOutputInfo *a3)
{
  _WORD *v4; // rax
  __int64 v5; // r10
  __int64 v6; // rcx
  __int16 v7; // dx
  int v8; // eax
  CDWMDisplay *result; // rax

  *(_DWORD *)this = 1;
  *((_BYTE *)this + 164) = (*((_BYTE *)a3 + 192) & 2) != 0;
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 42);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 32);
  *((_QWORD *)this + 2) = *((_QWORD *)a3 + 13);
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 212) = (*((_BYTE *)a3 + 192) & 4) != 0;
  *((_BYTE *)this + 213) = (*((_BYTE *)a3 + 192) & 8) != 0;
  v4 = (_WORD *)((char *)this + 96);
  v5 = a3 - (CDWMDisplay *)((char *)this + 96);
  v6 = 32LL;
  do
  {
    v7 = *(_WORD *)((char *)v4 + v5 + 196);
    if ( !v7 )
      break;
    *v4++ = v7;
    --v6;
  }
  while ( v6 );
  if ( !v6 )
    --v4;
  *v4 = 0;
  if ( ((*((_DWORD *)a3 + 38) - 2) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a3 + 33);
    v8 = *((_DWORD *)a3 + 34);
  }
  else
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a3 + 34);
    v8 = *((_DWORD *)a3 + 33);
  }
  *((_DWORD *)this + 46) = v8;
  *((_DWORD *)this + 49) = 87;
  *((_DWORD *)this + 47) = *((_DWORD *)a3 + 36);
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 37);
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 38);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 39);
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = *((_DWORD *)a3 + 33);
  *((_DWORD *)this + 9) = *((_DWORD *)a3 + 34);
  result = this;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a3 + 11);
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a3 + 10);
  return result;
}
