/*
 * XREFs of PortPassThroughExMarshalResultsFromSrbEx @ 0x1C003CC94
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C003D3CC (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     PortPassThroughExApplyNormalizedRequest @ 0x1C003CB3C (PortPassThroughExApplyNormalizedRequest.c)
 *     PortPassThroughExNormalize @ 0x1C003CE50 (PortPassThroughExNormalize.c)
 */

void __fastcall PortPassThroughExMarshalResultsFromSrbEx(PIRP Irp, __int64 a2, char a3, __int64 a4)
{
  _IRP *MasterIrp; // rax
  SIZE_T v9; // r12
  unsigned int *PoolWithTag; // rax
  unsigned __int8 *v11; // rbx
  int v12; // edi
  unsigned __int8 v13; // r14
  unsigned __int8 v14; // cl
  const void *v15; // r9
  unsigned int Length; // r8d
  int *v17; // rax
  int v18; // edx
  char *v19; // rax
  unsigned __int8 v20; // cl
  unsigned int v21; // eax
  unsigned __int8 v22; // al
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // [rsp+50h] [rbp+8h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  *(_QWORD *)(a4 + 8) = 0LL;
  v9 = (unsigned int)(LODWORD(MasterIrp->MdlAddress) + 63);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x69506C50u);
  v11 = (unsigned __int8 *)PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = PortPassThroughExNormalize(PoolWithTag, Irp);
    if ( v12 < 0 )
    {
LABEL_35:
      ExFreePoolWithTag(v11, 0x69506C50u);
      goto LABEL_36;
    }
    v13 = 0;
    v12 = *(_DWORD *)a4;
    v14 = 0;
    v15 = 0LL;
    Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    v17 = (int *)(a2 + *(unsigned int *)(a2 + 120));
    v25 = Length;
    v18 = *v17;
    if ( *v17 == 64 || v18 == 65 )
    {
      v15 = (const void *)*((_QWORD *)v17 + 2);
    }
    else
    {
      if ( v18 != 66 )
      {
LABEL_10:
        v11[16] = v13;
        if ( *(char *)(a2 + 3) >= 0 )
        {
          v11[17] = 0;
        }
        else
        {
          if ( v11[17] )
          {
            v19 = (char *)Irp->AssociatedIrp.MasterIrp + *((unsigned int *)v11 + 7);
            if ( v19 )
            {
              v11[17] = v14;
              memmove(v19, v15, v14);
              Length = v25;
            }
          }
          v12 = 0;
        }
        v20 = v11[18];
        v21 = *(_DWORD *)(a2 + 60);
        if ( (*(_BYTE *)(a2 + 3) & 0x3F) == 0x12 )
          v12 = 0;
        if ( v20 == 1 )
        {
          *((_DWORD *)v11 + 9) = v21;
        }
        else
        {
          *((_DWORD *)v11 + 8) = v21;
          if ( v20 == 3 && v21 && *((_DWORD *)v11 + 9) )
            *((_DWORD *)v11 + 9) = *(_DWORD *)(*(unsigned int *)(a2 + 124) + a2 + 8);
        }
        v22 = v11[17];
        if ( v22 )
        {
          *(_QWORD *)(a4 + 8) = *((_DWORD *)v11 + 7) + (unsigned int)v22;
        }
        else
        {
          *(_QWORD *)(a4 + 8) = v9;
          if ( v12 < 0 && v13 )
          {
            v12 = 0;
            *(_QWORD *)(a4 + 8) = 8LL;
          }
        }
        if ( !a3 )
        {
          v23 = *((_QWORD *)v11 + 6);
          if ( v23 )
            *(_QWORD *)(a4 + 8) = v23 + *((unsigned int *)v11 + 9);
        }
        v24 = Length;
        if ( *(_QWORD *)(a4 + 8) < (unsigned __int64)Length )
          v24 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)(a4 + 8) = v24;
        PortPassThroughExApplyNormalizedRequest((__int128 *)v11, Irp);
        goto LABEL_35;
      }
      v15 = (const void *)*((_QWORD *)v17 + 3);
    }
    v13 = *((_BYTE *)v17 + 8);
    v14 = *((_BYTE *)v17 + 9);
    goto LABEL_10;
  }
  v12 = -1073741670;
LABEL_36:
  *(_DWORD *)a4 = v12;
}
