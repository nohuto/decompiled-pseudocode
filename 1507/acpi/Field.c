/*
 * XREFs of Field @ 0x1C001FF40
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C000DC80 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall Field(__int64 a1, _QWORD *a2)
{
  unsigned int NameSpaceObject; // ebx
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32LL));
  if ( !NameSpaceObject )
  {
    if ( MEMORY[0x3A] == 10 )
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
        *(_WORD *)(*v5 + 58) = 131;
        *(_DWORD *)(*v5 + 80) = 8;
        v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1329874504, *(_DWORD *)(*v5 + 80));
        *(_QWORD *)(*v5 + 88) = v6;
        if ( v6 )
        {
          memset(*(void **)(*v5 + 88), 0, *(unsigned int *)(*v5 + 80));
          v7 = *(_QWORD *)(*v5 + 88);
          *(_QWORD *)v7 = 0LL;
          return (unsigned int)ParseFieldList(
                                 a1,
                                 a2[5],
                                 *v5,
                                 *(_DWORD *)(a2[10] + 56LL),
                                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 88LL) + 8LL));
        }
        else
        {
          NameSpaceObject = -1073741670;
          LogError(3221225626LL);
          PrintDebugMessage(51, 0, 0, 0, 0LL);
        }
      }
    }
    else
    {
      NameSpaceObject = -1072431095;
      LogError(3222536201LL);
      PrintDebugMessage(52, *(_QWORD *)(a2[10] + 32LL), 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
