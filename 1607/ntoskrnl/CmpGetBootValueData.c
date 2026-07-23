/*
 * XREFs of CmpGetBootValueData @ 0x1407B0EDC
 * Callers:
 *     CmGetSystemControlValues @ 0x1407B0AC0 (CmGetSystemControlValues.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

char __fastcall CmpGetBootValueData(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  unsigned int v4; // eax
  size_t v6; // r14
  const void *v8; // rax
  __int64 v9; // rdx
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r13
  unsigned int v14; // esi
  unsigned __int16 v15; // r14
  const void *v16; // rax
  size_t v17; // r8
  _DWORD v19[2]; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v20[2]; // [rsp+28h] [rbp-8h] BYREF
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  int v22; // [rsp+78h] [rbp+48h] BYREF
  int v23; // [rsp+7Ch] [rbp+4Ch]

  v21 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  v6 = a4;
  v20[1] = 0;
  v20[0] = -1;
  if ( v4 >= 0x80000000 )
  {
    memmove(a3, (const void *)(a2 + 8), a4);
LABEL_3:
    LOBYTE(v8) = 1;
    return (char)v8;
  }
  if ( (unsigned int)dword_140763FB4 < 4 || v4 - 16345 > 0x7FFFC026 )
  {
    v8 = (const void *)qword_140763EF8(&CmControlHive, *(unsigned int *)(a2 + 8), v20);
    if ( !v8 )
      return (char)v8;
    memmove(a3, v8, v6);
    qword_140763F00(&CmControlHive, v20);
    goto LABEL_3;
  }
  v9 = *(unsigned int *)(a2 + 8);
  v19[0] = -1;
  v21 = 0xFFFFFFFFLL;
  v10 = 1;
  v22 = -1;
  v19[1] = 0;
  v23 = 0;
  v11 = qword_140763EF8(&CmControlHive, v9, v19);
  v12 = v11;
  if ( v11 )
  {
    v13 = qword_140763EF8(&CmControlHive, *(unsigned int *)(v11 + 4), &v22);
    if ( v13 )
    {
      v14 = *(_DWORD *)(a2 + 4);
      if ( v14 > (unsigned int)v6 )
        v14 = v6;
      v15 = 0;
      if ( *(_WORD *)(v12 + 2) )
      {
        while ( 1 )
        {
          v16 = (const void *)qword_140763EF8(&CmControlHive, *(unsigned int *)(v13 + 4LL * v15), &v21);
          if ( !v16 )
            break;
          v17 = v14;
          if ( v14 > 0x3FD8 )
            v17 = 16344LL;
          memmove(&a3[16344 * v15], v16, v17);
          qword_140763F00(&CmControlHive, &v21);
          if ( v14 > 0x3FD8 )
          {
            v14 -= 16344;
            if ( ++v15 < *(_WORD *)(v12 + 2) )
              continue;
          }
          goto LABEL_18;
        }
        v10 = 0;
      }
LABEL_18:
      qword_140763F00(&CmControlHive, &v22);
    }
    else
    {
      v10 = 0;
    }
    qword_140763F00(&CmControlHive, v19);
  }
  else
  {
    v10 = 0;
  }
  LOBYTE(v8) = v10;
  return (char)v8;
}
