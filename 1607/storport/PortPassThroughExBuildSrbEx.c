/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C005FFF4
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0060374 (PortPassThroughExSendAsync.c)
 * Callees:
 *     RtlULongAdd @ 0x1C00166B8 (RtlULongAdd.c)
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(IRP *a1, __int64 a2, __int64 a3, __int64 a4, ULONG ulAugend, __int64 a6)
{
  PVOID v7; // r12
  int v8; // r13d
  int v9; // r9d
  unsigned int v10; // edx
  ULONG v11; // r9d
  ULONG v12; // r14d
  NTSTATUS v14; // esi
  __int64 v15; // r10
  ULONG v16; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // rbx
  unsigned __int8 v19; // al
  PVOID v20; // rax
  char v21; // al
  __int16 IoPriorityHint; // ax
  __int64 v23; // rsi
  __int64 v24; // r15
  unsigned int v25; // eax
  char *v26; // rcx
  void *v27; // rcx
  int v28; // eax
  char *v29; // rcx
  __int64 v30; // rax
  ULONG pulResult; // [rsp+78h] [rbp+10h] BYREF
  __int64 v33; // [rsp+80h] [rbp+18h]
  __int64 v34; // [rsp+88h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  v7 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v8 = 136;
    v9 = 160;
  }
  else
  {
    v8 = 128;
    v9 = 128;
  }
  v10 = *(_DWORD *)(a2 + 8);
  v11 = v9 + 16;
  ulAugend = v11;
  if ( v10 > 0x10 )
  {
    if ( v10 > 0x20 )
    {
      if ( RtlULongAdd(0x28u, v10 - 1, &pulResult) < 0 )
        return 0LL;
      v12 = 8 * ((pulResult - 1) >> 3) + 8;
    }
    else
    {
      v12 = 56;
    }
  }
  else
  {
    v12 = 40;
  }
  v14 = RtlULongAdd(v11, v12, &ulAugend);
  if ( v14 < 0 )
    return 0LL;
  if ( a6 != v15 )
  {
    v14 = RtlULongAdd(ulAugend, 0x20u, &ulAugend);
    if ( v14 < 0 )
      return 0LL;
  }
  v16 = ulAugend;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ulAugend, 0x69506C50u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = -1073741670;
LABEL_22:
    if ( v14 < 0 )
      return v18;
    v18[5] = 0;
    *v18 = 2621448;
    v18[2] = 1397899864;
    v18[3] = 1;
    v18[4] = v16;
    v21 = *(_BYTE *)(a2 + 18);
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        v18[6] = 64;
      }
      else if ( v21 == 3 )
      {
        v18[6] = 192;
      }
    }
    else
    {
      v18[6] = 128;
    }
    if ( !v7 )
      v18[6] |= 0x20u;
    v18[6] |= 0x100u;
    IoPriorityHint = IoGetIoPriorityHint(a1);
    v23 = a6;
    *((_WORD *)v18 + 18) = IoPriorityHint;
    v18[10] = *(_DWORD *)(a2 + 20);
    v18[13] = v8;
    v18[14] = (v8 != 128) + 1;
    if ( v23 )
      v18[14] = (v8 != 128) + 2;
    v24 = v34;
    if ( *(_BYTE *)(a2 + 18) == 1 )
    {
      v18[15] = *(_DWORD *)(a2 + 36);
      *((_QWORD *)v18 + 8) = v24;
    }
    else
    {
      v18[15] = *(_DWORD *)(a2 + 32);
      *((_QWORD *)v18 + 8) = v33;
    }
    *((_QWORD *)v18 + 10) = a1;
    v18[30] = v8 + 16;
    if ( v18[14] >= 2u )
      v18[31] = v12 + v8 + 16;
    if ( v18[14] == 3 )
      v18[32] = v18[31] + 24;
    *(_OWORD *)((char *)v18 + (unsigned int)v18[13]) = *(_OWORD *)((char *)&a1->AssociatedIrp.MasterIrp->Type
                                                                 + *(unsigned int *)(a2 + 24));
    v25 = *(_DWORD *)(a2 + 8);
    v26 = (char *)v18 + (unsigned int)v18[30];
    if ( v25 > 0x10 )
    {
      if ( v25 > 0x20 )
      {
        *(_DWORD *)v26 = 66;
        v28 = *(_DWORD *)(a2 + 8) + 24;
        v26[8] = 0;
        *((_DWORD *)v26 + 1) = v28;
        v26[9] = *(_BYTE *)(a2 + 17);
        *((_DWORD *)v26 + 3) = *(_DWORD *)(a2 + 8);
        *((_QWORD *)v26 + 3) = v7;
        v27 = v26 + 32;
        goto LABEL_46;
      }
      *(_DWORD *)v26 = 65;
      *((_DWORD *)v26 + 1) = 48;
    }
    else
    {
      *(_DWORD *)v26 = 64;
      *((_DWORD *)v26 + 1) = 32;
    }
    v26[8] = 0;
    v26[9] = *(_BYTE *)(a2 + 17);
    v26[10] = *(_BYTE *)(a2 + 8);
    *((_QWORD *)v26 + 2) = v7;
    v27 = v26 + 24;
LABEL_46:
    memmove(v27, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
    if ( v18[14] >= 2u )
    {
      v29 = (char *)v18 + (unsigned int)v18[31];
      *(_DWORD *)v29 = 1;
      *((_DWORD *)v29 + 1) = 16;
      *((_DWORD *)v29 + 2) = *(_DWORD *)(a2 + 36);
      *((_QWORD *)v29 + 2) = v24;
    }
    if ( v18[14] == 3 )
    {
      v30 = (unsigned int)v18[32];
      *(_DWORD *)((char *)v18 + v30) = 160;
      *(_DWORD *)((char *)v18 + v30 + 4) = 24;
      *(_QWORD *)((char *)v18 + v30 + 8) = v23;
    }
    return v18;
  }
  memset(PoolWithTag, 0, v16);
  v19 = *(_BYTE *)(a2 + 17);
  if ( !v19 )
    goto LABEL_22;
  v20 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v19, 0x69506C50u);
  v7 = v20;
  if ( v20 )
  {
    memset(v20, 0, *(unsigned __int8 *)(a2 + 17));
    goto LABEL_22;
  }
  ExFreePoolWithTag(v18, 0x69506C50u);
  return 0LL;
}
