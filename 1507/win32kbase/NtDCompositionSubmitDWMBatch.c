/*
 * XREFs of NtDCompositionSubmitDWMBatch @ 0x1C002D340
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z @ 0x1C002DD8C (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C002F340 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSubmitDWMBatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  DirectComposition::CApplicationChannel *v6; // rdi
  int v7; // r15d
  int v8; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rsi
  struct _ERESOURCE *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  struct _ERESOURCE *v15; // rdi
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  v6 = 0LL;
  v7 = a1;
  v8 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4, Buffer, v23);
  if ( CurrentProcessWin32Process && (v10 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v11 = *(struct _ERESOURCE **)(v10 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    v12 = *(struct _RTL_GENERIC_TABLE **)v10;
    LODWORD(Buffer) = v7;
    v23 = 0LL;
    v13 = 0LL;
    v14 = RtlLookupElementGenericTable(v12, &Buffer);
    if ( v14 && (v13 = v14[1]) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    else
      v8 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v10 + 8));
    KeLeaveCriticalRegion();
    if ( v13 )
    {
      v15 = *(struct _ERESOURCE **)(v13 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v15, 1u);
      v6 = (DirectComposition::CApplicationChannel *)v13;
    }
  }
  else
  {
    v8 = -1073741823;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v6 + 8LL))(v6) == 2 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(v6, 1, 1);
    *((_BYTE *)BatchFragment + 32) ^= (((*((_BYTE *)v6 + 48) & 2) == 0) ^ *((_BYTE *)BatchFragment + 32)) & 1;
    *((_BYTE *)v6 + 48) |= 2u;
    v17 = *((_QWORD *)BatchFragment + 12);
    *((_DWORD *)BatchFragment + 5) = 8;
    v18 = *(_QWORD *)(v17 + 40);
    if ( (unsigned __int64)(4096 - v18) >= 8 )
    {
      v19 = *(_QWORD *)(v17 + 56);
      *(_QWORD *)(v17 + 40) = v18 + 8;
      v20 = (_QWORD *)(v18 + v19);
      if ( v20 )
      {
        *((_QWORD *)BatchFragment + 14) += 8LL;
        v4 = v20;
      }
    }
    *v4 = a2;
    *(_BYTE *)(*((_QWORD *)BatchFragment + 12) + 64LL) = 0;
    DirectComposition::CApplicationChannel::SubmitBatch(v6, BatchFragment, BatchFragment, 0);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v6)(v6);
    return (unsigned int)v8;
  }
  (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v6)(v6);
  return 3221225485LL;
}
