/*
 * XREFs of ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800F7CE0
 * Callers:
 *     ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x1800F7EC0 (--$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     ResCCompareCacheIDs @ 0x1800F86DC (ResCCompareCacheIDs.c)
 *     ??$InitStack@H@@YAHPEAPEAXI@Z @ 0x1800FBD44 (--$InitStack@H@@YAHPEAPEAXI@Z.c)
 *     ??$StackPush@I@@YAHIPEAX@Z @ 0x1800FBE2C (--$StackPush@I@@YAHIPEAX@Z.c)
 */

__int64 __fastcall RecurseValidate<_RESCDIRECTORY *>(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // r12d
  int inited; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v20; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v21 = 0LL;
  v6 = 0;
  inited = InitStack<int>(&v21);
  v8 = v21;
  if ( inited && (unsigned int)StackPush<unsigned int>(a2, v21) )
  {
    while ( v8 )
    {
      if ( &v20 == (__int64 *)-104LL )
        break;
      v9 = *(_QWORD *)(v8 + 8);
      if ( !v9 || !*(_DWORD *)v8 )
        break;
      v10 = (unsigned int)(*(_DWORD *)v8 - 1);
      *(_DWORD *)v8 = v10;
      v11 = *(int *)(v9 + 4 * v10);
      if ( (int)v11 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 72LL) )
        goto LABEL_24;
      if ( (int)v11 < 0 )
        goto LABEL_24;
      if ( *(_BYTE *)(v11 + a3) == 1 )
        goto LABEL_24;
      *(_BYTE *)(v11 + a3) = 1;
      v12 = *(_QWORD *)(a1 + 48);
      v13 = 48 * v11;
      v14 = *(int *)(48 * v11 + v12 + 32);
      v15 = *(int *)(48 * v11 + v12 + 40);
      v16 = *(int *)(48 * v11 + v12 + 36);
      v17 = *(_QWORD *)(a1 + 24);
      if ( (int)v14 >= *(_DWORD *)(v17 + 72)
        || (int)v15 >= *(_DWORD *)(v17 + 72)
        || (int)v16 >= *(_DWORD *)(v17 + 72)
        || (int)v14 >= 0
        && (!(unsigned int)StackPush<unsigned int>((unsigned int)v14, v8)
         || (int)ResCCompareCacheIDs(v13 + *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 48) + 48 * v14) <= 0) )
      {
        goto LABEL_24;
      }
      if ( (int)v15 >= 0
        && (!(unsigned int)StackPush<unsigned int>((unsigned int)v15, v8)
         || (int)ResCCompareCacheIDs(v13 + *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 48) + 48 * v15) >= 0)
        || (int)v16 >= 0
        && (!(unsigned int)StackPush<unsigned int>((unsigned int)v16, v8)
         || (unsigned int)ResCCompareCacheIDs(v13 + *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 48) + 48 * v16)) )
      {
        goto LABEL_24;
      }
    }
    v6 = 1;
  }
LABEL_24:
  if ( v8 )
  {
    v18 = *(_QWORD *)(v8 + 8);
    if ( v18 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
  }
  return v6;
}
