/*
 * XREFs of LogOp2 @ 0x1C0012D80
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     LogOp2_32 @ 0x1C00206BC (LogOp2_32.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogOp2(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  bool v5; // si
  int v6; // ebp
  int v7; // ecx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v14 = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, &v14);
    if ( v14 >= 2 )
    {
      a1 = a2[10];
      if ( *(_WORD *)(a1 + 2) == 1 && *(_WORD *)(a1 + 42) == 1 )
      {
        LOBYTE(v4) = 1;
        v5 = 0;
        v6 = ValidateArgTypes(a1, v4, "II");
        if ( v6 < 0 )
          return (unsigned int)v6;
        v7 = *(_DWORD *)(a2[7] + 8LL);
        if ( v7 == 147 )
        {
          v5 = *(_QWORD *)(a2[10] + 16LL) == *(_QWORD *)(a2[10] + 56LL);
LABEL_8:
          *(_WORD *)(a2[11] + 2LL) = 1;
          if ( v5 )
          {
            v14 = 0;
            if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v14), v14 >= 2) )
              v2 = -1LL;
            else
              v2 = 0xFFFFFFFFLL;
          }
          *(_QWORD *)(a2[11] + 16LL) = v2;
          return (unsigned int)v6;
        }
        v9 = v7 - 144;
        if ( !v9 )
        {
          v10 = a2[10];
          if ( *(_QWORD *)(v10 + 16) && *(_QWORD *)(v10 + 56) )
          {
            v5 = 1;
            goto LABEL_8;
          }
LABEL_25:
          v5 = 0;
          goto LABEL_8;
        }
        v11 = v9 - 1;
        if ( v11 )
        {
          v12 = v11 - 3;
          if ( v12 )
          {
            if ( v12 == 1 )
              v5 = *(_QWORD *)(a2[10] + 16LL) < *(_QWORD *)(a2[10] + 56LL);
            goto LABEL_8;
          }
          if ( *(_QWORD *)(a2[10] + 16LL) <= *(_QWORD *)(a2[10] + 56LL) )
            goto LABEL_25;
        }
        else
        {
          v13 = a2[10];
          if ( !*(_QWORD *)(v13 + 16) && !*(_QWORD *)(v13 + 56) )
            goto LABEL_25;
        }
        v5 = 1;
        goto LABEL_8;
      }
    }
  }
  return LogOp2_32(a1, a2);
}
