/*
 * XREFs of CreateXField @ 0x1C0014688
 * Callers:
 *     CreateDWordField @ 0x1C0013960 (CreateDWordField.c)
 *     CreateBitField @ 0x1C0027E00 (CreateBitField.c)
 *     CreateWordField @ 0x1C0028370 (CreateWordField.c)
 *     CreateByteField @ 0x1C0028670 (CreateByteField.c)
 *     CreateField @ 0x1C002A4C0 (CreateField.c)
 *     CreateQWordField @ 0x1C005D010 (CreateQWordField.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall CreateXField(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int NameSpaceObject; // ebx
  __int64 v9; // rsi
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  NameSpaceObject = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "BI");
  if ( !NameSpaceObject )
  {
    NameSpaceObject = CreateNameSpaceObject(a1[40], *(_QWORD *)(a3 + 32), a1[10], a1[11], a2 + 64, 0);
    if ( !NameSpaceObject )
    {
      v9 = *(_QWORD *)(a2 + 64);
      *(_WORD *)(v9 + 66) = 14;
      *(_DWORD *)(v9 + 88) = 48;
      v10 = (void *)HeapAlloc(a1[40], 1145455176LL, 48LL);
      *(_QWORD *)(v9 + 96) = v10;
      if ( v10 )
      {
        memset(v10, 0, *(unsigned int *)(v9 + 88));
        v11 = *(_QWORD *)(a2 + 80);
        v12 = *(_QWORD *)(v9 + 96);
        *a4 = v12;
        *(_QWORD *)v12 = *(_QWORD *)(v11 + 32);
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      }
      else
      {
        NameSpaceObject = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(38, 0, 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
