/*
 * XREFs of rimObsObserveNextInput @ 0x1C00D3568
 * Callers:
 *     NtRIMObserveNextInput @ 0x1C00C1910 (NtRIMObserveNextInput.c)
 *     RIMObserveNextInput @ 0x1C00C2E20 (RIMObserveNextInput.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C00C58BC (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsPopInputMessage @ 0x1C00D360C (rimObsPopInputMessage.c)
 */

__int64 __fastcall rimObsObserveNextInput(void *a1, __int64 a2)
{
  char v2; // bp
  int v3; // ebx
  unsigned int *v4; // rdi
  char *v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  v2 = a2;
  v3 = RawInputManagerInputObserverObjectResolveHandle(a1, a2, a2, &Object);
  if ( v3 >= 0 )
  {
    v4 = (unsigned int *)Object;
    v5 = (char *)Object + 168;
    RIMLockExclusive((__int64)Object + 168);
    LOBYTE(v6) = v2;
    v7 = rimObsPopInputMessage(v4, v6, *((_QWORD *)v4 + 11), v4[24]);
    v3 = v7;
    if ( v7 < 0 )
    {
      if ( v7 == -2147483622 )
      {
        v4[20] = 1;
        v3 = 0;
      }
    }
    else
    {
      ZwSetEvent(*((HANDLE *)v4 + 9), 0LL);
    }
    RIMUnlockExclusive((__int64)v5);
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
