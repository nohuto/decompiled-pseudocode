/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800048F0
 * Callers:
 *     CreateResourceManagerProxy @ 0x180001A58 (CreateResourceManagerProxy.c)
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180004DEC (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180007CD8 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x18000C7B0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(
        char *a1,
        __int64 a2,
        __int64 a3,
        ExecutionModel::_ResourceSetInfo *(__fastcall *a4)(ExecutionModel::_ResourceSetInfo *this))
{
  char *v5; // rbx
  __int64 v6; // rdi
  char *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  if ( a3 )
  {
    v5 = a1 + 8;
    v6 = a3;
    do
    {
      --v6;
      if ( a4 == ExecutionModel::_ResourceSetInfo::_ResourceSetInfo )
      {
        *((_DWORD *)v5 - 2) = -1;
        v8 = v5 + 80;
        *((_DWORD *)v5 - 1) = 0;
        v9 = 3LL;
        *(_DWORD *)v5 = 101;
        *((_DWORD *)v5 + 1) = 32;
        *((_DWORD *)v5 + 10) = 0;
        *((_QWORD *)v5 + 7) = 0LL;
        *((_QWORD *)v5 + 8) = 0LL;
        *((_DWORD *)v5 + 18) = 0;
        do
        {
          *(_DWORD *)v8 = -1;
          *((_QWORD *)v8 + 1) = 0LL;
          *((_DWORD *)v8 + 4) = 101;
          *((_WORD *)v8 + 10) = 0;
          v8 += 24;
          --v9;
        }
        while ( v9 );
        *((_DWORD *)v5 + 86) = 0;
        v10 = v5 + 152;
        *((_QWORD *)v5 + 44) = 0LL;
        v11 = 3LL;
        *((_DWORD *)v5 + 26) = 1;
        *((_DWORD *)v5 + 20) = 0;
        *((_DWORD *)v5 + 32) = 2;
        do
        {
          *v10 = 0x6500000065LL;
          v10[1] = 0x6500000065LL;
          v10[2] = 0x6500000065LL;
          v10 += 8;
          *(v10 - 5) = 0x6500000065LL;
          *(v10 - 4) = 0x6500000065LL;
          *(v10 - 3) = 0x6500000065LL;
          *(v10 - 2) = 0x6500000065LL;
          *(v10 - 1) = 0x6500000065LL;
          --v11;
        }
        while ( v11 );
        *((_DWORD *)v5 + 91) = 0;
        *((_WORD *)v5 + 16) = 0;
        v5[34] = 0;
        *((_QWORD *)v5 + 6) = 0LL;
        *((_DWORD *)v5 + 9) = 1;
        *((_DWORD *)v5 + 2) = 0;
        *((_QWORD *)v5 + 2) = 0LL;
        *((_QWORD *)v5 + 3) = 0LL;
        *((_DWORD *)v5 + 6) = 101;
      }
      else
      {
        a4((ExecutionModel::_ResourceSetInfo *)(v5 - 8));
      }
      v5 += a2;
    }
    while ( v6 );
  }
}
