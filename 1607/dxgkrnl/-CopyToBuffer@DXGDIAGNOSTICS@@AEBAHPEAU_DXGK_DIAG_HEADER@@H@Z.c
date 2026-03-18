/*
 * XREFs of ?CopyToBuffer@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@H@Z @ 0x1C000B150
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AFB4 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::CopyToBuffer(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2, int a3)
{
  unsigned int v3; // r14d
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // esi

  v3 = 0;
  v7 = 48;
  if ( !a3 )
    v7 = *((_DWORD *)a2 + 1);
  v8 = *((unsigned int *)this + 6);
  v9 = *((_DWORD *)this + 4);
  v10 = v8 + v7;
  if ( (unsigned int)v8 + v7 > v9 )
  {
    memmove((void *)(*((_QWORD *)this + 4) + v8), a2, v9 - (unsigned int)v8);
    memmove(
      *((void **)this + 4),
      (char *)a2 + (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 6)),
      v10 - *((_DWORD *)this + 4));
    v3 = 1;
  }
  else
  {
    memmove((void *)(*((_QWORD *)this + 4) + v8), a2, v7);
  }
  if ( !a3 )
    *((_DWORD *)this + 6) = v10 % *((_DWORD *)this + 4);
  return v3;
}
