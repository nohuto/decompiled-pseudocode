/*
 * XREFs of PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14063104C
 * Callers:
 *     PiDqActionDataCreate @ 0x14048C2A4 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiDqGrowPropertyArray @ 0x1404CF868 (PiDqGrowPropertyArray.c)
 *     PiDqPnPGetObjectProperty @ 0x1404E4B74 (PiDqPnPGetObjectProperty.c)
 *     PiDqOpenObjectRegKey @ 0x140631DB0 (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140632150 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x140632278 (PiDqPnPGetObjectPropertyLocales.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInAllLanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        const void **a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int v7; // r13d
  int v8; // esi
  unsigned int v9; // r12d
  char *v10; // r14
  PVOID v11; // rdi
  int v12; // ebx
  int v13; // r9d
  unsigned int *v14; // r15
  unsigned int *v15; // rsi
  unsigned int v16; // r8d
  unsigned int v17; // edx
  const void **v18; // rcx
  const wchar_t *pszSrc; // r12
  unsigned int v20; // edx
  const void **v21; // rcx
  unsigned int v22; // r8d
  __int64 v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // r8d
  const void **v26; // rcx
  unsigned int v27; // r8d
  unsigned int v29; // [rsp+50h] [rbp-20h]
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h] BYREF
  int v32[2]; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v34; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h]

  v35 = a4;
  v7 = 0;
  Handle = 0LL;
  v8 = a4;
  *(_QWORD *)v32 = 0LL;
  P = 0LL;
  v9 = a3;
  if ( a2 == 1 )
    v9 = 0;
  v29 = v9;
  v10 = 0LL;
  v11 = 0LL;
  v12 = PiDqOpenObjectRegKey(a2, a4, a3, 1, 0, a1, (__int64)&Handle);
  if ( v12 >= 0 )
  {
    v12 = PiDqPnPGetObjectPropertyKeys(v8, v9, (_DWORD)Handle, v13, (__int64)v32, (__int64)&v34);
    if ( v12 >= 0 && v34 )
    {
      v14 = a7;
      v15 = a6;
      v10 = *(char **)v32;
      while ( 1 )
      {
        *(_QWORD *)v32 = &v10[20 * v7];
        v12 = PiDqPnPGetObjectPropertyLocales(v35, v9, (_DWORD)Handle, (int)v10 + 20 * v7, (__int64)&P);
        if ( v12 < 0
          || !*v14 && (v16 = v34, v17 = *v15, v18 = a5, *v14 = v34, v12 = PiDqGrowPropertyArray(v18, v17, v16), v12 < 0) )
        {
          v11 = P;
          goto LABEL_24;
        }
        v11 = P;
        pszSrc = (const wchar_t *)P;
        if ( *(_WORD *)P )
          break;
LABEL_17:
        ExFreePoolWithTag(v11, 0x58706E50u);
        v24 = *v15;
        v25 = *v14;
        v11 = 0LL;
        P = 0LL;
        if ( v24 != v25 || (v26 = a5, v27 = 2 * v25, *v14 = v27, v12 = PiDqGrowPropertyArray(v26, v24, v27), v12 >= 0) )
        {
          v9 = v29;
          v12 = PiDqPnPGetObjectProperty(v35, v29, (__int64)Handle, *(__int64 *)v32, a2, 0LL, (_OWORD *)*a5 + 3 * *v15);
          if ( v12 >= 0 )
          {
            ++*v15;
            if ( ++v7 < v34 )
              continue;
          }
        }
        goto LABEL_24;
      }
      while ( 1 )
      {
        v20 = *v15;
        if ( *v15 == *v14 )
        {
          v21 = a5;
          v22 = 2 * *v14;
          *v14 = v22;
          v12 = PiDqGrowPropertyArray(v21, v20, v22);
          if ( v12 < 0 )
            break;
        }
        v12 = PiDqPnPGetObjectProperty(v35, v29, (__int64)Handle, *(__int64 *)v32, a2, pszSrc, (_OWORD *)*a5 + 3 * *v15);
        if ( v12 < 0 )
          break;
        ++*v15;
        v23 = -1LL;
        do
          ++v23;
        while ( pszSrc[v23] );
        pszSrc += v23 + 1;
        if ( !*pszSrc )
          goto LABEL_17;
      }
    }
    else
    {
      v10 = *(char **)v32;
    }
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x58706E50u);
  return (unsigned int)v12;
}
