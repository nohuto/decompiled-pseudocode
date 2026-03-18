/*
 * XREFs of AuxKlibInitialize @ 0x1C00BC0E8
 * Callers:
 *     FxpGetImageBase @ 0x1C0020E40 (FxpGetImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuxKlibInitialize()
{
  unsigned int v0; // ebx
  unsigned int MajorVersion; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !AuxpInitState )
  {
    PsGetVersion(&MajorVersion, 0LL, 0LL, 0LL);
    if ( MajorVersion < 5 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      AuxpKlibFns.QueryModuleInformationPtr = (int (__fastcall *)(unsigned int *, unsigned int, void *))MmGetSystemRoutineAddress(&QueryModuleInfoName);
      _InterlockedExchange((volatile __int32 *)&AuxpInitState, 1);
    }
  }
  return v0;
}
