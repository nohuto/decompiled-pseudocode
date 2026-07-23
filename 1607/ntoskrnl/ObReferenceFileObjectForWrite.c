/*
 * XREFs of ObReferenceFileObjectForWrite @ 0x140445D20
 * Callers:
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x1400019C0 (PsDereferenceSiloContext.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400313E0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ObpReferenceObjectByHandle @ 0x140445F10 (ObpReferenceObjectByHandle.c)
 *     ObpAuditObjectAccess @ 0x140665E04 (ObpAuditObjectAccess.c)
 */

__int64 __fastcall ObReferenceFileObjectForWrite(ULONG_PTR BugCheckParameter1, char a2, _QWORD *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v8; // rbp
  _KPROCESS *Process; // rax
  ULONG_PTR v10; // r13
  __int64 v11; // r12
  __int16 v12; // cx
  $2B8565053CDC740D4E4887693DD8AC9E *v13; // rcx
  int v14; // ebx
  void *v15; // rdi
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v21; // ebx
  __int64 v22; // [rsp+30h] [rbp-38h]
  int v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+70h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v8 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0x80000000) != 0LL )
  {
    if ( !a2 && BugCheckParameter1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v10 = ObpKernelHandleTable;
      v8 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
      goto LABEL_3;
    }
  }
  else
  {
    Process = CurrentThread->ApcState.Process;
    v10 = Process[1].ActiveProcessors.Bitmap[5];
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
    {
LABEL_3:
      --CurrentThread->KernelApcDisable;
      v11 = ObpReferenceObjectByHandle(v10, v8);
      v12 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v12;
      if ( !v12 )
      {
        v13 = &CurrentThread->152;
        if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v13->ApcState.ApcListHead[0].Flink != v13
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v13);
        }
      }
      if ( !v11 )
      {
        v21 = -1073741816;
LABEL_25:
        *a3 = 0LL;
        return v21;
      }
      v14 = v24;
      if ( ObpTraceFlags )
        ObpPushStackInfo(v24, 1, 1u, 1953261124);
      v15 = (void *)(v24 + 48);
      if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v24 + 24) ^ (unsigned __int64)BYTE1(v24)] == IoFileObjectType )
      {
        if ( (*(_DWORD *)(v24 + 128) & 0x80u) != 0 )
          v16 = 0;
        else
          v16 = 4;
        v17 = v16 | 2;
        v18 = (v22 >> 17) & 7;
        a4[1] = v23 & 0x1FFFFFF;
        if ( (v23 & 0x2000000) != 0 )
          LOBYTE(v18) = v18 | 8;
        *a4 = v18 & 7;
        if ( (v23 & 0x1FFFFFF & v17) != 0 )
        {
          if ( !a2 )
            goto LABEL_18;
          v19 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v24);
          if ( !v19 )
            goto LABEL_18;
          if ( *(_QWORD *)(v19 + 16) != 1LL )
          {
            v14 = v24;
LABEL_18:
            if ( (*a4 & 4) == 0 || !a2 || (unsigned __int8)ObpAuditObjectAccess(v10, v8, v11, v14, v17) )
            {
              *a3 = v15;
              return 0LL;
            }
            v21 = -1073741816;
            goto LABEL_35;
          }
          v21 = -1073700858;
        }
        else
        {
          v21 = -1073741790;
        }
      }
      else
      {
        v21 = -1073741788;
      }
LABEL_35:
      PsDereferenceSiloContext(v15);
      goto LABEL_25;
    }
  }
  return 3221225480LL;
}
