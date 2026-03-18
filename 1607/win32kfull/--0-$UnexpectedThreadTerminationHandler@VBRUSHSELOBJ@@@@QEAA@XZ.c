/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C028F8F8
 * Callers:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C010D46C (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

char *__fastcall UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(
        char *a1)
{
  char *v2; // rdx

  memset(a1, 0, 0x20uLL);
  v2 = 0LL;
  if ( a1 )
    v2 = a1 - 16;
  PushThreadGuardedObject(a1, v2, EPALOBJ::~EPALOBJ);
  return a1;
}
