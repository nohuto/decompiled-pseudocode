/*
 * XREFs of ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0016EE8
 * Callers:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0016FA8 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C001A4E0 (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C00819CC (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall CLegacyTokenBuffer::Reset(CLegacyTokenBuffer *this)
{
  char *v1; // rdi
  char **v3; // rax
  char **v4; // rcx

  v1 = (char *)this + 16;
  v3 = (char **)*((_QWORD *)this + 3);
  v4 = (char **)v3[1];
  if ( *v3 != v1 || *v4 != (char *)v3 )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v1 + 1) = v4;
    *v4 = v1;
    if ( v3 == (char **)v1 )
      break;
    if ( v3 )
      Win32FreePool(v3);
    v3 = (char **)*((_QWORD *)v1 + 1);
    v4 = (char **)v3[1];
    if ( *v3 != v1 || *v4 != (char *)v3 )
      __fastfail(3u);
  }
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 521) = 0;
  *((_QWORD *)this + 262) = (char *)this + 36;
  *((_QWORD *)this + 261) = v1;
  *((_DWORD *)this + 526) = 2048;
  *((_BYTE *)this + 2108) = 0;
}
