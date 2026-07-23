/*
 * XREFs of KiPreprocessFault @ 0x1400F2138
 * Callers:
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x1400F28F0 (KiOpDecode.c)
 *     KiCheckForAtlThunk @ 0x1401DAF3C (KiCheckForAtlThunk.c)
 */

char __fastcall KiPreprocessFault(__int64 a1, __int64 a2, char a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  void *v9; // rax
  void *v10; // rdx
  bool v11; // cf
  int v12; // ebp
  int v13; // eax
  __int64 v14; // r14
  char v15; // si
  struct _KTHREAD *CurrentThread; // rax
  void *v18; // rcx
  unsigned __int16 SListFaultCount; // cx
  _BYTE v20[80]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+80h] [rbp-18h]
  char v22; // [rsp+88h] [rbp-10h]
  char v23; // [rsp+89h] [rbp-Fh]

  v5 = *(_DWORD *)a1 - 268435457;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      v12 = 0x40000000;
      *(_DWORD *)a1 = -1073741795;
      goto LABEL_10;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v12 = 0x20000000;
      *(_DWORD *)a1 = -1073741676;
      goto LABEL_10;
    }
    if ( v7 != 1 )
      return 0;
    v8 = *(unsigned __int16 *)(a2 + 56);
    if ( v8 == 16 )
    {
      v9 = &ExpInterlockedPopEntrySListFault;
      v10 = &ExpInterlockedPopEntrySListResume;
    }
    else
    {
      if ( *(_WORD *)(a2 + 56) != 51 )
        goto LABEL_8;
      v9 = (void *)KeUserPopEntrySListFault;
      v10 = (void *)KeUserPopEntrySListResume;
    }
    if ( *(void **)(a2 + 248) == v9 )
    {
      if ( (_WORD)v8 != 16 )
      {
        CurrentThread = KeGetCurrentThread();
        v18 = *(void **)(a1 + 40);
        if ( v18 == CurrentThread->SListFaultAddress )
        {
          SListFaultCount = CurrentThread->SListFaultCount;
          if ( SListFaultCount > 0x400u )
          {
            CurrentThread->SListFaultCount = 0;
            goto LABEL_8;
          }
          CurrentThread->SListFaultCount = SListFaultCount + 1;
        }
        else
        {
          CurrentThread->SListFaultCount = 0;
          CurrentThread->SListFaultAddress = v18;
        }
      }
      *(_QWORD *)(a2 + 248) = v10;
      return 1;
    }
LABEL_8:
    v11 = *(_DWORD *)(a1 + 24) < 2u;
    v12 = 0x10000000;
    *(_DWORD *)a1 = -1073741819;
    if ( v11 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
      goto LABEL_10;
    if ( a3 )
    {
      v12 = 0x8000000;
      goto LABEL_10;
    }
    return 0;
  }
  v12 = 0x80000000;
  *(_DWORD *)a1 = -1073741819;
LABEL_10:
  v13 = KiOpDecode(a1, a2, a3, v12, v20);
  if ( v13 < 0 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = v21;
    if ( v21 )
      v13 = (*(__int64 (__fastcall **)(_BYTE *))(v21 + 16))(v20);
  }
  v15 = 0;
  if ( v13 < 0 || !v14 || (v15 = v22) == 0 )
  {
    if ( v12 == 0x80000000 )
    {
      if ( *(_DWORD *)a1 == -1073741819 && !v23 )
      {
        *(_DWORD *)(a1 + 24) = 2;
        *(_QWORD *)(a1 + 40) = -1LL;
        *(_QWORD *)(a1 + 32) = 0LL;
      }
    }
    else if ( v12 == 0x8000000 && (int)KiCheckForAtlThunk(v20) >= 0 )
    {
      return v22;
    }
  }
  return v15;
}
