/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C002D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002D268 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z @ 0x1C002DD8C (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C002F754 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(unsigned int a1, _DWORD *a2, bool *a3, int a4)
{
  int v7; // ebx
  DirectComposition::CApplicationChannel *v8; // rdi
  _DWORD *v9; // rcx
  _BYTE *v10; // rdx
  struct DirectComposition::CChannel *v11; // r12
  bool v12; // bl
  bool v13; // r14
  int v14; // r13d
  struct DirectComposition::CChannel *v16; // [rsp+28h] [rbp-60h] BYREF
  DirectComposition::CApplicationChannel *v17; // [rsp+30h] [rbp-58h]
  struct DirectComposition::CBatch *v18; // [rsp+38h] [rbp-50h] BYREF
  struct DirectComposition::CBatch *v19; // [rsp+40h] [rbp-48h] BYREF

  v7 = 0;
  v8 = 0LL;
  v17 = 0LL;
  if ( a3 )
  {
    if ( a2 )
    {
      v9 = a2;
      if ( a2 >= W32UserProbeAddress )
        v9 = W32UserProbeAddress;
      *v9 = *v9;
    }
    v10 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v8 = v17;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    v16 = 0LL;
    v7 = DirectComposition::CChannel::ReferenceHandleAndLock(a1, &v16);
    if ( v7 >= 0 )
    {
      v11 = v16;
      if ( (unsigned int)_guard_dispatch_icall_fptr() == 1 )
      {
        v8 = v11;
      }
      else
      {
        v7 = -1073741811;
        _guard_dispatch_icall_fptr();
      }
    }
    if ( v7 >= 0 )
    {
      do
      {
        v12 = DirectComposition::CApplicationChannel::BuildBatch(v8, &v18, &v19, a4 != 0);
        if ( v18 )
          DirectComposition::CApplicationChannel::SubmitBatch(v8, v18, v19, *((_BYTE *)v8 + 48) & 1);
      }
      while ( !v12 );
      v13 = *((_DWORD *)v8 + 131) != 0;
      v7 = 0;
      v14 = *((_DWORD *)v8 + 94);
      _guard_dispatch_icall_fptr();
      if ( a2 )
        *a2 = v14;
      *a3 = v13;
    }
  }
  return (unsigned int)v7;
}
