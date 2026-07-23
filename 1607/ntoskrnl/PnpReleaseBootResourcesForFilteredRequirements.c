/*
 * XREFs of PnpReleaseBootResourcesForFilteredRequirements @ 0x1401CDF28
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x14055B87C (IopReleaseFilteredBootResources.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x14055684C (IopFreeReqList.c)
 *     IopResourceRequirementsListToReqList @ 0x140556FA0 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x1405579B4 (IopCallArbiter.c)
 *     PnpCmResourcesToIoResources @ 0x140557F1C (PnpCmResourcesToIoResources.c)
 */

__int64 __fastcall PnpReleaseBootResourcesForFilteredRequirements(__int64 *a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // ebx
  void *v8; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // r8d
  __int64 i; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // [rsp+38h] [rbp-59h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-51h]
  int v26; // [rsp+48h] [rbp-49h]
  __int64 v27; // [rsp+50h] [rbp-41h]
  __int64 v28; // [rsp+58h] [rbp-39h]
  int v29; // [rsp+60h] [rbp-31h]
  int v30; // [rsp+64h] [rbp-2Dh]
  __int64 v31; // [rsp+68h] [rbp-29h]
  __int64 v32; // [rsp+80h] [rbp-11h]
  _QWORD v33[8]; // [rsp+98h] [rbp+7h] BYREF

  v2 = 0LL;
  memset(v33, 0, sizeof(v33));
  v4 = *a1;
  if ( *a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(v5 + 544);
  if ( !v6 || (v10 = PnpCmResourcesToIoResources(v3, v6, 1LL), (v2 = (void *)v10) == 0LL) )
  {
    v7 = -1073741823;
LABEL_6:
    v8 = (void *)v33[4];
    goto LABEL_7;
  }
  HIDWORD(v33[1]) = 4;
  v33[3] = v10;
  v33[0] = v4;
  v7 = IopResourceRequirementsListToReqList(v33, &v33[4]);
  if ( v7 < 0 )
    goto LABEL_6;
  v8 = (void *)v33[4];
  if ( !v33[4] )
    goto LABEL_9;
  v11 = *(_QWORD *)(v33[4] + 40LL);
  v7 = 0;
  v12 = a1[4];
  v13 = 0LL;
  v14 = **(_QWORD **)(v12 + 16);
  v26 = 0;
  v27 = 0LL;
  v15 = *(_QWORD *)(v5 + 32);
  v30 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v28 = v15;
  v29 = 4;
  if ( *(_DWORD *)(v11 + 20) )
  {
    do
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v11 + 8 * v13 + 24) + 288LL);
      if ( v16 )
      {
        v17 = *(_DWORD *)(v14 + 20);
        for ( i = 0LL; (unsigned int)i < v17; i = (unsigned int)(i + 1) )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(v14 + 8 * i + 24) + 288LL);
          if ( v19 && *(_BYTE *)(v16 + 16) == *(_BYTE *)(v19 + 16) )
            break;
        }
        if ( (_DWORD)i == v17 )
        {
          v25 = &v24;
          v24 = (__int64)&v24;
          v20 = *(_QWORD **)(v16 + 48);
          if ( *v20 != v16 + 40 )
            __fastfail(3u);
          v25 = *(__int64 **)(v16 + 48);
          v24 = v16 + 40;
          *v20 = &v24;
          *(_QWORD *)(v16 + 48) = &v24;
          v21 = IopCallArbiter(v16, 0LL);
          v22 = v24;
          v7 = v21;
          v23 = v25;
          if ( *(__int64 **)(v24 + 8) != &v24 || (__int64 *)*v25 != &v24 )
            __fastfail(3u);
          *v25 = v24;
          *(_QWORD *)(v22 + 8) = v23;
          if ( v7 < 0 )
            break;
          v7 = IopCallArbiter(v16, 2LL);
          if ( v7 < 0 )
            break;
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)(v11 + 20) );
    goto LABEL_6;
  }
LABEL_7:
  if ( v8 )
    IopFreeReqList(v8);
LABEL_9:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v7;
}
