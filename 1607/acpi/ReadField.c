/*
 * XREFs of ReadField @ 0x1C0015220
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     AccFieldUnit @ 0x1C0014F20 (AccFieldUnit.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ReadObject @ 0x1C001ECD0 (ReadObject.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x1C002039C (NewLocalHeap.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x1C005DA7C (RawFieldAccess.c)
 */

__int64 __fastcall ReadField(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 v8; // rsi
  unsigned int v9; // r12d
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned int v17; // r13d
  __int64 v18; // rbx
  unsigned int v19; // r14d
  __int64 v20; // rbp
  _QWORD *v21; // rcx
  _DWORD *v22; // r9
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // eax
  int v34; // eax
  int ObjectTypeName; // edx
  int v36; // ecx
  __int64 v37; // r8
  void *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-48h]
  __int64 v40; // [rsp+38h] [rbp-40h]
  __int64 v43; // [rsp+90h] [rbp+18h] BYREF

  v6 = a2;
  if ( (a3[3] & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
      return (unsigned int)RawFieldAccess(a1, 0LL, a2);
    v17 = -1072431087;
    LogError(3222536209LL);
    AcpiDiagTraceAmlError(a1, 3222536209LL);
    ObjectTypeName = a3[3];
    v36 = 162;
    goto LABEL_77;
  }
  v8 = 0LL;
  LODWORD(v43) = 0;
  v9 = 8;
  if ( ghGetAcpiTableVersion
    && (((void (__fastcall *)(__int64, __int64 *))ghGetAcpiTableVersion)(1413763908LL, &v43), (unsigned int)v43 >= 2) )
  {
    v10 = 8;
  }
  else
  {
    v10 = 4;
  }
  if ( !*(_WORD *)(a4 + 2) )
  {
    if ( (a3[3] & 0x10000) == 0 && a3[2] <= (unsigned int)(8 * v10) )
    {
      *(_WORD *)(a4 + 2) = 1;
      v11 = a4 + 16;
      v9 = v10;
      goto LABEL_9;
    }
    *(_WORD *)(a4 + 2) = 3;
    v37 = (unsigned int)(a3[2] + 7) >> 3;
    *(_DWORD *)(a4 + 24) = v37;
    v38 = (void *)HeapAlloc(gpheapGlobal, 1179992648LL, v37);
    *(_QWORD *)(a4 + 32) = v38;
    if ( !v38 )
    {
      v17 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      ObjectTypeName = *(_DWORD *)(a4 + 24);
      v36 = 161;
      goto LABEL_77;
    }
    memset(v38, 0, *(unsigned int *)(a4 + 24));
    goto LABEL_68;
  }
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v11 = a4 + 16;
    goto LABEL_9;
  }
  if ( *(_WORD *)(a4 + 2) != 2 )
  {
    if ( *(_WORD *)(a4 + 2) == 3 )
    {
LABEL_68:
      v9 = *(_DWORD *)(a4 + 24);
      goto LABEL_69;
    }
    v17 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
    v36 = 163;
LABEL_77:
    PrintDebugMessage(v36, ObjectTypeName, 0, 0, 0LL);
    return v17;
  }
  v9 = *(_DWORD *)(a4 + 24) - 1;
LABEL_69:
  v11 = *(_QWORD *)(a4 + 32);
LABEL_9:
  v39 = v11;
  if ( *(_WORD *)(v6 + 2) == 5 )
  {
    v12 = **(_QWORD **)(v6 + 32);
    if ( *(_WORD *)(v12 + 66) == 131 )
    {
      v13 = gpRSAccessHead;
      if ( gpRSAccessHead )
      {
        while ( *(_DWORD *)(v13 + 8) != *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v12 + 96) + 96LL) + 12LL) )
        {
          v13 = *(_QWORD *)v13;
          if ( !v13 )
            goto LABEL_17;
        }
        if ( v13 && *(_QWORD *)(v13 + 32) && !*(_QWORD *)(v13 + 16) )
          return (unsigned int)RawFieldAccess(a1, 0LL, v6);
      }
    }
  }
LABEL_17:
  v14 = 128;
  if ( a3[5] )
    v14 = a3[7] + 128;
  v15 = a1 + 440;
  v40 = 0LL;
  v16 = v14 + 16;
  v17 = 0;
  v18 = 0LL;
  if ( v14 + 16 < v14 )
    goto LABEL_73;
  if ( v16 < 0x20 )
    v16 = 32;
  if ( v16 + 7 < v16 )
    goto LABEL_73;
  v19 = (v16 + 7) & 0xFFFFFFF8;
  byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  if ( v19 > *(_DWORD *)(v15 + 8) - (int)v15 - 56 )
    goto LABEL_33;
  v20 = v15;
  v43 = v15;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v20 + 40) - 16LL;
    v21 = *(_QWORD **)(v20 + 40);
    if ( (_QWORD *)(v20 + 40) == v21 )
    {
LABEL_26:
      v18 = 0LL;
    }
    else
    {
      while ( v19 > *(_DWORD *)(v18 + 4) )
      {
        v18 = *v21 - 16LL;
        v21 = (_QWORD *)*v21;
        if ( (_QWORD *)(v20 + 40) == v21 )
          goto LABEL_26;
      }
    }
    if ( v18 )
      break;
    if ( v19 <= *(_DWORD *)(v20 + 8) - *(_DWORD *)(v20 + 32) )
    {
      v18 = *(_QWORD *)(v20 + 32);
      *(_QWORD *)(v20 + 32) = v18 + v19;
      *(_DWORD *)(v18 + 4) = v19;
      goto LABEL_30;
    }
    v40 = v20;
    v20 = *(_QWORD *)(v20 + 24);
    v43 = v20;
    if ( !v20 )
      goto LABEL_30;
  }
  v30 = *(_QWORD *)(v18 + 16);
  v31 = *(_QWORD **)(v18 + 24);
  if ( *(_QWORD *)(v30 + 8) != v18 + 16 || *v31 != v18 + 16 )
    __fastfail(3u);
  *v31 = v30;
  *(_QWORD *)(v30 + 8) = v31;
  if ( *(unsigned int *)(v18 + 4) >= (unsigned __int64)v19 + 32 )
  {
    v32 = v18 + v19;
    *(_DWORD *)v32 = 0;
    v33 = *(_DWORD *)(v18 + 4) - v19;
    *(_QWORD *)(v32 + 8) = v20;
    *(_DWORD *)(v32 + 4) = v33;
    *(_DWORD *)(v18 + 4) = v19;
    HeapInsertFreeList(v20);
  }
LABEL_30:
  if ( !v18 )
  {
    if ( v15 == gpheapGlobal )
      v34 = NewGlobalHeap(&v43);
    else
      v34 = NewLocalHeap(&v43);
    if ( v34 )
      goto LABEL_32;
    v20 = v43;
    *(_QWORD *)(v43 + 16) = v15;
    *(_QWORD *)(v40 + 24) = v20;
    v18 = *(_QWORD *)(v20 + 32);
    *(_QWORD *)(v20 + 32) = v18 + v19;
    *(_DWORD *)(v18 + 4) = v19;
  }
  *(_DWORD *)v18 = 1297237576;
  *(_QWORD *)(v18 + 8) = v20;
  memset((void *)(v18 + 16), 0, v19 - 16LL);
LABEL_32:
  v6 = a2;
LABEL_33:
  KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
  if ( !v18 || (v22 = (_DWORD *)(v18 + 16), v18 == -16) )
  {
LABEL_73:
    v17 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    ObjectTypeName = 0;
    v36 = 153;
    goto LABEL_77;
  }
  *(_QWORD *)(v18 + 24) = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v22;
  *(_QWORD *)(v18 + 40) = ReadFieldObj;
  *v22 = 1330004801;
  *(_QWORD *)(v18 + 48) = v6;
  *(_QWORD *)(v18 + 56) = v39;
  *(_QWORD *)(v18 + 64) = v39 + v9;
  v23 = a3[3] & 0xF;
  v24 = 1;
  if ( (unsigned int)(v23 - 1) <= 3 )
    v24 = 1 << (v23 - 1);
  v25 = 8 * v24;
  *(_DWORD *)(v18 + 72) = v24;
  v26 = 8 * v24 + a3[2] + a3[1] - 1;
  if ( v25 == 8 )
    v27 = v26 >> 3;
  else
    v27 = v26 / v25;
  *(_DWORD *)(v18 + 76) = v27;
  v28 = 8 * *(_DWORD *)(v18 + 72);
  if ( v28 < 0x40 )
    v8 = 1LL << v28;
  *(_QWORD *)(v18 + 80) = v8 - 1;
  *(_DWORD *)(v18 + 88) = 8 * *(_DWORD *)(v18 + 72) - a3[1];
  *(_DWORD *)(v18 + 92) = a3[1];
  memmove((void *)(v18 + 112), a3, (unsigned int)(a3[7] + 32));
  return v17;
}
