/*
 * XREFs of ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C005A310
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C005A000 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0085990 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z @ 0x1C00A1E90 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C00A7FEC (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  __int64 v9; // rbx
  __int64 **v10; // rdi
  __int64 **v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r9
  const unsigned int *v15; // r14
  __int64 *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  char *v20; // r14
  char *i; // rdi
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27[4]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v29[64]; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+B8h] [rbp-50h]

  LODWORD(v9) = -1073741823;
  if ( !a5 )
  {
    v20 = (char *)this + 288;
    for ( i = (char *)*((_QWORD *)this + 36); i != v20 && i; i = *(char **)i )
    {
      v22 = *((_DWORD *)i + 6);
      v27[0] = a3;
      v23 = WaitForSynchronizationObjectFromGpu(1u, v27, 0LL, a4, v22, a2, 1);
      v9 = v23;
      if ( v23 < 0 )
      {
        v26 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v26 + 24) = this;
        *(_QWORD *)(v26 + 32) = v9;
        WdLogEvent5_WdEvent(v26);
        return (unsigned int)v9;
      }
    }
    return (unsigned int)v9;
  }
  v10 = (__int64 **)((char *)this + 288);
  v27[0] = a3;
  v11 = (__int64 **)*((_QWORD *)this + 36);
  v12 = 0;
  while ( v11 != v10 && v11 )
  {
    v11 = (__int64 **)*v11;
    ++v12;
  }
  P = 0LL;
  v30 = 0;
  v15 = (const unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v12);
  if ( v15 )
  {
    v16 = *v10;
    v17 = 0LL;
    while ( v16 != (__int64 *)v10 && v16 )
    {
      v15[v17] = *((_DWORD *)v16 + 6);
      v17 = (unsigned int)(v17 + 1);
      v16 = (__int64 *)*v16;
    }
    if ( v12 != (_DWORD)v17 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v13, v16, v17, v14);
      *(_QWORD *)(v24 + 24) = 4847LL;
      WdLogEvent5_WdAssertion(v24);
    }
    v18 = SignalSynchronizationObjectInternal(1u, v27, 0, v12, v15, 0LL, a4, 0LL, a2, 0, 1);
    v9 = v18;
    if ( v18 < 0 )
    {
      v25 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v25 + 24) = this;
      *(_QWORD *)(v25 + 32) = v9;
      WdLogEvent5_WdEvent(v25);
    }
    if ( P != v29 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v9;
  }
  if ( P != v29 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225495LL;
}
