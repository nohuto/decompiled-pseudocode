/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x1C0134DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetIndependentFlipMode(
        HANDLE Handle,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        struct _OBJECT_HANDLE_INFORMATION HandleInformation)
{
  struct _OBJECT_HANDLE_INFORMATION v7; // r15
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // rbp
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD **v28; // rax
  unsigned int v29; // edi
  _QWORD *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v37[56]; // [rsp+58h] [rbp-60h] BYREF

  v7 = HandleInformation;
  *(_DWORD *)HandleInformation.HandleAttributes = 0;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)Handle, &EventProfilerEnter, a3, 2094);
  HandleInformation = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &HandleInformation);
  v16 = Object;
  v17 = v11;
  if ( v11 == -1073741788 )
  {
    v18 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 32) = -1073741788LL;
LABEL_6:
    *(_QWORD *)(v18 + 24) = Handle;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_23;
  }
  if ( v11 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 32) = v17;
    goto LABEL_6;
  }
  v21 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)Object + 2) + 72LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v21, 0LL);
  v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37);
  v17 = v22;
  if ( v22 >= 0 )
  {
    v28 = (_QWORD **)(v16[2] + 120LL);
    v29 = -1;
    v30 = *v28;
    if ( *v28 != v28 )
    {
      do
      {
        if ( v29 == -1 )
        {
          v29 = (*((_DWORD *)v30 - 11) >> 6) & 0xF;
        }
        else if ( v29 != ((*((_DWORD *)v30 - 11) >> 6) & 0xF) )
        {
          v31 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
          *(_QWORD *)(v31 + 24) = 9339LL;
          WdLogEvent5_WdAssertion(v31);
        }
        v30 = (_QWORD *)*v30;
      }
      while ( v30 != (_QWORD *)(v16[2] + 120LL) );
      v32 = *((_QWORD *)v21 + 249);
      v33 = *(_QWORD *)(v32 + 400);
      v34 = *(_QWORD *)(v32 + 408);
      if ( a4 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, int, struct _OBJECT_HANDLE_INFORMATION))(*(_QWORD *)(v33 + 8) + 304LL))(
          v34,
          v29,
          a2,
          a3,
          a5,
          a6,
          v7);
      else
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, int, char, struct _OBJECT_HANDLE_INFORMATION))(*(_QWORD *)(v33 + 8) + 312LL))(
          v34,
          v29,
          a2,
          a3,
          a5,
          a6,
          1,
          v7);
      goto LABEL_22;
    }
    v17 = -1073741811LL;
    v27 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v23, v25, v26);
    *(_QWORD *)(v27 + 24) = v16;
  }
  else
  {
    v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
    *(_QWORD *)(v27 + 24) = v21;
  }
  *(_QWORD *)(v27 + 32) = v17;
  WdLogEvent5_WdWarning(v27);
LABEL_22:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
LABEL_23:
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 2094);
  return (unsigned int)v17;
}
