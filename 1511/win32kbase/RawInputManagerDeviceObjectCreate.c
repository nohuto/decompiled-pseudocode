/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1C0010ED4
 * Callers:
 *     rimCreateDev @ 0x1C0010D6C (rimCreateDev.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C0010FCC (rimAddToObTrackList.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  _QWORD *v6; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  LOBYTE(a4) = 1;
  LOBYTE(a1) = 1;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 752, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0x2F0uLL);
    *(_DWORD *)Object = gSessionId;
    *((_DWORD *)Object + 1) = 2;
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
