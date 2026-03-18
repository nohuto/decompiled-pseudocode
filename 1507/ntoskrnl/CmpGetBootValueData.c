/*
 * XREFs of CmpGetBootValueData @ 0x1407BBF00
 * Callers:
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

char __fastcall CmpGetBootValueData(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  unsigned int v4; // eax
  size_t v5; // r15
  const void *v8; // rax
  __int64 v9; // rdx
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rcx
  unsigned int v14; // r14d
  unsigned __int16 v15; // r15
  const void *v16; // rdx
  size_t v17; // r8
  int v19; // [rsp+20h] [rbp-10h] BYREF
  int v20; // [rsp+24h] [rbp-Ch] BYREF
  __int64 v21; // [rsp+28h] [rbp-8h]
  __int64 v22; // [rsp+70h] [rbp+40h] BYREF
  int v23; // [rsp+78h] [rbp+48h] BYREF

  v22 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = a4;
  v20 = -1;
  if ( v4 >= 0x80000000 )
  {
    memmove(a3, (const void *)(a2 + 8), a4);
LABEL_3:
    LOBYTE(v8) = 1;
    return (char)v8;
  }
  if ( (unsigned int)dword_14080E224 < 4 || v4 - 16345 > 0x7FFFC026 )
  {
    v8 = (const void *)qword_14080E168(&CmControlHive, *(unsigned int *)(a2 + 8), &v20);
    if ( !v8 )
      return (char)v8;
    memmove(a3, v8, v5);
    qword_14080E170(&CmControlHive, &v20);
    goto LABEL_3;
  }
  v9 = *(unsigned int *)(a2 + 8);
  v19 = -1;
  LODWORD(v22) = -1;
  v10 = 1;
  v23 = -1;
  v11 = qword_14080E168(&CmControlHive, v9, &v19);
  v12 = v11;
  if ( v11 )
  {
    v21 = qword_14080E168(&CmControlHive, *(unsigned int *)(v11 + 4), &v23);
    v13 = v21;
    if ( v21 )
    {
      v14 = *(_DWORD *)(a2 + 4);
      if ( v14 > (unsigned int)v5 )
        v14 = v5;
      v15 = 0;
      if ( *(_WORD *)(v12 + 2) )
      {
        while ( 1 )
        {
          v16 = (const void *)qword_14080E168(&CmControlHive, *(unsigned int *)(v13 + 4LL * v15), &v22);
          if ( !v16 )
            break;
          v17 = v14;
          if ( v14 > 0x3FD8 )
            v17 = 16344LL;
          memmove(&a3[16344 * v15], v16, v17);
          qword_14080E170(&CmControlHive, &v22);
          if ( v14 > 0x3FD8 )
          {
            v13 = v21;
            v14 -= 16344;
            if ( ++v15 < *(_WORD *)(v12 + 2) )
              continue;
          }
          goto LABEL_18;
        }
        v10 = 0;
      }
LABEL_18:
      qword_14080E170(&CmControlHive, &v23);
    }
    else
    {
      v10 = 0;
    }
    qword_14080E170(&CmControlHive, &v19);
  }
  else
  {
    v10 = 0;
  }
  LOBYTE(v8) = v10;
  return (char)v8;
}
