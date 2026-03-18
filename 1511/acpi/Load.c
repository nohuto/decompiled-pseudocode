/*
 * XREFs of Load @ 0x1C0006210
 * Callers:
 *     <none>
 * Callees:
 *     LoadMemDDB @ 0x1C00062EC (LoadMemDDB.c)
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     ValidateTarget @ 0x1C000E694 (ValidateTarget.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 *     LoadFieldUnitDDB @ 0x1C0045510 (LoadFieldUnitDDB.c)
 */

__int64 __fastcall Load(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int NameSpaceObject; // eax
  unsigned int MemDDB; // eax
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0LL, "Z");
  if ( !v4 )
  {
    v4 = ValidateTarget(*(_QWORD *)(a2 + 80) + 40LL, 133LL, &v8);
    if ( !v4 )
    {
      NameSpaceObject = GetNameSpaceObject(*(void **)(*(_QWORD *)(a2 + 80) + 32LL));
      v4 = NameSpaceObject;
      if ( NameSpaceObject == -1073741772 )
      {
        LogError(3221225524LL);
        PrintDebugMessage(78, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
        return v4;
      }
      if ( !NameSpaceObject )
      {
        if ( MEMORY[0x3A] == 10 && *(_BYTE *)(MEMORY[0x58] + 12LL) == (_BYTE)NameSpaceObject )
        {
          MemDDB = LoadMemDDB(a1, *MEMORY[0x58], v8);
        }
        else
        {
          if ( MEMORY[0x3A] != 5 )
          {
            v4 = -1072431095;
            LogError(3222536201LL);
            PrintDebugMessage(79, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
LABEL_9:
            if ( (gdwfAMLIInit & 2) != 0 )
            {
              PrintDebugMessage(16, 0, 0, 0, 0LL);
              AMLIDebugger();
            }
            return v4;
          }
          MemDDB = LoadFieldUnitDDB(a1, 56LL, v8);
        }
        v4 = MemDDB;
        goto LABEL_9;
      }
    }
  }
  return v4;
}
