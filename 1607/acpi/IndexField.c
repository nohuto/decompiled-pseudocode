/*
 * XREFs of IndexField @ 0x1C0029B50
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C0015620 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall IndexField(__int64 a1, _QWORD *a2)
{
  unsigned int NameSpaceObject; // ebx
  __int64 *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rcx

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32LL));
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72LL));
    if ( !NameSpaceObject )
    {
      if ( MEMORY[0x42] == 5 )
      {
        v5 = a2 + 8;
        NameSpaceObject = CreateNameSpaceObject(
                            *(_QWORD *)(a1 + 320),
                            0LL,
                            *(_QWORD *)(a1 + 80),
                            *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                            (struct _EX_RUNDOWN_REF **)a2 + 8,
                            0);
        if ( !NameSpaceObject )
        {
          *(_WORD *)(*v5 + 66) = 132;
          *(_DWORD *)(*v5 + 88) = 16;
          v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1180191048, *(_DWORD *)(*v5 + 88));
          *(_QWORD *)(*v5 + 96) = v6;
          if ( v6 )
          {
            memset(*(void **)(*v5 + 96), 0, *(unsigned int *)(*v5 + 88));
            v7 = *(_QWORD **)(*v5 + 96);
            *v7 = 0LL;
            v7[1] = 0LL;
            return (unsigned int)ParseFieldList(a1, a2[5], *v5, *(_DWORD *)(a2[10] + 96LL), 0xFFFFFFFF);
          }
          else
          {
            NameSpaceObject = -1073741670;
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            PrintDebugMessage(63, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        NameSpaceObject = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        PrintDebugMessage(64, *(const void **)(a2[10] + 32LL), 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
