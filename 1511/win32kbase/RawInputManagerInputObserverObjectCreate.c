/*
 * XREFs of RawInputManagerInputObserverObjectCreate @ 0x1C00C5744
 * Callers:
 *     rimObsAddInputObserver @ 0x1C00D2D04 (rimObsAddInputObserver.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C0010FCC (rimAddToObTrackList.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     rimRegQueryRegistryDWord @ 0x1C00D4EE0 (rimRegQueryRegistryDWord.c)
 */

__int64 __fastcall RawInputManagerInputObserverObjectCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  PVOID v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 CurrentProcess; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+18h] BYREF

  Object = 0LL;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 184, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0xB8uLL);
    v6 = Object;
    *(_DWORD *)Object = gSessionId;
    *((_DWORD *)Object + 1) = 3;
    v7 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v7 = v7;
    CurrentProcess = PsGetCurrentProcess(v6, v8);
    *((_QWORD *)Object + 4) = CurrentProcess;
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    v10 = (char *)Object + 120;
    *((_QWORD *)Object + 16) = (char *)Object + 120;
    *v10 = v10;
    v11 = (char *)Object + 136;
    *((_QWORD *)Object + 18) = (char *)Object + 136;
    *v11 = v11;
    *((_DWORD *)Object + 38) = 0;
    *((_DWORD *)Object + 39) = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    v12 = rimRegQueryRegistryDWord(&DestinationString, L"RimObserverQueueSize", 256LL);
    if ( v12 > 0xFA00 )
      v12 = 64000;
    *((_DWORD *)Object + 40) = v12;
    v13 = Object;
    *((_QWORD *)Object + 21) = 0LL;
    v13[22] = 0LL;
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList((__int64)Object);
    else
      ObfDereferenceObject(Object);
  }
  return (unsigned int)inserted;
}
