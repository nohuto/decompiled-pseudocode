/*
 * XREFs of RawInputManagerInputObserverObjectCreate @ 0x1C00C48AC
 * Callers:
 *     rimObsAddInputObserver @ 0x1C00D1204 (rimObsAddInputObserver.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C0076874 (rimAddToObTrackList.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall RawInputManagerInputObserverObjectCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx

  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x90uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 3;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL, v6);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x78] = 112LL;
    MEMORY[0x70] = 112LL;
    MEMORY[0x80] = 0LL;
    MEMORY[0x88] = 0LL;
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
    else
      ObfDereferenceObject(0LL);
  }
  return (unsigned int)Object;
}
