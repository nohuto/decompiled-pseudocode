/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x1C01541D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetIndependentFlipMode(
        HANDLE Handle,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        struct _OBJECT_HANDLE_INFORMATION HandleInformation,
        __int64 a8)
{
  struct _OBJECT_HANDLE_INFORMATION v8; // r15
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGADAPTER *v22; // rbp
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD **v29; // rax
  unsigned int v30; // edi
  _QWORD *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v38[80]; // [rsp+60h] [rbp-78h] BYREF

  v8 = HandleInformation;
  *(_DWORD *)HandleInformation.HandleAttributes = 0;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)Handle, &EventProfilerEnter, a3, 2094);
  HandleInformation = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 0, &Object, &HandleInformation);
  v17 = Object;
  v18 = v12;
  if ( v12 == -1073741788 )
  {
    v19 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v19 + 32) = -1073741788LL;
LABEL_6:
    *(_QWORD *)(v19 + 24) = Handle;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_23;
  }
  if ( v12 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v19 + 32) = v18;
    goto LABEL_6;
  }
  v22 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)Object + 2) + 72LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v22, 0LL);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38);
  v18 = v23;
  if ( v23 >= 0 )
  {
    v29 = (_QWORD **)(v17[2] + 128LL);
    v30 = -1;
    v31 = *v29;
    if ( *v29 != v29 )
    {
      do
      {
        if ( v30 == -1 )
        {
          v30 = (*((_DWORD *)v31 - 11) >> 6) & 0xF;
        }
        else if ( v30 != ((*((_DWORD *)v31 - 11) >> 6) & 0xF) )
        {
          v32 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
          *(_QWORD *)(v32 + 24) = 9779LL;
          WdLogEvent5_WdAssertion(v32);
        }
        v31 = (_QWORD *)*v31;
      }
      while ( v31 != (_QWORD *)(v17[2] + 128LL) );
      v33 = *((_QWORD *)v22 + 267);
      v34 = *(_QWORD *)(v33 + 376);
      v35 = *(_QWORD *)(v33 + 384);
      if ( a4 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, int, struct _OBJECT_HANDLE_INFORMATION, __int64))(*(_QWORD *)(v34 + 8) + 304LL))(
          v35,
          v30,
          a2,
          a3,
          a5,
          a6,
          v8,
          a8);
      else
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, int, char, struct _OBJECT_HANDLE_INFORMATION, __int64))(*(_QWORD *)(v34 + 8) + 312LL))(
          v35,
          v30,
          a2,
          a3,
          a5,
          a6,
          1,
          v8,
          a8);
      goto LABEL_22;
    }
    v18 = -1073741811LL;
    v28 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = v17;
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = v22;
  }
  *(_QWORD *)(v28 + 32) = v18;
  WdLogEvent5_WdWarning(v28);
LABEL_22:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
LABEL_23:
  if ( v17 )
    ObfDereferenceObject(v17);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 2094);
  return (unsigned int)v18;
}
