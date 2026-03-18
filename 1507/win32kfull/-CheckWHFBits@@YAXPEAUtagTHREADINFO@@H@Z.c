/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C004A0FC
 * Callers:
 *     FreeHook @ 0x1C004A000 (FreeHook.c)
 * Callees:
 *     PhkFirstValid @ 0x1C004A274 (PhkFirstValid.c)
 *     PhkFirstGlobalValid @ 0x1C008C504 (PhkFirstGlobalValid.c)
 */

void __fastcall CheckWHFBits(struct tagTHREADINFO *a1, __int64 a2)
{
  unsigned int v2; // r14d
  BOOL v4; // esi
  __int64 Valid; // rax
  int v6; // r9d
  PRKPROCESS *v7; // r15
  int v8; // edx

  v2 = a2;
  v4 = 1;
  Valid = PhkFirstValid(a1, a2);
  if ( Valid )
    v4 = (*(_DWORD *)(Valid + 64) & 1) == 0 && PhkFirstGlobalValid(a1, v2) == 0;
  if ( v6 )
  {
    *((_DWORD *)a1 + 152) &= ~(1 << (v2 + 1));
    if ( *((_QWORD *)a1 + 55) )
    {
      v7 = (PRKPROCESS *)*((_QWORD *)a1 + 48);
      if ( v7 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v2 + 1) )
      {
        v8 = 0;
      }
      else
      {
        KeAttachProcess(*v7);
        v8 = 1;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 55) + 56LL) = *((_DWORD *)a1 + 152);
      if ( v8 )
        KeDetachProcess();
    }
  }
  if ( v4 )
    *(_DWORD *)(*((_QWORD *)a1 + 53) + 24LL) &= ~(1 << (v2 + 1));
}
