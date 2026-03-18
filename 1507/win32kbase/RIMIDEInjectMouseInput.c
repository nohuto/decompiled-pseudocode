/*
 * XREFs of RIMIDEInjectMouseInput @ 0x1C00C6758
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C652C (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall RIMIDEInjectMouseInput(void *a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v5; // ebp
  char *v6; // r15
  __int64 v7; // r14
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object;
    v7 = *((_QWORD *)Object + 51);
    RIMLockExclusive(v7 + 96);
    if ( *(_BYTE *)(v7 + 73) )
    {
      v5 = -1073741637;
    }
    else
    {
      RIMLockExclusive(v7 + 712);
      *((_DWORD *)v6 + 80) = 0;
      *((_QWORD *)v6 + 41) = 24 * v3;
      memset(v6 + 476, 0, 0xF0uLL);
      memmove(v6 + 476, a2, *((_QWORD *)v6 + 41));
      rimProcessDeviceBufferAndStartRead(v7, (__int64)(v6 + 64));
      RIMUnlockExclusive(v7 + 712);
    }
    RIMUnlockExclusive(v7 + 96);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
