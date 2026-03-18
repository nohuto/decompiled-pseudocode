/*
 * XREFs of ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1C0227C74
 * Callers:
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C0227D08 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 * Callees:
 *     <none>
 */

struct tagINPUTTRANSFORMLIST **__fastcall FindEntryByTime(
        struct tagINPUTTRANSFORMLIST *a1,
        struct tagINPUTTRANSFORMLIST **a2,
        __int64 a3)
{
  struct tagINPUTTRANSFORMLIST *v3; // rbx
  char *v4; // r10
  struct tagINPUTTRANSFORMENTRY *v6; // r9
  struct tagINPUTTRANSFORMLIST *v8; // rdi
  struct tagINPUTTRANSFORMENTRY *v9; // rdx
  struct tagINPUTTRANSFORMENTRY *i; // r8

  v3 = *a2;
  v4 = (char *)a1 + 8;
  v6 = (struct tagINPUTTRANSFORMENTRY *)a2;
  if ( *a2 == (struct tagINPUTTRANSFORMLIST *)((char *)a1 + 8) )
    return a2;
  if ( a2[1] == (struct tagINPUTTRANSFORMLIST *)v4 )
  {
    v8 = a2[2];
    a2 = (struct tagINPUTTRANSFORMLIST **)*((_QWORD *)a1 + 2);
    if ( a3 - (__int64)v8 < (unsigned __int64)(a2[2] - v8) )
    {
      if ( a3 - (__int64)v8 <= (unsigned __int64)a2[2] - a3 )
        return (struct tagINPUTTRANSFORMLIST **)v6;
      return a2;
    }
    v6 = v3;
  }
  v9 = (struct tagINPUTTRANSFORMENTRY *)*((_QWORD *)v6 + 1);
  for ( i = *(struct tagINPUTTRANSFORMENTRY **)v6;
        i != (struct tagINPUTTRANSFORMENTRY *)v4
     && (unsigned __int64)(a3 - *((_QWORD *)v6 + 2)) >= *((_QWORD *)v9 + 2) - *((_QWORD *)v6 + 2);
        i = *(struct tagINPUTTRANSFORMENTRY **)i )
  {
    v9 = v6;
    v6 = i;
  }
  return (struct tagINPUTTRANSFORMLIST **)v6;
}
