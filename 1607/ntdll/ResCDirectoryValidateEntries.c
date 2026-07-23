/*
 * XREFs of ResCDirectoryValidateEntries @ 0x180105D68
 * Callers:
 *     ResCDirectoryValidate @ 0x1800FFED4 (ResCDirectoryValidate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     ??$InitStack@H@@YAHPEAPEAXI@Z @ 0x1800FF9D4 (--$InitStack@H@@YAHPEAPEAXI@Z.c)
 *     ??$ReleaseStack@I@@YAXPEAX@Z @ 0x180105B04 (--$ReleaseStack@I@@YAXPEAX@Z.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x180105B54 (--$StackPush@I@@YAHIPEAX@Z.c)
 */

__int64 __fastcall ResCDirectoryValidateEntries(_QWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v8; // r12d
  __int64 v9; // rax
  int inited; // eax
  unsigned int *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ecx
  __int64 v16; // r15
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v24; // [rsp+0h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  BaseAddress = 0LL;
  v8 = 0;
  if ( a1 && (v9 = a1[3]) != 0 && a2 < *(_DWORD *)(v9 + 72) )
  {
    if ( a4 )
      *a4 = 0;
    inited = InitStack<int>(&BaseAddress);
    v11 = (unsigned int *)BaseAddress;
    if ( inited && (unsigned int)StackPush<unsigned int>(a2, (unsigned int *)BaseAddress) )
    {
      while ( v11 )
      {
        if ( &v24 == (__int64 *)-104LL )
          break;
        v12 = *((_QWORD *)v11 + 1);
        if ( !v12 || !*v11 )
          break;
        v13 = *v11 - 1;
        *v11 = v13;
        v14 = a1[6] + 48LL * *(unsigned int *)(v12 + 4 * v13);
        v15 = *(_DWORD *)(v14 + 32);
        v16 = *(unsigned int *)(v14 + 20);
        if ( v15 >= 0 && !(unsigned int)StackPush<unsigned int>(v15, v11) )
          goto LABEL_32;
        v17 = *(_DWORD *)(v14 + 40);
        if ( v17 >= 0 && !(unsigned int)StackPush<unsigned int>(v17, v11) )
          goto LABEL_32;
        v18 = *(_DWORD *)(v14 + 36);
        if ( v18 >= 0 && !(unsigned int)StackPush<unsigned int>(v18, v11) )
          goto LABEL_32;
        if ( (*(_BYTE *)(v14 + 44) & 1) == 0 )
        {
          if ( !*(_QWORD *)v14 && !*(_QWORD *)(v14 + 8)
            || !*(_DWORD *)(v14 + 16)
            || (*(_DWORD *)(v14 + 16) & 0xFFEF0000) != 0
            || (v19 = a1[3], (unsigned int)v16 >= *(_DWORD *)(v19 + 68))
            || (v20 = a1[4], v21 = 32 * v16, !*(_DWORD *)(32 * v16 + v20 + 24))
            && (*(_DWORD *)(v21 + v20 + 4) < (unsigned int)(*(_DWORD *)(v14 + 24) + *(_DWORD *)(v14 + 28))
             || (v22 = *(_DWORD *)(v21 + v20 + 20), v22 >= 0) && (unsigned int)v22 >= *(_DWORD *)(v19 + 80)) )
          {
            v8 = 1;
            if ( a4 )
              ++*a4;
          }
        }
      }
      if ( !v8 )
        v4 = 1;
    }
LABEL_32:
    ReleaseStack<unsigned int>(v11);
    return v4;
  }
  else
  {
    RtlSetLastWin32Error(87);
    return 0LL;
  }
}
