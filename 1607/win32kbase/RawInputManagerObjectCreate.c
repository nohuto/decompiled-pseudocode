/*
 * XREFs of RawInputManagerObjectCreate @ 0x1C0080258
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C000A8A0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C000E5AC (rimAddToObTrackList.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall RawInputManagerObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS Object; // ebx

  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x3C8uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 1;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL);
    MEMORY[0x28] = KeGetCurrentThread();
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object < 0 )
      ObfDereferenceObject(0LL);
    else
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
