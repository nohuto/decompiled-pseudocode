/*
 * XREFs of RawInputManagerObjectCreate @ 0x1C00064F8
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C0010FCC (rimAddToObTrackList.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall RawInputManagerObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  _QWORD *v6; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  LOBYTE(a4) = 1;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 1008, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0x3F0uLL);
    *(_DWORD *)Object = gSessionId;
    *((_DWORD *)Object + 1) = 1;
    v6 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v6 = v6;
    *((_QWORD *)Object + 4) = PsGetCurrentProcess();
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted < 0 )
      ObfDereferenceObject(Object);
    else
      rimAddToObTrackList(Object);
  }
  return (unsigned int)inserted;
}
