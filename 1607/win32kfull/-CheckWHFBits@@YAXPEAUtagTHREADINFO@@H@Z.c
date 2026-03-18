/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00A444C
 * Callers:
 *     FreeHook @ 0x1C00A4550 (FreeHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0057C74 (PhkFirstGlobalValid.c)
 *     PhkFirstValid @ 0x1C00A3CFC (PhkFirstValid.c)
 */

void __fastcall CheckWHFBits(struct tagTHREADINFO *a1, int a2)
{
  BOOL v4; // esi
  __int64 Valid; // rax
  __int64 v6; // rdx
  int v7; // r9d
  PRKPROCESS *v8; // r15
  int v9; // edx

  v4 = 1;
  Valid = PhkFirstValid((__int64)a1, a2);
  if ( Valid )
    v4 = (*(_DWORD *)(Valid + 64) & 1) == 0 && PhkFirstGlobalValid((__int64)a1, a2) == 0;
  if ( v7 )
  {
    *((_DWORD *)a1 + 150) &= ~(1 << (a2 + 1));
    if ( *((_QWORD *)a1 + 54) )
    {
      v8 = (PRKPROCESS *)*((_QWORD *)a1 + 47);
      if ( v8 == (PRKPROCESS *)PsGetCurrentProcessWin32Process((unsigned int)(a2 + 1), v6) )
      {
        v9 = 0;
      }
      else
      {
        KeAttachProcess(*v8);
        v9 = 1;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 54) + 56LL) = *((_DWORD *)a1 + 150);
      if ( v9 )
        KeDetachProcess();
    }
  }
  if ( v4 )
    *(_DWORD *)(*((_QWORD *)a1 + 52) + 24LL) &= ~(1 << (a2 + 1));
}
