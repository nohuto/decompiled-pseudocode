/*
 * XREFs of ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180002360
 * Callers:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180002360 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     CreateResourceManagerProxy @ 0x18000646C (CreateResourceManagerProxy.c)
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x1800074D0 (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x180013D60 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180002360 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(
        char *a1,
        __int64 a2,
        int a3,
        __int64 (__fastcall *a4)(ExecutionModel::_ResourceSetInfo *__hidden this))
{
  __int64 (__fastcall *v4)(ExecutionModel::_ResourceSetInfo *__hidden); // rax
  int v5; // esi
  char *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx

  v4 = a4;
  v5 = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v7 = a1 + 8;
    do
    {
      if ( v4 == ExecutionModel::_ResourceSetInfo::_ResourceSetInfo )
      {
        *((_DWORD *)v7 - 1) = 0;
        *((_DWORD *)v7 + 6) = 0;
        *((_QWORD *)v7 + 4) = 0LL;
        *((_QWORD *)v7 + 5) = 0LL;
        *((_DWORD *)v7 + 12) = 0;
        *((_DWORD *)v7 - 2) = -1;
        *(_DWORD *)v7 = -1;
        *((_DWORD *)v7 + 1) = 101;
        *((_DWORD *)v7 + 2) = 32;
        `vector constructor iterator'(
          v7 + 56,
          0x18uLL,
          3,
          (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
        v8 = v7 + 128;
        *((_QWORD *)v7 + 40) = 0LL;
        *((_QWORD *)v7 + 41) = 0LL;
        *((_DWORD *)v7 + 20) = 1;
        v9 = 3LL;
        *((_DWORD *)v7 + 14) = 0;
        *((_DWORD *)v7 + 26) = 2;
        do
        {
          *v8 = 0x6500000065LL;
          v8[1] = 0x6500000065LL;
          v8[2] = 0x6500000065LL;
          v8 += 8;
          *(v8 - 5) = 0x6500000065LL;
          *(v8 - 4) = 0x6500000065LL;
          *(v8 - 3) = 0x6500000065LL;
          *(v8 - 2) = 0x6500000065LL;
          *(v8 - 1) = 0x6500000065LL;
          --v9;
        }
        while ( v9 );
        *((_DWORD *)v7 + 85) = 0;
        *((_WORD *)v7 + 8) = 0;
        v7[18] = 0;
        *((_DWORD *)v7 + 5) = 1;
        *((_DWORD *)v7 + 3) = 0;
      }
      else
      {
        ((void (__fastcall *)(char *, __int64 (__fastcall *)(ExecutionModel::_ResourceSetInfo *__hidden), _QWORD))a4)(
          v7 - 8,
          ExecutionModel::_ResourceSetInfo::_ResourceSetInfo,
          0LL);
      }
      v4 = a4;
      v7 += a2;
      --v5;
    }
    while ( v5 >= 0 );
  }
}
