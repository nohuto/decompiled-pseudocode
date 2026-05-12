/*
 * XREFs of StorpGetRequestInfo @ 0x1C001A1C8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetRequestInfo(__int64 a1, __int64 a2, __int16 *a3)
{
  char v4; // si
  __int64 v5; // rbp
  __int64 v6; // rax
  __int16 v7; // ax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // al

  v4 = 0;
  v5 = 0LL;
  if ( !a2 || !a3 )
    return 3238002694LL;
  if ( (unsigned __int16)(*a3 - 1) > 1u )
    return 3238002699LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v9 = *(_QWORD *)(a2 + 96);
    if ( !v9 || *(_DWORD *)v9 != 523124044 || (v10 = *(_QWORD *)(v9 + 768)) == 0 )
    {
      v10 = *(_QWORD *)(a2 + 80);
      goto LABEL_19;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 48);
    if ( !v6 || *(_DWORD *)v6 != 523124044 )
      goto LABEL_7;
    v10 = *(_QWORD *)(v6 + 768);
    if ( !v10 )
    {
      v10 = *(_QWORD *)(v6 + 176);
LABEL_19:
      if ( !v10 )
        goto LABEL_7;
    }
  }
  if ( (*(_DWORD *)(v10 + 16) & 8) == 0 || (v10 = *(_QWORD *)(v10 + 24)) != 0 )
  {
    *((_DWORD *)a3 + 1) = IoGetIoPriorityHint((PIRP)v10);
    *((_DWORD *)a3 + 2) = 0;
    *((_DWORD *)a3 + 2) = (*(_BYTE *)(v10 + 16) & 1) != 0;
    if ( (*(_DWORD *)(v10 + 16) & 0x42) != 0 )
      *((_DWORD *)a3 + 2) |= 2u;
    v11 = *(_QWORD *)(v10 + 192);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 80) & 0x20) != 0 )
        *((_DWORD *)a3 + 2) |= 4u;
      if ( (*(_DWORD *)(v11 + 80) & 0x18000) != 0 )
        *((_DWORD *)a3 + 2) |= 8u;
      if ( (*(_DWORD *)(v11 + 80) & 0x10) != 0 )
        *((_DWORD *)a3 + 2) |= 0x10u;
      v5 = v11 + 88;
    }
    else
    {
      *((_DWORD *)a3 + 2) |= 0x40u;
    }
    v12 = *(_QWORD *)(v10 + 184);
    if ( v12 )
    {
      if ( *(_BYTE *)v12 == 3 )
      {
        *((_DWORD *)a3 + 3) = *(_DWORD *)(v12 + 16);
        *((_DWORD *)a3 + 4) = *(_DWORD *)(v12 + 8);
LABEL_37:
        *((_BYTE *)a3 + 20) = 0;
        goto LABEL_38;
      }
      if ( *(_BYTE *)v12 == 4 )
      {
        *((_DWORD *)a3 + 3) = *(_DWORD *)(v12 + 16);
        *((_DWORD *)a3 + 4) = *(_DWORD *)(v12 + 8);
        *((_BYTE *)a3 + 20) = 1;
LABEL_38:
        if ( (*((_DWORD *)a3 + 3) & 0xFFFF0000) == 0x56530000 )
          *((_DWORD *)a3 + 2) |= 0x80u;
        if ( *a3 == 2 )
        {
          CurrentIrql = KeGetCurrentIrql();
          *((_QWORD *)a3 + 3) = v5;
          if ( CurrentIrql > 2u )
            *((_DWORD *)a3 + 8) = -1;
          else
            *((_DWORD *)a3 + 8) = IoGetRequestorProcessId((PIRP)v10);
        }
        goto LABEL_8;
      }
    }
    *(_QWORD *)(a3 + 6) = 0LL;
    goto LABEL_37;
  }
LABEL_7:
  v4 = 1;
LABEL_8:
  v7 = *a3;
  if ( *a3 == 1 || v7 == 2 )
    a3[1] = 40;
  if ( v4 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    *((_BYTE *)a3 + 20) = 0;
    *((_DWORD *)a3 + 4) = 0;
    *((_DWORD *)a3 + 1) = 2;
    if ( v7 == 2 )
    {
      *((_QWORD *)a3 + 3) = 0LL;
      *((_DWORD *)a3 + 8) = 0;
    }
  }
  return 0LL;
}
