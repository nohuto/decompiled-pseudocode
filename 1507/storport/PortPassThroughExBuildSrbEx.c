/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C0054A54
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0054D60 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RtlULongAdd @ 0x1C003038C (RtlULongAdd.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(IRP *a1, __int64 a2, __int64 a3, __int64 a4, ULONG a5)
{
  PVOID v5; // r15
  int v7; // r13d
  int v8; // r9d
  unsigned int v9; // edx
  ULONG v10; // r9d
  ULONG v11; // r14d
  NTSTATUS v13; // esi
  ULONG v14; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rbx
  unsigned __int8 v17; // al
  PVOID v18; // rax
  char v19; // al
  __int64 v20; // rbp
  unsigned int v21; // eax
  char *v22; // rcx
  void *v23; // rcx
  int v24; // eax
  char *v25; // rcx
  ULONG pulResult; // [rsp+78h] [rbp+10h] BYREF
  __int64 v28; // [rsp+80h] [rbp+18h]
  __int64 v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v5 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v7 = 136;
    v8 = 160;
  }
  else
  {
    v7 = 128;
    v8 = 128;
  }
  v9 = *(_DWORD *)(a2 + 8);
  v10 = v8 + 16;
  a5 = v10;
  if ( v9 > 0x10 )
  {
    if ( v9 > 0x20 )
    {
      if ( RtlULongAdd(0x28u, v9 - 1, &pulResult) < 0 )
        return 0LL;
      v11 = 8 * ((pulResult - 1) >> 3) + 8;
    }
    else
    {
      v11 = 56;
    }
  }
  else
  {
    v11 = 40;
  }
  v13 = RtlULongAdd(v10, v11, &a5);
  if ( v13 < 0 )
    return 0LL;
  v14 = a5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a5, 0x69506C50u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v13 = -1073741670;
LABEL_20:
    if ( v13 < 0 )
      return v16;
    v16[5] = 0;
    v16[4] = v14;
    *v16 = 2621448;
    v16[2] = 1397899864;
    v16[3] = 1;
    v19 = *(_BYTE *)(a2 + 18);
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v16[6] = 64;
      }
      else if ( v19 == 3 )
      {
        v16[6] = 192;
      }
    }
    else
    {
      v16[6] = 128;
    }
    if ( !v5 )
      v16[6] |= 0x20u;
    v16[6] |= 0x100u;
    *((_WORD *)v16 + 18) = IoGetIoPriorityHint(a1);
    v16[10] = *(_DWORD *)(a2 + 20);
    v16[13] = v7;
    v16[14] = (v7 != 128) + 1;
    v20 = v29;
    if ( *(_BYTE *)(a2 + 18) == 1 )
    {
      v16[15] = *(_DWORD *)(a2 + 36);
      *((_QWORD *)v16 + 8) = v20;
    }
    else
    {
      v16[15] = *(_DWORD *)(a2 + 32);
      *((_QWORD *)v16 + 8) = v28;
    }
    *((_QWORD *)v16 + 10) = a1;
    v16[30] = v7 + 16;
    if ( v16[14] == 2 )
      v16[31] = v11 + v7 + 16;
    *(_OWORD *)((char *)v16 + (unsigned int)v16[13]) = *(_OWORD *)((char *)&a1->AssociatedIrp.MasterIrp->Type
                                                                 + *(unsigned int *)(a2 + 24));
    v21 = *(_DWORD *)(a2 + 8);
    v22 = (char *)v16 + (unsigned int)v16[30];
    if ( v21 > 0x10 )
    {
      if ( v21 > 0x20 )
      {
        *(_DWORD *)v22 = 66;
        v24 = *(_DWORD *)(a2 + 8) + 24;
        v22[8] = 0;
        *((_DWORD *)v22 + 1) = v24;
        v22[9] = *(_BYTE *)(a2 + 17);
        *((_DWORD *)v22 + 3) = *(_DWORD *)(a2 + 8);
        *((_QWORD *)v22 + 3) = v5;
        v23 = v22 + 32;
LABEL_40:
        memmove(v23, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
        if ( v16[14] == 2 )
        {
          v25 = (char *)v16 + (unsigned int)v16[31];
          *(_DWORD *)v25 = 1;
          *((_DWORD *)v25 + 1) = 16;
          *((_DWORD *)v25 + 2) = *(_DWORD *)(a2 + 36);
          *((_QWORD *)v25 + 2) = v20;
        }
        return v16;
      }
      *(_DWORD *)v22 = 65;
      *((_DWORD *)v22 + 1) = 48;
    }
    else
    {
      *(_DWORD *)v22 = 64;
      *((_DWORD *)v22 + 1) = 32;
    }
    v22[8] = 0;
    v22[9] = *(_BYTE *)(a2 + 17);
    v22[10] = *(_BYTE *)(a2 + 8);
    *((_QWORD *)v22 + 2) = v5;
    v23 = v22 + 24;
    goto LABEL_40;
  }
  memset(PoolWithTag, 0, v14);
  v17 = *(_BYTE *)(a2 + 17);
  if ( !v17 )
    goto LABEL_20;
  v18 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v17, 0x69506C50u);
  v5 = v18;
  if ( v18 )
  {
    memset(v18, 0, *(unsigned __int8 *)(a2 + 17));
    goto LABEL_20;
  }
  ExFreePoolWithTag(v16, 0x69506C50u);
  return 0LL;
}
