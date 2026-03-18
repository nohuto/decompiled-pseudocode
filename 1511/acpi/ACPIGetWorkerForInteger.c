/*
 * XREFs of ACPIGetWorkerForInteger @ 0x1C001CBB0
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
 *     ACPIGetProcessorStatus @ 0x1C001CF80 (ACPIGetProcessorStatus.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0021214 (ACPIBuildSynchronizationRequestInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     ACPIGetConvertToClassCode @ 0x1C003BCE0 (ACPIGetConvertToClassCode.c)
 */

void __fastcall ACPIGetWorkerForInteger(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int *v4; // r13
  bool v6; // r12
  int v8; // edi
  __int64 v9; // r10
  int v10; // esi
  int v11; // ebp
  ULONG_PTR v12; // r15
  volatile signed __int64 v13; // rax
  volatile signed __int64 v14; // rdx
  _DWORD *v15; // rax
  KIRQL v16; // al
  __int64 v17; // rdi
  int v18; // r9d
  void (__fastcall *v19)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v20; // al
  _QWORD **v21; // r9
  void **v22; // r8
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  _DWORD *v26; // rax
  ULONG_PTR v27; // rax
  unsigned __int16 v28; // ax
  int v29; // eax
  __int64 v30; // rcx
  int v32; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v33; // [rsp+88h] [rbp+20h]

  v4 = (int *)a4[7];
  v6 = (int)a2 >= 0;
  v8 = a2;
  v9 = a1;
  if ( !v4 )
  {
    v8 = -1073741670;
    goto LABEL_28;
  }
  v10 = *(_DWORD *)a4;
  if ( (*(_DWORD *)a4 & 0x400) != 0 )
  {
    v23 = (_DWORD *)a4[8];
    v24 = a4[3];
    if ( (v10 & 0x4000000) != 0 || (*(_QWORD *)v24 & 0x2000000000000000LL) == 0 )
    {
      if ( v8 < 0 )
        goto LABEL_28;
      if ( *(_WORD *)(a3 + 2) != 1 )
      {
        v8 = -1072431089;
        goto LABEL_28;
      }
      v25 = *(_DWORD *)(a3 + 16);
    }
    else
    {
      v25 = *(_DWORD *)(v24 + 552);
    }
    *v4 = v25;
    if ( v23 )
      *v23 = 4;
    goto LABEL_27;
  }
  if ( (v10 & 0x800) != 0 )
  {
    v11 = 15;
    v33 = (_DWORD *)a4[8];
    v12 = a4[3];
    v32 = 15;
    if ( (v10 & 0x4000000) != 0 )
    {
      if ( (_DWORD)a2 != -1073741772 )
      {
        if ( (int)a2 >= 0 )
        {
          v28 = *(_WORD *)(a3 + 2);
          if ( v28 != 1 )
            KeBugCheckEx(0xA5u, 8uLL, v12, 0LL, v28);
          v11 = *(_DWORD *)(a3 + 16);
        }
        else
        {
          v11 = 0;
        }
        v32 = v11;
      }
      goto LABEL_24;
    }
    v13 = *(_QWORD *)v12;
    if ( (*(_QWORD *)v12 & 0x200000000000000LL) != 0 )
    {
      if ( (v13 & 0x400000000LL) == 0 )
        goto LABEL_7;
    }
    else if ( (v13 & 0x8000000000000LL) == 0 )
    {
LABEL_7:
      if ( (v13 & 0x1000000000LL) != 0 )
      {
        if ( (int)ACPIGetProcessorStatus(v12, a2, &v32) < 0 )
        {
          v11 = 0;
          v32 = 0;
        }
        else
        {
          v11 = v32;
        }
      }
      if ( v8 != -1073741772 )
      {
        if ( v8 < 0 )
        {
          v11 = 0;
        }
        else
        {
          if ( *(_WORD *)(a3 + 2) != 1 )
          {
            v27 = AMLIGetNamedChild(*(_QWORD *)(v12 + 704), 1096045407);
            KeBugCheckEx(0xA5u, 8uLL, v12, v27, *(unsigned __int16 *)(a3 + 2));
          }
          v11 = *(_DWORD *)(a3 + 16);
        }
        v32 = v11;
      }
    }
    v14 = *(_QWORD *)v12;
    if ( (*(_QWORD *)v12 & 1) != 0 && (v10 & 0x1000) == 0 )
    {
      v11 &= ~1u;
      v32 = v11;
    }
    if ( (v14 & 0x40000000) != 0 )
    {
      v11 &= ~4u;
      v32 = v11;
    }
    if ( (v14 & 0x80000000000LL) != 0 )
    {
      v11 &= ~1u;
      v32 = v11;
    }
    if ( (v11 & 8) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)v12, 0xFF7FFFFFFFFFFFFFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)v12, 0x80000000000000uLL);
    if ( (v32 & 4) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)v12, 0xFFFFFFFFDFFFFFFFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)v12, 0x20000000uLL);
    if ( (v32 & 2) != 0 )
      _InterlockedOr64((volatile signed __int64 *)v12, 0x40000000000000uLL);
    else
      _InterlockedAnd64((volatile signed __int64 *)v12, 0xFFBFFFFFFFFFFFFFuLL);
    if ( (v32 & 1) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFDuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)v12, 2uLL);
    v11 = v32;
    if ( (v14 & 2) == 0 && (v32 & 1) == 0 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v17 = *(_QWORD *)(v12 + 736);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
      if ( v17 )
        ACPIBuildSynchronizationRequestInternal(v17, (unsigned int)ACPIBuildIssueNotifyInvalidateRelations, v17, v18, 1);
    }
LABEL_24:
    v15 = v33;
    *v4 = v11;
    if ( v15 )
      *v15 = 4;
    v9 = a1;
LABEL_27:
    v8 = 0;
    goto LABEL_28;
  }
  if ( (v10 & 0x8000) != 0 )
  {
    v29 = ACPIGetConvertToClassCode(a1, a2, a3, (_DWORD)a4, (__int64)v4, a4[8]);
    v9 = a1;
    v8 = v29;
  }
  else if ( (int)a2 >= 0 )
  {
    if ( (v10 & 0x4000) == 0 || *(_WORD *)(a3 + 2) == 1 )
    {
      *v4 = *(_DWORD *)(a3 + 16);
      v26 = (_DWORD *)a4[8];
      if ( v26 )
        *v26 = 4;
      goto LABEL_27;
    }
    v8 = -1072431089;
  }
LABEL_28:
  *((_DWORD *)a4 + 18) = v8;
  if ( !v6 )
    goto LABEL_32;
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  if ( (*(_BYTE *)a3 & 1) != 0 )
  {
    v30 = *(_QWORD *)(a3 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 8), 0xFFFFFFFF) != 1 || (*(_BYTE *)v30 & 8) == 0 )
      goto LABEL_31;
    FreeData((_QWORD *)v30);
    goto LABEL_89;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    if ( *(int *)(a3 + 8) > 0 )
    {
      *(_WORD *)a3 |= 8u;
      goto LABEL_31;
    }
    if ( *(_WORD *)(a3 + 2) == 4 )
      FreeDataBuffs(*(_QWORD *)(a3 + 32) + 8LL, **(_DWORD **)(a3 + 32));
    FreeObjData(a3);
LABEL_89:
    v9 = a1;
  }
LABEL_31:
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
LABEL_32:
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v19 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))a4[5];
    if ( v19 )
      v19(v9, (unsigned int)v8, 0LL, a4[6]);
    v20 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v21 = (_QWORD **)a4[1];
    v22 = (void **)a4[2];
    if ( v21[1] != a4 + 1 || *v22 != a4 + 1 )
      __fastfail(3u);
    *v22 = v21;
    v21[1] = v22;
    KeReleaseSpinLock(&AcpiGetLock, v20);
    ExFreePoolWithTag(a4, 0);
  }
}
