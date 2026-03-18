/*
 * XREFs of Return @ 0x1C00189D0
 * Callers:
 *     <none>
 * Callees:
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     NewObjData @ 0x1C0018C10 (NewObjData.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 */

__int64 __fastcall Return(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rbp
  void *v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // r14
  int v10; // esi
  _DWORD *v11; // r15
  __int64 v12; // rcx

  v2 = *(_QWORD *)(a2 + 80);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 88);
  v5 = *(_QWORD *)(a1 + 320);
  if ( v4 != v2 )
  {
    *(_OWORD *)v4 = *(_OWORD *)v2;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v4 + 32) = *(_QWORD *)(v2 + 32);
    if ( *(_QWORD *)(v2 + 32) )
    {
      v7 = (void *)NewObjData(v5, v2);
      *(_QWORD *)(v4 + 32) = v7;
      if ( !v7 )
      {
        v3 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(0LL, 3221225626LL);
        PrintDebugMessage(43, 0, 0, 0, 0LL);
        return v3;
      }
      memmove(v7, *(const void **)(v2 + 32), *(unsigned int *)(v2 + 24));
      if ( *(_WORD *)(v4 + 2) == 4 )
      {
        v9 = *(_DWORD **)(v2 + 32);
        v10 = 0;
        v11 = *(_DWORD **)(v4 + 32);
        for ( *v11 = *v9; v10 < *v9; ++v10 )
        {
          v3 = DupObjData(v5, &v11[10 * v10 + 2], &v9[10 * v10 + 2]);
          if ( v3 )
            break;
        }
        goto LABEL_11;
      }
      if ( *(_WORD *)(v4 + 2) != 5 )
      {
        if ( *(_WORD *)(v4 + 2) == 130 )
        {
          ReferenceObjectEx(**(_QWORD **)(v4 + 32), v8);
          v12 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL);
          goto LABEL_20;
        }
        if ( *(_WORD *)(v4 + 2) != 131 )
        {
          if ( *(_WORD *)(v4 + 2) != 132 )
          {
LABEL_11:
            *(_WORD *)v4 &= ~1u;
            _InterlockedExchange((volatile __int32 *)(v4 + 8), 0);
            goto LABEL_3;
          }
          ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL), v8);
        }
      }
      v12 = **(_QWORD **)(v4 + 32);
LABEL_20:
      ReferenceObjectEx(v12, v8);
      goto LABEL_11;
    }
  }
LABEL_3:
  if ( !v3 )
    return 32770;
  return v3;
}
