/*
 * XREFs of IopMemQueryConflict @ 0x14062E914
 * Callers:
 *     <none>
 * Callees:
 *     IopIsPciRootBus @ 0x14062E824 (IopIsPciRootBus.c)
 *     ArbQueryConflict @ 0x1406E5088 (ArbQueryConflict.c)
 */

__int64 __fastcall IopMemQueryConflict(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  NTSTATUS IsPciRootBus; // edi
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // rsi
  unsigned __int64 i; // rcx
  unsigned __int64 v11; // rax
  bool v12; // cf
  char v13; // [rsp+50h] [rbp+18h] BYREF

  result = ArbQueryConflict();
  if ( (int)result >= 0 )
  {
    IsPciRootBus = IopIsPciRootBus(*(PDEVICE_OBJECT *)a2, &v13);
    if ( IsPciRootBus >= 0 && v13 )
    {
      v5 = 0LL;
      v6 = **(_DWORD **)(a2 + 16);
      v7 = **(_QWORD **)(a2 + 24);
      if ( v6 )
      {
        v8 = ArbMmConfigRange;
        while ( 1 )
        {
          v9 = *(_QWORD *)(v7 + 24 * v5 + 8);
          if ( v8 )
            break;
LABEL_16:
          v5 = (unsigned int)(v5 + 1);
LABEL_17:
          if ( (unsigned int)v5 >= v6 )
            goto LABEL_18;
        }
        for ( i = v8 + 8; ; i += 32LL )
        {
          if ( i >= 32 * (unsigned __int64)*(unsigned int *)(v8 + 4) + v8 + 8 )
            goto LABEL_16;
          if ( ((*(_BYTE *)(i + 1) - 3) & 0xFB) == 0 )
          {
            v11 = *(_QWORD *)(i + 16);
            v12 = v9 < v11;
            if ( v9 > v11 )
            {
              if ( *(_QWORD *)(i + 24) < v9 )
                continue;
              v12 = v9 < v11;
            }
            if ( !v12 || *(_QWORD *)(v7 + 24 * v5 + 16) >= v11 )
            {
              *(_OWORD *)(v7 + 24 * v5) = *(_OWORD *)(v7 + 24LL * --v6);
              *(_QWORD *)(v7 + 24 * v5 + 16) = *(_QWORD *)(v7 + 24LL * v6 + 16);
              goto LABEL_17;
            }
          }
        }
      }
LABEL_18:
      **(_DWORD **)(a2 + 16) = v6;
      return (unsigned int)IsPciRootBus;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
