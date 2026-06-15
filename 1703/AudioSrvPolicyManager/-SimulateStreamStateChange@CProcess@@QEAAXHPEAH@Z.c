/*
 * XREFs of ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18000F43C
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18000B130 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000C7B0 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012CCC (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010414 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::SimulateStreamStateChange(CProcess *this, unsigned int a2, int *a3)
{
  int v3; // edi
  int v4; // r12d
  int *v5; // r13
  __int64 v7; // rsi
  unsigned int v8; // r14d
  unsigned int v9; // edi
  unsigned int *v10; // rbp
  __int64 v11; // r13
  unsigned int i; // r15d
  char *v13; // rcx
  __int64 v14; // rdx
  void (__fastcall **v15)(char *, __int64, __int64, _QWORD, _DWORD, int *); // rax
  int v16; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+10h]
  int *v18; // [rsp+A0h] [rbp+18h]
  int v19; // [rsp+A8h] [rbp+20h]

  v18 = a3;
  v17 = a2;
  v3 = 0;
  v4 = 0;
  v5 = a3;
  v19 = 0;
  if ( *((int *)this + 68) > 0 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 < 0 || v3 >= *((_DWORD *)this + 68) )
      {
        ATL::_AtlRaiseException((unsigned int)this, a2);
        JUMPOUT(0x18000F55ALL);
      }
      v8 = 0;
      v9 = v17;
      v10 = *(unsigned int **)(v7 + *((_QWORD *)this + 33));
      v11 = *(_QWORD *)(v7 + *((_QWORD *)this + 32));
      do
      {
        for ( i = 0; i < *v10; ++i )
        {
          v16 = 0;
          v13 = (char *)g_StreamClassPolicyManager + 16;
          v14 = *((unsigned int *)this + 43);
          v15 = (void (__fastcall **)(char *, __int64, __int64, _QWORD, _DWORD, int *))*((_QWORD *)g_StreamClassPolicyManager
                                                                                       + 2);
          if ( v9 )
            (*v15)(v13, v14, v11, v8, 0, &v16);
          else
            v15[1](v13, v14, v11, v8, 0, &v16);
          v4 |= v16;
        }
        ++v8;
        ++v10;
      }
      while ( v8 < 0x15 );
      v7 += 8LL;
      v5 = v18;
      v3 = v19 + 1;
      v19 = v3;
    }
    while ( v3 < *((_DWORD *)this + 68) );
  }
  *v5 = v4;
}
