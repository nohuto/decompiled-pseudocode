/*
 * XREFs of InitContext @ 0x1C000675C
 * Callers:
 *     NewContext @ 0x1C0006698 (NewContext.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 */

char *__fastcall InitContext(char *DeferredContext)
{
  char *v2; // rax
  size_t v3; // rbx
  char *result; // rax

  memset(DeferredContext, 0, 0x1B0uLL);
  v2 = &DeferredContext[(unsigned int)gdwCtxtBlkSize];
  *(_DWORD *)DeferredContext = 1415074883;
  *((_QWORD *)DeferredContext + 1) = v2;
  *((_QWORD *)DeferredContext + 40) = DeferredContext + 432;
  KeInitializeDpc((PRKDPC)DeferredContext + 4, TimeoutCallback, DeferredContext);
  KeInitializeTimer((PKTIMER)DeferredContext + 3);
  v3 = (unsigned int)(*((_DWORD *)DeferredContext + 2) - (_DWORD)DeferredContext - 432);
  memset(DeferredContext + 432, 0, v3);
  *((_DWORD *)DeferredContext + 108) = 1346454856;
  *((_QWORD *)DeferredContext + 55) = &DeferredContext[v3 + 432];
  *((_QWORD *)DeferredContext + 58) = DeferredContext + 480;
  *((_QWORD *)DeferredContext + 45) = 0LL;
  *((_QWORD *)DeferredContext + 47) = RestartCtxtPassive;
  result = DeferredContext + 392;
  *((_QWORD *)DeferredContext + 48) = DeferredContext;
  *((_QWORD *)DeferredContext + 50) = DeferredContext + 392;
  *((_QWORD *)DeferredContext + 49) = DeferredContext + 392;
  *((_QWORD *)DeferredContext + 56) = DeferredContext + 432;
  return result;
}
