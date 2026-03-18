/*
 * XREFs of NtDCompositionSetResourceReferenceProperty @ 0x1C002CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetResourceReferenceProperty(int a1, int a2, __int64 a3, __int64 a4, bool *a5)
{
  struct DirectComposition::CResourceMarshaler *v6; // r14
  _BYTE *v7; // rcx
  DirectComposition::CApplicationChannel *v8; // rdi
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v13; // rbx
  struct _RTL_GENERIC_TABLE *v14; // rcx
  _QWORD *v15; // rax
  struct _ERESOURCE *v16; // rdi
  unsigned __int64 v17; // rdx
  struct DirectComposition::CResourceMarshaler *v18; // rbx
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  bool v22; // [rsp+30h] [rbp-68h]
  _BYTE v23[7]; // [rsp+31h] [rbp-67h] BYREF
  DirectComposition::CApplicationChannel *v24; // [rsp+38h] [rbp-60h]
  DirectComposition::CApplicationChannel *v25; // [rsp+40h] [rbp-58h]
  int Buffer; // [rsp+48h] [rbp-50h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h]
  unsigned int v29; // [rsp+B0h] [rbp+18h]
  unsigned int v30; // [rsp+B8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v6 = 0LL;
  v24 = 0LL;
  v22 = 0;
  if ( !a5 )
    return (unsigned int)-1073741811;
  v7 = a5;
  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
    v7 = (_BYTE *)MmUserProbeAddress;
  *v7 = *v7;
  v8 = 0LL;
  v25 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, MmUserProbeAddress, a3, a4, v20, v21);
  if ( CurrentProcessWin32Process )
    v11 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v11 )
  {
    v13 = *(struct _ERESOURCE **)(v11 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v13, 1u);
    v14 = *(struct _RTL_GENERIC_TABLE **)v11;
    v10 = 0LL;
    Buffer = a1;
    v27 = 0LL;
    v15 = RtlLookupElementGenericTable(v14, &Buffer);
    if ( v15 )
      v10 = v15[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v8 = v25;
    }
    else
    {
      v9 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v9 = -1073741823;
  }
  if ( v10 )
  {
    v16 = *(struct _ERESOURCE **)(v10 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v16, 1u);
    v8 = (DirectComposition::CApplicationChannel *)v10;
  }
  if ( v9 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v8 + 8LL))(v8) == 1 )
    {
      v24 = v8;
      goto LABEL_17;
    }
    v9 = -1073741811;
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v8)(v8);
  }
  v8 = v24;
LABEL_17:
  if ( v9 < 0 )
    return (unsigned int)v9;
  v23[0] = 0;
  v17 = (unsigned int)(a2 - 1);
  if ( a2 && v17 < *((_QWORD *)v8 + 11) )
  {
    _mm_lfence();
    v18 = *(struct DirectComposition::CResourceMarshaler **)(v17 * *((_QWORD *)v8 + 12) + *((_QWORD *)v8 + 8));
    if ( !v18
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v18 + 200LL))(v18) )
    {
      v8 = v24;
    }
    else
    {
      v8 = v24;
      if ( (*((_DWORD *)v18 + 4) & 1) == 0 )
        goto LABEL_39;
    }
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    if ( v30 && (v6 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, v30)) == 0LL )
    {
      v9 = -1073741811;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, struct DirectComposition::CResourceMarshaler *, _BYTE *))(*(_QWORD *)v18 + 160LL))(
             v18,
             v8,
             v29,
             v6,
             v23);
      if ( v9 >= 0 )
      {
        if ( v23[0] )
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v8, v18);
        v22 = *((_DWORD *)v8 + 131) != 0;
      }
    }
    goto LABEL_30;
  }
LABEL_39:
  v9 = -1073741790;
LABEL_30:
  (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v8)(v8);
  if ( v9 >= 0 )
    *a5 = v22;
  return (unsigned int)v9;
}
