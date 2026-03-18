/*
 * XREFs of RIMIDEInjectKeyboardInput @ 0x1C00D6A04
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00D6834 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardInput(void *a1, const void *a2, unsigned int a3)
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
      *((_QWORD *)v6 + 41) = 12 * v3;
      memset(v6 + 564, 0, 0x78uLL);
      memmove(v6 + 564, a2, *((_QWORD *)v6 + 41));
      rimProcessDeviceBufferAndStartRead(v7, (__int64)(v6 + 64));
      RIMUnlockExclusive(v7 + 696);
    }
    RIMUnlockExclusive(v7 + 96);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
