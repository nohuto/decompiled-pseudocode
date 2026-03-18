/*
 * XREFs of ?Initialize@CMediaControl@@AEAAJPEBG@Z @ 0x180128A3C
 * Callers:
 *     ?Create@CMediaControl@@SAJPEBGPEAPEAV1@@Z @ 0x18012898C (-Create@CMediaControl@@SAJPEBGPEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CMediaControl::Initialize(CMediaControl *this, const unsigned __int16 *lpName)
{
  unsigned int v2; // ebx
  HANDLE FileMappingW; // rax
  signed int v5; // eax
  DWORD LastError; // eax
  void *v7; // rcx
  void *v8; // rax

  v2 = 0;
  if ( lpName )
  {
    FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 4u, 0, 0x84u, lpName);
    *((_QWORD *)this + 1) = FileMappingW;
    if ( FileMappingW )
    {
      LastError = GetLastError();
      v7 = (void *)*((_QWORD *)this + 1);
      if ( LastError == 183 )
      {
        CloseHandle(v7);
        *((_QWORD *)this + 1) = 0LL;
        return (unsigned int)-2147467259;
      }
      v8 = MapViewOfFile(v7, 6u, 0, 0, 0LL);
      *((_QWORD *)this + 2) = v8;
      if ( v8 )
      {
        memset_0(v8, 0, 0x84uLL);
        **((_DWORD **)this + 2) = 3;
        return v2;
      }
    }
    v5 = GetLastError();
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
    else
      return (unsigned int)v5;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
}
