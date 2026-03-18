/*
 * XREFs of cParseFontResources @ 0x1402448F4
 * Callers:
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1402828A0 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?pvFindResource@@YAPEAXPEAX0HHPEAK@Z @ 0x14020BA10 (-pvFindResource@@YAPEAXPEAX0HHPEAK@Z.c)
 */

__int64 __fastcall cParseFontResources(__int64 a1, _QWORD *a2, _QWORD *a3, PVOID *a4)
{
  _QWORD *v5; // r14
  _QWORD *v6; // r12
  __int64 v8; // r13
  __int64 v9; // rcx
  int v11; // edi
  __int64 *v12; // rax
  unsigned __int16 *v13; // r12
  int i; // r14d
  __int64 Resource; // rax
  __int64 *v16; // rdx
  __int64 v17; // [rsp+48h] [rbp-70h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-68h]
  unsigned __int16 *v19; // [rsp+58h] [rbp-60h]
  __int64 v20; // [rsp+60h] [rbp-58h]
  __int64 v21; // [rsp+68h] [rbp-50h]
  __int64 *v22; // [rsp+70h] [rbp-48h]
  unsigned int v23; // [rsp+C0h] [rbp+8h] BYREF
  _QWORD *v24; // [rsp+C8h] [rbp+10h]
  _QWORD *v25; // [rsp+D0h] [rbp+18h]
  PVOID *v26; // [rsp+D8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v5 = a3;
  v6 = a2;
  v20 = a1;
  v17 = 0LL;
  *a2 = 0LL;
  *a3 = 0LL;
  v8 = a1 + 16;
  v21 = a1 + 16;
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)v9 == 23117 && *(_DWORD *)(v9 + 60) > *(_DWORD *)(a1 + 24) )
    return 0LL;
  if ( (int)LdrResFindResourceDirectory(v9 | 1, 8LL, 0LL, &v17, 0LL, 0LL, 0) < 0 )
    return 0LL;
  v11 = *(unsigned __int16 *)(v17 + 14);
  if ( !*(_WORD *)(v17 + 14) )
    return 0LL;
  if ( a4 )
  {
    v12 = (__int64 *)EngAllocMem(1u, 8 * v11, 0x64666D42u);
    v18 = v12;
    *a4 = v12;
    if ( v12 )
    {
      v13 = (unsigned __int16 *)(v17 + 16);
      for ( i = 0; ; ++i )
      {
        v19 = v13;
        if ( i >= v11 )
          break;
        v23 = 0;
        Resource = pvFindResource(
                     (void *)(*(_QWORD *)v8 + 1LL),
                     *(_QWORD *)v8 + *(unsigned int *)(a1 + 24),
                     *v13,
                     8,
                     &v23);
        v16 = v18;
        *v18 = Resource;
        v18 = v16 + 1;
        v22 = v16 + 1;
        if ( !Resource )
        {
          v11 = 0;
          break;
        }
        v13 += 4;
      }
      v5 = v25;
      v6 = v24;
      goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  if ( v11 <= 0 )
  {
    if ( a4 )
    {
      EngFreeMem(*a4);
      *a4 = 0LL;
    }
  }
  else
  {
    *v6 = *(_QWORD *)v8;
    *v5 = *(unsigned int *)(a1 + 24);
  }
  return (unsigned int)v11;
}
