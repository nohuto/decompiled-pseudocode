/*
 * XREFs of RawInputManagerInputObserverObjectResolveHandle @ 0x1C00C49C0
 * Callers:
 *     NtRIMObserveNextInput @ 0x1C00C0D60 (NtRIMObserveNextInput.c)
 *     RIMObserveNextInput @ 0x1C00C2110 (RIMObserveNextInput.c)
 *     rimObsAddInputObserver @ 0x1C00D1204 (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C00D1AA0 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerInputObserverObjectResolveHandle(void *a1, __int64 a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  v5 = ObReferenceObjectByHandle(a1, 3u, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 3 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
