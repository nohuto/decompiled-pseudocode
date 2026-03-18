/*
 * XREFs of PoSetThermalActiveCooling @ 0x1406332BC
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopPropogateCoolingChange @ 0x1401E9310 (PopPropogateCoolingChange.c)
 *     PoGetThermalRequestSupport @ 0x14054E32C (PoGetThermalRequestSupport.c)
 *     PopDiagTraceThermalRequestActiveUpdate @ 0x140639EC4 (PopDiagTraceThermalRequestActiveUpdate.c)
 */

__int64 __fastcall PoSetThermalActiveCooling(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  char v6; // bp

  v4 = 0;
  if ( PoGetThermalRequestSupport(a1, 1) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = a2 != 0;
    PopAcquireRwLockExclusive(v5 + 32);
    if ( *(_BYTE *)(a1 + 18) )
    {
      if ( *(_BYTE *)(a1 + 17) != v6 )
      {
        *(_BYTE *)(a1 + 17) = v6;
        PopDiagTraceThermalRequestActiveUpdate(a1);
        PopPropogateCoolingChange(v5);
      }
    }
    else
    {
      v4 = -1073741431;
    }
    PopReleaseRwLock((signed __int64 *)(v5 + 32));
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
