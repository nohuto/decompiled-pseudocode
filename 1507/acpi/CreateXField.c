/*
 * XREFs of CreateXField @ 0x1C0015538
 * Callers:
 *     CreateDWordField @ 0x1C0016AA0 (CreateDWordField.c)
 *     CreateBitField @ 0x1C00187A0 (CreateBitField.c)
 *     CreateWordField @ 0x1C0018B60 (CreateWordField.c)
 *     CreateByteField @ 0x1C0018DC0 (CreateByteField.c)
 *     CreateField @ 0x1C0022DF0 (CreateField.c)
 *     CreateQWordField @ 0x1C0045EC0 (CreateQWordField.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall CreateXField(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int NameSpaceObject; // ebx
  __int64 v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  NameSpaceObject = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"BI");
  if ( !NameSpaceObject )
  {
    NameSpaceObject = CreateNameSpaceObject(
                        *(_QWORD *)(a1 + 320),
                        *(unsigned __int8 **)(a3 + 32),
                        *(_QWORD *)(a1 + 80),
                        *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                        (struct _EX_RUNDOWN_REF **)(a2 + 64),
                        0);
    if ( !NameSpaceObject )
    {
      v9 = *(_QWORD *)(a2 + 64);
      *(_WORD *)(v9 + 58) = 14;
      *(_DWORD *)(v9 + 80) = 48;
      v10 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1145455176, 0x30u);
      *(_QWORD *)(v9 + 88) = v10;
      if ( v10 )
      {
        memset(v10, 0, *(unsigned int *)(v9 + 80));
        v11 = *(_QWORD *)(a2 + 80);
        v12 = *(_QWORD *)(v9 + 88);
        *a4 = v12;
        *(_QWORD *)v12 = *(_QWORD *)(v11 + 32);
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      }
      else
      {
        NameSpaceObject = -1073741670;
        LogError(3221225626LL);
        PrintDebugMessage(38, 0, 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
