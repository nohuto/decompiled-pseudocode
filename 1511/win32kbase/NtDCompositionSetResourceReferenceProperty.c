/*
 * XREFs of NtDCompositionSetResourceReferenceProperty @ 0x1C0019660
 * Callers:
 *     <none>
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetResourceReferenceProperty(int a1, int a2, unsigned int a3, int a4, bool *a5)
{
  _DWORD *v5; // r15
  _BYTE *v6; // rcx
  DirectComposition::CApplicationChannel *v7; // r14
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v12; // rdi
  struct _RTL_GENERIC_TABLE *v13; // rcx
  _QWORD *v14; // rax
  struct _ERESOURCE *v15; // rdi
  unsigned __int64 v16; // rdx
  struct DirectComposition::CResourceMarshaler *v17; // rdi
  unsigned __int64 v18; // rdx
  _DWORD *v19; // rbx
  DirectComposition::CApplicationChannel *v20; // rsi
  bool v22; // [rsp+30h] [rbp-68h]
  _BYTE v23[7]; // [rsp+31h] [rbp-67h] BYREF
  DirectComposition::CApplicationChannel *v24; // [rsp+38h] [rbp-60h]
  DirectComposition::CApplicationChannel *v25; // [rsp+40h] [rbp-58h]
  int Buffer; // [rsp+48h] [rbp-50h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h]

  v5 = 0LL;
  v24 = 0LL;
  v22 = 0;
  if ( !a5 )
    return (unsigned int)-1073741811;
  v6 = a5;
  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v7 = 0LL;
  v25 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    v10 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v10 )
  {
    v12 = *(struct _ERESOURCE **)(v10 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v12, 1u);
    v13 = *(struct _RTL_GENERIC_TABLE **)v10;
    Buffer = a1;
    v27 = 0LL;
    v14 = RtlLookupElementGenericTable(v13, &Buffer);
    if ( v14 )
      v9 = v14[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v7 = v25;
    }
    else
    {
      v8 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v10 + 8));
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
      v24 = v7;
    }
    else
    {
      v8 = -1073741811;
      (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v7)(v7);
    }
  }
  if ( v8 >= 0 )
  {
    v23[0] = 0;
    v16 = (unsigned int)(a2 - 1);
    if ( a2 && v16 < *((_QWORD *)v24 + 11) )
    {
      _mm_lfence();
      v17 = *(struct DirectComposition::CResourceMarshaler **)(v16 * *((_QWORD *)v24 + 12) + *((_QWORD *)v24 + 8));
      if ( !v17
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v17 + 200LL))(v17)
        && (*((_DWORD *)v17 + 4) & 1) == 0 )
      {
        goto LABEL_41;
      }
    }
    else
    {
      v17 = 0LL;
    }
    if ( v17 )
    {
      if ( !a4 )
        goto LABEL_30;
      v18 = (unsigned int)(a4 - 1);
      if ( v18 >= *((_QWORD *)v24 + 11)
        || (_mm_lfence(), (v19 = *(_DWORD **)(v18 * *((_QWORD *)v24 + 12) + *((_QWORD *)v24 + 8))) != 0LL)
        && !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 200LL))(v19)
        && (v19[4] & 1) == 0 )
      {
        v19 = 0LL;
      }
      v5 = v19;
      if ( !v19 )
      {
        v8 = -1073741811;
      }
      else
      {
LABEL_30:
        v20 = v24;
        v8 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, _DWORD *, _BYTE *))(*(_QWORD *)v17 + 160LL))(
               v17,
               v24,
               a3,
               v5,
               v23);
        if ( v8 >= 0 )
        {
          if ( v23[0] )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v20, v17);
          v22 = *((_DWORD *)v24 + 131) != 0;
        }
      }
      goto LABEL_34;
    }
LABEL_41:
    v8 = -1073741790;
LABEL_34:
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v24)(v24);
    if ( v8 >= 0 )
      *a5 = v22;
  }
  return (unsigned int)v8;
}
