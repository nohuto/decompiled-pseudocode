/*
 * XREFs of PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0043DAC
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C004454C (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     PortPassThroughExApplyNormalizedRequest @ 0x1C0043C28 (PortPassThroughExApplyNormalizedRequest.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0043D94 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExNormalize @ 0x1C0043F80 (PortPassThroughExNormalize.c)
 */

void __fastcall PortPassThroughExMarshalResultsFromSrbEx(PIRP Irp, __int64 a2, char a3, __int64 a4)
{
  NTSTATUS BasicStructureSize; // edi
  __int64 v9; // r12
  unsigned __int8 *PoolWithTag; // rbx
  unsigned __int8 v11; // r14
  unsigned __int8 v12; // cl
  const void *v13; // r9
  unsigned int Length; // r8d
  int *v15; // rax
  int v16; // edx
  char *v17; // rax
  unsigned __int8 v18; // cl
  unsigned int v19; // eax
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  __int64 v22; // rcx
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  BasicStructureSize = PortPassThroughExGetBasicStructureSize((__int64)Irp, (ULONG *)&NumberOfBytes);
  if ( BasicStructureSize < 0 )
    goto LABEL_39;
  v9 = (unsigned int)NumberOfBytes;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x69506C50u);
  if ( !PoolWithTag )
    BasicStructureSize = -1073741670;
  if ( BasicStructureSize >= 0 )
  {
    BasicStructureSize = PortPassThroughExNormalize(PoolWithTag, Irp);
    if ( BasicStructureSize >= 0 )
    {
      v11 = 0;
      BasicStructureSize = *(_DWORD *)a4;
      v12 = 0;
      v13 = 0LL;
      Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
      v15 = (int *)(a2 + *(unsigned int *)(a2 + 120));
      LODWORD(NumberOfBytes) = Length;
      v16 = *v15;
      if ( *v15 == 64 || v16 == 65 )
      {
        v13 = (const void *)*((_QWORD *)v15 + 2);
      }
      else
      {
        if ( v16 != 66 )
        {
LABEL_12:
          PoolWithTag[16] = v11;
          if ( *(char *)(a2 + 3) >= 0 )
          {
            PoolWithTag[17] = 0;
          }
          else
          {
            if ( PoolWithTag[17] )
            {
              v17 = (char *)Irp->AssociatedIrp.MasterIrp + *((unsigned int *)PoolWithTag + 7);
              if ( v17 )
              {
                PoolWithTag[17] = v12;
                memmove(v17, v13, v12);
                Length = NumberOfBytes;
              }
            }
            BasicStructureSize = 0;
          }
          v18 = PoolWithTag[18];
          v19 = *(_DWORD *)(a2 + 60);
          if ( (*(_BYTE *)(a2 + 3) & 0x3F) == 0x12 )
            BasicStructureSize = 0;
          if ( v18 == 1 )
          {
            *((_DWORD *)PoolWithTag + 9) = v19;
          }
          else
          {
            *((_DWORD *)PoolWithTag + 8) = v19;
            if ( v18 == 3 && v19 && *((_DWORD *)PoolWithTag + 9) )
              *((_DWORD *)PoolWithTag + 9) = *(_DWORD *)(*(unsigned int *)(a2 + 124) + a2 + 8);
          }
          v20 = PoolWithTag[17];
          if ( v20 )
          {
            *(_QWORD *)(a4 + 8) = *((_DWORD *)PoolWithTag + 7) + (unsigned int)v20;
          }
          else
          {
            *(_QWORD *)(a4 + 8) = v9;
            if ( BasicStructureSize < 0 && v11 )
            {
              BasicStructureSize = 0;
              *(_QWORD *)(a4 + 8) = 8LL;
            }
          }
          if ( !a3 )
          {
            v21 = *((_QWORD *)PoolWithTag + 6);
            if ( v21 )
              *(_QWORD *)(a4 + 8) = v21 + *((unsigned int *)PoolWithTag + 9);
          }
          v22 = Length;
          if ( *(_QWORD *)(a4 + 8) < (unsigned __int64)Length )
            v22 = *(_QWORD *)(a4 + 8);
          *(_QWORD *)(a4 + 8) = v22;
          PortPassThroughExApplyNormalizedRequest((__int128 *)PoolWithTag, Irp);
          goto LABEL_37;
        }
        v13 = (const void *)*((_QWORD *)v15 + 3);
      }
      v11 = *((_BYTE *)v15 + 8);
      v12 = *((_BYTE *)v15 + 9);
      goto LABEL_12;
    }
  }
LABEL_37:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
LABEL_39:
  *(_DWORD *)a4 = BasicStructureSize;
}
