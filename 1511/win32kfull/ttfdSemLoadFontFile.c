/*
 * XREFs of ttfdSemLoadFontFile @ 0x1C00104E0
 * Callers:
 *     <none>
 * Callees:
 *     bLoadFontFile @ 0x1C001058C (bLoadFontFile.c)
 *     ttfdUnloadFontFileTTC @ 0x1C00FB714 (ttfdUnloadFontFileTTC.c)
 */

PVOID __fastcall ttfdSemLoadFontFile(
        int a1,
        __int64 *a2,
        __int64 *a3,
        int *a4,
        __int64 a5,
        unsigned __int16 a6,
        ULONG FastCheckSum)
{
  PVOID result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // esi
  PVOID v11; // rbx
  PVOID pv[3]; // [rsp+40h] [rbp-18h] BYREF

  result = 0LL;
  pv[0] = 0LL;
  if ( a1 == 1 && !a5 )
  {
    v8 = *a2;
    v9 = *a3;
    v10 = *a4;
    EngAcquireSemaphore(ghsemTTFD);
    bLoadFontFile(v8, v9, v10, a6, FastCheckSum, (__int64)pv);
    v11 = pv[0];
    EngReleaseSemaphore(ghsemTTFD);
    return v11;
  }
  return result;
}
