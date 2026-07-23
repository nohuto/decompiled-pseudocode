/*
 * XREFs of PiSwBusRelationAdd @ 0x140487F84
 * Callers:
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1400C23E4 (RtlInsertElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 */

__int64 __fastcall PiSwBusRelationAdd(const wchar_t *a1, __int64 a2)
{
  int PWSTR; // eax
  PVOID v4; // rbx
  int v5; // edi
  __int64 v6; // rax
  _WORD *v7; // rcx
  _QWORD *inserted; // rax
  char *v9; // rcx
  char **v10; // rdx
  char *v11; // rax
  _BYTE Buffer[26]; // [rsp+28h] [rbp-28h] BYREF
  int v14; // [rsp+42h] [rbp-Eh]
  __int16 v15; // [rsp+46h] [rbp-Ah]
  BOOLEAN NewElement; // [rsp+80h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h]

  P = 0LL;
  memset(Buffer, 0, sizeof(Buffer));
  v14 = 0;
  v15 = 0;
  NewElement = 0;
  PWSTR = PnpAllocatePWSTR(a1);
  v4 = P;
  v5 = PWSTR;
  if ( PWSTR >= 0 )
  {
    *(_DWORD *)Buffer = 0;
    v5 = 0;
    *(_QWORD *)&Buffer[8] = 0LL;
    if ( P )
    {
      v6 = 0x7FFFLL;
      v7 = P;
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v6;
      }
      while ( v6 );
      if ( !v6 )
      {
        v5 = -1073741811;
        goto LABEL_14;
      }
      *(_QWORD *)&Buffer[8] = P;
      *(_WORD *)Buffer = 2 * (0x7FFF - v6);
      *(_WORD *)&Buffer[2] = *(_WORD *)Buffer + 2;
    }
    inserted = RtlInsertElementGenericTableAvl(&PiSwBusRelationsTable, Buffer, 0x20u, &NewElement);
    if ( inserted )
    {
      if ( NewElement )
      {
        v4 = 0LL;
        inserted[3] = inserted + 2;
        inserted[2] = inserted + 2;
        P = 0LL;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    if ( v5 >= 0 )
    {
      *(_QWORD *)(a2 + 112) = inserted;
      v9 = (char *)(a2 + 96);
      v10 = (char **)inserted[3];
      v11 = (char *)(inserted + 2);
      if ( *v10 != v11 )
        __fastfail(3u);
      *(_QWORD *)v9 = v11;
      *(_QWORD *)(a2 + 104) = v10;
      *v10 = v9;
      *((_QWORD *)v11 + 1) = v9;
      _InterlockedIncrement((volatile signed __int32 *)a2);
      v4 = P;
    }
  }
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x57706E50u);
  return (unsigned int)v5;
}
