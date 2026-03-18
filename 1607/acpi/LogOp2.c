/*
 * XREFs of LogOp2 @ 0x1C0018490
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     LogOp2_32 @ 0x1C0025478 (LogOp2_32.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogOp2(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx
  bool v6; // si
  int v7; // ebp
  int v8; // ecx
  int v10; // ecx
  __int64 v11; // rax
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v15 = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, &v15);
    if ( v15 >= 2 )
    {
      v5 = a2[10];
      if ( *(_WORD *)(v5 + 2) == 1 && *(_WORD *)(v5 + 42) == 1 )
      {
        v6 = 0;
        v7 = ValidateArgTypes(a1, v5, 1, (__int64)"II");
        if ( v7 < 0 )
          return (unsigned int)v7;
        v8 = *(_DWORD *)(a2[7] + 8LL);
        if ( v8 == 147 )
        {
          v6 = *(_QWORD *)(a2[10] + 16LL) == *(_QWORD *)(a2[10] + 56LL);
LABEL_8:
          *(_WORD *)(a2[11] + 2LL) = 1;
          if ( v6 )
          {
            v15 = 0;
            if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v15), v15 >= 2) )
              v2 = -1LL;
            else
              v2 = 0xFFFFFFFFLL;
          }
          *(_QWORD *)(a2[11] + 16LL) = v2;
          return (unsigned int)v7;
        }
        v10 = v8 - 144;
        if ( !v10 )
        {
          v11 = a2[10];
          if ( *(_QWORD *)(v11 + 16) && *(_QWORD *)(v11 + 56) )
          {
            v6 = 1;
            goto LABEL_8;
          }
LABEL_25:
          v6 = 0;
          goto LABEL_8;
        }
        v12 = v10 - 1;
        if ( v12 )
        {
          v13 = v12 - 3;
          if ( v13 )
          {
            if ( v13 == 1 )
              v6 = *(_QWORD *)(a2[10] + 16LL) < *(_QWORD *)(a2[10] + 56LL);
            goto LABEL_8;
          }
          if ( *(_QWORD *)(a2[10] + 16LL) <= *(_QWORD *)(a2[10] + 56LL) )
            goto LABEL_25;
        }
        else
        {
          v14 = a2[10];
          if ( !*(_QWORD *)(v14 + 16) && !*(_QWORD *)(v14 + 56) )
            goto LABEL_25;
        }
        v6 = 1;
        goto LABEL_8;
      }
    }
  }
  return LogOp2_32(a1, a2);
}
