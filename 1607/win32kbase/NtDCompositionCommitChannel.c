/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C0044B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C003DB48 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00446C4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(unsigned int a1, _DWORD *a2, bool *a3, int a4)
{
  int v8; // ebx
  int v9; // r15d
  _DWORD *v10; // rcx
  _BYTE *v11; // rdx
  struct DirectComposition::CApplicationChannel *v12; // rdi
  bool v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+24h] [rbp-44h]
  struct DirectComposition::CApplicationChannel *v16; // [rsp+28h] [rbp-40h] BYREF

  v8 = 0;
  v16 = 0LL;
  v9 = 0;
  v15 = 0;
  v14 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v10 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v10 = (_DWORD *)W32UserProbeAddress;
      *v10 = *v10;
    }
    v11 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v16);
    v12 = v16;
    if ( v8 >= 0 )
    {
      v8 = DirectComposition::CApplicationChannel::Commit(v16, &v14, a4 != 0);
      if ( v8 >= 0 )
        v9 = *((_DWORD *)v12 + 96);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v12)(v12);
      if ( v8 >= 0 )
      {
        if ( a2 )
          *a2 = v9;
        *a3 = v14;
      }
    }
  }
  return (unsigned int)v8;
}
