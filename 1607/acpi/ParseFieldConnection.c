/*
 * XREFs of ParseFieldConnection @ 0x1C00614D8
 * Callers:
 *     ParseField @ 0x1C0015710 (ParseField.c)
 * Callees:
 *     ParseIntObj @ 0x1C0014BB0 (ParseIntObj.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     ParseName @ 0x1C00199B0 (ParseName.c)
 *     HeapFree @ 0x1C001B8A0 (HeapFree.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     ParsePackageLen @ 0x1C0061828 (ParsePackageLen.c)
 */

__int64 __fastcall ParseFieldConnection(__int64 a1, __int64 *a2)
{
  _WORD **v2; // rsi
  _BYTE *v3; // rax
  _WORD *v6; // r13
  int v7; // eax
  _WORD *v8; // r15
  unsigned __int64 v9; // rbx
  const void *v10; // rdi
  int v11; // r12d
  int v12; // eax
  char *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  const void *v17; // rdx
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v23[16]; // [rsp+38h] [rbp-170h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-160h]
  char Src[256]; // [rsp+60h] [rbp-148h] BYREF

  v2 = (_WORD **)(a1 + 120);
  v3 = *(_BYTE **)(a1 + 120);
  v6 = 0LL;
  if ( *v3 == 17 )
  {
    *v2 = v3 + 1;
    ParsePackageLen(a1 + 120, &v22);
    v7 = ParseIntObj(a1, v2, (__int64)v23, 0);
    v8 = (_WORD *)v22;
    v9 = v24;
    v10 = (const void *)v7;
    if ( v7 )
    {
      LogError(v7);
      AcpiDiagTraceAmlError(a1, (int)v10);
      PrintDebugMessage(40, v10, 0LL, 0LL, 0LL);
    }
    else if ( (unsigned __int64)*v2 > v22 || v24 > (int)v22 - *(_DWORD *)v2 + 1 )
    {
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      PrintDebugMessage(42, (const void *)v9, (const void *)(unsigned int)((_DWORD)v8 - *(_DWORD *)v2), 0LL, 0LL);
      LODWORD(v10) = -1072431089;
    }
    v6 = *v2;
    v11 = 2;
    *v2 = v8;
  }
  else
  {
    v12 = ParseName(a1, (char **)(a1 + 120), Src);
    v10 = (const void *)v12;
    if ( v12 )
    {
      LogError(v12);
      AcpiDiagTraceAmlError(a1, (int)v10);
      PrintDebugMessage(41, v10, 0LL, 0LL, 0LL);
      return (unsigned int)v10;
    }
    v13 = Src;
    v14 = 256LL;
    LODWORD(v10) = 0;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v14;
    }
    while ( v14 );
    if ( v14 )
    {
      v15 = 256 - v14;
    }
    else
    {
      LODWORD(v10) = -1073741811;
      v15 = 0LL;
    }
    if ( v15 > 0x100 )
      v9 = 256LL;
    else
      v9 = v15 + 1;
    v11 = 1;
  }
  if ( (_DWORD)v10 )
    return (unsigned int)v10;
  v16 = *a2;
  if ( *a2 )
  {
    if ( *(unsigned int *)(v16 + 8) >= v9 )
      goto LABEL_30;
    HeapFree(v16);
    *a2 = 0LL;
  }
  if ( v9 > 0xFFFFFFEF )
  {
    LODWORD(v10) = -1072431089;
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    v17 = (const void *)v9;
    v18 = 39;
LABEL_28:
    PrintDebugMessage(v18, v17, 0LL, 0LL, 0LL);
    goto LABEL_30;
  }
  v19 = HeapAlloc(*(_QWORD *)(a1 + 320), 1314407240, (int)v9 + 16);
  *a2 = v19;
  if ( !v19 )
  {
    LODWORD(v10) = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v17 = 0LL;
    v18 = 126;
    goto LABEL_28;
  }
  *(_DWORD *)(v19 + 8) = v9;
LABEL_30:
  if ( *a2 )
  {
    *(_DWORD *)(*a2 + 12) = v9;
    *(_DWORD *)*a2 = v11;
    v20 = *a2;
    if ( v11 == 2 )
    {
      memmove((void *)(v20 + 16), v6, *(unsigned int *)(v20 + 12));
    }
    else
    {
      memmove((void *)(v20 + 16), Src, (unsigned int)(*(_DWORD *)(v20 + 12) - 1));
      *(_BYTE *)((unsigned int)(*(_DWORD *)(*a2 + 12) - 1) + *a2 + 16) = 0;
    }
  }
  return (unsigned int)v10;
}
