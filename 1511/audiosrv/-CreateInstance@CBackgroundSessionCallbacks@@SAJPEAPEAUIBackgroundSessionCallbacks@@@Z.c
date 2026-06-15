/*
 * XREFs of ?CreateInstance@CBackgroundSessionCallbacks@@SAJPEAPEAUIBackgroundSessionCallbacks@@@Z @ 0x18009FEA8
 * Callers:
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z @ 0x18009BEF8 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CBackgroundSessionCallbacks::CreateInstance(struct IBackgroundSessionCallbacks **a1)
{
  unsigned int v1; // ebx
  char *v3; // rax

  v1 = 0;
  if ( a1 )
  {
    *a1 = 0LL;
    v3 = (char *)operator new(0x18uLL);
    if ( v3 )
    {
      *((_DWORD *)v3 + 2) = 1;
      *(_QWORD *)v3 = &CBackgroundSessionCallbacks::`vftable'{for `CUnknown'};
      *((_QWORD *)v3 + 2) = &CBackgroundSessionCallbacks::`vftable'{for `IBackgroundSessionCallbacks'};
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
      *a1 = (struct IBackgroundSessionCallbacks *)(v3 + 16);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v1;
}
