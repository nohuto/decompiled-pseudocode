/*
 * XREFs of InitContext @ 0x1C000720C
 * Callers:
 *     NewContext @ 0x1C000712C (NewContext.c)
 * Callees:
 *     memset @ 0x1C002C1C0 (memset.c)
 */

char *__fastcall InitContext(char *DeferredContext)
{
  char *v2; // rax
  size_t v3; // rbx
  char *result; // rax

  memset(DeferredContext, 0, 0x1B8uLL);
  v2 = &DeferredContext[(unsigned int)gdwCtxtBlkSize];
  *(_DWORD *)DeferredContext = 1415074883;
  *((_QWORD *)DeferredContext + 1) = v2;
  *((_QWORD *)DeferredContext + 40) = DeferredContext + 440;
  KeInitializeDpc((PRKDPC)DeferredContext + 4, TimeoutCallback, DeferredContext);
  KeInitializeTimer((PKTIMER)DeferredContext + 3);
  v3 = (unsigned int)(*((_DWORD *)DeferredContext + 2) - (_DWORD)DeferredContext - 440);
  memset(DeferredContext + 440, 0, v3);
  *((_DWORD *)DeferredContext + 110) = 1346454856;
  *((_QWORD *)DeferredContext + 56) = &DeferredContext[v3 + 440];
  *((_QWORD *)DeferredContext + 59) = DeferredContext + 496;
  *((_QWORD *)DeferredContext + 61) = DeferredContext + 480;
  *((_QWORD *)DeferredContext + 60) = DeferredContext + 480;
  *((_QWORD *)DeferredContext + 45) = 0LL;
  *((_QWORD *)DeferredContext + 47) = RestartCtxtPassive;
  *((_QWORD *)DeferredContext + 48) = DeferredContext;
  *((_QWORD *)DeferredContext + 50) = DeferredContext + 392;
  *((_QWORD *)DeferredContext + 49) = DeferredContext + 392;
  *((_QWORD *)DeferredContext + 7) = DeferredContext + 48;
  *((_QWORD *)DeferredContext + 6) = DeferredContext + 48;
  result = DeferredContext + 32;
  *((_QWORD *)DeferredContext + 5) = DeferredContext + 32;
  *((_QWORD *)DeferredContext + 4) = DeferredContext + 32;
  *((_QWORD *)DeferredContext + 57) = DeferredContext + 440;
  return result;
}
