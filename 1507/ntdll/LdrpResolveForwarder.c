/*
 * XREFs of LdrpResolveForwarder @ 0x18001664C
 * Callers:
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     LdrpGetProcedureAddress @ 0x180015BD0 (LdrpGetProcedureAddress.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlCharToInteger @ 0x18006DED0 (RtlCharToInteger.c)
 *     strrchr @ 0x180088F50 (strrchr.c)
 */

__int64 __fastcall LdrpResolveForwarder(char *Str, __int64 a2, __int64 a3, char **a4)
{
  int v4; // r15d
  char *v7; // rax
  __int16 v8; // bx
  const char *v9; // rdi
  __int64 v10; // r14
  int ProcedureAddress; // eax
  unsigned int v12; // ebx
  char *v13; // rdi
  int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-28h] BYREF
  ANSI_STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0;
  v16 = 0LL;
  BaseAddress = 0LL;
  while ( 1 )
  {
    v7 = strrchr(Str, 46);
    if ( !v7 || (v8 = (_WORD)v7 - (_WORD)Str, (unsigned __int64)(v7 - Str) > 0xFFFF) )
    {
LABEL_27:
      v12 = -1073741701;
      goto LABEL_16;
    }
    v9 = v7 + 1;
    SourceString.Buffer = Str;
    SourceString.Length = (_WORD)v7 - (_WORD)Str;
    SourceString.MaximumLength = (_WORD)v7 - (_WORD)Str;
    if ( v7[1] == 35 )
    {
      if ( RtlCharToInteger(v7 + 2, 0, &Value) < 0 )
        goto LABEL_27;
      v9 = 0LL;
    }
    if ( v8 == 5 && (*(_DWORD *)Str | 0x20202020) == 0x6C64746E && ((unsigned __int8)Str[4] | 0x20) == 0x6C )
    {
      v10 = LdrpNtDllDataTableEntry;
      v16 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v15 = LdrpLoadDependentModule(&SourceString, (__int64)&v16, (__int64)&BaseAddress);
      v12 = v15;
      if ( v15 < 0 || v15 == 259 )
        goto LABEL_16;
      v10 = v16;
    }
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v10 + 48), v9, Value, a4);
    v12 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    if ( ++v4 == 32 )
      goto LABEL_27;
    Str = *a4;
  }
  if ( ProcedureAddress >= 0 )
  {
    v13 = *(char **)(v10 + 48);
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      if ( (unsigned __int64)v13 < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
        || (unsigned __int64)v13 >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                                  + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
      {
        RtlpxLookupFunctionTable(*(PVOID *)(v10 + 48), (__int64)&SourceString);
      }
      else
      {
        SourceString = *(ANSI_STRING *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
      }
      if ( SourceString.Buffer != v13 )
        __fastfail(0x18u);
    }
  }
LABEL_16:
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  return v12;
}
