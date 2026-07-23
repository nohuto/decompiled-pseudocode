/*
 * XREFs of CmpLightWeightPrepareSetSecDescUoW @ 0x14060F6D8
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1401B63F8 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpGetSecurityDescriptorNode @ 0x1403FC310 (CmpGetSecurityDescriptorNode.c)
 *     HvMarkCellDirty @ 0x1403FC340 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetSecDescUoW(__int64 a1)
{
  _DWORD *v2; // r14
  __int64 v3; // rax
  __int64 v4; // r15
  ULONG_PTR v5; // rdi
  unsigned int v6; // r12d
  _QWORD *PoolWithTag; // rsi
  int SecurityDescriptorNode; // ebx
  __int64 v9; // r13
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // r12d
  ULONG_PTR v13; // rdx
  _DWORD v15[2]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v16[4]; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+50h]
  unsigned int v19; // [rsp+A0h] [rbp+58h]
  int v20; // [rsp+A8h] [rbp+60h] BYREF
  int v21; // [rsp+ACh] [rbp+64h]

  v15[1] = 0;
  v15[0] = -1;
  v20 = -1;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 48);
  v16[0] = -1;
  v4 = 0LL;
  v21 = 0;
  v16[1] = 0;
  v5 = *(_QWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v3 + 32);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x77554D43u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *PoolWithTag = 0LL;
  *(_DWORD *)PoolWithTag = -1;
  PoolWithTag[1] = v5;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v6, v15);
  if ( !v9 )
    goto LABEL_4;
  if ( !(unsigned __int8)HvMarkCellDirty(v5, v6) )
    goto LABEL_13;
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(a1 + 88), &v20);
  if ( !v2
    || (v10 = *(_DWORD *)(v9 + 44),
        v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v10, v16),
        (v4 = v11) == 0) )
  {
LABEL_4:
    SecurityDescriptorNode = -1073741670;
LABEL_14:
    v13 = *(unsigned int *)PoolWithTag;
    if ( (_DWORD)v13 != -1 )
      CmpDereferenceSecurityNode(PoolWithTag[1], v13);
    ExFreePoolWithTag(PoolWithTag, 0x77554D43u);
    goto LABEL_17;
  }
  v18 = *(_DWORD *)(v11 + 8);
  v19 = *(_DWORD *)(v11 + 4);
  if ( !(unsigned __int8)HvMarkCellDirty(v5, v10)
    || !(unsigned __int8)HvMarkCellDirty(v5, v18)
    || !(unsigned __int8)HvMarkCellDirty(v5, v19) )
  {
LABEL_13:
    SecurityDescriptorNode = -1073741443;
    goto LABEL_14;
  }
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(v5, v6, v9, v2 + 5, 1, (__int64)PoolWithTag);
  if ( SecurityDescriptorNode < 0 )
    goto LABEL_14;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v20);
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)PoolWithTag, &v20);
  v12 = v2[1];
  HvMarkCellDirty(v5, (unsigned int)v2[2]);
  HvMarkCellDirty(v5, v12);
  SecurityDescriptorNode = 0;
  *(_QWORD *)(a1 + 104) = PoolWithTag;
LABEL_17:
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v15);
  if ( v2 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v20);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v16);
  return (unsigned int)SecurityDescriptorNode;
}
