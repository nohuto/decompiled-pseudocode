/*
 * XREFs of KiPreprocessFault @ 0x14002315C
 * Callers:
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x140023740 (KiOpDecode.c)
 *     KiEmulateAtlThunk @ 0x1401CCAE0 (KiEmulateAtlThunk.c)
 */

char __fastcall KiPreprocessFault(__int64 a1, __int64 a2, char a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  void *v9; // rax
  void *v10; // r8
  bool v11; // cf
  int v12; // esi
  int v13; // eax
  int v14; // edx
  __int64 v15; // rbp
  char v16; // cl
  char result; // al
  struct _KTHREAD *CurrentThread; // rax
  void *v19; // rcx
  unsigned __int16 SListFaultCount; // cx
  int v21; // eax
  _QWORD v22[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  char v25; // [rsp+62h] [rbp-36h]
  __int64 v26; // [rsp+80h] [rbp-18h]
  char v27; // [rsp+88h] [rbp-10h]
  char v28; // [rsp+89h] [rbp-Fh]

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
        v19 = *(void **)(a1 + 40);
        if ( v19 == CurrentThread->SListFaultAddress )
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
          CurrentThread->SListFaultAddress = v19;
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
  v13 = KiOpDecode(a1, a2, a3, v12, v22);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = v26;
    if ( v26 )
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v26 + 16))(v22, (unsigned int)v13);
  }
  v16 = v27;
  result = 0;
  if ( v14 < 0 || !v15 || (result = v27) == 0 )
  {
    if ( v12 == 0x80000000 )
    {
      if ( *(_DWORD *)a1 == -1073741819 && !v28 )
      {
        *(_DWORD *)(a1 + 24) = 2;
        *(_QWORD *)(a1 + 40) = -1LL;
        *(_QWORD *)(a1 + 32) = 0LL;
      }
    }
    else if ( v12 == 0x8000000 )
    {
      if ( v25 && (*(_BYTE *)(v24 + 32) & 8) != 0 && *(_QWORD *)(v24 + 40) == v22[0] )
      {
        v21 = KiEmulateAtlThunk((int)v23 + 248, (int)v23 + 152, (int)v23 + 120, (int)v23 + 128, v23 + 136);
        v16 = v27;
        if ( v21 )
          return 1;
      }
      return v16;
    }
  }
  return result;
}
