/*
 * XREFs of ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x1C004A0B0
 * Callers:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C004A160 (--1CCompositionBuffer@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionBuffer::RemoveAllRealizations(CCompositionBuffer *this)
{
  char *v2; // rbx
  char **v3; // rax
  char **v4; // rcx

  if ( *((_DWORD *)this + 70) )
  {
    v2 = (char *)this + 264;
    v3 = (char **)*((_QWORD *)this + 34);
    v4 = (char **)v3[1];
    if ( *v3 != v2 || *v4 != (char *)v3 )
      __fastfail(3u);
    while ( 1 )
    {
      *((_QWORD *)v2 + 1) = v4;
      *v4 = v2;
      if ( v3 == (char **)v2 )
        break;
      if ( v3 != (char **)8 )
        (*(void (__fastcall **)(char **, __int64))*(v3 - 1))(v3 - 1, 1LL);
      v3 = (char **)*((_QWORD *)v2 + 1);
      v4 = (char **)v3[1];
      if ( *v3 != v2 || *v4 != (char *)v3 )
        __fastfail(3u);
    }
    *((_DWORD *)this + 70) = 0;
  }
}
