/*
 * XREFs of PnprAddMemoryResources @ 0x140643D40
 * Callers:
 *     PnprAddDeviceResources @ 0x140643CCC (PnprAddDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1400B0050 (RtlCmDecodeMemIoResource.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnprAddMemoryResources(__int64 a1, void **a2)
{
  unsigned int *v2; // rbx
  unsigned int *v4; // r14
  __int64 v5; // rbp
  unsigned int *v6; // rbp
  SIZE_T v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // r15d
  _DWORD *v12; // rsi
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned int *PoolWithTag; // rax
  unsigned int *v16; // r13
  ULONGLONG v17; // rax
  unsigned int *v18; // rcx
  SIZE_T v20; // rcx
  int v21; // eax
  int v22; // eax
  unsigned int Size; // [rsp+70h] [rbp+8h]
  unsigned int v24; // [rsp+78h] [rbp+10h]
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+80h] [rbp+18h]
  unsigned __int64 Start; // [rsp+88h] [rbp+20h] BYREF

  v2 = (unsigned int *)*a2;
  v4 = (unsigned int *)*a2;
  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(unsigned int **)(v5 + 416);
  if ( !v6 )
  {
    v7 = PnprContext;
    v8 = 0;
    v9 = *(_DWORD *)(PnprContext + 10744);
    if ( !v9 )
      v9 = 636;
    *(_DWORD *)(PnprContext + 10744) = v9;
    v10 = *(_DWORD *)(v7 + 10748);
    if ( !v10 )
      v10 = 6;
    *(_DWORD *)(v7 + 10748) = v10;
LABEL_22:
    *a2 = v2;
    if ( v2 != v4 )
    {
      v18 = v4;
      goto LABEL_24;
    }
    return v8;
  }
  v11 = 0;
  v12 = v6 + 1;
  if ( !*v6 )
  {
LABEL_21:
    v8 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v13 = 0LL;
    if ( v12[3] )
      break;
LABEL_20:
    ++v11;
    v12 = (_DWORD *)((char *)v12 + (unsigned int)(v13 + 36));
    if ( v11 >= *v6 )
      goto LABEL_21;
  }
  while ( 1 )
  {
    Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)&v12[4 * v13 + 4 + v13];
    if ( ((Descriptor->Type - 3) & 0xFB) == 0 )
      break;
LABEL_19:
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= v12[3] )
      goto LABEL_20;
  }
  v14 = v2[1];
  if ( v14 != *v2 )
  {
LABEL_18:
    v17 = RtlCmDecodeMemIoResource(Descriptor, &Start);
    *(_QWORD *)&v2[4 * v2[1] + 4] = Start;
    *(_QWORD *)&v2[4 * v2[1] + 6] = v17;
    *((_QWORD *)v2 + 1) += v17;
    ++v2[1];
    goto LABEL_19;
  }
  v24 = v14 + 4;
  Size = 16 * (v14 + 1);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (v14 + 5), 0x51706E50u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v2, Size);
    *v16 = v24;
    if ( v2 != v4 )
      ExFreePoolWithTag(v2, 0x51706E50u);
    v2 = v16;
    goto LABEL_18;
  }
  v20 = PnprContext;
  v8 = -1073741670;
  v21 = *(_DWORD *)(PnprContext + 10744);
  if ( !v21 )
    v21 = 676;
  *(_DWORD *)(PnprContext + 10744) = v21;
  v22 = *(_DWORD *)(v20 + 10748);
  if ( !v22 )
    v22 = 10;
  *(_DWORD *)(v20 + 10748) = v22;
  *a2 = v4;
  if ( v2 != v4 )
  {
    v18 = v2;
LABEL_24:
    ExFreePoolWithTag(v18, 0x51706E50u);
  }
  return v8;
}
