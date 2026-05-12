/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C0058994
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0058C50 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(PIRP Irp, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID v4; // rbp
  int v7; // esi
  int v8; // r13d
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rbx
  unsigned __int8 v15; // al
  PVOID v16; // rax
  char v17; // al
  unsigned int v18; // eax
  char *v19; // rcx
  void *v20; // rcx
  int v21; // eax
  char *v22; // rcx

  v4 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v7 = 160;
    v8 = 136;
  }
  else
  {
    v8 = 128;
    v7 = 128;
  }
  v9 = *(_DWORD *)(a2 + 8);
  v10 = v7 + 16;
  if ( v9 > 0x10 )
  {
    if ( v9 > 0x20 )
      v11 = 8 * ((v9 + 38) >> 3) + 8;
    else
      v11 = 56;
  }
  else
  {
    v11 = 40;
  }
  v12 = v11 + v10;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x69506C50u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v12);
    v15 = *(_BYTE *)(a2 + 17);
    if ( v15 )
    {
      v16 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v15, 0x69506C50u);
      v4 = v16;
      if ( !v16 )
      {
        ExFreePoolWithTag(v14, 0x69506C50u);
        return 0LL;
      }
      memset(v16, 0, *(unsigned __int8 *)(a2 + 17));
    }
    *v14 = 2621448;
    v14[2] = 1397899864;
    v14[3] = 1;
    v14[4] = v12;
    v14[5] = 0;
    v17 = *(_BYTE *)(a2 + 18);
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        v14[6] = 64;
      }
      else if ( v17 == 3 )
      {
        v14[6] = 192;
      }
    }
    else
    {
      v14[6] = 128;
    }
    if ( !v4 )
      v14[6] |= 0x20u;
    v14[6] |= 0x100u;
    *((_WORD *)v14 + 18) = IoGetIoPriorityHint(Irp);
    v14[10] = *(_DWORD *)(a2 + 20);
    v14[13] = v8;
    v14[14] = (v8 != 128) + 1;
    if ( *(_BYTE *)(a2 + 18) == 1 )
    {
      v14[15] = *(_DWORD *)(a2 + 36);
      *((_QWORD *)v14 + 8) = a4;
    }
    else
    {
      v14[15] = *(_DWORD *)(a2 + 32);
      *((_QWORD *)v14 + 8) = a3;
    }
    *((_QWORD *)v14 + 10) = Irp;
    v14[30] = v8 + 16;
    if ( v14[14] == 2 )
      v14[31] = v11 + v8 + 16;
    *(_OWORD *)((char *)v14 + (unsigned int)v14[13]) = *(_OWORD *)((char *)&Irp->AssociatedIrp.MasterIrp->Type
                                                                 + *(unsigned int *)(a2 + 24));
    v18 = *(_DWORD *)(a2 + 8);
    v19 = (char *)v14 + (unsigned int)v14[30];
    if ( v18 > 0x10 )
    {
      if ( v18 > 0x20 )
      {
        *(_DWORD *)v19 = 66;
        v21 = *(_DWORD *)(a2 + 8) + 24;
        v19[8] = 0;
        *((_DWORD *)v19 + 1) = v21;
        v19[9] = *(_BYTE *)(a2 + 17);
        *((_DWORD *)v19 + 3) = *(_DWORD *)(a2 + 8);
        *((_QWORD *)v19 + 3) = v4;
        v20 = v19 + 32;
LABEL_35:
        memmove(v20, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
        if ( v14[14] == 2 )
        {
          v22 = (char *)v14 + (unsigned int)v14[31];
          *(_DWORD *)v22 = 1;
          *((_DWORD *)v22 + 1) = 16;
          *((_DWORD *)v22 + 2) = *(_DWORD *)(a2 + 36);
          *((_QWORD *)v22 + 2) = a4;
        }
        return v14;
      }
      *(_DWORD *)v19 = 65;
      *((_DWORD *)v19 + 1) = 48;
    }
    else
    {
      *(_DWORD *)v19 = 64;
      *((_DWORD *)v19 + 1) = 32;
    }
    v19[8] = 0;
    v19[9] = *(_BYTE *)(a2 + 17);
    v19[10] = *(_BYTE *)(a2 + 8);
    *((_QWORD *)v19 + 2) = v4;
    v20 = v19 + 24;
    goto LABEL_35;
  }
  return v14;
}
