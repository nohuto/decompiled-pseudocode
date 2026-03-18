/*
 * XREFs of NtDCompositionSetResourceIntegerProperty @ 0x1C0019F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z @ 0x1C001D3F0 (-SetResourceIntegerProperty@CApplicationChannel@DirectComposition@@QEAAJII_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetResourceIntegerProperty(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v5; // r12d
  DirectComposition::CApplicationChannel *v6; // rbp
  DirectComposition::CApplicationChannel *v7; // r14
  int v8; // edi
  __int64 v9; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r15
  struct _ERESOURCE *v12; // rbx
  struct _RTL_GENERIC_TABLE *v13; // rcx
  _QWORD *v14; // rax
  struct _ERESOURCE *v15; // rbx
  int Buffer; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]

  v5 = a1;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && (v11 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v12 = *(struct _ERESOURCE **)(v11 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v12, 1u);
    v13 = *(struct _RTL_GENERIC_TABLE **)v11;
    Buffer = v5;
    v18 = 0LL;
    v14 = RtlLookupElementGenericTable(v13, &Buffer);
    if ( v14 )
      v9 = v14[1];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    else
      v8 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v8 = -1073741823;
  }
  if ( v9 )
  {
    v15 = *(struct _ERESOURCE **)(v9 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v15, 1u);
    v7 = (DirectComposition::CApplicationChannel *)v9;
  }
  if ( v8 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v7 + 8LL))(v7) == 1 )
    {
      v6 = v7;
    }
    else
    {
      v8 = -1073741811;
      (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v7)(v7);
    }
    if ( v8 >= 0 )
    {
      v8 = DirectComposition::CApplicationChannel::SetResourceIntegerProperty(v6, a2, a3, a4);
      (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v6)(v6);
    }
  }
  return (unsigned int)v8;
}
