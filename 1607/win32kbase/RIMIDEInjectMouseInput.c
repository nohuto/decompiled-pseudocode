/*
 * XREFs of RIMIDEInjectMouseInput @ 0x1C00D6D2C
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00D6AF8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
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
    v7 = *((_QWORD *)Object + 52);
    RIMLockExclusive(v7 + 96);
    if ( *(_BYTE *)(v7 + 73) )
    {
      v5 = -1073741637;
    }
    else
    {
      RIMLockExclusive(v7 + 696);
      *((_DWORD *)v6 + 80) = 0;
      *((_QWORD *)v6 + 41) = 24 * v3;
      memset(v6 + 540, 0, 0xF0uLL);
      memmove(v6 + 540, a2, *((_QWORD *)v6 + 41));
      rimProcessDeviceBufferAndStartRead(v7, (__int64)(v6 + 64));
      RIMUnlockExclusive(v7 + 696);
    }
    RIMUnlockExclusive(v7 + 96);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
