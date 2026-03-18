/*
 * XREFs of Debugger @ 0x1C0045228
 * Callers:
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1C000D1E0 (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     _stricmp_0 @ 0x1C0024CC8 (_stricmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     RtlStringCchCatA @ 0x1C00400C4 (RtlStringCchCatA.c)
 *     DbgExecuteCmd @ 0x1C0045100 (DbgExecuteCmd.c)
 */

__int64 Debugger()
{
  char *v0; // r14
  char v1; // si
  const char **v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 result; // rax
  char *Context; // [rsp+38h] [rbp-D0h] BYREF
  CHAR Name[8]; // [rsp+40h] [rbp-C8h] BYREF
  CHAR Command[272]; // [rsp+48h] [rbp-C0h] BYREF
  CHAR Response[256]; // [rsp+158h] [rbp+50h] BYREF
  char pszDest[256]; // [rsp+258h] [rbp+150h] BYREF

  Context = 0LL;
  do
  {
    while ( 1 )
    {
      do
      {
        if ( (gDebugger & 0xFFFDFFFF) != 0 && KeGetCurrentIrql() < 2u )
        {
          _InterlockedOr(&gDebugger, 0x20000u);
          DbgSetDebugFilterState(0x19u, 0xFFFFFFFF, 1u);
        }
        if ( qword_1C005A218 )
          ((void (__fastcall *)(const CHAR *, CHAR *, __int64, __int64))qword_1C005A218)(
            "\nAMLI(? for help)-> ",
            Response,
            256LL,
            qword_1C005A220);
        else
          DbgPrompt("\nAMLI(? for help)-> ", Response, 0x100u);
        RtlStringCchCopyA(pszDest, 0x100uLL, Response);
        v0 = strtok_s(Response, " \t\n", &Context);
      }
      while ( !v0 );
      v1 = 0;
      v2 = (const char **)off_1C004E380;
      v3 = 0;
      while ( stricmp_0(*v2, v0) )
      {
        ++v3;
        ++v2;
        if ( v3 >= 0x11 )
          goto LABEL_14;
      }
      v1 = 1;
LABEL_14:
      if ( !v1 )
        break;
      memset(Command, 0, 265);
      strcpy(Name, "ACPI");
      RtlStringCchCopyA(Command, 0x109uLL, "!AMLI ");
      RtlStringCchCatA(Command, 0x109uLL, pszDest);
      RtlStringCchCatA(Command, 0x109uLL, " ; g");
      DbgCommandString(Name, Command);
    }
    result = DbgExecuteCmd(v4, v0, &Context);
  }
  while ( (_DWORD)result != -1 );
  return result;
}
