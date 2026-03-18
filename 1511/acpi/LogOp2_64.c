/*
 * XREFs of LogOp2_64 @ 0x1C0011810
 * Callers:
 *     LogOp2 @ 0x1C00117B0 (LogOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogOp2_64(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  bool v4; // di
  __int64 v5; // rcx
  int v6; // ebp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  v2 = a2;
  v3 = 0LL;
  v4 = 0;
  v5 = a2[10];
  LOBYTE(a2) = 1;
  v6 = ValidateArgTypes(v5, a2, "II");
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( *(_DWORD *)(v2[7] + 8LL) == 144 )
  {
    v8 = v2[10];
    if ( *(_QWORD *)(v8 + 16) )
    {
      v4 = 1;
      if ( *(_QWORD *)(v8 + 56) )
        goto LABEL_6;
    }
  }
  else
  {
    if ( *(_DWORD *)(v2[7] + 8LL) != 145 )
    {
      switch ( *(_DWORD *)(v2[7] + 8LL) )
      {
        case 0x93:
          v4 = *(_QWORD *)(v2[10] + 16LL) == *(_QWORD *)(v2[10] + 56LL);
          break;
        case 0x94:
          v4 = *(_QWORD *)(v2[10] + 16LL) > *(_QWORD *)(v2[10] + 56LL);
          break;
        case 0x95:
          v4 = *(_QWORD *)(v2[10] + 16LL) < *(_QWORD *)(v2[10] + 56LL);
          break;
      }
      goto LABEL_6;
    }
    v9 = v2[10];
    if ( *(_QWORD *)(v9 + 16) || *(_QWORD *)(v9 + 56) )
    {
      v4 = 1;
      goto LABEL_6;
    }
  }
  v4 = 0;
LABEL_6:
  *(_WORD *)(v2[11] + 2LL) = 1;
  if ( v4 )
  {
    LODWORD(v10) = 0;
    if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v10), (unsigned int)v10 >= 2) )
      v3 = -1LL;
    else
      v3 = 0xFFFFFFFFLL;
  }
  *(_QWORD *)(v2[11] + 16LL) = v3;
  return (unsigned int)v6;
}
