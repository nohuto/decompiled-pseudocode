/*
 * XREFs of NtDCompositionSubmitDWMBatch @ 0x1C001A040
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z @ 0x1C001B040 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C6C4 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSubmitDWMBatch(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  DirectComposition::CApplicationChannel *v4; // rdi
  int v5; // r15d
  int v6; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rsi
  struct _ERESOURCE *v9; // rbx
  struct _RTL_GENERIC_TABLE *v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  struct _ERESOURCE *v13; // rdi
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  v4 = 0LL;
  v5 = a1;
  v6 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && (v8 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v9 = *(struct _ERESOURCE **)(v8 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v9, 1u);
    v10 = *(struct _RTL_GENERIC_TABLE **)v8;
    Buffer = v5;
    v21 = 0LL;
    v11 = 0LL;
    v12 = RtlLookupElementGenericTable(v10, &Buffer);
    if ( v12 && (v11 = v12[1]) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    else
      v6 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 8));
    KeLeaveCriticalRegion();
    if ( v11 )
    {
      v13 = *(struct _ERESOURCE **)(v11 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      v4 = (DirectComposition::CApplicationChannel *)v11;
    }
  }
  else
  {
    v6 = -1073741823;
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v4 + 8LL))(v4) == 2 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(v4, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (((*((_BYTE *)v4 + 48) & 2) == 0) ^ *((_BYTE *)BatchFragment + 32)) & 1;
    *((_BYTE *)v4 + 48) |= 2u;
    v15 = *((_QWORD *)BatchFragment + 12);
    *((_DWORD *)BatchFragment + 5) = 8;
    v16 = *(_QWORD *)(v15 + 40);
    if ( (unsigned __int64)(4096 - v16) >= 8 )
    {
      v17 = *(_QWORD *)(v15 + 56);
      *(_QWORD *)(v15 + 40) = v16 + 8;
      v18 = (_QWORD *)(v16 + v17);
      if ( v18 )
      {
        *((_QWORD *)BatchFragment + 14) += 8LL;
        v2 = v18;
      }
    }
    *v2 = a2;
    *(_BYTE *)(*((_QWORD *)BatchFragment + 12) + 64LL) = 0;
    DirectComposition::CApplicationChannel::SubmitBatch(v4, BatchFragment, BatchFragment, 0);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v4)(v4);
    return (unsigned int)v6;
  }
  (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v4)(v4);
  return 3221225485LL;
}
