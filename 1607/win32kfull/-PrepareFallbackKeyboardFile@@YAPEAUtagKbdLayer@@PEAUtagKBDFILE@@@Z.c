/*
 * XREFs of ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x1C01D5214
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C00E9570 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     <none>
 */

struct tagKbdLayer *__fastcall PrepareFallbackKeyboardFile(struct tagKBDFILE *a1)
{
  struct tagKbdLayer *result; // rax

  result = (struct tagKbdLayer *)Win32AllocPool(104LL, 1953198933LL);
  if ( result )
  {
    *(_OWORD *)result = *(_OWORD *)KbdTablesFallback;
    *((_OWORD *)result + 1) = unk_1C0367040;
    *((_OWORD *)result + 2) = *(_OWORD *)&off_1C0367050;
    *((_OWORD *)result + 3) = *(_OWORD *)&off_1C0367060;
    *((_OWORD *)result + 4) = *(_OWORD *)&off_1C0367070;
    *((_OWORD *)result + 5) = xmmword_1C0367080;
    *((_QWORD *)result + 12) = qword_1C0367090;
  }
  *((_QWORD *)a1 + 3) = result;
  *((_QWORD *)a1 + 6) = 0LL;
  return result;
}
