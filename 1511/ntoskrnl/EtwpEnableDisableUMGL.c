/*
 * XREFs of EtwpEnableDisableUMGL @ 0x14065FE08
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1404CE8C8 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 */

__int64 __fastcall EtwpEnableDisableUMGL(char a1, __int16 a2, char a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v8; // ebx
  char v9; // al
  __int16 v11; // [rsp+30h] [rbp-18h]

  v4 = a4;
  v8 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    return (unsigned int)-1073741727;
  }
  else if ( (unsigned __int16)(a2 - 1) > 0x3Eu )
  {
    return (unsigned int)-1073741816;
  }
  else
  {
    KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
    if ( a1 )
    {
      LOBYTE(v11) = a2;
      HIBYTE(v11) = a3;
      *(_WORD *)(2 * v4 - 0x87FFFFFFC80LL) = v11;
    }
    else
    {
      v9 = *(_BYTE *)(2 * v4 - 0x87FFFFFFC80LL);
      if ( v9 == (_BYTE)a2 )
        *(_WORD *)(2 * v4 - 0x87FFFFFFC80LL) = 0;
      else
        v8 = v9 != 0 ? -1073741734 : -1073741054;
    }
    KeReleaseMutex(&EtwpGlobalMutex, 0);
  }
  return v8;
}
