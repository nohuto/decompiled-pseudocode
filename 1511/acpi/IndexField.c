/*
 * XREFs of IndexField @ 0x1C0022AA0
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C000EE64 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall IndexField(__int64 a1, _QWORD *a2)
{
  unsigned int NameSpaceObject; // ebx
  __int64 *v5; // r15
  __int64 v6; // rax
  _QWORD *v7; // rcx

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32LL));
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72LL));
    if ( !NameSpaceObject )
    {
      if ( MEMORY[0x3A] == 5 )
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
          *(_WORD *)(*v5 + 58) = 132;
          *(_DWORD *)(*v5 + 80) = 16;
          v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1180191048, *(_DWORD *)(*v5 + 80));
          *(_QWORD *)(*v5 + 88) = v6;
          if ( v6 )
          {
            memset(*(void **)(*v5 + 88), 0, *(unsigned int *)(*v5 + 80));
            v7 = *(_QWORD **)(*v5 + 88);
            *v7 = 0LL;
            v7[1] = 0LL;
            return (unsigned int)ParseFieldList(a1, a2[5], *v5, *(_DWORD *)(a2[10] + 96LL), 0xFFFFFFFF);
          }
          else
          {
            NameSpaceObject = -1073741670;
            LogError(3221225626LL);
            PrintDebugMessage(63, 0, 0, 0, 0LL);
          }
        }
      }
      else
      {
        NameSpaceObject = -1072431095;
        LogError(3222536201LL);
        PrintDebugMessage(64, *(_QWORD *)(a2[10] + 32LL), 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
