/*
 * XREFs of RaWmiIrpRegisterRequest @ 0x1C004EFE0
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C004F22C (RaWmiDispatchIrp.c)
 * Callees:
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 */

__int64 __fastcall RaWmiIrpRegisterRequest(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  __int64 v4; // rdx
  unsigned int v5; // ebp
  int v6; // r14d
  char v7; // r15
  bool v8; // di
  __int64 v9; // r12
  __int64 v10; // rax
  char v11; // di
  const void **DriverObjectExtension; // rax
  const void **v13; // r13
  unsigned __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  unsigned int v19; // r15d
  __int64 v20; // rax
  unsigned int v21; // r8d
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // rax

  v2 = *(unsigned int **)(a2 + 24);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = a1;
  if ( *(_DWORD *)v4 )
  {
    if ( *(_DWORD *)v4 != 1 )
      goto LABEL_5;
    v10 = *(_QWORD *)(v4 + 24);
    v7 = *(_BYTE *)(v10 + 451);
    v11 = *(_BYTE *)(v10 + 104);
  }
  else
  {
    v7 = *(_BYTE *)(v4 + 451);
    v11 = *(_BYTE *)(v4 + 104);
  }
  v8 = (v11 & 2) != 0;
LABEL_5:
  if ( *(_DWORD *)(a2 + 8) > 1u )
    return 3221225485LL;
  DriverObjectExtension = (const void **)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(a1 + 8), DriverEntry);
  v13 = DriverObjectExtension;
  if ( DriverObjectExtension )
  {
    if ( v7 && v8 )
    {
      v14 = *(unsigned int *)(a2 + 16);
      v5 = *((unsigned __int16 *)DriverObjectExtension + 20) + 2;
      if ( v14 <= (unsigned __int64)v5 + 4 )
        v15 = 4;
      else
        v15 = v14 - v5;
      *(_DWORD *)(a2 + 16) = v15;
      v16 = RaWmiPassToMiniPort(v9, 8, a2);
      v17 = *(_DWORD *)(a2 + 16);
      v6 = v16;
    }
    else
    {
      v17 = 0;
    }
    if ( v6 != -1073741789 )
    {
      if ( v6 < 0 )
      {
LABEL_16:
        *(_DWORD *)(a2 + 16) = v17;
        return (unsigned int)v6;
      }
      if ( v17 != 4 )
      {
        if ( v17 )
        {
          v19 = v17;
          *(_WORD *)((char *)v2 + v17) = *((_WORD *)v13 + 20);
          memmove((char *)v2 + v17 + 2, v13[6], *((unsigned __int16 *)v13 + 20));
          v20 = *(_QWORD *)(v9 + 64);
          if ( *(_DWORD *)v20 != 1 )
            v9 = *(_QWORD *)(v20 + 32);
          while ( (unsigned __int64)(v2 + 6) <= *(_QWORD *)(a2 + 24) + (unsigned __int64)*(unsigned int *)(a2 + 16) )
          {
            v21 = v2[4];
            if ( !v21
              || (unsigned __int64)&v2[8 * v21 - 2] > *(_QWORD *)(a2 + 24)
                                                    + (unsigned __int64)*(unsigned int *)(a2 + 16) )
            {
              break;
            }
            v22 = 0;
            v2[2] = v19;
            do
            {
              v23 = 8LL * v22;
              v24 = v2[v23 + 10];
              if ( (v24 & 0xC) != 0 )
              {
                *(_QWORD *)&v2[v23 + 12] = v9;
                v2[v23 + 10] = v24 & 0xFFFFFFD3 | 0x20;
              }
              ++v22;
            }
            while ( v22 < v2[4] );
            v25 = v2[1];
            if ( !(_DWORD)v25 )
              break;
            v19 -= v25;
            v2 = (unsigned int *)((char *)v2 + v25);
          }
          v17 += v5;
          *v2 = v17;
        }
        goto LABEL_16;
      }
    }
    *v2 += v5;
    v17 = 4;
    v6 = -1073741789;
    goto LABEL_16;
  }
  return 3221225473LL;
}
