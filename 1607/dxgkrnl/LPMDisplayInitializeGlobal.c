/*
 * XREFs of LPMDisplayInitializeGlobal @ 0x1C01B736C
 * Callers:
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

NTSTATUS LPMDisplayInitializeGlobal()
{
  PFILE_OBJECT *v0; // rax
  PFILE_OBJECT *v1; // rbx
  struct _ERESOURCE *v2; // rax

  qword_1C00573B8 = 0LL;
  v0 = (PFILE_OBJECT *)operator new(0xA8uLL, 0x4B677844u, PagedPool);
  v1 = v0;
  if ( v0 )
  {
    *v0 = 0LL;
    v0[1] = 0LL;
    v0[2] = 0LL;
    *((_DWORD *)v0 + 6) = -1;
    *((_DWORD *)v0 + 7) = 0;
    *((_DWORD *)v0 + 8) = 0;
    *((_DWORD *)v0 + 9) = 0;
    *((_DWORD *)v0 + 10) = 0;
    *((_DWORD *)v0 + 11) = 0;
    *((_DWORD *)v0 + 12) = 0;
    *((_DWORD *)v0 + 15) = 0;
    *((_DWORD *)v0 + 13) = 2;
    *((_DWORD *)v0 + 14) = 1;
    memset(v0 + 17, 0, 0x20uLL);
  }
  else
  {
    v1 = 0LL;
  }
  FileObject = v1;
  if ( v1 && (v2 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512), (Resource = v2) != 0LL) )
    return ExInitializeResourceLite(v2);
  else
    return -1073741801;
}
