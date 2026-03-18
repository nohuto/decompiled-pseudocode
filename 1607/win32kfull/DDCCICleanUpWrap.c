/*
 * XREFs of DDCCICleanUpWrap @ 0x1C010C830
 * Callers:
 *     <none>
 * Callees:
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x1C0135AAC (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 */

void DDCCICleanUpWrap()
{
  void *v0; // rdi
  __int64 v1; // rsi

  v0 = qword_1C0329230;
  if ( qword_1C0329230 )
  {
    v1 = 0LL;
    if ( *((_DWORD *)qword_1C0329230 + 5) )
    {
      do
      {
        OPMFreeMemory(*(void **)(*((_QWORD *)v0 + 1) + 8 * v1));
        *(_QWORD *)(*((_QWORD *)v0 + 1) + 8 * v1) = 0LL;
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < *((_DWORD *)v0 + 5) );
    }
    OPMFreeMemory(*((void **)v0 + 1));
    CMutex::~CMutex((CMutex *)v0);
    DDCCIFreeMemory(v0);
  }
  qword_1C0329230 = 0LL;
}
