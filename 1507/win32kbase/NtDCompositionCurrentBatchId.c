/*
 * XREFs of NtDCompositionCurrentBatchId @ 0x1C000BB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionCurrentBatchId(int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v5; // rcx
  __int64 v6; // r14
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  _QWORD *v13; // rax
  struct _ERESOURCE *v14; // rbx
  int v15; // r12d
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  int Buffer; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+98h] [rbp+10h]

  v22 = a2;
  if ( a3 )
  {
    v5 = a3;
    if ( a3 >= W32UserProbeAddress )
      v5 = W32UserProbeAddress;
    *v5 = *v5;
    v6 = 0LL;
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, a2, a3, a4, 0, 0LL, 0LL);
    if ( CurrentProcessWin32Process )
      v9 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v9 )
    {
      v11 = *(struct _ERESOURCE **)(v9 + 8);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v11, 1u);
      v12 = *(struct _RTL_GENERIC_TABLE **)v9;
      Buffer = a1;
      v20 = 0LL;
      v13 = RtlLookupElementGenericTable(v12, &Buffer);
      if ( v13 )
        v8 = v13[1];
      if ( !v8 )
        v7 = -1073741790;
      if ( v7 >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v6 = v18;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
      KeLeaveCriticalRegion();
    }
    else
    {
      v7 = -1073741823;
    }
    if ( v8 )
    {
      v14 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v14, 1u);
      v6 = v8;
    }
    if ( v7 >= 0 )
    {
      if ( (unsigned int)_guard_dispatch_icall_fptr() == 1 )
      {
        v17 = v6;
      }
      else
      {
        v7 = -1073741811;
        _guard_dispatch_icall_fptr();
      }
      if ( v7 >= 0 )
      {
        if ( v22 )
          v15 = *(_DWORD *)(v17 + 384);
        else
          v15 = *(_DWORD *)(v17 + 376);
        _guard_dispatch_icall_fptr();
        *a3 = v15;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
