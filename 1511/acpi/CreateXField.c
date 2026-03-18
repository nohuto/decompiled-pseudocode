/*
 * XREFs of CreateXField @ 0x1C000DF7C
 * Callers:
 *     CreateDWordField @ 0x1C000D250 (CreateDWordField.c)
 *     CreateBitField @ 0x1C0020ED0 (CreateBitField.c)
 *     CreateWordField @ 0x1C0021410 (CreateWordField.c)
 *     CreateByteField @ 0x1C00217E0 (CreateByteField.c)
 *     CreateField @ 0x1C0023570 (CreateField.c)
 *     CreateQWordField @ 0x1C0045900 (CreateQWordField.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall CreateXField(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int NameSpaceObject; // ebx
  __int64 v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  NameSpaceObject = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0LL, "BI");
  if ( !NameSpaceObject )
  {
    NameSpaceObject = CreateNameSpaceObject(a1[40], *(_QWORD *)(a3 + 32), a1[10], a1[11], a2 + 64, 0);
    if ( !NameSpaceObject )
    {
      v9 = *(_QWORD *)(a2 + 64);
      *(_WORD *)(v9 + 58) = 14;
      *(_DWORD *)(v9 + 80) = 48;
      v10 = (void *)HeapAlloc(a1[40], 1145455176LL, 48LL);
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
