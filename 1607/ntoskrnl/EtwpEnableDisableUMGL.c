/*
 * XREFs of EtwpEnableDisableUMGL @ 0x14069FE60
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140491978 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

__int64 __fastcall EtwpEnableDisableUMGL(char a1, __int16 a2, char a3, unsigned int a4)
{
  char v4; // di
  __int64 v5; // rsi
  unsigned int v6; // ebx
  char v9; // al
  __int16 v11; // [rsp+58h] [rbp+10h]

  v4 = a2;
  v5 = a4;
  v6 = 0;
  if ( (unsigned __int16)(a2 - 1) > 0x3Eu )
  {
    return (unsigned int)-1073741816;
  }
  else
  {
    KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
    if ( a1 )
    {
      LOBYTE(v11) = v4;
      HIBYTE(v11) = a3;
      *(_WORD *)(2 * v5 - 0x87FFFFFFC80LL) = v11;
    }
    else
    {
      v9 = *(_BYTE *)(2 * v5 - 0x87FFFFFFC80LL);
      if ( v9 == v4 )
        *(_WORD *)(2 * v5 - 0x87FFFFFFC80LL) = 0;
      else
        v6 = v9 != 0 ? -1073741734 : -1073741054;
    }
    KeReleaseMutex(&EtwpGlobalMutex, 0);
  }
  return v6;
}
